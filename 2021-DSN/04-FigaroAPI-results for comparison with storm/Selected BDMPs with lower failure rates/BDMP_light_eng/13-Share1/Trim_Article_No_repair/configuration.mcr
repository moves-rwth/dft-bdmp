<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="92.157">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595931537" RNG="mt19937"/>
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
	<INDICATEURS NB_HISTOIRES="10000000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="12" PREVAR="12" MOYENNE="1.2E-6" INT_CONF_90="5.69793161E-7" INT_CONFIANCE="6.789514642E-7" INT_CONF_99="8.922944664E-7"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="45" PREVAR="45" MOYENNE="4.5E-6" INT_CONF_90="1.103397891E-6" INT_CONFIANCE="1.314781687E-6" INT_CONF_99="1.727917953E-6"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="94" PREVAR="94" MOYENNE="9.4E-6" INT_CONF_90="1.594735843E-6" INT_CONFIANCE="1.900247861E-6" INT_CONF_99="2.497351786E-6"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="172" PREVAR="172" MOYENNE="1.72E-5" INT_CONF_90="2.157184834E-6" INT_CONFIANCE="2.570448194E-6" INT_CONF_99="3.378145303E-6"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="255" PREVAR="255" MOYENNE="2.55E-5" INT_CONF_90="2.626584776E-6" INT_CONFIANCE="3.129773577E-6" INT_CONF_99="4.113224274E-6"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="381" PREVAR="381" MOYENNE="3.81E-5" INT_CONF_90="3.210562171E-6" INT_CONFIANCE="3.825626624E-6" INT_CONF_99="5.02773121E-6"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="506" PREVAR="506" MOYENNE="5.06E-5" INT_CONF_90="3.699909832E-6" INT_CONFIANCE="4.408721216E-6" INT_CONF_99="5.794048254E-6"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="661" PREVAR="661" MOYENNE="6.61E-5" INT_CONF_90="4.228762024E-6" INT_CONFIANCE="5.038888432E-6" INT_CONF_99="6.622229279E-6"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="836" PREVAR="836" MOYENNE="8.36E-5" INT_CONF_90="4.75567157E-6" INT_CONFIANCE="5.666740839E-6" INT_CONF_99="7.447368126E-6"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="1025" PREVAR="1025" MOYENNE="0.0001025" INT_CONF_90="5.265826476E-6" INT_CONFIANCE="6.274628832E-6" INT_CONF_99="8.246269256E-6"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="12" PREVAR="12" MOYENNE="1.2E-6" INT_CONF_90="5.69793161E-7" INT_CONFIANCE="6.789514642E-7" INT_CONF_99="8.922944664E-7"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="45" PREVAR="45" MOYENNE="4.5E-6" INT_CONF_90="1.103397891E-6" INT_CONFIANCE="1.314781687E-6" INT_CONF_99="1.727917953E-6"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="94" PREVAR="94" MOYENNE="9.4E-6" INT_CONF_90="1.594735843E-6" INT_CONFIANCE="1.900247861E-6" INT_CONF_99="2.497351786E-6"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="172" PREVAR="172" MOYENNE="1.72E-5" INT_CONF_90="2.157184834E-6" INT_CONFIANCE="2.570448194E-6" INT_CONF_99="3.378145303E-6"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="255" PREVAR="255" MOYENNE="2.55E-5" INT_CONF_90="2.626584776E-6" INT_CONFIANCE="3.129773577E-6" INT_CONF_99="4.113224274E-6"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="381" PREVAR="381" MOYENNE="3.81E-5" INT_CONF_90="3.210562171E-6" INT_CONFIANCE="3.825626624E-6" INT_CONF_99="5.02773121E-6"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="506" PREVAR="506" MOYENNE="5.06E-5" INT_CONF_90="3.699909832E-6" INT_CONFIANCE="4.408721216E-6" INT_CONF_99="5.794048254E-6"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="661" PREVAR="661" MOYENNE="6.61E-5" INT_CONF_90="4.228762024E-6" INT_CONFIANCE="5.038888432E-6" INT_CONF_99="6.622229279E-6"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="836" PREVAR="836" MOYENNE="8.36E-5" INT_CONF_90="4.75567157E-6" INT_CONFIANCE="5.666740839E-6" INT_CONF_99="7.447368126E-6"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="1025" PREVAR="1025" MOYENNE="0.0001025" INT_CONF_90="5.265826476E-6" INT_CONFIANCE="6.274628832E-6" INT_CONF_99="8.246269256E-6"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
