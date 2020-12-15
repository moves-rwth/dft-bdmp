<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="13496.1">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1603302260" RNG="mt19937"/>
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
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="79612" PREVAR="79612" MOYENNE="0.0079612" INT_CONF_90="4.622537746E-5" INT_CONFIANCE="5.508101862E-5" INT_CONF_99="7.238880938E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="391111" PREVAR="391111" MOYENNE="0.0391111" INT_CONF_90="0.000100835504" INT_CONFIANCE="0.0001201530973" INT_CONF_99="0.0001579081119"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="810102" PREVAR="810102" MOYENNE="0.0810102" INT_CONF_90="0.0001419227663" INT_CONFIANCE="0.0001691116646" INT_CONF_99="0.0002222506476"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="1252237" PREVAR="1252237" MOYENNE="0.1252237" INT_CONF_90="0.0001721546033" INT_CONFIANCE="0.0002051351753" INT_CONF_99="0.0002695936182"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="1688540" PREVAR="1688540" MOYENNE="0.168854" INT_CONF_90="0.0001948593305" INT_CONFIANCE="0.0002321895677" INT_CONF_99="0.0003051491562"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="2109203" PREVAR="2109203" MOYENNE="0.2109203" INT_CONF_90="0.0002122005452" INT_CONFIANCE="0.0002528529311" INT_CONF_99="0.0003323054491"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="2511168" PREVAR="2511168" MOYENNE="0.2511168" INT_CONF_90="0.0002255650443" INT_CONFIANCE="0.0002687777382" INT_CONF_99="0.0003532342165"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="2894702" PREVAR="2894702" MOYENNE="0.2894702" INT_CONF_90="0.000235895659" INT_CONFIANCE="0.0002810874437" INT_CONF_99="0.0003694119298"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="3258212" PREVAR="3258212" MOYENNE="0.3258212" INT_CONF_90="0.0002437833749" INT_CONFIANCE="0.0002904862513" INT_CONF_99="0.0003817640705"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="3605160" PREVAR="3605160" MOYENNE="0.360516" INT_CONF_90="0.0002497491295" INT_CONFIANCE="0.0002975948972" INT_CONF_99="0.0003911064251"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="79612" PREVAR="79612" MOYENNE="0.0079612" INT_CONF_90="4.622537746E-5" INT_CONFIANCE="5.508101862E-5" INT_CONF_99="7.238880938E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="391111" PREVAR="391111" MOYENNE="0.0391111" INT_CONF_90="0.000100835504" INT_CONFIANCE="0.0001201530973" INT_CONF_99="0.0001579081119"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="810102" PREVAR="810102" MOYENNE="0.0810102" INT_CONF_90="0.0001419227663" INT_CONFIANCE="0.0001691116646" INT_CONF_99="0.0002222506476"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="1252237" PREVAR="1252237" MOYENNE="0.1252237" INT_CONF_90="0.0001721546033" INT_CONFIANCE="0.0002051351753" INT_CONF_99="0.0002695936182"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="1688540" PREVAR="1688540" MOYENNE="0.168854" INT_CONF_90="0.0001948593305" INT_CONFIANCE="0.0002321895677" INT_CONF_99="0.0003051491562"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="2109203" PREVAR="2109203" MOYENNE="0.2109203" INT_CONF_90="0.0002122005452" INT_CONFIANCE="0.0002528529311" INT_CONF_99="0.0003323054491"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="2511168" PREVAR="2511168" MOYENNE="0.2511168" INT_CONF_90="0.0002255650443" INT_CONFIANCE="0.0002687777382" INT_CONF_99="0.0003532342165"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="2894702" PREVAR="2894702" MOYENNE="0.2894702" INT_CONF_90="0.000235895659" INT_CONFIANCE="0.0002810874437" INT_CONF_99="0.0003694119298"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="3258212" PREVAR="3258212" MOYENNE="0.3258212" INT_CONF_90="0.0002437833749" INT_CONFIANCE="0.0002904862513" INT_CONF_99="0.0003817640705"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="3605160" PREVAR="3605160" MOYENNE="0.360516" INT_CONF_90="0.0002497491295" INT_CONFIANCE="0.0002975948972" INT_CONF_99="0.0003911064251"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>