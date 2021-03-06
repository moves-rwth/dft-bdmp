<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="1086.75">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1602589682" RNG="mt19937"/>
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
		<GROUPE NOM="ALL"/>
	</GROUPES>
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="S(UE_1)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="10000000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="2140" PREVAR="2140" MOYENNE="0.000214" INT_CONF_90="7.608293926E-6" INT_CONFIANCE="9.065855216E-6" INT_CONF_99="1.191456661E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="4209" PREVAR="4209" MOYENNE="0.0004209" INT_CONF_90="1.066902951E-5" INT_CONFIANCE="1.271295217E-5" INT_CONF_99="1.67076698E-5"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="6384" PREVAR="6384" MOYENNE="0.0006384" INT_CONF_90="1.313816277E-5" INT_CONFIANCE="1.565511041E-5" INT_CONF_99="2.057432545E-5"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="8474" PREVAR="8474" MOYENNE="0.0008474" INT_CONF_90="1.513515981E-5" INT_CONFIANCE="1.803468279E-5" INT_CONF_99="2.370161714E-5"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="10521" PREVAR="10521" MOYENNE="0.0010521" INT_CONF_90="1.686268779E-5" INT_CONFIANCE="2.009316248E-5" INT_CONF_99="2.640692103E-5"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="12662" PREVAR="12662" MOYENNE="0.0012662" INT_CONF_90="1.849706822E-5" INT_CONFIANCE="2.204064986E-5" INT_CONF_99="2.896635613E-5"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="14759" PREVAR="14759" MOYENNE="0.0014759" INT_CONF_90="1.996800202E-5" INT_CONFIANCE="2.379337825E-5" INT_CONF_99="3.126983426E-5"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="16871" PREVAR="16871" MOYENNE="0.0016871" INT_CONF_90="2.134669397E-5" INT_CONFIANCE="2.543619355E-5" INT_CONF_99="3.342886193E-5"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="18910" PREVAR="18910" MOYENNE="0.001891" INT_CONF_90="2.259756374E-5" INT_CONFIANCE="2.692669909E-5" INT_CONF_99="3.538772042E-5"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="21006" PREVAR="21006" MOYENNE="0.0021006" INT_CONF_90="2.381452542E-5" INT_CONFIANCE="2.837680058E-5" INT_CONF_99="3.729347894E-5"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="15" PREVAR="15" MOYENNE="1.5E-6" INT_CONF_90="6.37048025E-7" INT_CONFIANCE="7.590906998E-7" INT_CONF_99="9.976153918E-7"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="10" PREVAR="10" MOYENNE="1E-6" INT_CONF_90="5.201476644E-7" INT_CONFIANCE="6.19795116E-7" INT_CONF_99="8.145497601E-7"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="13" PREVAR="13" MOYENNE="1.3E-6" INT_CONF_90="5.930594954E-7" INT_CONFIANCE="7.066750538E-7" INT_CONF_99="9.287294797E-7"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="9" PREVAR="9" MOYENNE="9E-7" INT_CONF_90="4.934554264E-7" INT_CONFIANCE="5.879893041E-7" INT_CONF_99="7.727497915E-7"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="10" PREVAR="10" MOYENNE="1E-6" INT_CONF_90="5.201476644E-7" INT_CONFIANCE="6.19795116E-7" INT_CONF_99="8.145497601E-7"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="12" PREVAR="12" MOYENNE="1.2E-6" INT_CONF_90="5.69793161E-7" INT_CONFIANCE="6.789514642E-7" INT_CONF_99="8.922944664E-7"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="7" PREVAR="7" MOYENNE="7E-7" INT_CONF_90="4.351868239E-7" INT_CONFIANCE="5.185578759E-7" INT_CONF_99="6.815013261E-7"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="8" PREVAR="8" MOYENNE="8E-7" INT_CONF_90="4.652342609E-7" INT_CONFIANCE="5.5436166E-7" INT_CONF_99="7.285555267E-7"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="9" PREVAR="9" MOYENNE="9E-7" INT_CONF_90="4.934554264E-7" INT_CONFIANCE="5.879893041E-7" INT_CONF_99="7.727497915E-7"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="7" PREVAR="7" MOYENNE="7E-7" INT_CONF_90="4.351868239E-7" INT_CONFIANCE="5.185578759E-7" INT_CONF_99="6.815013261E-7"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
