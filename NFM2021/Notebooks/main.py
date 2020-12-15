import pandas as pd
import re
import matplotlib.pyplot as plt
import numpy as np
from matplotlib.backends.backend_pdf import PdfPages
from brokenaxes import brokenaxes
import pprint

pd.set_option("display.max_rows", None, "display.max_columns", None)
dict = {}
prec_dict = {}
approximation = {}
precision = {}
definitive_unrel = {}
definitive_unavail = {}
precisiontostate = {}
exploring_iteration = False
excel_sheet = pd.read_csv("FIG2STORM_API_results_EXPORT_CSV.csv", index_col=0)
definitive_unrel['Model_name'] = []
definitive_unavail['Model_name'] = []
definitive_unrel['time_unrel'] = []
definitive_unavail['time_unavail'] = []
definitive_unrel['states_unrel'] = []
definitive_unrel['transitions_unrel'] = []
definitive_unavail['states_unavail'] = []
definitive_unavail['transitions_unavail'] = []

definitive_unrel['unrel'] = []
definitive_unavail['unavail'] = []

dict['iteration'] = []
dict['states'] = []
dict['transitions'] = []
dict['lower_bound'] = []
dict['upper_bound'] = []
dict['computation_time'] = []
prec_dict['precision'] = []
prec_dict['states'] = []
prec_dict['transitions'] = []
prec_dict['lower_bound'] = []
prec_dict['upper_bound'] = []
prec_dict['computation_time'] = []
test_type = 'null'
approx_type = 'null'
model_name = ''
print_now = False

