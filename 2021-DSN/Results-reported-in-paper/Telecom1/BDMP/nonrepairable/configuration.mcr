<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="2982.67">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1605289902" RNG="mt19937"/>
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
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="S(UE_1)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="10000000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="761229" PREVAR="761229" MOYENNE="0.0761229" INT_CONF_90="0.0001379404484" INT_CONFIANCE="0.000164366433" INT_CONF_99="0.0002160143492"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="761400" PREVAR="761400" MOYENNE="0.07614" INT_CONF_90="0.0001379546641" INT_CONFIANCE="0.0001643833721" INT_CONF_99="0.0002160366109"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="761400" PREVAR="761400" MOYENNE="0.07614" INT_CONF_90="0.0001379546641" INT_CONFIANCE="0.0001643833721" INT_CONF_99="0.0002160366109"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="761400" PREVAR="761400" MOYENNE="0.07614" INT_CONF_90="0.0001379546641" INT_CONFIANCE="0.0001643833721" INT_CONF_99="0.0002160366109"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="761400" PREVAR="761400" MOYENNE="0.07614" INT_CONF_90="0.0001379546641" INT_CONFIANCE="0.0001643833721" INT_CONF_99="0.0002160366109"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="761400" PREVAR="761400" MOYENNE="0.07614" INT_CONF_90="0.0001379546641" INT_CONFIANCE="0.0001643833721" INT_CONF_99="0.0002160366109"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="761400" PREVAR="761400" MOYENNE="0.07614" INT_CONF_90="0.0001379546641" INT_CONFIANCE="0.0001643833721" INT_CONF_99="0.0002160366109"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="761400" PREVAR="761400" MOYENNE="0.07614" INT_CONF_90="0.0001379546641" INT_CONFIANCE="0.0001643833721" INT_CONF_99="0.0002160366109"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="761400" PREVAR="761400" MOYENNE="0.07614" INT_CONF_90="0.0001379546641" INT_CONFIANCE="0.0001643833721" INT_CONF_99="0.0002160366109"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="761400" PREVAR="761400" MOYENNE="0.07614" INT_CONF_90="0.0001379546641" INT_CONFIANCE="0.0001643833721" INT_CONF_99="0.0002160366109"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="168" PREVAR="168" MOYENNE="1.68E-5" INT_CONF_90="2.13195416E-6" INT_CONFIANCE="2.540383946E-6" INT_CONF_99="3.33863414E-6"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
