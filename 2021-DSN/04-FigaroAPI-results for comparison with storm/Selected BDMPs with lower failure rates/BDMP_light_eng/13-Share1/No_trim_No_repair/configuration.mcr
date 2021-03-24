<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="89.235">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595931484" RNG="mt19937"/>
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
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="33" PREVAR="33" MOYENNE="3.3E-6" INT_CONF_90="9.448940695E-7" INT_CONFIANCE="1.125912447E-6" INT_CONF_99="1.47970142E-6"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="77" PREVAR="77" MOYENNE="7.7E-6" INT_CONF_90="1.443346357E-6" INT_CONFIANCE="1.719855887E-6" INT_CONF_99="2.260276282E-6"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="170" PREVAR="170" MOYENNE="1.7E-5" INT_CONF_90="2.144606604E-6" INT_CONFIANCE="2.555460285E-6" INT_CONF_99="3.35844783E-6"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="261" PREVAR="261" MOYENNE="2.61E-5" INT_CONF_90="2.657305313E-6" INT_CONFIANCE="3.16637941E-6" INT_CONF_99="4.161332548E-6"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="377" PREVAR="377" MOYENNE="3.77E-5" INT_CONF_90="3.193664997E-6" INT_CONFIANCE="3.805492368E-6" INT_CONF_99="5.001270284E-6"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="506" PREVAR="506" MOYENNE="5.06E-5" INT_CONF_90="3.699909832E-6" INT_CONFIANCE="4.408721216E-6" INT_CONF_99="5.794048254E-6"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="662" PREVAR="662" MOYENNE="6.62E-5" INT_CONF_90="4.231959365E-6" INT_CONFIANCE="5.042698304E-6" INT_CONF_99="6.627236305E-6"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="849" PREVAR="849" MOYENNE="8.49E-5" INT_CONF_90="4.792501731E-6" INT_CONFIANCE="5.71062675E-6" INT_CONF_99="7.505044053E-6"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="1048" PREVAR="1048" MOYENNE="0.0001048" INT_CONF_90="5.3245726E-6" INT_CONFIANCE="6.344629262E-6" INT_CONF_99="8.338265518E-6"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="10" PREVAR="10" MOYENNE="1E-6" INT_CONF_90="5.201476644E-7" INT_CONFIANCE="6.19795116E-7" INT_CONF_99="8.145497601E-7"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="33" PREVAR="33" MOYENNE="3.3E-6" INT_CONF_90="9.448940695E-7" INT_CONFIANCE="1.125912447E-6" INT_CONF_99="1.47970142E-6"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="77" PREVAR="77" MOYENNE="7.7E-6" INT_CONF_90="1.443346357E-6" INT_CONFIANCE="1.719855887E-6" INT_CONF_99="2.260276282E-6"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="170" PREVAR="170" MOYENNE="1.7E-5" INT_CONF_90="2.144606604E-6" INT_CONFIANCE="2.555460285E-6" INT_CONF_99="3.35844783E-6"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="261" PREVAR="261" MOYENNE="2.61E-5" INT_CONF_90="2.657305313E-6" INT_CONFIANCE="3.16637941E-6" INT_CONF_99="4.161332548E-6"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="377" PREVAR="377" MOYENNE="3.77E-5" INT_CONF_90="3.193664997E-6" INT_CONFIANCE="3.805492368E-6" INT_CONF_99="5.001270284E-6"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="506" PREVAR="506" MOYENNE="5.06E-5" INT_CONF_90="3.699909832E-6" INT_CONFIANCE="4.408721216E-6" INT_CONF_99="5.794048254E-6"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="662" PREVAR="662" MOYENNE="6.62E-5" INT_CONF_90="4.231959365E-6" INT_CONFIANCE="5.042698304E-6" INT_CONF_99="6.627236305E-6"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="849" PREVAR="849" MOYENNE="8.49E-5" INT_CONF_90="4.792501731E-6" INT_CONFIANCE="5.71062675E-6" INT_CONF_99="7.505044053E-6"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="1048" PREVAR="1048" MOYENNE="0.0001048" INT_CONF_90="5.3245726E-6" INT_CONFIANCE="6.344629262E-6" INT_CONF_99="8.338265518E-6"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
