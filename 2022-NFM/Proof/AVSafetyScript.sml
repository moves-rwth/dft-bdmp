(* ========================================================================= *)
(* File Name: AVSafetyScript.sml                                             *)
(*---------------------------------------------------------------------------*)
(* Description: Fault Tree Diagram of a Autonomous Vehicle System            *)
(*                                                                           *)
(*                                                                           *)
(*                HOL4-Kananaskis                                            *)
(*                                                                           *)
(*              Author :  Waqar Ahmed                                        *)
(*                                                                           *)
(*          School of Electrical Engineering and Computer Sciences (SEECS)   *)
(*          National University of Sciences and Technology (NUST), PAKISTAN  *)
(*                                                                           *)
(*                                                                           *)
(* ========================================================================= *)
(*---------------------*)
fun load_paths l =
    loadPath := union l (!loadPath);
load_paths ["/Users/waqarahmed/Documents/Docs/Research/formal_depend/Formal-Dependability",
            "/Users/waqarahmed/Documents/Docs/Research/formal_depend/Formal-Dependability/RBD/",
            "/Users/waqarahmed/Documents/Docs/Research/formal_depend/Formal-Dependability/FT/",
            "/Users/waqarahmed/Documents/Docs/Research/formal_depend/Formal-Dependability/case_studies/",
            "/Users/waqarahmed/HOL/examples/miller/formalize"];
(*app load ["arithmeticTheory", "realTheory", "prim_recTheory", "seqTheory",
          "pred_setTheory","res_quanTheory", "res_quanTools", "listTheory",
          "real_probabilityTheory", "numTheory", "dep_rewrite", "transcTheory",
          "rich_listTheory", "pairTheory", "combinTheory","limTheory","sortingTheory",
          "realLib", "optionTheory","satTheory", "util_probTheory", "extrealTheory",
          "real_measureTheory", "real_lebesgueTheory","real_sigmaTheory","RBDTheory",
          "FT_deepTheory","VDCTheory","ASN_gatewayTheory","extra_pred_setTools"];*)

open HolKernel Parse boolLib bossLib limTheory arithmeticTheory realTheory prim_recTheory real_probabilityTheory
     seqTheory pred_setTheory res_quanTheory sortingTheory res_quanTools listTheory transcTheory
     rich_listTheory pairTheory combinTheory realLib  optionTheory dep_rewrite
      util_probTheory extrealTheory real_measureTheory real_lebesgueTheory real_sigmaTheory satTheory numTheory
      RBDTheory FT_deepTheory VDCTheory ASN_gatewayTheory extra_pred_setTools;
open HolKernel boolLib bossLib Parse;
val _ = new_theory "AVSafety";
(*--------------------*)
val op by = BasicProvers.byA;
val POP_ORW = POP_ASSUM (fn thm => ONCE_REWRITE_TAC [thm]);
(*---------------------------*)

val AV_HW_fail_def = Define
`AV_HW_fail p E1 E2 E3 E4 E5 E6 E7 E8 E9 t = OR[atomic(fail_event p E1 t ∩ p_space p);
              AND[OR(gate_list(fail_event_list p [E2;E3;E4;E5;E6] t));
                  OR(gate_list(fail_event_list p [E7;E8;E9] t))]]`;


                                             
val AV_HW_mcs_def = Define
`AV_HW_mcs p E1 E2 E3 E4 E5 E6 E7 E8 E9 t =
OR[atomic (fail_event p E1 t ∩ p_space p);
   AND(gate_list(fail_event_list p [E2;E7] t));
      AND(gate_list(fail_event_list p [E2;E8] t));
         AND(gate_list(fail_event_list p [E2;E9] t));
            AND(gate_list(fail_event_list p [E3;E7] t));
               AND(gate_list(fail_event_list p [E3;E8] t));
   AND(gate_list(fail_event_list p [E3;E9] t));
      AND(gate_list(fail_event_list p [E4;E7] t));
         AND(gate_list(fail_event_list p [E4;E8] t));
            AND(gate_list(fail_event_list p [E4;E9] t));
   AND(gate_list(fail_event_list p [E5;E7] t));
      AND(gate_list(fail_event_list p [E5;E8] t));
         AND(gate_list(fail_event_list p [E5;E9] t));
            AND(gate_list(fail_event_list p [E6;E7] t));
         AND(gate_list(fail_event_list p [E6;E8] t));
            AND(gate_list(fail_event_list p [E6;E9] t))] `;



Theorem AV_hw_mcs:
  ∀p E1 E2 E3 E4 E5 E6 E7 E8 E9 t.
  FTree p (AV_HW_fail p E1 E2 E3 E4 E5 E6 E7 E8 E9 t) =
  FTree p (AV_HW_mcs p E1 E2 E3 E4 E5 E6 E7 E8 E9 t)
Proof
  rw[AV_HW_fail_def,AV_HW_mcs_def,fail_event_list_def,FTree_def,gate_list_def]
  >> SET_TAC[]
QED
 

