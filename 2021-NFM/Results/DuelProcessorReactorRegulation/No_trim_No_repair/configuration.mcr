<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="2532.48">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1603142067" RNG="mt19937"/>
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
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="76728" PREVAR="76728" MOYENNE="0.0076728" INT_CONF_90="4.538697691E-5" INT_CONFIANCE="5.408200122E-5" INT_CONF_99="7.10758765E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="280872" PREVAR="280872" MOYENNE="0.0280872" INT_CONF_90="8.593988023E-5" INT_CONFIANCE="0.0001024038397" INT_CONF_99="0.0001345816075"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="579220" PREVAR="579220" MOYENNE="0.057922" INT_CONF_90="0.0001215044197" INT_CONFIANCE="0.0001447816669" INT_CONF_99="0.0001902755749"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="942470" PREVAR="942470" MOYENNE="0.094247" INT_CONF_90="0.000151972682" INT_CONFIANCE="0.0001810868961" INT_CONF_99="0.0002379887869"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="1351657" PREVAR="1351657" MOYENNE="0.1351657" INT_CONF_90="0.0001778388215" INT_CONFIANCE="0.0002119083494" INT_CONF_99="0.0002784950876"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="1789566" PREVAR="1789566" MOYENNE="0.1789566" INT_CONF_90="0.0001993810079" INT_CONFIANCE="0.0002375774868" INT_CONF_99="0.0003122300901"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="2242365" PREVAR="2242365" MOYENNE="0.2242365" INT_CONF_90="0.0002169425266" INT_CONFIANCE="0.0002585033591" INT_CONF_99="0.0003397313785"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="2698846" PREVAR="2698846" MOYENNE="0.2698846" INT_CONF_90="0.0002308934836" INT_CONFIANCE="0.000275126975" INT_CONF_99="0.0003615785373"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="3153234" PREVAR="3153234" MOYENNE="0.3153234" INT_CONF_90="0.0002416838958" INT_CONFIANCE="0.0002879845638" INT_CONF_99="0.0003784762921"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="3599530" PREVAR="3599530" MOYENNE="0.359953" INT_CONF_90="0.0002496638721" INT_CONFIANCE="0.0002974933065" INT_CONF_99="0.0003909729122"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="76728" PREVAR="76728" MOYENNE="0.0076728" INT_CONF_90="4.538697691E-5" INT_CONFIANCE="5.408200122E-5" INT_CONF_99="7.10758765E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="280872" PREVAR="280872" MOYENNE="0.0280872" INT_CONF_90="8.593988023E-5" INT_CONFIANCE="0.0001024038397" INT_CONF_99="0.0001345816075"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="579220" PREVAR="579220" MOYENNE="0.057922" INT_CONF_90="0.0001215044197" INT_CONFIANCE="0.0001447816669" INT_CONF_99="0.0001902755749"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="942470" PREVAR="942470" MOYENNE="0.094247" INT_CONF_90="0.000151972682" INT_CONFIANCE="0.0001810868961" INT_CONF_99="0.0002379887869"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="1351657" PREVAR="1351657" MOYENNE="0.1351657" INT_CONF_90="0.0001778388215" INT_CONFIANCE="0.0002119083494" INT_CONF_99="0.0002784950876"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="1789566" PREVAR="1789566" MOYENNE="0.1789566" INT_CONF_90="0.0001993810079" INT_CONFIANCE="0.0002375774868" INT_CONF_99="0.0003122300901"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="2242365" PREVAR="2242365" MOYENNE="0.2242365" INT_CONF_90="0.0002169425266" INT_CONFIANCE="0.0002585033591" INT_CONF_99="0.0003397313785"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="2698846" PREVAR="2698846" MOYENNE="0.2698846" INT_CONF_90="0.0002308934836" INT_CONFIANCE="0.000275126975" INT_CONF_99="0.0003615785373"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="3153234" PREVAR="3153234" MOYENNE="0.3153234" INT_CONF_90="0.0002416838958" INT_CONFIANCE="0.0002879845638" INT_CONF_99="0.0003784762921"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="3599530" PREVAR="3599530" MOYENNE="0.359953" INT_CONF_90="0.0002496638721" INT_CONFIANCE="0.0002974933065" INT_CONF_99="0.0003909729122"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>