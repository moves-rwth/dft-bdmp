<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="1030.48">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595931604" RNG="mt19937"/>
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
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="2127" PREVAR="2127" MOYENNE="0.0002127" INT_CONF_90="7.58515435E-6" INT_CONFIANCE="9.038282669E-6" INT_CONF_99="1.18783301E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="4231" PREVAR="4231" MOYENNE="0.0004231" INT_CONF_90="1.069686434E-5" INT_CONFIANCE="1.274611948E-5" INT_CONF_99="1.675125908E-5"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="6288" PREVAR="6288" MOYENNE="0.0006288" INT_CONF_90="1.303906803E-5" INT_CONFIANCE="1.553703157E-5" INT_CONF_99="2.041914338E-5"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="8329" PREVAR="8329" MOYENNE="0.0008329" INT_CONF_90="1.500521987E-5" INT_CONFIANCE="1.787984957E-5" INT_CONF_99="2.349813156E-5"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="10441" PREVAR="10441" MOYENNE="0.0010441" INT_CONF_90="1.679852213E-5" INT_CONFIANCE="2.001670427E-5" INT_CONF_99="2.630643779E-5"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="12488" PREVAR="12488" MOYENNE="0.0012488" INT_CONF_90="1.836969611E-5" INT_CONFIANCE="2.18888764E-5" INT_CONF_99="2.876689177E-5"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="14536" PREVAR="14536" MOYENNE="0.0014536" INT_CONF_90="1.981679662E-5" INT_CONFIANCE="2.361320563E-5" INT_CONF_99="3.103304703E-5"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="16593" PREVAR="16593" MOYENNE="0.0016593" INT_CONF_90="2.117038299E-5" INT_CONFIANCE="2.522610573E-5" INT_CONF_99="3.315275943E-5"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="18670" PREVAR="18670" MOYENNE="0.001867" INT_CONF_90="2.245397506E-5" INT_CONFIANCE="2.675560236E-5" INT_CONF_99="3.516286096E-5"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="20767" PREVAR="20767" MOYENNE="0.0020767" INT_CONF_90="2.367894412E-5" INT_CONFIANCE="2.821524526E-5" INT_CONF_99="3.708115902E-5"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="7" PREVAR="7" MOYENNE="7E-7" INT_CONF_90="4.351868239E-7" INT_CONFIANCE="5.185578759E-7" INT_CONF_99="6.815013261E-7"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="16" PREVAR="16" MOYENNE="1.6E-6" INT_CONF_90="6.579403382E-7" INT_CONFIANCE="7.839854644E-7" INT_CONF_99="1.030332695E-6"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="15" PREVAR="15" MOYENNE="1.5E-6" INT_CONF_90="6.37048025E-7" INT_CONFIANCE="7.590906998E-7" INT_CONF_99="9.976153918E-7"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="13" PREVAR="13" MOYENNE="1.3E-6" INT_CONF_90="5.930594954E-7" INT_CONFIANCE="7.066750538E-7" INT_CONF_99="9.287294797E-7"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="20" PREVAR="20" MOYENNE="2E-6" INT_CONF_90="7.355995136E-7" INT_CONFIANCE="8.765222206E-7" INT_CONF_99="1.151946742E-6"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="12" PREVAR="12" MOYENNE="1.2E-6" INT_CONF_90="5.69793161E-7" INT_CONFIANCE="6.789514642E-7" INT_CONF_99="8.922944664E-7"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="11" PREVAR="11" MOYENNE="1.1E-6" INT_CONF_90="5.455354455E-7" INT_CONFIANCE="6.500465692E-7" INT_CONF_99="8.54306953E-7"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="11" PREVAR="11" MOYENNE="1.1E-6" INT_CONF_90="5.455354455E-7" INT_CONFIANCE="6.500465692E-7" INT_CONF_99="8.54306953E-7"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="13" PREVAR="13" MOYENNE="1.3E-6" INT_CONF_90="5.930594954E-7" INT_CONFIANCE="7.066750538E-7" INT_CONF_99="9.287294797E-7"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="12" PREVAR="12" MOYENNE="1.2E-6" INT_CONF_90="5.69793161E-7" INT_CONFIANCE="6.789514642E-7" INT_CONF_99="8.922944664E-7"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
