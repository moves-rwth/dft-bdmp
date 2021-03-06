<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="225.781">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1596005603" RNG="mt19937"/>
	<HISTOIRE>
		<INTERVALLE T0="0" T1="10" N="10"/>
		<INSTANTS_ORDONNES>
			<INSTANT VALEUR="0"/>
			<INSTANT VALEUR="1"/>
			<INSTANT VALEUR="2"/>
			<INSTANT VALEUR="3"/>
			<INSTANT VALEUR="4"/>
			<INSTANT VALEUR="5"/>
			<INSTANT VALEUR="6"/>
			<INSTANT VALEUR="7"/>
			<INSTANT VALEUR="8"/>
			<INSTANT VALEUR="9"/>
			<INSTANT VALEUR="10"/>
		</INSTANTS_ORDONNES>
	</HISTOIRE>
	<GROUPES>
		<GROUPE NOM="ALL"/>
	</GROUPES>
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="S(UE_1)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="10000000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="10000000" PREMOY="90430" PREVAR="90430" MOYENNE="0.009043" INT_CONF_90="4.92391492E-5" INT_CONFIANCE="5.867215462E-5" INT_CONF_99="7.710836733E-5"/>
				<VALEURS INSTANT="2" NB_VAL="10000000" PREMOY="329018" PREVAR="329018" MOYENNE="0.0329018" INT_CONF_90="9.278376392E-5" INT_CONFIANCE="0.0001105588425" INT_CONF_99="0.0001452991099"/>
				<VALEURS INSTANT="3" NB_VAL="10000000" PREMOY="671924" PREVAR="671924" MOYENNE="0.0671924" INT_CONF_90="0.0001302215872" INT_CONFIANCE="0.0001551688286" INT_CONF_99="0.0002039266345"/>
				<VALEURS INSTANT="4" NB_VAL="10000000" PREMOY="1086831" PREVAR="1086831" MOYENNE="0.1086831" INT_CONF_90="0.0001618914635" INT_CONFIANCE="0.0001929058713" INT_CONF_99="0.0002535215705"/>
				<VALEURS INSTANT="5" NB_VAL="10000000" PREMOY="1547305" PREVAR="1547305" MOYENNE="0.1547305" INT_CONF_90="0.0001881102383" INT_CONFIANCE="0.0002241475161" INT_CONF_99="0.0002945800971"/>
				<VALEURS INSTANT="6" NB_VAL="10000000" PREMOY="2034786" PREVAR="2034786" MOYENNE="0.2034786" INT_CONF_90="0.0002094039958" INT_CONFIANCE="0.0002495206318" INT_CONF_99="0.0003279260607"/>
				<VALEURS INSTANT="7" NB_VAL="10000000" PREMOY="2534866" PREVAR="2534866" MOYENNE="0.2534866" INT_CONF_90="0.0002262680202" INT_CONFIANCE="0.000269615387" INT_CONF_99="0.0003543350748"/>
				<VALEURS INSTANT="8" NB_VAL="10000000" PREMOY="3033299" PREVAR="3033299" MOYENNE="0.3033299" INT_CONF_90="0.0002391101801" INT_CONFIANCE="0.0002849177877" INT_CONF_99="0.0003744458607"/>
				<VALEURS INSTANT="9" NB_VAL="10000000" PREMOY="3522738" PREVAR="3522738" MOYENNE="0.3522738" INT_CONF_90="0.0002484636004" INT_CONFIANCE="0.0002960630924" INT_CONF_99="0.0003890932901"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="3996327" PREVAR="3996327" MOYENNE="0.3996327" INT_CONF_90="0.0002547803285" INT_CONFIANCE="0.0003035899497" INT_CONF_99="0.0003989852684"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="10000000" PREMOY="90430" PREVAR="90430" MOYENNE="0.009043" INT_CONF_90="4.92391492E-5" INT_CONFIANCE="5.867215462E-5" INT_CONF_99="7.710836733E-5"/>
				<VALEURS INSTANT="2" NB_VAL="10000000" PREMOY="329018" PREVAR="329018" MOYENNE="0.0329018" INT_CONF_90="9.278376392E-5" INT_CONFIANCE="0.0001105588425" INT_CONF_99="0.0001452991099"/>
				<VALEURS INSTANT="3" NB_VAL="10000000" PREMOY="671924" PREVAR="671924" MOYENNE="0.0671924" INT_CONF_90="0.0001302215872" INT_CONFIANCE="0.0001551688286" INT_CONF_99="0.0002039266345"/>
				<VALEURS INSTANT="4" NB_VAL="10000000" PREMOY="1086831" PREVAR="1086831" MOYENNE="0.1086831" INT_CONF_90="0.0001618914635" INT_CONFIANCE="0.0001929058713" INT_CONF_99="0.0002535215705"/>
				<VALEURS INSTANT="5" NB_VAL="10000000" PREMOY="1547305" PREVAR="1547305" MOYENNE="0.1547305" INT_CONF_90="0.0001881102383" INT_CONFIANCE="0.0002241475161" INT_CONF_99="0.0002945800971"/>
				<VALEURS INSTANT="6" NB_VAL="10000000" PREMOY="2034786" PREVAR="2034786" MOYENNE="0.2034786" INT_CONF_90="0.0002094039958" INT_CONFIANCE="0.0002495206318" INT_CONF_99="0.0003279260607"/>
				<VALEURS INSTANT="7" NB_VAL="10000000" PREMOY="2534866" PREVAR="2534866" MOYENNE="0.2534866" INT_CONF_90="0.0002262680202" INT_CONFIANCE="0.000269615387" INT_CONF_99="0.0003543350748"/>
				<VALEURS INSTANT="8" NB_VAL="10000000" PREMOY="3033299" PREVAR="3033299" MOYENNE="0.3033299" INT_CONF_90="0.0002391101801" INT_CONFIANCE="0.0002849177877" INT_CONF_99="0.0003744458607"/>
				<VALEURS INSTANT="9" NB_VAL="10000000" PREMOY="3522738" PREVAR="3522738" MOYENNE="0.3522738" INT_CONF_90="0.0002484636004" INT_CONFIANCE="0.0002960630924" INT_CONF_99="0.0003890932901"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="3996327" PREVAR="3996327" MOYENNE="0.3996327" INT_CONF_90="0.0002547803285" INT_CONFIANCE="0.0003035899497" INT_CONF_99="0.0003989852684"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
