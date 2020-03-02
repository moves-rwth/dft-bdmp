<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="1.11">
	<FIGARO0>#\21.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000" GRAINE="1576309085" RNG="mt19937"/>
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
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="S(RAS_ownership)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="10000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="231" PREVAR="231" MOYENNE="0.0231" INT_CONF_90="0.002470915619" INT_CONFIANCE="0.002944282052" INT_CONF_99="0.003869446818"/>
				<VALEURS INSTANT="20" NB_VAL="10000" PREMOY="608" PREVAR="608" MOYENNE="0.0608" INT_CONF_90="0.003930589607" INT_CONFIANCE="0.004683593541" INT_CONF_99="0.006155292123"/>
				<VALEURS INSTANT="30" NB_VAL="10000" PREMOY="1022" PREVAR="1022" MOYENNE="0.1022" INT_CONF_90="0.004982440468" INT_CONFIANCE="0.00593695306" INT_CONF_99="0.007802487574"/>
				<VALEURS INSTANT="40" NB_VAL="10000" PREMOY="1412" PREVAR="1412" MOYENNE="0.1412" INT_CONF_90="0.005727831534" INT_CONFIANCE="0.006825142653" INT_CONF_99="0.00896976786"/>
				<VALEURS INSTANT="50" NB_VAL="10000" PREMOY="1785" PREVAR="1785" MOYENNE="0.1785" INT_CONF_90="0.006298683177" INT_CONFIANCE="0.007505355378" INT_CONF_99="0.009863719906"/>
				<VALEURS INSTANT="60" NB_VAL="10000" PREMOY="2110" PREVAR="2110" MOYENNE="0.211" INT_CONF_90="0.006711299174" INT_CONFIANCE="0.007997018414" INT_CONF_99="0.01050987538"/>
				<VALEURS INSTANT="70" NB_VAL="10000" PREMOY="2442" PREVAR="2442" MOYENNE="0.2442" INT_CONF_90="0.007066480151" INT_CONFIANCE="0.008420243298" INT_CONF_99="0.01106608778"/>
				<VALEURS INSTANT="80" NB_VAL="10000" PREMOY="2733" PREVAR="2733" MOYENNE="0.2733" INT_CONF_90="0.007330342481" INT_CONFIANCE="0.008734655136" INT_CONF_99="0.01147929544"/>
				<VALEURS INSTANT="90" NB_VAL="10000" PREMOY="3077" PREVAR="3077" MOYENNE="0.3077" INT_CONF_90="0.007591678079" INT_CONFIANCE="0.009046056183" INT_CONF_99="0.01188854624"/>
				<VALEURS INSTANT="100" NB_VAL="10000" PREMOY="3370" PREVAR="3370" MOYENNE="0.337" INT_CONF_90="0.007774967539" INT_CONFIANCE="0.009264459378" INT_CONF_99="0.01217557701"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="131" PREVAR="131" MOYENNE="0.0131" INT_CONF_90="0.00187024754" INT_CONFIANCE="0.002228540798" INT_CONF_99="0.002928802318"/>
				<VALEURS INSTANT="20" NB_VAL="10000" PREMOY="206" PREVAR="206" MOYENNE="0.0206" INT_CONF_90="0.00233636413" INT_CONFIANCE="0.002783953819" INT_CONF_99="0.003658739569"/>
				<VALEURS INSTANT="30" NB_VAL="10000" PREMOY="256" PREVAR="256" MOYENNE="0.0256" INT_CONF_90="0.002597858487" INT_CONFIANCE="0.00309554404" INT_CONF_99="0.004068238988"/>
				<VALEURS INSTANT="40" NB_VAL="10000" PREMOY="261" PREVAR="261" MOYENNE="0.0261" INT_CONF_90="0.002622432427" INT_CONFIANCE="0.00312482574" INT_CONF_99="0.004106721708"/>
				<VALEURS INSTANT="50" NB_VAL="10000" PREMOY="294" PREVAR="294" MOYENNE="0.0294" INT_CONF_90="0.002778565753" INT_CONFIANCE="0.003310870357" INT_CONF_99="0.004351226051"/>
				<VALEURS INSTANT="60" NB_VAL="10000" PREMOY="272" PREVAR="272" MOYENNE="0.0272" INT_CONF_90="0.002675611801" INT_CONFIANCE="0.00318819297" INT_CONF_99="0.004190000456"/>
				<VALEURS INSTANT="70" NB_VAL="10000" PREMOY="290" PREVAR="290" MOYENNE="0.029" INT_CONF_90="0.002760167791" INT_CONFIANCE="0.0032889478" INT_CONF_99="0.004322414896"/>
				<VALEURS INSTANT="80" NB_VAL="10000" PREMOY="260" PREVAR="260" MOYENNE="0.026" INT_CONF_90="0.002617538163" INT_CONFIANCE="0.003118993856" INT_CONF_99="0.004099057304"/>
				<VALEURS INSTANT="90" NB_VAL="10000" PREMOY="279" PREVAR="279" MOYENNE="0.0279" INT_CONF_90="0.002708846794" INT_CONFIANCE="0.003227794966" INT_CONF_99="0.00424204636"/>
				<VALEURS INSTANT="100" NB_VAL="10000" PREMOY="263" PREVAR="263" MOYENNE="0.0263" INT_CONF_90="0.002632190571" INT_CONFIANCE="0.003136453304" INT_CONF_99="0.004122002933"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