Theorem AV_HW_fail_eq_rbd:
∀p E1 E2 E3 E4 E5 E6 E7 E8 E9 t.
FTree p (AV_HW_mcs p E1 E2 E3 E4 E5 E6 E7 E8 E9 t) = 
rbd_struct p
    ((parallel of (\a. series (rbd_list a)))
        (list_fail_event_list p
        [[E1]; [E2;E7]; [E2;E8]; [E2;E9]; [E3;E7];
        [E3;E8]; [E3;E9]; [E4;E7]; [E4;E8]; [E4;E9]; [E5;E7]; [E5;E8]; [E5;E9];
        [E6;E7]; [E6;E8]; [E6;E9]] t))
Proof
RW_TAC std_ss[of_DEF,o_THM]
>> RW_TAC list_ss[AV_HW_mcs_def,FTree_def]
>> PSET_TAC[]
>> RW_TAC list_ss[list_fail_event_list_def,fail_event_list_def,
                  rbd_list_def,rbd_struct_def,FTree_def,gate_list_def]
>> SRW_TAC[][DISJOINT_DEF,DIFF_DEF,INTER_DEF,EXTENSION,GSPECIFICATION]
>> METIS_TAC[]
QED

Theorem fail_prob_AV_HW_FT_lem1 :
∀p E1 E2 E3 E4 E5 E6 E7 E8 E9 C_E1 C_E2 C_E3 C_E4 C_E5 C_E6 C_E7 C_E8 C_E9 t.
0 <= t /\ prob_space p /\
     list_exp p
       [C_E1; C_E2; C_E3; C_E4; C_E5; C_E6; C_E7; C_E8; C_E9]
        [E1; E2; E3; E4; E5; E6; E7; E8; E9] ==>
     (list_prod
        (one_minus_list
           (list_prod_rel p
              (list_fail_event_list p
                 [[E1]; [E2;E7]; [E2;E8]; [E2;E9]; [E3;E7];
        [E3;E8]; [E3;E9]; [E4;E7]; [E4;E8]; [E4;E9]; [E5;E7]; [E5;E8]; [E5;E9];
        [E6;E7]; [E6;E8]; [E6;E9]]  t))) =
      list_prod
      (one_minus_exp_prod t
       [[C_E1]; [C_E2;C_E7]; [C_E2;C_E8]; [C_E2;C_E9]; [C_E3;C_E7];
        [C_E3;C_E8]; [C_E3;C_E9]; [C_E4;C_E7]; [C_E4;C_E8]; [C_E4;C_E9]; [C_E5;C_E7]; [C_E5;C_E8]; [C_E5;C_E9];
        [C_E6;C_E7]; [C_E6;C_E8]; [C_E6;C_E9]]))
Proof
RW_TAC list_ss[list_exp_def,exp_distribution_def,distribution_def,CDF_def,list_fail_event_list_def,fail_event_list_def,fail_event_def,list_prod_rel_def,list_prod_def,list_prob_def]
>> RW_TAC list_ss[one_minus_list_def,list_prod_def,one_minus_exp_prod_def,exp_func_list_def,list_sum_def,exp_func_def]
>> RW_TAC std_ss[REAL_MUL_ASSOC]
>> RW_TAC real_ss[]
QED

Theorem AV_HW_fail:
∀p E1 E2 E3 E4 E5 E6 E7 E8 E9 C_E1 C_E2 C_E3 C_E4 C_E5 C_E6 C_E7 C_E8 C_E9 t.
(0 <= t) /\ prob_space p  /\
 (!x'.
    MEM x'
      (fail_event_list p
        [E1; E2; E3; E4; E5; E6; E7; E8; E9] t) ==>
    x' IN events p) /\
 mutual_indep p (FLAT
     (list_fail_event_list p
        [[E1]; [E2;E7]; [E2;E8]; [E2;E9]; [E3;E7];
        [E3;E8]; [E3;E9]; [E4;E7]; [E4;E8]; [E4;E9]; [E5;E7]; [E5;E8]; [E5;E9];
        [E6;E7]; [E6;E8]; [E6;E9]]  t)) /\
     list_exp p
       [C_E1; C_E2; C_E3; C_E4; C_E5; C_E6; C_E7; C_E8; C_E9]
        [E1; E2; E3; E4; E5; E6; E7; E8; E9] ==>
  prob p (FTree p (AV_HW_fail p E1 E2 E3 E4 E5 E6 E7 E8 E9 t))=
 1 - list_prod
  (one_minus_exp_prod t
   ([[C_E1]; [C_E2;C_E7]; [C_E2;C_E8]; [C_E2;C_E9]; [C_E3;C_E7];
        [C_E3;C_E8]; [C_E3;C_E9]; [C_E4;C_E7]; [C_E4;C_E8]; [C_E4;C_E9]; [C_E5;C_E7]; [C_E5;C_E8]; [C_E5;C_E9];
        [C_E6;C_E7]; [C_E6;C_E8]; [C_E6;C_E9]])) 
Proof
RW_TAC std_ss[]
>> RW_TAC std_ss[AV_hw_mcs,AV_HW_fail_eq_rbd]
>> DEP_REWRITE_TAC[rel_parallel_series_rbd]
>> RW_TAC std_ss[]
>- (FULL_SIMP_TAC list_ss[list_fail_event_list_def,fail_event_list_def])
>- (FULL_SIMP_TAC list_ss[list_fail_event_list_def,fail_event_list_def])
>> DEP_REWRITE_TAC[fail_prob_AV_HW_FT_lem1]
>> FULL_SIMP_TAC list_ss[]
QED