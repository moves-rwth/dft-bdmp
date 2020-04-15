<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="1.609">
	<FIGARO0>#\19.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000" GRAINE="1576154830" RNG="mt19937"/>
	<HISTOIRE>
		<INTERVALLE T0="0" T1="10" N="10"/>
		<INSTANTS_ORDONNES>
			<INSTANT VALEUR="0"/>
			<INSTANT VALEUR="1"/>
			<INSTANT VALEUR="2"/>
			<INSTANT VALEUR="3"/>
			<INSTANT VALEUR="4"/>
			<INSTANT VALEUR="5"/>
			<INSTANT VALEUR="6"/>
			<INSTANT VALEUR="7"/>
			<INSTANT VALEUR="8"/>
			<INSTANT VALEUR="9"/>
			<INSTANT VALEUR="10"/>
		</INSTANTS_ORDONNES>
	</HISTOIRE>
	<GROUPES>
		<GROUPE NOM="ALL"/>
	</GROUPES>
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="S(UE_1)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="10000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="10000" PREMOY="36" PREVAR="36" MOYENNE="0.0036" INT_CONF_90="0.0009851332548" INT_CONFIANCE="0.001173860466" INT_CONF_99="0.00154271587"/>
				<VALEURS INSTANT="2" NB_VAL="10000" PREMOY="166" PREVAR="166" MOYENNE="0.0166" INT_CONF_90="0.002101580431" INT_CONFIANCE="0.00250419136" INT_CONF_99="0.003291068966"/>
				<VALEURS INSTANT="3" NB_VAL="10000" PREMOY="343" PREVAR="343" MOYENNE="0.0343" INT_CONF_90="0.002993608791" INT_CONFIANCE="0.003567110333" INT_CONF_99="0.004687982837"/>
				<VALEURS INSTANT="4" NB_VAL="10000" PREMOY="592" PREVAR="592" MOYENNE="0.0592" INT_CONF_90="0.003881828798" INT_CONFIANCE="0.004625491365" INT_CONF_99="0.006078932835"/>
				<VALEURS INSTANT="5" NB_VAL="10000" PREMOY="822" PREVAR="822" MOYENNE="0.0822" INT_CONF_90="0.004517901991" INT_CONFIANCE="0.005383420478" INT_CONF_99="0.007075021643"/>
				<VALEURS INSTANT="6" NB_VAL="10000" PREMOY="1119" PREVAR="1119" MOYENNE="0.1119" INT_CONF_90="0.005185287585" INT_CONFIANCE="0.006178660677" INT_CONF_99="0.008120145582"/>
				<VALEURS INSTANT="7" NB_VAL="10000" PREMOY="1412" PREVAR="1412" MOYENNE="0.1412" INT_CONF_90="0.005727831534" INT_CONFIANCE="0.006825142653" INT_CONF_99="0.00896976786"/>
				<VALEURS INSTANT="8" NB_VAL="10000" PREMOY="1674" PREVAR="1674" MOYENNE="0.1674" INT_CONF_90="0.006140769556" INT_CONFIANCE="0.007317189405" INT_CONF_99="0.009616427625"/>
				<VALEURS INSTANT="9" NB_VAL="10000" PREMOY="1960" PREVAR="1960" MOYENNE="0.196" INT_CONF_90="0.00652954516" INT_CONFIANCE="0.007780444817" INT_CONF_99="0.01022524911"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="2250" PREVAR="2250" MOYENNE="0.225" INT_CONF_90="0.006868611935" INT_CONFIANCE="0.008184468416" INT_CONF_99="0.01075622672"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="10000" PREMOY="36" PREVAR="36" MOYENNE="0.0036" INT_CONF_90="0.0009851332548" INT_CONFIANCE="0.001173860466" INT_CONF_99="0.00154271587"/>
				<VALEURS INSTANT="2" NB_VAL="10000" PREMOY="146" PREVAR="146" MOYENNE="0.0146" INT_CONF_90="0.00197292046" INT_CONFIANCE="0.002350883315" INT_CONF_99="0.003089587819"/>
				<VALEURS INSTANT="3" NB_VAL="10000" PREMOY="289" PREVAR="289" MOYENNE="0.0289" INT_CONF_90="0.002755546653" INT_CONFIANCE="0.003283441365" INT_CONF_99="0.004315178206"/>
				<VALEURS INSTANT="4" NB_VAL="10000" PREMOY="471" PREVAR="471" MOYENNE="0.0471" INT_CONF_90="0.003484664627" INT_CONFIANCE="0.004152240344" INT_CONF_99="0.005456974876"/>
				<VALEURS INSTANT="5" NB_VAL="10000" PREMOY="617" PREVAR="617" MOYENNE="0.0617" INT_CONF_90="0.003957676663" INT_CONFIANCE="0.004715869808" INT_CONF_99="0.006197710376"/>
				<VALEURS INSTANT="6" NB_VAL="10000" PREMOY="779" PREVAR="779" MOYENNE="0.0779" INT_CONF_90="0.004408436705" INT_CONFIANCE="0.005252984346" INT_CONF_99="0.006903599317"/>
				<VALEURS INSTANT="7" NB_VAL="10000" PREMOY="944" PREVAR="944" MOYENNE="0.0944" INT_CONF_90="0.004809291197" INT_CONFIANCE="0.005730632663" INT_CONF_99="0.00753133631"/>
				<VALEURS INSTANT="8" NB_VAL="10000" PREMOY="1087" PREVAR="1087" MOYENNE="0.1087" INT_CONF_90="0.005119807063" INT_CONFIANCE="0.006100635704" INT_CONF_99="0.008017603271"/>
				<VALEURS INSTANT="9" NB_VAL="10000" PREMOY="1207" PREVAR="1207" MOYENNE="0.1207" INT_CONF_90="0.005358571642" INT_CONFIANCE="0.006385141682" INT_CONF_99="0.008391507922"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="1321" PREVAR="1321" MOYENNE="0.1321" INT_CONF_90="0.005569460432" INT_CONFIANCE="0.006636431557" INT_CONF_99="0.008721759165"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>