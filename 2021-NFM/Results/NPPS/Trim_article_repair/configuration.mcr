<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="13602">
	<FIGARO0>#\export_fog0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1603286871" RNG="mt19937"/>
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
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="35" PREVAR="35" MOYENNE="3.5E-6" INT_CONF_90="9.731059589E-7" INT_CONFIANCE="1.159529038E-6" INT_CONF_99="1.523881159E-6"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="68" PREVAR="68" MOYENNE="6.8E-6" INT_CONF_90="1.356375228E-6" INT_CONFIANCE="1.616223237E-6" INT_CONF_99="2.124079742E-6"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="106" PREVAR="106" MOYENNE="1.06E-5" INT_CONF_90="1.693469974E-6" INT_CONFIANCE="2.017897014E-6" INT_CONF_99="2.651969153E-6"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="150" PREVAR="150" MOYENNE="1.5E-5" INT_CONF_90="2.01450914E-6" INT_CONFIANCE="2.400439359E-6" INT_CONF_99="3.154715572E-6"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="208" PREVAR="208" MOYENNE="2.08E-5" INT_CONF_90="2.372214852E-6" INT_CONFIANCE="2.826672655E-6" INT_CONF_99="3.714881698E-6"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="241" PREVAR="241" MOYENNE="2.41E-5" INT_CONF_90="2.55346646E-6" INT_CONFIANCE="3.042647597E-6" INT_CONF_99="3.998721201E-6"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="277" PREVAR="277" MOYENNE="2.77E-5" INT_CONF_90="2.737541675E-6" INT_CONFIANCE="3.261987078E-6" INT_CONF_99="4.286982461E-6"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="314" PREVAR="314" MOYENNE="3.14E-5" INT_CONF_90="2.914639695E-6" INT_CONFIANCE="3.473012707E-6" INT_CONF_99="4.564317457E-6"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="351" PREVAR="351" MOYENNE="3.51E-5" INT_CONF_90="3.081575454E-6" INT_CONFIANCE="3.671929236E-6" INT_CONF_99="4.825738379E-6"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="399" PREVAR="399" MOYENNE="3.99E-5" INT_CONF_90="3.285524071E-6" INT_CONFIANCE="3.914949373E-6" INT_CONF_99="5.145121332E-6"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="4" PREVAR="4" MOYENNE="4E-7" INT_CONF_90="3.289703665E-7" INT_CONFIANCE="3.919929674E-7" INT_CONF_99="5.151666565E-7"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="1" PREVAR="1" MOYENNE="1E-7" INT_CONF_90="1.644852079E-7" INT_CONFIANCE="1.959965131E-7" INT_CONF_99="2.575833669E-7"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="5" PREVAR="5" MOYENNE="5E-7" INT_CONF_90="3.678000326E-7" INT_CONFIANCE="4.38261439E-7" INT_CONF_99="5.75973803E-7"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="4" PREVAR="4" MOYENNE="4E-7" INT_CONF_90="3.289703665E-7" INT_CONFIANCE="3.919929674E-7" INT_CONF_99="5.151666565E-7"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="1" PREVAR="1" MOYENNE="1E-7" INT_CONF_90="1.644852079E-7" INT_CONFIANCE="1.959965131E-7" INT_CONF_99="2.575833669E-7"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="2" PREVAR="2" MOYENNE="2E-7" INT_CONF_90="2.326172002E-7" INT_CONFIANCE="2.771809131E-7" INT_CONF_99="3.642778727E-7"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="1" PREVAR="1" MOYENNE="1E-7" INT_CONF_90="1.644852079E-7" INT_CONFIANCE="1.959965131E-7" INT_CONF_99="2.575833669E-7"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
