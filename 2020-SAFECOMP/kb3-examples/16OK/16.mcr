<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="1.282">
	<FIGARO0>#\16.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000" GRAINE="1576001874" RNG="mt19937"/>
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
	<INDICATEURS NB_HISTOIRES="10000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="10000" PREMOY="175" PREVAR="175" MOYENNE="0.0175" INT_CONF_90="0.002156811417" INT_CONFIANCE="0.002570003239" INT_CONF_99="0.003377560532"/>
				<VALEURS INSTANT="2" NB_VAL="10000" PREMOY="643" PREVAR="643" MOYENNE="0.0643" INT_CONF_90="0.004034601736" INT_CONFIANCE="0.004807531826" INT_CONF_99="0.006318174821"/>
				<VALEURS INSTANT="3" NB_VAL="10000" PREMOY="1204" PREVAR="1204" MOYENNE="0.1204" INT_CONF_90="0.005352821037" INT_CONFIANCE="0.006378289402" INT_CONF_99="0.008382502489"/>
				<VALEURS INSTANT="4" NB_VAL="10000" PREMOY="1853" PREVAR="1853" MOYENNE="0.1853" INT_CONF_90="0.006390920831" INT_CONFIANCE="0.007615263489" INT_CONF_99="0.01000816381"/>
				<VALEURS INSTANT="5" NB_VAL="10000" PREMOY="2541" PREVAR="2541" MOYENNE="0.2541" INT_CONF_90="0.007160931279" INT_CONFIANCE="0.008532788929" INT_CONF_99="0.01121399798"/>
				<VALEURS INSTANT="6" NB_VAL="10000" PREMOY="3217" PREVAR="3217" MOYENNE="0.3217" INT_CONF_90="0.00768357454" INT_CONFIANCE="0.009155557738" INT_CONF_99="0.01203245583"/>
				<VALEURS INSTANT="7" NB_VAL="10000" PREMOY="3861" PREVAR="3861" MOYENNE="0.3861" INT_CONF_90="0.00800802808" INT_CONFIANCE="0.009542168566" INT_CONF_99="0.01254054915"/>
				<VALEURS INSTANT="8" NB_VAL="10000" PREMOY="4477" PREVAR="4477" MOYENNE="0.4477" INT_CONF_90="0.008179145588" INT_CONFIANCE="0.009746067964" INT_CONF_99="0.01280851868"/>
				<VALEURS INSTANT="9" NB_VAL="10000" PREMOY="5084" PREVAR="5084" MOYENNE="0.5084" INT_CONF_90="0.008223100117" INT_CONFIANCE="0.009798443096" INT_CONF_99="0.01287735135"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="5635" PREVAR="5635" MOYENNE="0.5635" INT_CONF_90="0.00815766664" INT_CONFIANCE="0.00972047418" INT_CONF_99="0.01277488271"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="10000" PREMOY="165" PREVAR="165" MOYENNE="0.0165" INT_CONF_90="0.002095347335" INT_CONFIANCE="0.002496764157" INT_CONF_99="0.003281307956"/>
				<VALEURS INSTANT="2" NB_VAL="10000" PREMOY="563" PREVAR="563" MOYENNE="0.0563" INT_CONF_90="0.003791386373" INT_CONFIANCE="0.004517722404" INT_CONF_99="0.005937300256"/>
				<VALEURS INSTANT="3" NB_VAL="10000" PREMOY="980" PREVAR="980" MOYENNE="0.098" INT_CONF_90="0.004890386416" INT_CONFIANCE="0.005827263724" INT_CONF_99="0.007658331192"/>
				<VALEURS INSTANT="4" NB_VAL="10000" PREMOY="1460" PREVAR="1460" MOYENNE="0.146" INT_CONF_90="0.005808075231" INT_CONFIANCE="0.006920759061" INT_CONF_99="0.009095429261"/>
				<VALEURS INSTANT="5" NB_VAL="10000" PREMOY="1922" PREVAR="1922" MOYENNE="0.1922" INT_CONF_90="0.006481200934" INT_CONFIANCE="0.007722839032" INT_CONF_99="0.01014954219"/>
				<VALEURS INSTANT="6" NB_VAL="10000" PREMOY="2339" PREVAR="2339" MOYENNE="0.2339" INT_CONF_90="0.006962812686" INT_CONFIANCE="0.008296715706" INT_CONF_99="0.01090374482"/>
				<VALEURS INSTANT="7" NB_VAL="10000" PREMOY="2691" PREVAR="2691" MOYENNE="0.2691" INT_CONF_90="0.007294788414" INT_CONFIANCE="0.008692289788" INT_CONF_99="0.01142361787"/>
				<VALEURS INSTANT="8" NB_VAL="10000" PREMOY="3040" PREVAR="3040" MOYENNE="0.304" INT_CONF_90="0.007566033876" INT_CONFIANCE="0.009015499184" INT_CONF_99="0.01184838749"/>
				<VALEURS INSTANT="9" NB_VAL="10000" PREMOY="3371" PREVAR="3371" MOYENNE="0.3371" INT_CONF_90="0.007775534553" INT_CONFIANCE="0.009265135018" INT_CONF_99="0.01217646495"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="3663" PREVAR="3663" MOYENNE="0.3663" INT_CONF_90="0.007924779419" INT_CONFIANCE="0.009442971516" INT_CONF_99="0.01241018199"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
