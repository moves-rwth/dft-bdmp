#pragma once

#include "storm/utility/macros.h"
#include "storm/io/file.h"
#include <regex>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/replace.hpp>
#include "storm/exceptions/NotImplementedException.h"
#include "storm/exceptions/FileIoException.h"
#include "storm/exceptions/NotSupportedException.h"
#include "storm/exceptions/WrongFormatException.h"

namespace storm {
    namespace figaro {
        namespace storage {
            struct FigaroIndependentSymmetries {
                std::map<size_t, std::vector<std::vector<size_t>>> groups;
                std::map<std::string, uint_fast64_t> elementToId;

                std::vector<size_t> sortedSymmetries;
                std::vector<std::vector<std::string>> symmetricElements;
//change symmetries to strings

                std::vector<std::vector<std::string>> augmentedSymmetries; //this vector contains all variables of each symmetry organized.
                std::set<std::string> visitedIncludedElements;
                std::map<std::string,size_t> elemntToBitVectorLocation;
                bool isSymmetryOptionSet;

                bool hasSymmetries()
                {
                    if(augmentedSymmetries.size() ==0 and augmentedSymmetries[0].size()==0){
                        return false;
                    }
                    else{
                        return true;
                    }

                }

                bool existsInFirstSymmetry(size_t index, size_t value) {
                    for (std::vector<size_t> symmetry : groups[index]) {
                        if (symmetry.front() == value) {
                            return true;
                        }
                    }
                    return false;
                }


                bool existsInSymmetry(size_t index, size_t value) {
                    for (std::vector<size_t> symmetry : groups[index]) {
                        for (size_t index : symmetry) {
                            if (index == value) {
                                return true;
                            }
                        }
                    }
                    return false;
                }

                /**
                 * Apply symmetry and get bijection. Result is symmetry(value)[index]
                 *
                 * @param symmetry The symmetry.
                 * @param value The value to apply the bijection to.
                 * @param index The index of the symmetry group to apply.
                 * @return Symmetric value, -1 if the bijection could not be applied.
                 */
                int applySymmetry(std::vector<std::vector<size_t>> const &symmetry, size_t value, size_t index) const {
                    for (std::vector<size_t> element : symmetry) {
                        if (element[0] == value) {
                            return element[index];
                        }
                    }
                    return -1;
                }

                std::vector<std::vector<size_t>> createSymmetry(std::vector<std::vector<size_t>> parentSymmetry,
                                                                std::vector<std::vector<size_t>> childSymmetry,
                                                                size_t index) {
                    std::vector<std::vector<size_t>> result;
                    for (std::vector<size_t> childSym : childSymmetry) {
                        std::vector<size_t> symmetry;
                        for (size_t child : childSym) {
                            int bijectionValue = applySymmetry(parentSymmetry, child, index);
                            if (bijectionValue >= 0) {
                                symmetry.push_back(bijectionValue);
                            } else {
                                return result;
                            }
                        }
                        result.push_back(symmetry);
                    }
                    return result;
                }

                void sortHierarchical(size_t parent, std::vector<size_t> &candidates) {
                    // Find subsymmetries of current symmetry
                    std::vector<size_t> children;
                    for (int i = candidates.size() - 1; i >= 0; --i) {
                        size_t currentRoot = candidates[i];
                        if (existsInSymmetry(parent, currentRoot)) {
                            // Is child
                            STORM_LOG_TRACE(currentRoot << " is child of " << parent);
                            children.insert(children.begin(), currentRoot);
                            candidates.erase(candidates.begin() + i);
                        }
                    }

                    // Find child symmetries which are created by parent and other child symmetries
                    for (size_t i = 0; i < children.size(); ++i) {
                        // Iterate over all possible symmetry groups
                        for (size_t index = 1; index < groups.at(parent).front().size(); ++index) {
                            std::vector<std::vector<size_t>> possibleSymmetry = createSymmetry(groups.at(parent),
                                                                                               groups.at(children[i]),
                                                                                               index);
                            for (size_t j = i + 1; j < children.size(); ++j) {
                                if (possibleSymmetry == groups.at(children[j])) {
                                    STORM_LOG_TRACE(
                                            "Child " << children[j] << " ignored as created by symmetries " << parent
                                                     << " and " << children[i]);
                                    groups.erase(children[j]);
                                    children.erase(children.begin() + j);
                                }
                            }
                        }
                    }

                    // Apply sorting recursively
                    while (!children.empty()) {
                        // Insert largest element
                        size_t largestChild = children.back();
                        children.pop_back();
                        sortHierarchical(largestChild, children);
                        sortedSymmetries.push_back(largestChild);
                    }
                }

