<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="91.859">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595931437" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="20135" PREVAR="20135" MOYENNE="0.0020135" INT_CONF_90="2.331658914E-5" INT_CONFIANCE="2.7783472E-5" INT_CONF_99="3.651371215E-5"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="40116" PREVAR="40116" MOYENNE="0.0040116" INT_CONF_90="3.28785625E-5" INT_CONFIANCE="3.917728341E-5" INT_CONF_99="5.148773519E-5"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="59747" PREVAR="59747" MOYENNE="0.0059747" INT_CONF_90="4.008516178E-5" INT_CONFIANCE="4.776448919E-5" INT_CONF_99="6.277324912E-5"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="79864" PREVAR="79864" MOYENNE="0.0079864" INT_CONF_90="4.629789141E-5" INT_CONFIANCE="5.516742445E-5" INT_CONF_99="7.250236601E-5"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="99715" PREVAR="99715" MOYENNE="0.0099715" INT_CONF_90="5.168100674E-5" INT_CONFIANCE="6.158181178E-5" INT_CONF_99="8.093230928E-5"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="119423" PREVAR="119423" MOYENNE="0.0119423" INT_CONF_90="5.650176464E-5" INT_CONFIANCE="6.732610789E-5" INT_CONF_99="8.848160241E-5"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="139161" PREVAR="139161" MOYENNE="0.0139161" INT_CONF_90="6.093159887E-5" INT_CONFIANCE="7.260458899E-5" INT_CONF_99="9.541871019E-5"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="159053" PREVAR="159053" MOYENNE="0.0159053" INT_CONF_90="6.507531047E-5" INT_CONFIANCE="7.754213344E-5" INT_CONF_99="0.0001019077508"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="178760" PREVAR="178760" MOYENNE="0.017876" INT_CONF_90="6.891998985E-5" INT_CONFIANCE="8.212335848E-5" INT_CONF_99="0.0001079285077"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="198497" PREVAR="198497" MOYENNE="0.0198497" INT_CONF_90="7.255213252E-5" INT_CONFIANCE="8.645133001E-5" INT_CONF_99="0.0001136164328"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="20135" PREVAR="20135" MOYENNE="0.0020135" INT_CONF_90="2.331658914E-5" INT_CONFIANCE="2.7783472E-5" INT_CONF_99="3.651371215E-5"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="40116" PREVAR="40116" MOYENNE="0.0040116" INT_CONF_90="3.28785625E-5" INT_CONFIANCE="3.917728341E-5" INT_CONF_99="5.148773519E-5"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="59747" PREVAR="59747" MOYENNE="0.0059747" INT_CONF_90="4.008516178E-5" INT_CONFIANCE="4.776448919E-5" INT_CONF_99="6.277324912E-5"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="79864" PREVAR="79864" MOYENNE="0.0079864" INT_CONF_90="4.629789141E-5" INT_CONFIANCE="5.516742445E-5" INT_CONF_99="7.250236601E-5"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="99715" PREVAR="99715" MOYENNE="0.0099715" INT_CONF_90="5.168100674E-5" INT_CONFIANCE="6.158181178E-5" INT_CONF_99="8.093230928E-5"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="119423" PREVAR="119423" MOYENNE="0.0119423" INT_CONF_90="5.650176464E-5" INT_CONFIANCE="6.732610789E-5" INT_CONF_99="8.848160241E-5"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="139161" PREVAR="139161" MOYENNE="0.0139161" INT_CONF_90="6.093159887E-5" INT_CONFIANCE="7.260458899E-5" INT_CONF_99="9.541871019E-5"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="159053" PREVAR="159053" MOYENNE="0.0159053" INT_CONF_90="6.507531047E-5" INT_CONFIANCE="7.754213344E-5" INT_CONF_99="0.0001019077508"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="178760" PREVAR="178760" MOYENNE="0.017876" INT_CONF_90="6.891998985E-5" INT_CONFIANCE="8.212335848E-5" INT_CONF_99="0.0001079285077"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="198497" PREVAR="198497" MOYENNE="0.0198497" INT_CONF_90="7.255213252E-5" INT_CONFIANCE="8.645133001E-5" INT_CONF_99="0.0001136164328"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
