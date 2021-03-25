<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="118.656">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595931310" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="50806" PREVAR="50806" MOYENNE="0.0050806" INT_CONF_90="3.698097196E-5" INT_CONFIANCE="4.406561324E-5" INT_CONF_99="5.791209671E-5"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="101535" PREVAR="101535" MOYENNE="0.0101535" INT_CONF_90="5.214572168E-5" INT_CONFIANCE="6.213555463E-5" INT_CONF_99="8.166005155E-5"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="152237" PREVAR="152237" MOYENNE="0.0152237" INT_CONF_90="6.36877304E-5" INT_CONFIANCE="7.588872728E-5" INT_CONF_99="9.973480431E-5"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="202303" PREVAR="202303" MOYENNE="0.0202303" INT_CONF_90="7.323016853E-5" INT_CONFIANCE="8.725926099E-5" INT_CONF_99="0.0001146782352"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="252048" PREVAR="252048" MOYENNE="0.0252048" INT_CONF_90="8.153145423E-5" INT_CONFIANCE="9.71508681E-5" INT_CONF_99="0.000127678025"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="301609" PREVAR="301609" MOYENNE="0.0301609" INT_CONF_90="8.896083749E-5" INT_CONFIANCE="0.0001060035378" INT_CONF_99="0.000139312418"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="350983" PREVAR="350983" MOYENNE="0.0350983" INT_CONF_90="9.572192999E-5" INT_CONFIANCE="0.0001140598887" INT_CONF_99="0.0001499002696"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="400014" PREVAR="400014" MOYENNE="0.0400014" INT_CONF_90="0.0001019294698" INT_CONFIANCE="0.0001214566399" INT_CONF_99="0.0001596212593"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="449184" PREVAR="449184" MOYENNE="0.0449184" INT_CONF_90="0.0001077356033" INT_CONFIANCE="0.0001283750853" INT_CONF_99="0.0001687136478"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="498434" PREVAR="498434" MOYENNE="0.0498434" INT_CONF_90="0.0001131952738" INT_CONFIANCE="0.0001348806938" INT_CONF_99="0.0001772634762"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="50806" PREVAR="50806" MOYENNE="0.0050806" INT_CONF_90="3.698097196E-5" INT_CONFIANCE="4.406561324E-5" INT_CONF_99="5.791209671E-5"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="101535" PREVAR="101535" MOYENNE="0.0101535" INT_CONF_90="5.214572168E-5" INT_CONFIANCE="6.213555463E-5" INT_CONF_99="8.166005155E-5"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="152237" PREVAR="152237" MOYENNE="0.0152237" INT_CONF_90="6.36877304E-5" INT_CONFIANCE="7.588872728E-5" INT_CONF_99="9.973480431E-5"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="202303" PREVAR="202303" MOYENNE="0.0202303" INT_CONF_90="7.323016853E-5" INT_CONFIANCE="8.725926099E-5" INT_CONF_99="0.0001146782352"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="252048" PREVAR="252048" MOYENNE="0.0252048" INT_CONF_90="8.153145423E-5" INT_CONFIANCE="9.71508681E-5" INT_CONF_99="0.000127678025"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="301609" PREVAR="301609" MOYENNE="0.0301609" INT_CONF_90="8.896083749E-5" INT_CONFIANCE="0.0001060035378" INT_CONF_99="0.000139312418"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="350983" PREVAR="350983" MOYENNE="0.0350983" INT_CONF_90="9.572192999E-5" INT_CONFIANCE="0.0001140598887" INT_CONF_99="0.0001499002696"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="400014" PREVAR="400014" MOYENNE="0.0400014" INT_CONF_90="0.0001019294698" INT_CONFIANCE="0.0001214566399" INT_CONF_99="0.0001596212593"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="449184" PREVAR="449184" MOYENNE="0.0449184" INT_CONF_90="0.0001077356033" INT_CONFIANCE="0.0001283750853" INT_CONF_99="0.0001687136478"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="498434" PREVAR="498434" MOYENNE="0.0498434" INT_CONF_90="0.0001131952738" INT_CONFIANCE="0.0001348806938" INT_CONF_99="0.0001772634762"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>