with PdfPages('result.pdf') as pdf:
    with open("result.txt", 'r') as file:
        lines = file.readlines()
        for no, line in enumerate(lines):
            match = re.search(r"\[ RUN      \] (.*)\.(.*)", line)
            if match:
                if approx_type != 'null':
                    model_name = match.group(2) + '_'+approx_type
                else:
                    model_name = match.group(2)

            match = re.search(r"(.*)\(anonymous namespace\)::(.*)", line)
            if match:
                approx_type = match.group(2)
                continue
            match = re.search(r'Start of Definite Tests', line)
            if match:
                test_type = 'definite'
                continue
            match = re.search(r'start of Approximation test', line)
            if match:
                test_type = 'approximation'
            match = re.search(r'start of Precision graph test', line)
            if match:
                test_type = 'precision'
            if test_type == 'definite':
                match = re.search(r'The result is \.\.', line)
                if match:
                    if lines[no - 15].strip().split("Pmin=? [")[1][:8] == 'true U<=':
                        definitive_unrel['Model_name'].append(model_name)
                        definitive_unrel['time_unrel'].append(float(lines[no + 6].split()[1][:-1]))
                        definitive_unrel['unrel'].append(float(lines[no + 7].strip().split("[")[1][:-1]))
                        definitive_unrel['states_unrel'].append(int(lines[no - 11].strip().split()[1]))
                        definitive_unrel['transitions_unrel'].append(int(lines[no - 10].strip().split()[1]))
                    if lines[no - 15].strip().split("Pmin=? [")[1][:7] == 'true U[':
                        definitive_unavail['Model_name'].append(model_name)
                        definitive_unavail['time_unavail'].append(float(lines[no + 6].split()[1][:-1]))
                        definitive_unavail['unavail'].append(float(lines[no + 7].strip().split("[")[1][:-1]))
                        definitive_unavail['states_unavail'].append(int(lines[no - 11].strip().split()[1]))
                        definitive_unavail['transitions_unavail'].append(int(lines[no - 10].strip().split()[1]))
            elif test_type == 'approximation':
                match = re.search(r'Model in iteration (.*):',line)
                if match:
                    dict['iteration'].append(match.group(1))
                    dict['states'].append(int(lines[no + 3].strip().split()[1]))
                    dict['transitions'].append(int(lines[no + 4].strip().split()[1]))
                    continue
                match = re.search(r"Result after iteration (.*): \((.*), (.*)\)", line)
                if match:
                    dict['lower_bound'].append(match.group(2).strip())
                    dict['upper_bound'].append(match.group(3).strip())
                    dict['computation_time'].append(float(lines[no + 6].split()[1][:-1]))
                    continue
                match = re.search(r'The result is \.\.', line)
                if match:
                    if model_name in approximation:
                        approximation[model_name+'_unavail'] = pd.DataFrame(dict)
                    else:
                        approximation[model_name] = pd.DataFrame(dict)
                    dict.clear()
                    dict['iteration'] = []
                    dict['states'] = []
                    dict['computation_time'] = []
                    dict['transitions'] = []
                    dict['lower_bound'] = []
                    dict['upper_bound'] = []
                    continue
            elif test_type == 'precision':
                match = re.search(r'The result for the precision: (.*)',line)
                if match:
                    prec_dict['precision'].append(match.group(1))
                    prec_dict['states'].append(int(lines[no + 3].strip().split()[1]))
                    prec_dict['transitions'].append(int(lines[no + 4].strip().split()[1]))
                    prec_dict['computation_time'].append(float(lines[no + 19].split()[1][:-1]))
                    prec_dict['lower_bound'].append(lines[no+20].strip().split()[1][2:-1])
                    prec_dict['upper_bound'].append(lines[no+20].strip().split()[2][:-2])
                    continue
                match = re.search(r"Lower limit: (.*)  Nominal Value: (.*) Upper limit:(.*)", line)
                if match:
                    if model_name in precision:
                        precision[model_name+'_unavail'] = pd.DataFrame(prec_dict)
                    else:
                        precision[model_name] = pd.DataFrame(prec_dict)
                    prec_dict.clear()
                    prec_dict['precision'] = []
                    prec_dict['states'] = []
                    prec_dict['transitions'] = []
                    prec_dict['computation_time'] = []
                    prec_dict['lower_bound'] = []
                    prec_dict['upper_bound'] = []
            else:
                continue
    frame_definitive_unrel = pd.DataFrame(definitive_unrel)
    # frame_definitive_unrel = frame_definitive_unrel.set_index('Model_name')
    frame_definitive_unavail = pd.DataFrame(definitive_unavail)
    # frame_definitive_unavail = frame_definitive_unavail.set_index('Model_name')


    for index, definitive in frame_definitive_unrel.iterrows():

        for test_type in {'_ApproxDepthConfig', '_ApproxProbabilityConfig', '_ApproxBoundDifferenceConfig'}:

            fig, ax = plt.subplots(3,2,figsize=(5.0,7.0))
            plt.locator_params(axis='y', nbins=6)
            plt.locator_params(axis='x', nbins=5)
            plt.rc('legend',fontsize=4)
            plt.xlabel('xlabel', fontsize=6)
            plt.ylabel('ylabel', fontsize=6)
            font = {'family': 'normal',
                    'weight': 'bold',
                    'size': 6}
            plt.rcParams.update({'font.size': 6})
            fig.suptitle(definitive['Model_name']+test_type+'_unreliability')
            fig.tight_layout(pad=6.0)
            one_frame = approximation[definitive['Model_name']+test_type]
            ax[0,0].plot(one_frame['iteration'].astype(int), definitive['unrel']*np.ones(len(one_frame['iteration'])),'-g',label='Definitive value', alpha=0.5)
            mean_bound = 0.5 * (one_frame['upper_bound'].astype(float)  + one_frame['lower_bound'].astype(float))
            # ax[0,0].plot(one_frame['iteration'].astype(int), mean_bound,'-b',label='mean')
            ax[0,0].fill_between(one_frame['iteration'].astype(int),   (definitive['unrel'] - one_frame['lower_bound'].astype(float))/definitive['unrel'],
                               (definitive['unrel'] - one_frame['upper_bound'].astype(float))/definitive['unrel'], facecolor='#089FFF', label='computed bounds', alpha=0.5)
            ax[0,0].fill_between(one_frame['iteration'].astype(int),  (definitive['unrel'] - (excel_sheet.loc[definitive['Model_name'], 'YAMS_Unrel_Mean_value'].astype(float)+excel_sheet.loc[definitive['Model_name'],'YAMS_Unrel_Bounds'].astype(float)))/definitive['unrel'],
                                (definitive['unrel'] - (excel_sheet.loc[definitive['Model_name'],'YAMS_Unrel_Mean_value'].astype(float) -excel_sheet.loc[definitive['Model_name'],'YAMS_Unrel_Bounds'].astype(float)))/definitive['unrel'], facecolor='#7EFF99', label='YAMS bounds', alpha=0.5)
            ax[0,0].fill_between(one_frame['iteration'].astype(int),  (definitive['unrel'] - (excel_sheet.loc[definitive['Model_name'],'FigSeq_Pessimistic_Unreliability_with_truncation'].astype(float)))/definitive['unrel'],
                                (definitive['unrel'] - (excel_sheet.loc[definitive['Model_name'],'FigSeq_Estimated_Unreliability_no_truncation'].astype(float)))/definitive['unrel'], facecolor='red', label='FigSEQ bounds', alpha=0.5, linestyle='--')

            # ax[0,0].set_xticks(one_frame['iteration'].astype(int))
            ax[0,0].set_title('Iteration vs Delta error')
            leg = ax[0,0].legend()
            ax[0,0].set_ylim(-0.5,0.5)
            ax[0,0].set_xlabel('Iterations')
            ax[0,0].set_ylabel('Difference from definitive value')
        #     # ax[0].title(one_frame['Model_name'].astype(str)[0]+'_bounds')
            ax[1,0].plot(one_frame['iteration'].astype(int), one_frame['states'].astype(float)/definitive['states_unrel']*100,'-b',label='States')
            # ax[1, 0].plot(one_frame['iteration'].astype(int),
                          #                   one_frame['states'].astype(float) / one_frame['figaro_definitive_states'].astype(
                          #                       float) * 100, '-b', label='States')
                          #     # ax[1,0].plot(one_frame['iteration'].astype(int), one_frame['figaro_definitive_states'].astype(float), '--g',label='Definitive')
                          #     # ax[1,0].set_xticks(one_frame['iteration'].astype(int))
            # ax[1,0].set_xticks(one_frame['iteration'].astype(int))
            leg =  ax[1,0].legend()
            ax[1,0].set_title('Iteration vs states [Threshold 1e-9]')
            ax[1,0].set_xlabel('Iterations')
            ax[1,0].set_ylabel('% of total States')
            ax[1,0].set_yticks(np.arange(0, 110, 20))
            # ax[1, 0].set_xticks(one_frame['iteration'].astype(int))
            ax2 =  ax[1,0].twinx()
            ax2.plot(one_frame['iteration'].astype(int), one_frame['computation_time'].astype(float)/definitive['time_unrel']* 100, lw=2, color="red")
            ax2.locator_params(axis='y', nbins=5)
            ax2.set_yticks(np.arange(0,110,20))
            ax2.set_ylabel(r"% of total time", color="red")
            for label in ax2.get_yticklabels():
                label.set_color("red")



            # ax[2,0].plot(one_frame['iteration'].astype(int), (one_frame['upper_bound'].astype(float)-one_frame['lower_bound'].astype(float)),'-b',label='Upper Bound')
            #
            # # ax[2,0].set_xticks(one_frame['iteration'].astype(int))
            # leg =  ax[2,0].legend()
            # ax[2,0].set_title('Iteration vs bound difference (absolute)')
            # ax[2,0].set_xlabel('Iterations')
            # ax[2,0].set_ylabel('Bound Difference')
            # plt.title(one_frame['Model_name'].astype(str)[0]+'_Explored Model')
            # ax[0, 1].set_yscale('symlog')
            ax[2, 0].semilogy(one_frame['iteration'].astype(int), abs(
                        definitive['unrel'] - one_frame['upper_bound'].astype(
                    float)) / definitive['unrel'], '-k', label='Upper Bound')

            ax[2, 0].semilogy(one_frame['iteration'].astype(int),
                          abs((definitive['unrel'] - one_frame['lower_bound'].astype(float))/
                          definitive['unrel']), '-b', label='Lower Bound')
            ax[2, 0].semilogy(one_frame['iteration'].astype(int),
                          abs((definitive['unrel'] - excel_sheet.loc[definitive['Model_name'],'FigSeq_Pessimistic_Unreliability_with_truncation'].astype(float)) /
                          definitive['unrel'])*np.ones(len(one_frame['iteration'])), '--c', label='FigSEQ pessimistic')
            ax[2, 0].semilogy(one_frame['iteration'].astype(int),
                          abs((definitive['unrel'] - excel_sheet.loc[definitive['Model_name'],'FigSeq_Estimated_Unreliability_no_truncation'].astype(float)) /
                          definitive['unrel'])*np.ones(len(one_frame['iteration'])), '--r', label='FigSEQ Optimistic')
            ax[2, 0].semilogy(one_frame['iteration'].astype(int),
                              abs((definitive['unrel'] - definitive['unrel']) /
                              definitive['unrel'])*np.ones(len(one_frame['iteration'])), '--g', label='FigSEQ Definitive')
            # ax[0, 1].set_ylim(-0.025, 0.025)
            # ax[2, 0].set_yscale('symlog')

            # ax[0, 1].set_xticks(one_frame['iteration'].astype(int))
            leg = ax[2, 0].legend()
            ax[2, 0].set_title('Iteration vs abs. relative errors [threshold 1e-9]')
            ax[2, 0].set_xlabel('Iterations')
            ax[2, 0].set_ylabel('log of |Relative| error')

            ax[0, 1].plot(one_frame['iteration'].astype(int),(definitive['unrel']-one_frame['upper_bound'].astype(float))/definitive['unrel'], '-k',label='Upper Bound')

            ax[0, 1].plot(one_frame['iteration'].astype(int),
                              (definitive['unrel']- one_frame['lower_bound'].astype(float)) /
                              definitive['unrel'], '-b', label='Lower Bound')
            ax[0, 1].plot(one_frame['iteration'].astype(int),
                              (definitive['unrel']-excel_sheet.loc[definitive['Model_name'],'FigSeq_Pessimistic_Unreliability_with_truncation'].astype(float)) /
                              definitive['unrel']*np.ones(len(one_frame['iteration'])), '--r', label='FigSEQ pessimistic')
            ax[0, 1].plot(one_frame['iteration'].astype(int),
                              (definitive['unrel']-excel_sheet.loc[definitive['Model_name'],'FigSeq_Estimated_Unreliability_no_truncation'].astype(float)) /
                              definitive['unrel']*np.ones(len(one_frame['iteration'])), '--g', label='FigSEQ Optimistic')
            # ax[0, 1].set_ylim(-0.025, 0.025)
            ax[0, 1].set_yscale('symlog')

            # ax[0, 1].set_xticks(one_frame['iteration'].astype(int))
            leg = ax[0, 1].legend()
            ax[0, 1].set_title('Iteration vs relative errors')
            ax[0, 1].set_xlabel('Iterations')
            ax[0, 1].set_ylabel('Semilog Relative Error')

            ax[1, 1].set_title('Threshold vs states/comp. time')
            ax[1, 1].set_xlabel('Threshold')
            ax[1, 1].set_ylabel('% of definitive States')
            ax[1, 1].set_yticks(np.arange(0, 110, 20))
            ax[1,1].set_xscale('log')
            ax[1, 1].plot(precision[definitive['Model_name']+test_type].loc[:,'precision'].values.astype(float), precision[definitive['Model_name']+test_type].loc[:,'states'].values.astype(int) / (
                definitive['states_unrel']) * 100,  '--b', label='states', alpha=0.5)
            # ax[1, 1].set_xticks(one_frame['iteration'].astype(int))
            leg = ax[1, 1].legend()
            ax2 = ax[1, 1].twinx()

            ax2.plot(precision[definitive['Model_name']+test_type].loc[:,'precision'].values.astype(float), precision[definitive['Model_name']+test_type].loc[:,'computation_time'].values.astype(float) / float(
                definitive['time_unrel']) * 100,  color="red")
            ax2.locator_params(axis='y', nbins=5)
            ax2.set_yticks(np.arange(0, 110, 20))
            ax2.set_ylabel(r"% of definitive time", color="red")
            for label in ax2.get_yticklabels():
                label.set_color("red")
            ax[2, 1].semilogy(one_frame['computation_time'].astype(float),
                          (one_frame['upper_bound'].astype(float) - one_frame['lower_bound'].astype(float)), '-b',
                          label='UBound-LBound')

            ax[2, 1].set_xticks(one_frame['computation_time'].astype(float))
            ax[2, 1].locator_params(nbins=5, axis='x')
            leg = ax[2, 1].legend()
            ax[2, 1].set_title('Computation time vs bound difference (logarithmic)')
            ax[2, 1].set_xlabel('Computation time')
            ax[2, 1].set_ylabel('Bound Difference')

            pdf.savefig()
            fig.tight_layout()
            fig.show()
            plt.close()
            plt.clf()



    for index, definitive in frame_definitive_unavail.iterrows():
        for test_type in {'_ApproxDepthConfig', '_ApproxProbabilityConfig', '_ApproxBoundDifferenceConfig'}:
            fig, ax = plt.subplots(3,2,figsize=(5.0,7.0))
            plt.locator_params(axis='y', nbins=6)
            # plt.locator_params(axis='x', nbins=6)
            plt.rc('legend',fontsize=4)
            plt.xlabel('xlabel', fontsize=6)
            plt.ylabel('ylabel', fontsize=6)
            font = {'family': 'normal',
                    'weight': 'bold',
                    'size': 6}
            plt.rcParams.update({'font.size': 6})
            fig.suptitle(definitive['Model_name']+test_type+'_unavailability')
            fig.tight_layout(pad=6.0)
            one_frame = approximation[definitive['Model_name']+test_type+'_unavail']
            ax[0,0].plot(one_frame['iteration'].astype(int), definitive['unavail']*np.ones(len(one_frame['iteration'])),'-g',label='Definitive value', alpha=0.5)
            mean_bound = 0.5 * (one_frame['upper_bound'].astype(float)  + one_frame['lower_bound'].astype(float))
            # ax[0,0].plot(one_frame['iteration'].astype(int), mean_bound,'-b',label='mean')
            ax[0,0].fill_between(one_frame['iteration'].astype(int),   (definitive['unavail'] - one_frame['lower_bound'].astype(float))/definitive['unavail'],
                               (definitive['unavail'] - one_frame['upper_bound'].astype(float))/definitive['unavail'], facecolor='#089FFF', label='computed bounds', alpha=0.5)
            ax[0,0].fill_between(one_frame['iteration'].astype(int),  (definitive['unavail'] - (excel_sheet.loc[definitive['Model_name'], 'YAMS_Unavail_Mean_value'].astype(float)+excel_sheet.loc[definitive['Model_name'],'YAMS_Unavail_Bounds'].astype(float)))/definitive['unavail'],
                                (definitive['unavail'] - (excel_sheet.loc[definitive['Model_name'],'YAMS_Unavail_Mean_value'].astype(float) -excel_sheet.loc[definitive['Model_name'],'YAMS_Unavail_Bounds'].astype(float)))/definitive['unavail'], facecolor='#7EFF99', label='YAMS bounds', alpha=0.5)
            ax[0,0].fill_between(one_frame['iteration'].astype(int),  (definitive['unavail'] - (excel_sheet.loc[definitive['Model_name'],'FigSeq_Pessimistic_Unavail_with_truncation'].astype(float)))/definitive['unavail'],
                                (definitive['unavail'] - (excel_sheet.loc[definitive['Model_name'],'FigSeq_Estimated_Unavail_no_truncation'].astype(float)))/definitive['unavail'], facecolor='red', label='FigSEQ bounds', alpha=0.5, linestyle='--')
            # ax[0,0].set_xticks(one_frame['iteration'].astype(int))
            ax[0,0].set_title('Iteration vs lower/upper bounds')
            leg = ax[0,0].legend()
            ax[0,0].set_ylim(-0.5,0.5)
            ax[0,0].set_xlabel('Iterations')
            ax[0,0].set_ylabel('Relative to definitive value')
        #     # ax[0].title(one_frame['Model_name'].astype(str)[0]+'_bounds')
            ax[1,0].plot(one_frame['iteration'].astype(int), one_frame['states'].astype(float)/definitive['states_unavail']*100,'-b',label='States')
            # ax[1, 0].plot(one_frame['iteration'].astype(int),
                          #                   one_frame['states'].astype(float) / one_frame['figaro_definitive_states'].astype(
                          #                       float) * 100, '-b', label='States')
                          #     # ax[1,0].plot(one_frame['iteration'].astype(int), one_frame['figaro_definitive_states'].astype(float), '--g',label='Definitive')
                          #     # ax[1,0].set_xticks(one_frame['iteration'].astype(int))
            # ax[1,0].set_xticks(one_frame['iteration'].astype(int))
            leg =  ax[1,0].legend()
            ax[1,0].set_title('Iteration vs explored states')
            ax[1,0].set_xlabel('Iterations')
            ax[1,0].set_ylabel('% of total States')
            ax[1,0].set_yticks(np.arange(0, 110, 20))
            # ax[1, 0].set_xticks(one_frame['iteration'].astype(int))
            ax2 =  ax[1,0].twinx()
            ax2.plot(one_frame['iteration'].astype(int), one_frame['computation_time'].astype(float)/definitive['time_unavail']* 100, lw=2, color="red")
            ax2.locator_params(axis='y', nbins=5)
            ax2.set_yticks(np.arange(0,110,20))
            ax2.set_ylabel(r"% of total time", color="red")
            for label in ax2.get_yticklabels():
                label.set_color("red")
            # ax[2,0].plot(one_frame['iteration'].astype(int), (one_frame['upper_bound'].astype(float)-one_frame['lower_bound'].astype(float)),'-b',label='Upper Bound')
            #
            # # ax[2,0].set_xticks(one_frame['iteration'].astype(int))
            # leg =  ax[2,0].legend()
            # ax[2,0].set_title('Iteration vs bound difference (absolute)')
            # ax[2,0].set_xlabel('Iterations')
            # ax[2,0].set_ylabel('Bound Difference')
            # plt.title(one_frame['Model_name'].astype(str)[0]+'_Explored Model')
            # ax[0, 1].set_yscale('symlog')
            ax[2, 0].semilogy(one_frame['iteration'].astype(int), abs(
                        definitive['unavail'] - one_frame['upper_bound'].astype(
                    float)) / definitive['unavail'], '-k', label='Upper Bound')

            ax[2, 0].semilogy(one_frame['iteration'].astype(int),
                          abs((definitive['unavail'] - one_frame['lower_bound'].astype(float))/
                          definitive['unavail']), '-b', label='Lower Bound')
            ax[2, 0].semilogy(one_frame['iteration'].astype(int),
                          abs((definitive['unavail'] - excel_sheet.loc[definitive['Model_name'],'FigSeq_Pessimistic_Unavail_with_truncation'].astype(float)) /
                          definitive['unavail'])*np.ones(len(one_frame['iteration'])), '--c', label='FigSEQ pessimistic', alpha=0.5)
            ax[2, 0].semilogy(one_frame['iteration'].astype(int),
                          abs((definitive['unavail'] - excel_sheet.loc[definitive['Model_name'],'FigSeq_Estimated_Unavail_no_truncation'].astype(float)) /
                          definitive['unavail'])*np.ones(len(one_frame['iteration'])), '--r', label='FigSEQ Optimistic', alpha=0.5)
            # ax[2, 0].semilogy(one_frame['iteration'].astype(int),
            #                   abs((definitive['unavail'] - definitive['unavail']) /
            #                   definitive['unavail'])*np.ones(len(one_frame['iteration'])), '--g', label='FigSEQ Definitive', alpha=0.5)
            # ax[0, 1].set_ylim(-0.025, 0.025)
            # ax[2, 0].set_yscale('symlog')

            # ax[0, 1].set_xticks(one_frame['iteration'].astype(int))
            leg = ax[2, 0].legend()
            ax[2, 0].set_title('Iteration vs abs relative errors')
            ax[2, 0].set_xlabel('Iterations')
            ax[2, 0].set_ylabel('Bound Difference')
            ax[0, 1].plot(one_frame['iteration'].astype(int),(definitive['unavail']-one_frame['upper_bound'].astype(float))/definitive['unavail'], '-k',label='Upper Bound')
            ax[0, 1].plot(one_frame['iteration'].astype(int),
                              (definitive['unavail']- one_frame['lower_bound'].astype(float)) /
                              definitive['unavail'], '-b', label='Lower Bound')
            ax[0, 1].plot(one_frame['iteration'].astype(int),
                              (definitive['unavail']-excel_sheet.loc[definitive['Model_name'],'FigSeq_Pessimistic_Unavail_with_truncation'].astype(float)) /
                              definitive['unavail']*np.ones(len(one_frame['iteration'])), '--r', label='FigSEQ pessimistic')
            ax[0, 1].plot(one_frame['iteration'].astype(int),
                              (definitive['unavail']-excel_sheet.loc[definitive['Model_name'],'FigSeq_Estimated_Unavail_no_truncation'].astype(float)) /
                              definitive['unavail']*np.ones(len(one_frame['iteration'])), '--g', label='FigSEQ Optimistic')
            # ax[0, 1].set_ylim(-0.025, 0.025)
            ax[0, 1].set_yscale('symlog')
            # ax[0, 1].set_xticks(one_frame['iteration'].astype(int))
            leg = ax[0, 1].legend()
            ax[0, 1].set_title('Iteration vs relative errors (figseq, storm_Approx)')
            ax[0, 1].set_xlabel('Iterations')
            ax[0, 1].set_ylabel('Bound Difference')
            ax[1, 1].set_title('Threshold vs explored states')
            ax[1, 1].set_xlabel('Threshold')
            ax[1, 1].set_ylabel('% of total States')
            ax[1, 1].set_yticks(np.arange(0, 110, 20))
            ax[1,1].set_xscale('log')
            ax[1, 1].plot(precision[definitive['Model_name']+test_type+'_unavail'].loc[:,'precision'].values.astype(float), precision[definitive['Model_name']+test_type+'_unavail'].loc[:,'states'].values.astype(int) / (
                definitive['states_unavail']) * 100,  '--b', label='states', alpha=0.5)
            # ax[1, 1].set_xticks(one_frame['iteration'].astype(int))
            ax2 = ax[1, 1].twinx()
            leg = ax[1, 1].legend()
            ax2.plot(precision[definitive['Model_name']+test_type+'_unavail'].loc[:,'precision'].values.astype(float), precision[definitive['Model_name']+test_type+'_unavail'].loc[:,'computation_time'].values.astype(float) / float(
                definitive['time_unavail']) * 100,  color="red")
            ax2.locator_params(axis='y', nbins=5)
            ax2.set_yticks(np.arange(0, 110, 20))
            ax2.set_ylabel(r"% of total time", color="red")
            for label in ax2.get_yticklabels():
                label.set_color("red")
            ax[2, 1].semilogy(one_frame['computation_time'].astype(float),
                          (one_frame['upper_bound'].astype(float) - one_frame['lower_bound'].astype(float)), '-b',
                          label='Computation_time')
            ax[2, 1].set_xticks(one_frame['computation_time'].astype(float))
            ax[2, 1].locator_params(nbins=5, axis='x')
            leg = ax[2, 1].legend()
            ax[2, 1].set_title('Computation time vs bound difference (logarithmic)')
            ax[2, 1].set_xlabel('Computation time')
            ax[2, 1].set_ylabel('Bound Difference')
            pdf.savefig()
            fig.tight_layout()
            fig.show()
            plt.close()
            plt.clf()

