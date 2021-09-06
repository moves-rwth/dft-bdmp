<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="8.344">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" OPTIM_INTERACTIONS="VRAI" GRAINE="1609243422" RNG="mt19937"/>
	<HISTOIRE>
		<INTERVALLE T0="0" T1="100" N="10"/>
		<INSTANTS_ORDONNES>
			<INSTANT VALEUR="0"/>
			<INSTANT VALEUR="10"/>
			<INSTANT VALEUR="20"/>
			<INSTANT VALEUR="30"/>
			<INSTANT VALEUR="40"/>
			<INSTANT VALEUR="50"/>
			<INSTANT VALEUR="60"/>
			<INSTANT VALEUR="70"/>
			<INSTANT VALEUR="80"/>
			<INSTANT VALEUR="90"/>
			<INSTANT VALEUR="100"/>
		</INSTANTS_ORDONNES>
	</HISTOIRE>
	<GROUPES>
		<GROUPE NOM="ALL"/>
	</GROUPES>
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="S(UE_1)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="100000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="842" PREVAR="842" MOYENNE="0.00842" INT_CONF_90="0.0004752769965" INT_CONFIANCE="0.0005663283359" INT_CONF_99="0.0007442824221"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="2293" PREVAR="2293" MOYENNE="0.02293" INT_CONF_90="0.0007785593715" INT_CONFIANCE="0.0009277121267" INT_CONF_99="0.001219221757"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="3808" PREVAR="3808" MOYENNE="0.03808" INT_CONF_90="0.0009955081434" INT_CONFIANCE="0.001186222928" INT_CONF_99="0.001558962916"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="5203" PREVAR="5203" MOYENNE="0.05203" INT_CONF_90="0.001155183773" INT_CONFIANCE="0.001376488466" INT_CONF_99="0.001809014496"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="6504" PREVAR="6504" MOYENNE="0.06504" INT_CONF_90="0.001282666203" INT_CONFIANCE="0.001528393382" INT_CONF_99="0.002008651619"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="7729" PREVAR="7729" MOYENNE="0.07729" INT_CONF_90="0.001389060422" INT_CONFIANCE="0.001655170107" INT_CONF_99="0.002175264662"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="8824" PREVAR="8824" MOYENNE="0.08824" INT_CONF_90="0.001475366395" INT_CONFIANCE="0.001758010174" INT_CONF_99="0.002310419571"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="9830" PREVAR="9830" MOYENNE="0.0983" INT_CONF_90="0.001548583628" INT_CONFIANCE="0.001845254022" INT_CONF_99="0.002425077549"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="10731" PREVAR="10731" MOYENNE="0.10731" INT_CONF_90="0.001609894076" INT_CONFIANCE="0.001918310037" INT_CONF_99="0.002521089535"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="11546" PREVAR="11546" MOYENNE="0.11546" INT_CONF_90="0.001662269303" INT_CONFIANCE="0.001980719065" INT_CONF_99="0.002603108992"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="123" PREVAR="123" MOYENNE="0.00123" INT_CONF_90="0.0001823107048" INT_CONFIANCE="0.0002172369352" INT_CONF_99="0.0002854980442"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="150" PREVAR="150" MOYENNE="0.0015" INT_CONF_90="0.0002013012789" INT_CONFIANCE="0.0002398656344" INT_CONF_99="0.0003152372291"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="176" PREVAR="176" MOYENNE="0.00176" INT_CONF_90="0.0002180221851" INT_CONFIANCE="0.0002597898534" INT_CONF_99="0.0003414221205"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="180" PREVAR="180" MOYENNE="0.0018" INT_CONF_90="0.0002204813732" INT_CONFIANCE="0.0002627201613" INT_CONF_99="0.0003452732022"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="135" PREVAR="135" MOYENNE="0.00135" INT_CONF_90="0.000190985505" INT_CONFIANCE="0.0002275736128" INT_CONF_99="0.0002990827565"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="138" PREVAR="138" MOYENNE="0.00138" INT_CONF_90="0.0001930930057" INT_CONFIANCE="0.0002300848587" INT_CONF_99="0.0003023830967"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="120" PREVAR="120" MOYENNE="0.0012" INT_CONF_90="0.0001800763833" INT_CONFIANCE="0.0002145745728" INT_CONF_99="0.0002819991032"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="82" PREVAR="82" MOYENNE="0.00082" INT_CONF_90="0.0001488866171" INT_CONFIANCE="0.0001774096174" INT_CONF_99="0.0002331560181"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="100" PREVAR="100" MOYENNE="0.001" INT_CONF_90="0.000164402953" INT_CONFIANCE="0.0001958985001" INT_CONF_99="0.0002574545558"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="85" PREVAR="85" MOYENNE="0.00085" INT_CONF_90="0.0001515834122" INT_CONFIANCE="0.0001806230519" INT_CONF_99="0.0002373791916"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
