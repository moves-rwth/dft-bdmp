<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="0.531">
	<FIGARO0>#\24.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000" OPTIM_INTERACTIONS="VRAI" GRAINE="1553506411" RNG="mt19937" FREQ_TRANS="VRAI" SEQ_ERREUR="VRAI" PROBA_SEQ="50"/>
	<HISTOIRE>
		<INTERVALLE T0="0" T1="10000" N="10"/>
		<INSTANTS_ORDONNES>
			<INSTANT VALEUR="0"/>
			<INSTANT VALEUR="1000"/>
			<INSTANT VALEUR="2000"/>
			<INSTANT VALEUR="3000"/>
			<INSTANT VALEUR="4000"/>
			<INSTANT VALEUR="5000"/>
			<INSTANT VALEUR="6000"/>
			<INSTANT VALEUR="7000"/>
			<INSTANT VALEUR="8000"/>
			<INSTANT VALEUR="9000"/>
			<INSTANT VALEUR="10000"/>
		</INSTANTS_ORDONNES>
	</HISTOIRE>
	<GROUPES>
		<GROUPE NOM="TOUT"/>
	</GROUPES>
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="real(EI_1)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="10000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="DEJA_REALISE(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000" PREMOY="161" PREVAR="161" MOYENNE="0.0161" INT_CONF_90="0.002070214224" INT_CONFIANCE="0.002466816162" INT_CONF_99="0.003241949575"/>
				<VALEURS INSTANT="2000" NB_VAL="10000" PREMOY="653" PREVAR="653" MOYENNE="0.0653" INT_CONF_90="0.004063680751" INT_CONFIANCE="0.004842181663" INT_CONF_99="0.006363712477"/>
				<VALEURS INSTANT="3000" NB_VAL="10000" PREMOY="1301" PREVAR="1301" MOYENNE="0.1301" INT_CONF_90="0.005533503431" INT_CONFIANCE="0.006593586082" INT_CONF_99="0.008665450604"/>
				<VALEURS INSTANT="4000" NB_VAL="10000" PREMOY="2067" PREVAR="2067" MOYENNE="0.2067" INT_CONF_90="0.00666063807" INT_CONFIANCE="0.007936651892" INT_CONF_99="0.01043054024"/>
				<VALEURS INSTANT="5000" NB_VAL="10000" PREMOY="2909" PREVAR="2909" MOYENNE="0.2909" INT_CONF_90="0.007470548217" INT_CONFIANCE="0.00890172083" INT_CONF_99="0.01169885722"/>
				<VALEURS INSTANT="6000" NB_VAL="10000" PREMOY="3705" PREVAR="3705" MOYENNE="0.3705" INT_CONF_90="0.007943626999" INT_CONFIANCE="0.009465429827" INT_CONF_99="0.01243969724"/>
				<VALEURS INSTANT="7000" NB_VAL="10000" PREMOY="4505" PREVAR="4505" MOYENNE="0.4505" INT_CONF_90="0.008183858578" INT_CONFIANCE="0.009751683846" INT_CONF_99="0.01281589921"/>
				<VALEURS INSTANT="8000" NB_VAL="10000" PREMOY="5183" PREVAR="5183" MOYENNE="0.5183" INT_CONF_90="0.008218750516" INT_CONFIANCE="0.009793260218" INT_CONF_99="0.01287053989"/>
				<VALEURS INSTANT="9000" NB_VAL="10000" PREMOY="5879" PREVAR="5879" MOYENNE="0.5879" INT_CONF_90="0.008096175378" INT_CONFIANCE="0.00964720271" INT_CONF_99="0.01267858757"/>
				<VALEURS INSTANT="10000" NB_VAL="10000" PREMOY="6477" PREVAR="6477" MOYENNE="0.6477" INT_CONF_90="0.00785724219" INT_CONFIANCE="0.009362495822" INT_CONF_99="0.01230441888"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000" PREMOY="161" PREVAR="161" MOYENNE="0.0161" INT_CONF_90="0.002070214224" INT_CONFIANCE="0.002466816162" INT_CONF_99="0.003241949575"/>
				<VALEURS INSTANT="2000" NB_VAL="10000" PREMOY="653" PREVAR="653" MOYENNE="0.0653" INT_CONF_90="0.004063680751" INT_CONFIANCE="0.004842181663" INT_CONF_99="0.006363712477"/>
				<VALEURS INSTANT="3000" NB_VAL="10000" PREMOY="1301" PREVAR="1301" MOYENNE="0.1301" INT_CONF_90="0.005533503431" INT_CONFIANCE="0.006593586082" INT_CONF_99="0.008665450604"/>
				<VALEURS INSTANT="4000" NB_VAL="10000" PREMOY="2067" PREVAR="2067" MOYENNE="0.2067" INT_CONF_90="0.00666063807" INT_CONFIANCE="0.007936651892" INT_CONF_99="0.01043054024"/>
				<VALEURS INSTANT="5000" NB_VAL="10000" PREMOY="2909" PREVAR="2909" MOYENNE="0.2909" INT_CONF_90="0.007470548217" INT_CONFIANCE="0.00890172083" INT_CONF_99="0.01169885722"/>
				<VALEURS INSTANT="6000" NB_VAL="10000" PREMOY="3705" PREVAR="3705" MOYENNE="0.3705" INT_CONF_90="0.007943626999" INT_CONFIANCE="0.009465429827" INT_CONF_99="0.01243969724"/>
				<VALEURS INSTANT="7000" NB_VAL="10000" PREMOY="4505" PREVAR="4505" MOYENNE="0.4505" INT_CONF_90="0.008183858578" INT_CONFIANCE="0.009751683846" INT_CONF_99="0.01281589921"/>
				<VALEURS INSTANT="8000" NB_VAL="10000" PREMOY="5183" PREVAR="5183" MOYENNE="0.5183" INT_CONF_90="0.008218750516" INT_CONFIANCE="0.009793260218" INT_CONF_99="0.01287053989"/>
				<VALEURS INSTANT="9000" NB_VAL="10000" PREMOY="5879" PREVAR="5879" MOYENNE="0.5879" INT_CONF_90="0.008096175378" INT_CONFIANCE="0.00964720271" INT_CONF_99="0.01267858757"/>
				<VALEURS INSTANT="10000" NB_VAL="10000" PREMOY="6477" PREVAR="6477" MOYENNE="0.6477" INT_CONF_90="0.00785724219" INT_CONFIANCE="0.009362495822" INT_CONF_99="0.01230441888"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
	<FREQUENCES>
		<REGLE NOM="xx17" OBJET="A_attente">
			<TRANSITION NOM="deff" FREQUENCE="0.5996"/>
		</REGLE>
		<REGLE NOM="xx18" OBJET="A_attente">
			<TRANSITION NOM="defa" FREQUENCE="0.0462"/>
		</REGLE>
		<REGLE NOM="xx17" OBJET="B_attente">
			<TRANSITION NOM="deff" FREQUENCE="0.6031"/>
		</REGLE>
		<REGLE NOM="xx18" OBJET="B_attente">
			<TRANSITION NOM="defa" FREQUENCE="0.0465"/>
		</REGLE>
		<REGLE NOM="xx10" OBJET="C">
			<TRANSITION NOM="deff" FREQUENCE="0.796"/>
		</REGLE>
		<REGLE NOM="xx10" OBJET="D">
			<TRANSITION NOM="deff" FREQUENCE="0.7958"/>
		</REGLE>
		<REGLE NOM="xx10" OBJET="E">
			<TRANSITION NOM="deff" FREQUENCE="0.7977"/>
		</REGLE>
	</FREQUENCES>
	<PROBABILITES_SEQUENCES>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0174">
			<BRANCHE DATE_FIN_MOY="3157.19120350617">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6325.97181428218">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14789.5419647593">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0169">
			<BRANCHE DATE_FIN_MOY="3124.30084508367">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6214.55741173759">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14799.7566327898">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0153">
			<BRANCHE DATE_FIN_MOY="5103.25026003489">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13609.2683204757">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0153">
			<BRANCHE DATE_FIN_MOY="3443.4646967702">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6492.25299416503">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14082.573639826">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0148">
			<BRANCHE DATE_FIN_MOY="4998.8650727331">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13506.6594197962">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0147">
			<BRANCHE DATE_FIN_MOY="4824.47741462011">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13181.5546888519">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0141">
			<BRANCHE DATE_FIN_MOY="5527.91009493239">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13519.0295008901">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0138">
			<BRANCHE DATE_FIN_MOY="12831.710787412">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0133">
			<BRANCHE DATE_FIN_MOY="2944.65776237505">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6085.82328996722">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="15176.9590640499">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.013">
			<BRANCHE DATE_FIN_MOY="4526.81643398167">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13337.4216978296">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0123">
			<BRANCHE DATE_FIN_MOY="4617.9299917678">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13336.0145199933">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0121">
			<BRANCHE DATE_FIN_MOY="13427.2609382805">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0111">
			<BRANCHE DATE_FIN_MOY="13478.2505278243">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0096">
			<BRANCHE DATE_FIN_MOY="3205.50590325889">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6475.11712917148">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="12850.5139749644">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0087">
			<BRANCHE DATE_FIN_MOY="3341.25642638126">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7123.22487792615">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13617.7633859109">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0087">
			<BRANCHE DATE_FIN_MOY="3281.55857003921">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6590.51929877537">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13794.9645645791">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0085">
			<BRANCHE DATE_FIN_MOY="3046.89519798187">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6669.79144221274">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13255.1049924795">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0082">
			<BRANCHE DATE_FIN_MOY="3678.23453446785">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6745.51184720475">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13364.5264922502">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0082">
			<BRANCHE DATE_FIN_MOY="3144.29486002124">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6366.37161944961">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13251.4940134232">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0077">
			<BRANCHE DATE_FIN_MOY="3324.86626384889">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6804.5103631341">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13497.1233532872">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0076">
			<BRANCHE DATE_FIN_MOY="3499.60252653525">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6399.55676714584">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13506.564766544">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0074">
			<BRANCHE DATE_FIN_MOY="6524.91704899418">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="11995.9256756648">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0073">
			<BRANCHE DATE_FIN_MOY="5947.16058526883">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="12186.8605830712">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0072">
			<BRANCHE DATE_FIN_MOY="3546.7267893725">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6757.33670760703">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13491.0695851194">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0072">
			<BRANCHE DATE_FIN_MOY="3321.56224116537">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6294.37294563584">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13392.5338967716">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0071">
			<BRANCHE DATE_FIN_MOY="3366.51171678808">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6848.17313264798">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13713.6698506889">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.007">
			<BRANCHE DATE_FIN_MOY="1981.76401337266">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4448.64979553439">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7278.46738600659">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14629.4168386515">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.007">
			<BRANCHE DATE_FIN_MOY="2163.8107753299">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4237.52148170889">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7072.35836133039">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="15694.1136023645">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0069">
			<BRANCHE DATE_FIN_MOY="3239.45803558503">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6220.3945192763">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13080.8268104066">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0068">
			<BRANCHE DATE_FIN_MOY="2241.28251804542">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4565.23778947207">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7242.93438648128">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="15102.3849355236">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0068">
			<BRANCHE DATE_FIN_MOY="5434.49534089378">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="12230.0386567785">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0067">
			<BRANCHE DATE_FIN_MOY="3672.27839529258">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6291.36052874752">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13796.2481665394">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0065">
			<BRANCHE DATE_FIN_MOY="5562.2458812787">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="12572.2566032723">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0065">
			<BRANCHE DATE_FIN_MOY="2125.21839832209">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4335.60475507399">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6912.81406900862">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="16047.4941464708">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0064">
			<BRANCHE DATE_FIN_MOY="3281.07206752547">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6370.88198983615">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13252.6079887785">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0064">
			<BRANCHE DATE_FIN_MOY="3369.45791665535">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6364.63835714465">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="12994.8618455733">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0064">
			<BRANCHE DATE_FIN_MOY="1936.37575498048">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4095.84690627052">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7135.49981536877">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="15021.0339468472">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0063">
			<BRANCHE DATE_FIN_MOY="2134.48907192516">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4719.09826917607">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7209.18760891786">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14240.4217100391">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0063">
			<BRANCHE DATE_FIN_MOY="2829.04585667703">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="5120.81670698598">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7557.60099854164">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14596.8519789032">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0062">
			<BRANCHE DATE_FIN_MOY="2328.63119782781">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4555.18451039867">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7039.76812626367">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="15798.3275912459">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0062">
			<BRANCHE DATE_FIN_MOY="3619.18385700993">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6218.24940834792">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13483.1027007393">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0062">
			<BRANCHE DATE_FIN_MOY="2376.34684134525">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4592.30381076823">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7596.94526641285">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14647.3180969897">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.006">
			<BRANCHE DATE_FIN_MOY="2320.65133232946">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4766.69470215278">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7411.54715230114">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="15464.2965270666">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0059">
			<BRANCHE DATE_FIN_MOY="2360.29289116739">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4787.00788224421">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7192.29384639651">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="16457.2130186672">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0058">
			<BRANCHE DATE_FIN_MOY="2309.62322210746">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4693.40349807434">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6998.59302909163">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="15963.4840978891">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0057">
			<BRANCHE DATE_FIN_MOY="2483.68855765587">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4722.47203696833">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6811.07337007424">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14808.3934148231">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0056">
			<BRANCHE DATE_FIN_MOY="2581.24923191272">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4806.7137075633">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7178.95235963566">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14739.6188199319">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0056">
			<BRANCHE DATE_FIN_MOY="2563.377307591">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="5031.39403056934">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7274.77151188229">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14983.6354726557">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0055">
			<BRANCHE DATE_FIN_MOY="3599.04816019584">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6507.63926810946">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13479.9394884372">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0055">
			<BRANCHE DATE_FIN_MOY="2006.80727857593">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4494.14196692003">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7059.10473244293">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="15467.7127492688">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0055">
			<BRANCHE DATE_FIN_MOY="3810.3241718877">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6436.86555829316">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13305.6194103449">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0055">
			<BRANCHE DATE_FIN_MOY="4496.46506897584">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6752.24480947333">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="13271.2225726497">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0054">
			<BRANCHE DATE_FIN_MOY="1983.20550398471">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4333.13622663757">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6522.02748330325">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="15051.1492378328">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0054">
			<BRANCHE DATE_FIN_MOY="2235.48445183728">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4470.39409659656">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6862.30138982067">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="16105.6273314869">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0054">
			<BRANCHE DATE_FIN_MOY="2545.75771634698">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4451.82978223489">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7122.58625634029">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14527.9647144747">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0053">
			<BRANCHE DATE_FIN_MOY="1954.46771742404">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4137.21501420032">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6727.67651436843">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14276.5766089123">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0052">
			<BRANCHE DATE_FIN_MOY="1725.63519335131">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="3412.80384161119">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="5282.60548371076">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7602.56869983492">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="21800.2870093033">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.0052">
			<BRANCHE DATE_FIN_MOY="2941.9512158513">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6592.21003304671">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="14328.577673632">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.005">
			<BRANCHE DATE_FIN_MOY="1619.96730429201">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="3109.35151270558">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="5258.83036299717">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7405.603694978">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="19469.5152594145">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.005">
			<BRANCHE DATE_FIN_MOY="1851.54716675775">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4531.56900519402">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7088.59133811382">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="15460.7889838828">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.005">
			<BRANCHE DATE_FIN_MOY="1245.67077655542">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="3146.20378481342">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="5142.96838410339">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="7325.85700521706">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="18270.2012977817">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="MAX_TEMPS" PROBABILITE="0.005">
			<BRANCHE DATE_FIN_MOY="2112.51373397597">
				<TRANSITION OBJET="E" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="4327.81820005899">
				<TRANSITION OBJET="C" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="6190.91724708661">
				<TRANSITION OBJET="D" REGLE="xx10" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="8023.8555300991">
				<TRANSITION OBJET="A_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
			<BRANCHE DATE_FIN_MOY="19381.1627319323">
				<TRANSITION OBJET="B_attente" REGLE="xx17" TRANS="deff"/>
			</BRANCHE>
		</SEQUENCE>
		<SEQUENCE TRONQUEE="TRONCATURE_AFFICHAGE" PROBABILITE="0.4994"/>
	</PROBABILITES_SEQUENCES>
</AMC_SORTIES>