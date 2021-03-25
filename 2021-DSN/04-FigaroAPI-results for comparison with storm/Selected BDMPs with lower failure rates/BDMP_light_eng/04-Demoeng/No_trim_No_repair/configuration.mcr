<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="116.281">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595915865" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="11" PREVAR="11" MOYENNE="1.1E-6" INT_CONF_90="5.455354455E-7" INT_CONFIANCE="6.500465692E-7" INT_CONF_99="8.54306953E-7"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="41" PREVAR="41" MOYENNE="4.1E-6" INT_CONF_90="1.053217115E-6" INT_CONFIANCE="1.254987514E-6" INT_CONF_99="1.649335001E-6"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="84" PREVAR="84" MOYENNE="8.4E-6" INT_CONF_90="1.507525576E-6" INT_CONFIANCE="1.79633026E-6" INT_CONF_99="2.360780756E-6"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="158" PREVAR="158" MOYENNE="1.58E-5" INT_CONF_90="2.067530773E-6" INT_CONFIANCE="2.463618628E-6" INT_CONF_99="3.237747299E-6"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="253" PREVAR="253" MOYENNE="2.53E-5" INT_CONF_90="2.616264429E-6" INT_CONFIANCE="3.117476106E-6" INT_CONF_99="4.09706264E-6"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="368" PREVAR="368" MOYENNE="3.68E-5" INT_CONF_90="3.155315479E-6" INT_CONFIANCE="3.75979603E-6" INT_CONF_99="4.941215049E-6"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="496" PREVAR="496" MOYENNE="4.96E-5" INT_CONF_90="3.663168849E-6" INT_CONFIANCE="4.364941567E-6" INT_CONF_99="5.736511978E-6"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="637" PREVAR="637" MOYENNE="6.37E-5" INT_CONF_90="4.151286941E-6" INT_CONFIANCE="4.946571036E-6" INT_CONF_99="6.50090352E-6"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="811" PREVAR="811" MOYENNE="8.11E-5" INT_CONF_90="4.68403019E-6" INT_CONFIANCE="5.58137474E-6" INT_CONF_99="7.33517793E-6"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="991" PREVAR="991" MOYENNE="9.91E-5" INT_CONF_90="5.177763107E-6" INT_CONFIANCE="6.169694695E-6" INT_CONF_99="8.108362271E-6"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="11" PREVAR="11" MOYENNE="1.1E-6" INT_CONF_90="5.455354455E-7" INT_CONFIANCE="6.500465692E-7" INT_CONF_99="8.54306953E-7"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="41" PREVAR="41" MOYENNE="4.1E-6" INT_CONF_90="1.053217115E-6" INT_CONFIANCE="1.254987514E-6" INT_CONF_99="1.649335001E-6"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="84" PREVAR="84" MOYENNE="8.4E-6" INT_CONF_90="1.507525576E-6" INT_CONFIANCE="1.79633026E-6" INT_CONF_99="2.360780756E-6"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="158" PREVAR="158" MOYENNE="1.58E-5" INT_CONF_90="2.067530773E-6" INT_CONFIANCE="2.463618628E-6" INT_CONF_99="3.237747299E-6"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="253" PREVAR="253" MOYENNE="2.53E-5" INT_CONF_90="2.616264429E-6" INT_CONFIANCE="3.117476106E-6" INT_CONF_99="4.09706264E-6"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="368" PREVAR="368" MOYENNE="3.68E-5" INT_CONF_90="3.155315479E-6" INT_CONFIANCE="3.75979603E-6" INT_CONF_99="4.941215049E-6"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="496" PREVAR="496" MOYENNE="4.96E-5" INT_CONF_90="3.663168849E-6" INT_CONFIANCE="4.364941567E-6" INT_CONF_99="5.736511978E-6"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="637" PREVAR="637" MOYENNE="6.37E-5" INT_CONF_90="4.151286941E-6" INT_CONFIANCE="4.946571036E-6" INT_CONF_99="6.50090352E-6"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="811" PREVAR="811" MOYENNE="8.11E-5" INT_CONF_90="4.68403019E-6" INT_CONFIANCE="5.58137474E-6" INT_CONF_99="7.33517793E-6"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="991" PREVAR="991" MOYENNE="9.91E-5" INT_CONF_90="5.177763107E-6" INT_CONFIANCE="6.169694695E-6" INT_CONF_99="8.108362271E-6"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>