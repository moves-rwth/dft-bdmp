<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="139.156">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595921098" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="19894" PREVAR="19894" MOYENNE="0.0019894" INT_CONF_90="2.317690836E-5" INT_CONFIANCE="2.761703184E-5" INT_CONF_99="3.629497245E-5"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="39894" PREVAR="39894" MOYENNE="0.0039894" INT_CONF_90="3.278782751E-5" INT_CONFIANCE="3.906916583E-5" INT_CONF_99="5.134564445E-5"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="60036" PREVAR="60036" MOYENNE="0.0060036" INT_CONF_90="4.018140793E-5" INT_CONFIANCE="4.787917373E-5" INT_CONF_99="6.292397031E-5"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="79983" PREVAR="79983" MOYENNE="0.0079983" INT_CONF_90="4.633209337E-5" INT_CONFIANCE="5.520817865E-5" INT_CONF_99="7.255592618E-5"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="100058" PREVAR="100058" MOYENNE="0.0100058" INT_CONF_90="5.176891988E-5" INT_CONFIANCE="6.168656691E-5" INT_CONF_99="8.106998101E-5"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="119834" PREVAR="119834" MOYENNE="0.0119834" INT_CONF_90="5.659773072E-5" INT_CONFIANCE="6.74404587E-5" INT_CONF_99="8.863188503E-5"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="139765" PREVAR="139765" MOYENNE="0.0139765" INT_CONF_90="6.106181612E-5" INT_CONFIANCE="7.275975266E-5" INT_CONF_99="9.562263004E-5"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="159405" PREVAR="159405" MOYENNE="0.0159405" INT_CONF_90="6.514611458E-5" INT_CONFIANCE="7.762650188E-5" INT_CONF_99="0.0001020186298"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="179269" PREVAR="179269" MOYENNE="0.0179269" INT_CONF_90="6.901625275E-5" INT_CONFIANCE="8.223806297E-5" INT_CONF_99="0.0001080792551"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="198908" PREVAR="198908" MOYENNE="0.0198908" INT_CONF_90="7.262568273E-5" INT_CONFIANCE="8.653897063E-5" INT_CONF_99="0.0001137316122"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="19894" PREVAR="19894" MOYENNE="0.0019894" INT_CONF_90="2.317690836E-5" INT_CONFIANCE="2.761703184E-5" INT_CONF_99="3.629497245E-5"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="39894" PREVAR="39894" MOYENNE="0.0039894" INT_CONF_90="3.278782751E-5" INT_CONFIANCE="3.906916583E-5" INT_CONF_99="5.134564445E-5"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="60036" PREVAR="60036" MOYENNE="0.0060036" INT_CONF_90="4.018140793E-5" INT_CONFIANCE="4.787917373E-5" INT_CONF_99="6.292397031E-5"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="79983" PREVAR="79983" MOYENNE="0.0079983" INT_CONF_90="4.633209337E-5" INT_CONFIANCE="5.520817865E-5" INT_CONF_99="7.255592618E-5"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="100058" PREVAR="100058" MOYENNE="0.0100058" INT_CONF_90="5.176891988E-5" INT_CONFIANCE="6.168656691E-5" INT_CONF_99="8.106998101E-5"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="119834" PREVAR="119834" MOYENNE="0.0119834" INT_CONF_90="5.659773072E-5" INT_CONFIANCE="6.74404587E-5" INT_CONF_99="8.863188503E-5"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="139765" PREVAR="139765" MOYENNE="0.0139765" INT_CONF_90="6.106181612E-5" INT_CONFIANCE="7.275975266E-5" INT_CONF_99="9.562263004E-5"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="159405" PREVAR="159405" MOYENNE="0.0159405" INT_CONF_90="6.514611458E-5" INT_CONFIANCE="7.762650188E-5" INT_CONF_99="0.0001020186298"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="179269" PREVAR="179269" MOYENNE="0.0179269" INT_CONF_90="6.901625275E-5" INT_CONFIANCE="8.223806297E-5" INT_CONF_99="0.0001080792551"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="198908" PREVAR="198908" MOYENNE="0.0198908" INT_CONF_90="7.262568273E-5" INT_CONFIANCE="8.653897063E-5" INT_CONF_99="0.0001137316122"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
