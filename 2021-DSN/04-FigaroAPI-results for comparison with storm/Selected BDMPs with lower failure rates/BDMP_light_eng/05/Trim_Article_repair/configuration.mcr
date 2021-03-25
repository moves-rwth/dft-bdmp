<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="1849.7">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595937230" RNG="mt19937"/>
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
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="2054" PREVAR="2054" MOYENNE="0.0002054" INT_CONF_90="7.453881477E-6" INT_CONFIANCE="8.881861154E-6" INT_CONF_99="1.167275715E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="4022" PREVAR="4022" MOYENNE="0.0004022" INT_CONF_90="1.04294294E-5" INT_CONFIANCE="1.242745061E-5" INT_CONF_99="1.633245673E-5"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="6045" PREVAR="6045" MOYENNE="0.0006045" INT_CONF_90="1.278479349E-5" INT_CONFIANCE="1.52340443E-5" INT_CONF_99="2.002095017E-5"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="8047" PREVAR="8047" MOYENNE="0.0008047" INT_CONF_90="1.474922028E-5" INT_CONFIANCE="1.757480677E-5" INT_CONF_99="2.309723692E-5"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="10111" PREVAR="10111" MOYENNE="0.0010111" INT_CONF_90="1.653119529E-5" INT_CONFIANCE="1.96981642E-5" INT_CONF_99="2.588780471E-5"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="12153" PREVAR="12153" MOYENNE="0.0012153" INT_CONF_90="1.812193462E-5" INT_CONFIANCE="2.159364992E-5" INT_CONF_99="2.837889798E-5"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="14103" PREVAR="14103" MOYENNE="0.0014103" INT_CONF_90="1.951983597E-5" INT_CONFIANCE="2.325935466E-5" INT_CONF_99="3.056800751E-5"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="16052" PREVAR="16052" MOYENNE="0.0016052" INT_CONF_90="2.082296651E-5" INT_CONFIANCE="2.481213283E-5" INT_CONF_99="3.260870621E-5"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="18044" PREVAR="18044" MOYENNE="0.0018044" INT_CONF_90="2.207501995E-5" INT_CONFIANCE="2.63040488E-5" INT_CONF_99="3.456941833E-5"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="20018" PREVAR="20018" MOYENNE="0.0020018" INT_CONF_90="2.324888297E-5" INT_CONFIANCE="2.7702795E-5" INT_CONF_99="3.640768447E-5"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="11" PREVAR="11" MOYENNE="1.1E-6" INT_CONF_90="5.455354455E-7" INT_CONFIANCE="6.500465692E-7" INT_CONF_99="8.54306953E-7"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="8" PREVAR="8" MOYENNE="8E-7" INT_CONF_90="4.652342609E-7" INT_CONFIANCE="5.5436166E-7" INT_CONF_99="7.285555267E-7"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="12" PREVAR="12" MOYENNE="1.2E-6" INT_CONF_90="5.69793161E-7" INT_CONFIANCE="6.789514642E-7" INT_CONF_99="8.922944664E-7"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="12" PREVAR="12" MOYENNE="1.2E-6" INT_CONF_90="5.69793161E-7" INT_CONFIANCE="6.789514642E-7" INT_CONF_99="8.922944664E-7"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="10" PREVAR="10" MOYENNE="1E-6" INT_CONF_90="5.201476644E-7" INT_CONFIANCE="6.19795116E-7" INT_CONF_99="8.145497601E-7"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="11" PREVAR="11" MOYENNE="1.1E-6" INT_CONF_90="5.455354455E-7" INT_CONFIANCE="6.500465692E-7" INT_CONF_99="8.54306953E-7"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="13" PREVAR="13" MOYENNE="1.3E-6" INT_CONF_90="5.930594954E-7" INT_CONFIANCE="7.066750538E-7" INT_CONF_99="9.287294797E-7"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="9" PREVAR="9" MOYENNE="9E-7" INT_CONF_90="4.934554264E-7" INT_CONFIANCE="5.879893041E-7" INT_CONF_99="7.727497915E-7"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="15" PREVAR="15" MOYENNE="1.5E-6" INT_CONF_90="6.37048025E-7" INT_CONFIANCE="7.590906998E-7" INT_CONF_99="9.976153918E-7"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="7" PREVAR="7" MOYENNE="7E-7" INT_CONF_90="4.351868239E-7" INT_CONFIANCE="5.185578759E-7" INT_CONF_99="6.815013261E-7"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>