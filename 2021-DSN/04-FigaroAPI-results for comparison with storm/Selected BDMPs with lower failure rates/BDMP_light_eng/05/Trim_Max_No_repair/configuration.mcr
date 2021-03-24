<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="98.344">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595937248" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="10" PREVAR="10" MOYENNE="1E-6" INT_CONF_90="5.201476644E-7" INT_CONFIANCE="6.19795116E-7" INT_CONF_99="8.145497601E-7"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="39" PREVAR="39" MOYENNE="3.9E-6" INT_CONF_90="1.027207843E-6" INT_CONFIANCE="1.223995506E-6" INT_CONF_99="1.608604554E-6"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="94" PREVAR="94" MOYENNE="9.4E-6" INT_CONF_90="1.594735843E-6" INT_CONFIANCE="1.900247861E-6" INT_CONF_99="2.497351786E-6"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="165" PREVAR="165" MOYENNE="1.65E-5" INT_CONF_90="2.112833426E-6" INT_CONFIANCE="2.517600151E-6" INT_CONF_99="3.308691124E-6"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="245" PREVAR="245" MOYENNE="2.45E-5" INT_CONF_90="2.574569333E-6" INT_CONFIANCE="3.067793259E-6" INT_CONF_99="4.031768239E-6"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="360" PREVAR="360" MOYENNE="3.6E-5" INT_CONF_90="3.12083137E-6" INT_CONFIANCE="3.718705617E-6" INT_CONF_99="4.887213032E-6"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="492" PREVAR="492" MOYENNE="4.92E-5" INT_CONF_90="3.648368836E-6" INT_CONFIANCE="4.347306237E-6" INT_CONF_99="5.7133352E-6"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="647" PREVAR="647" MOYENNE="6.47E-5" INT_CONF_90="4.18374263E-6" INT_CONFIANCE="4.985244433E-6" INT_CONF_99="6.551729036E-6"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="827" PREVAR="827" MOYENNE="8.27E-5" INT_CONF_90="4.730005719E-6" INT_CONFIANCE="5.636158044E-6" INT_CONF_99="7.407175476E-6"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="1012" PREVAR="1012" MOYENNE="0.0001012" INT_CONF_90="5.232330275E-6" INT_CONFIANCE="6.234715585E-6" INT_CONF_99="8.1938143E-6"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="10" PREVAR="10" MOYENNE="1E-6" INT_CONF_90="5.201476644E-7" INT_CONFIANCE="6.19795116E-7" INT_CONF_99="8.145497601E-7"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="39" PREVAR="39" MOYENNE="3.9E-6" INT_CONF_90="1.027207843E-6" INT_CONFIANCE="1.223995506E-6" INT_CONF_99="1.608604554E-6"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="94" PREVAR="94" MOYENNE="9.4E-6" INT_CONF_90="1.594735843E-6" INT_CONFIANCE="1.900247861E-6" INT_CONF_99="2.497351786E-6"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="165" PREVAR="165" MOYENNE="1.65E-5" INT_CONF_90="2.112833426E-6" INT_CONFIANCE="2.517600151E-6" INT_CONF_99="3.308691124E-6"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="245" PREVAR="245" MOYENNE="2.45E-5" INT_CONF_90="2.574569333E-6" INT_CONFIANCE="3.067793259E-6" INT_CONF_99="4.031768239E-6"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="360" PREVAR="360" MOYENNE="3.6E-5" INT_CONF_90="3.12083137E-6" INT_CONFIANCE="3.718705617E-6" INT_CONF_99="4.887213032E-6"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="492" PREVAR="492" MOYENNE="4.92E-5" INT_CONF_90="3.648368836E-6" INT_CONFIANCE="4.347306237E-6" INT_CONF_99="5.7133352E-6"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="647" PREVAR="647" MOYENNE="6.47E-5" INT_CONF_90="4.18374263E-6" INT_CONFIANCE="4.985244433E-6" INT_CONF_99="6.551729036E-6"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="827" PREVAR="827" MOYENNE="8.27E-5" INT_CONF_90="4.730005719E-6" INT_CONFIANCE="5.636158044E-6" INT_CONF_99="7.407175476E-6"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="1012" PREVAR="1012" MOYENNE="0.0001012" INT_CONF_90="5.232330275E-6" INT_CONFIANCE="6.234715585E-6" INT_CONF_99="8.1938143E-6"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
