<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="3.344">
	<FIGARO0>#\11.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000" GRAINE="1575994350" RNG="mt19937"/>
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
	<INDICATEURS NB_HISTOIRES="10000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="3444" PREVAR="3444" MOYENNE="0.3444" INT_CONF_90="0.007815880554" INT_CONFIANCE="0.009313210318" INT_CONF_99="0.01223964668"/>
				<VALEURS INSTANT="20" NB_VAL="10000" PREMOY="6370" PREVAR="6370" MOYENNE="0.637" INT_CONF_90="0.007909515811" INT_CONFIANCE="0.009424783778" INT_CONF_99="0.01238627922"/>
				<VALEURS INSTANT="30" NB_VAL="10000" PREMOY="8050" PREVAR="8050" MOYENNE="0.805" INT_CONF_90="0.006516915888" INT_CONFIANCE="0.007765396089" INT_CONF_99="0.01020547171"/>
				<VALEURS INSTANT="40" NB_VAL="10000" PREMOY="8934" PREVAR="8934" MOYENNE="0.8934" INT_CONF_90="0.005076079862" INT_CONFIANCE="0.006048531451" INT_CONF_99="0.007949126599"/>
				<VALEURS INSTANT="50" NB_VAL="10000" PREMOY="9398" PREVAR="9398" MOYENNE="0.9398" INT_CONF_90="0.003912396267" INT_CONFIANCE="0.004661914806" INT_CONF_99="0.006126801404"/>
				<VALEURS INSTANT="60" NB_VAL="10000" PREMOY="9680" PREVAR="9680" MOYENNE="0.968" INT_CONF_90="0.002894939804" INT_CONFIANCE="0.003449538803" INT_CONF_99="0.004533467484"/>
				<VALEURS INSTANT="70" NB_VAL="10000" PREMOY="9827" PREVAR="9827" MOYENNE="0.9827" INT_CONF_90="0.002144669618" INT_CONFIANCE="0.002555535371" INT_CONF_99="0.00335854651"/>
				<VALEURS INSTANT="80" NB_VAL="10000" PREMOY="9923" PREVAR="9923" MOYENNE="0.9923" INT_CONF_90="0.001437784271" INT_CONFIANCE="0.001713228242" INT_CONF_99="0.002251566071"/>
				<VALEURS INSTANT="90" NB_VAL="10000" PREMOY="9960" PREVAR="9960" MOYENNE="0.996" INT_CONF_90="0.001038213172" INT_CONFIANCE="0.001237109186" INT_CONF_99="0.001625838869"/>
				<VALEURS INSTANT="100" NB_VAL="10000" PREMOY="9979" PREVAR="9979" MOYENNE="0.9979" INT_CONF_90="0.0007529740835" INT_CONFIANCE="0.0008972253292" INT_CONF_99="0.001179155269"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="2081" PREVAR="2081" MOYENNE="0.2081" INT_CONF_90="0.006677256837" INT_CONFIANCE="0.007956454405" INT_CONF_99="0.01045656518"/>
				<VALEURS INSTANT="20" NB_VAL="10000" PREMOY="2957" PREVAR="2957" MOYENNE="0.2957" INT_CONF_90="0.007506394348" INT_CONFIANCE="0.008944434194" INT_CONF_99="0.01175499216"/>
				<VALEURS INSTANT="30" NB_VAL="10000" PREMOY="3209" PREVAR="3209" MOYENNE="0.3209" INT_CONF_90="0.007678538986" INT_CONFIANCE="0.009149557495" INT_CONF_99="0.01202457017"/>
				<VALEURS INSTANT="40" NB_VAL="10000" PREMOY="3196" PREVAR="3196" MOYENNE="0.3196" INT_CONF_90="0.007670301011" INT_CONFIANCE="0.009139741328" INT_CONF_99="0.01201166953"/>
				<VALEURS INSTANT="50" NB_VAL="10000" PREMOY="3173" PREVAR="3173" MOYENNE="0.3173" INT_CONF_90="0.007655558109" INT_CONFIANCE="0.00912217405" INT_CONF_99="0.01198858218"/>
				<VALEURS INSTANT="60" NB_VAL="10000" PREMOY="3228" PREVAR="3228" MOYENNE="0.3228" INT_CONF_90="0.007690456281" INT_CONFIANCE="0.009163757849" INT_CONF_99="0.01204323262"/>
				<VALEURS INSTANT="70" NB_VAL="10000" PREMOY="3147" PREVAR="3147" MOYENNE="0.3147" INT_CONF_90="0.00763863234" INT_CONFIANCE="0.009102005721" INT_CONF_99="0.01196207648"/>
				<VALEURS INSTANT="80" NB_VAL="10000" PREMOY="3262" PREVAR="3262" MOYENNE="0.3262" INT_CONF_90="0.007711419894" INT_CONFIANCE="0.009188737574" INT_CONF_99="0.01207606158"/>
				<VALEURS INSTANT="90" NB_VAL="10000" PREMOY="3241" PREVAR="3241" MOYENNE="0.3241" INT_CONF_90="0.007698526492" INT_CONFIANCE="0.009173374114" INT_CONF_99="0.01205587055"/>
				<VALEURS INSTANT="100" NB_VAL="10000" PREMOY="3222" PREVAR="3222" MOYENNE="0.3222" INT_CONF_90="0.007686708647" INT_CONFIANCE="0.009159292262" INT_CONF_99="0.01203736384"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>