                FigaroIndependentSymmetries(std::map<size_t, std::vector<std::vector<size_t>>>
                                            groups) :
                        groups(groups) {
                    std::vector<size_t> sortedGroups;
                    for (auto const &cl : groups) {
                        sortedGroups.push_back(cl.first);
                    }
                    // Sort by length of symmetry or (if equal) by lower first element
                    std::sort(sortedGroups.begin(), sortedGroups.end(), [&](const size_t left, const size_t right) {
                        return groups.at(left).size() < groups.at(right).size() ||
                               (groups.at(left).size() == groups.at(right).size() &&
                                groups.at(left).front().front() < groups.at(right).front().front());
                    });

                    // Sort hierarchical
                    while (!sortedGroups.empty()) {
                        // Insert largest element
                        size_t currentRoot = sortedGroups.back();
                        sortedGroups.pop_back();
                        sortHierarchical(currentRoot, sortedGroups);
                        sortedSymmetries.push_back(currentRoot);
                    }
                }

                std::string parseName(std::string const &name) {
                    size_t firstQuots = name.find("\"");
                    size_t secondQuots = name.find("\"", firstQuots + 1);
                    std::string parsedName;

                    if (firstQuots == std::string::npos) {
                        parsedName = name;
                    } else {
                        STORM_LOG_THROW(secondQuots != std::string::npos, storm::exceptions::WrongFormatException,
                                        "No ending quotation mark found in " << name);
                        parsedName = name.substr(firstQuots + 1, secondQuots - 1);
                    }
                    return boost::replace_all_copy(parsedName, "'", "__prime__");
                }


                void parseSymmetriesFromFile(std::string filename) {
                    const std::regex commentRegex("(/\\*([^*]|(\\*+[^*/]))*\\*+/)|(//.*)");

                    std::ifstream file;
                    storm::utility::openFile(filename, file);

                    std::string line;
                    bool comment = false; // Indicates whether the current line is part of a multiline comment
                    size_t lineNo = 0;
                    size_t count = 0;
                    try {
                        while (storm::utility::getline(file, line)) {
                            ++lineNo;
                            // First consider comments
                            if (comment) {
                                // Line is part of multiline comment -> search for end of this comment
                                size_t commentEnd = line.find("*/");
                                if (commentEnd == std::string::npos) {
                                    continue;
                                } else {
                                    // Remove comment
                                    line = line.substr(commentEnd + 2);
                                    comment = false;
                                }
                            }
                            // Remove comments
                            line = std::regex_replace(line, commentRegex, "");
                            // Check if multiline comment starts
                            size_t commentStart = line.find("/*");
                            if (commentStart != std::string::npos) {
                                // Remove comment
                                line = line.substr(0, commentStart);
                                comment = true;
                            }

                            boost::trim(line);
                            if (line.empty()) {
                                // Empty line
                                continue;
                            }
//                            // Remove semicolon
//                            STORM_LOG_THROW(line.back() == ';', storm::exceptions::WrongFormatException, "Semicolon expected at the end of line " << lineNo << ".");
//                            line.pop_back();
                            // Split line into tokens
                            boost::trim(line);
                            std::vector<std::string> tokens;
                            boost::split(tokens, line, boost::is_any_of(" \t ;"), boost::token_compress_on);
                            //TODO: before returning elements we shall merge symmetries with identical names
                            bool found = false;
                            int location = 0;
                            for (auto elem : tokens) {
                                for (size_t i = 0; i < symmetricElements.size(); i++) {
                                    if (std::find(symmetricElements[i].begin(), symmetricElements[i].end(), elem) !=
                                        symmetricElements[i].end()) {
                                        found = true;
                                        location = i;
                                        break;
                                    }
                                }
                            }
                            if (found) {
                                for (auto elem: tokens)
                                    if (std::find(symmetricElements[location].begin(),
                                                  symmetricElements[location].end(), elem) !=
                                        symmetricElements[location].end()) {
                                        continue;
                                    } else {
                                        symmetricElements[location].push_back(elem);
                                    }

                            } else {
                                symmetricElements.push_back(tokens);
                            }
                        }
                    } catch (storm::exceptions::BaseException const &exception) {
                        STORM_LOG_THROW(false, storm::exceptions::FileIoException,
                                        "A parsing exception occurred in line " << lineNo << ": " << exception.what());
                    }
                    std::cout << "Parse Symmetry file" << std::endl;
                }

