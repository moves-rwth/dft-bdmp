#pragma once

#include "storm-config.h"
#ifdef STORM_HAVE_XERCES
#include <string>

#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/util/XMLString.hpp>

#include "storm/storage/expressions/ExpressionManager.h"
#include "storm-parsers/parser/ExpressionParser.h"

#include "storm-gspn/storage/gspn/GSPN.h"

#include "storm-gspn/storage/gspn/GspnBuilder.h"

namespace storm {
    namespace figaro {
        namespace parser {
            class FigaroAnalysisFileParser {

            public:

                FigaroAnalysisFileParser(std::string);

                /*!
                 * Parses the given xml file into an internal structure.
                 *
                 * @param filename The name of the file to parse.

                 */
                void parse();
                std::vector<std::string> getProperties();

            private:
#ifdef false
                void traverseProjectElement(xercesc::DOMNode const *const node);

                void traverseGspnElement(xercesc::DOMNode const *const node);

                void traverseNodesElement(xercesc::DOMNode const *const node);

                void traverseEdgesElement(xercesc::DOMNode const *const node);

                void traverseConstantOrTemplateElement(xercesc::DOMNode const *const node);

                void traversePlaceElement(xercesc::DOMNode const *const node);

                void traverseTransitionElement(xercesc::DOMNode const *const node);

                void traverseArcElement(xercesc::DOMNode const *const node);

#endif
                int64_t parseInt(std::string str);

                double parseReal(std::string str);
#ifdef false
                // the constructed gspn
                storm::gspn::GspnBuilder builder;
                std::shared_ptr<storm::expressions::ExpressionManager> manager;
                std::shared_ptr<storm::parser::ExpressionParser> expressionParser;
                std::unordered_map<std::string, std::string> constantDefinitions;
                std::map<storm::expressions::Variable, storm::expressions::Expression> constantsSubstitution;
#endif


                std::string analysisFileName;
                std::vector<std::string> properties;
            };
        }
    }
}
#endif
