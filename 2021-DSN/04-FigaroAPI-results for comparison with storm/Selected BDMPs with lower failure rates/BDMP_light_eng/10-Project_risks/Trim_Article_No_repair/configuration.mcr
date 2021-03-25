<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="92.047">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595931405" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="19819" PREVAR="19819" MOYENNE="0.0019819" INT_CONF_90="2.313326578E-5" INT_CONFIANCE="2.756502841E-5" INT_CONF_99="3.622662829E-5"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="39935" PREVAR="39935" MOYENNE="0.0039935" INT_CONF_90="3.280460408E-5" INT_CONFIANCE="3.908915637E-5" INT_CONF_99="5.13719165E-5"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="59842" PREVAR="59842" MOYENNE="0.0059842" INT_CONF_90="4.011682588E-5" INT_CONFIANCE="4.780221936E-5" INT_CONF_99="6.282283502E-5"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="79674" PREVAR="79674" MOYENNE="0.0079674" INT_CONF_90="4.624322909E-5" INT_CONFIANCE="5.510229017E-5" INT_CONF_99="7.241676497E-5"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="99361" PREVAR="99361" MOYENNE="0.0099361" INT_CONF_90="5.159011066E-5" INT_CONFIANCE="6.147350226E-5" INT_CONF_99="8.078996628E-5"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="119052" PREVAR="119052" MOYENNE="0.0119052" INT_CONF_90="5.641499118E-5" INT_CONFIANCE="6.722271077E-5" INT_CONF_99="8.834571542E-5"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="138812" PREVAR="138812" MOYENNE="0.0138812" INT_CONF_90="6.085622303E-5" INT_CONFIANCE="7.251477301E-5" INT_CONF_99="9.530067185E-5"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="158484" PREVAR="158484" MOYENNE="0.0158484" INT_CONF_90="6.496068312E-5" INT_CONFIANCE="7.740554631E-5" INT_CONF_99="0.0001017282446"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="178117" PREVAR="178117" MOYENNE="0.0178117" INT_CONF_90="6.879817754E-5" INT_CONFIANCE="8.197820993E-5" INT_CONF_99="0.00010773775"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="197602" PREVAR="197602" MOYENNE="0.0197602" INT_CONF_90="7.239168805E-5" INT_CONFIANCE="8.626014835E-5" INT_CONF_99="0.0001133651772"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="19819" PREVAR="19819" MOYENNE="0.0019819" INT_CONF_90="2.313326578E-5" INT_CONFIANCE="2.756502841E-5" INT_CONF_99="3.622662829E-5"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="39935" PREVAR="39935" MOYENNE="0.0039935" INT_CONF_90="3.280460408E-5" INT_CONFIANCE="3.908915637E-5" INT_CONF_99="5.13719165E-5"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="59842" PREVAR="59842" MOYENNE="0.0059842" INT_CONF_90="4.011682588E-5" INT_CONFIANCE="4.780221936E-5" INT_CONF_99="6.282283502E-5"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="79674" PREVAR="79674" MOYENNE="0.0079674" INT_CONF_90="4.624322909E-5" INT_CONFIANCE="5.510229017E-5" INT_CONF_99="7.241676497E-5"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="99361" PREVAR="99361" MOYENNE="0.0099361" INT_CONF_90="5.159011066E-5" INT_CONFIANCE="6.147350226E-5" INT_CONF_99="8.078996628E-5"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="119052" PREVAR="119052" MOYENNE="0.0119052" INT_CONF_90="5.641499118E-5" INT_CONFIANCE="6.722271077E-5" INT_CONF_99="8.834571542E-5"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="138812" PREVAR="138812" MOYENNE="0.0138812" INT_CONF_90="6.085622303E-5" INT_CONFIANCE="7.251477301E-5" INT_CONF_99="9.530067185E-5"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="158484" PREVAR="158484" MOYENNE="0.0158484" INT_CONF_90="6.496068312E-5" INT_CONFIANCE="7.740554631E-5" INT_CONF_99="0.0001017282446"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="178117" PREVAR="178117" MOYENNE="0.0178117" INT_CONF_90="6.879817754E-5" INT_CONFIANCE="8.197820993E-5" INT_CONF_99="0.00010773775"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="197602" PREVAR="197602" MOYENNE="0.0197602" INT_CONF_90="7.239168805E-5" INT_CONFIANCE="8.626014835E-5" INT_CONF_99="0.0001133651772"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>