                void recordElementName(std::string name, uint_fast64_t id) {
                    elementToId.insert(std::make_pair(name, id));

                }

                void computeSymmetries() {
                    //We have user input symmetric elements and figaro model variables with their ids
//                    for (auto element : elementToId) {
//                        std::cout << std::endl << element.first << "      " << element.second << std::endl;
//                    }

                    //1. first we get all model dependent variable names e.g. input file says A but in our Figaro model we have req_OF_A, fail_OF_A etc
                    std::set<std::string> objectNames;
                    std::set<std::string> predicatePrefixes;
                    std::string elementName;
                    std::string delimiter = "_OF_";
                    std::map<std::string, std::vector<std::string>> elementwithPrefixes;
                    std::string prefixName;
                    std::string objectName;
                    for (auto element: elementToId) {
                        elementName = element.first;
                        if (elementName.find(delimiter) != elementName.size() and
                            elementName.size() != delimiter.size()) {
//            std::cout<<elementName<<std::endl;
                            prefixName = elementName.substr(0, elementName.find(delimiter));
                            objectName = elementName.substr(elementName.find(delimiter) + delimiter.length(),
                                                            elementName.size());
                            //TODO: failF is crucial in this case
                            //Split state in two parts, keep state generation information and
//                            if (prefixName == "failF"){
//                                continue;
//                            }
                            predicatePrefixes.insert(prefixName);
                            objectNames.insert(objectName);
//            if (elementwithPrefixes.find(objectName) != elementwithPrefixes.end())
                            {
                                elementwithPrefixes[objectName].push_back(prefixName);
                            }
                        } else if (elementName.size() == delimiter.size()) {
                            objectNames.insert(elementName);
                        }
                    }
                    //    augment symmetric elemnets
                    int row =0;
                    int col = 0;
                    for (auto symmetry : symmetricElements){
                        std::vector<std::vector<std::string>> tempVector(elementwithPrefixes[symmetry[0]].size(),std::vector<std::string>(symmetry.size(),"None"));
                        for (auto elem: symmetry){
                            row = 0;
                            for(auto i : elementwithPrefixes[elem]){
                                tempVector[row][col]=  i + "_OF_" + elem;
                                row = row + 1;
                            }
                            col = col + 1;
                        }
                        col = 0;
                        augmentedSymmetries.insert(augmentedSymmetries.end(),tempVector.begin(),tempVector.end());
                    }
//                    int statebits = 0;
//                    std::map<std::string,size_t>  bitmap;
//                    std::set<std::string> visited;
//                    for (auto i: augmentedSymmetries){
//                        for (auto j: i){
//                            bitmap.insert(std::make_pair(j,statebits));
//                            visited.insert(j);
//                        }
//                        statebits++;
//                    }
//                    for (auto elem : bitmap){
//                        std::cout<<elem.first<<"      "<<elem.second<<std::endl;
//                    }
                }

                void printSymmetricElements() {
                    std::cout << std::endl<<"Elements given in the file"<<std::endl;
                    for (auto elements : symmetricElements) {
                        for (size_t i = 0; i < elements.size(); i++)
                            std::cout << parseName(elements[i]) << "\t";
                        std::cout << std::endl;
                    }
                    std::cout << std::endl<<"Symmetric variable groups computed based on provided Elements"<<std::endl;
                    for (auto elements : augmentedSymmetries) {
                        for (size_t i = 0; i < elements.size(); i++)
                            std::cout << parseName(elements[i]) << "\t";
                        std::cout << std::endl;
                    }
                }
            };

            inline std::ostream &operator<<(std::ostream &os, FigaroIndependentSymmetries const &s) {
                for (size_t index : s.sortedSymmetries) {
                    os << "Symmetry group for " << index << std::endl;
                    for (auto const &eqClass : s.groups.at(index)) {
                        for (auto const &i : eqClass) {
                            os << i << " ";
                        }
                        os << std::endl;
                    }
                }
                return os;
            }
        }
    }
}


