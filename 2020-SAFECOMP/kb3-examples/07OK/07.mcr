<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="2.297">
	<FIGARO0>#\07.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000" OPTIM_INTERACTIONS="VRAI" GRAINE="1575991958" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="3424" PREVAR="3424" MOYENNE="0.3424" INT_CONF_90="0.00780503132" INT_CONFIANCE="0.009300282637" INT_CONF_99="0.0122226568"/>
				<VALEURS INSTANT="20" NB_VAL="10000" PREMOY="6265" PREVAR="6265" MOYENNE="0.6265" INT_CONF_90="0.007956694996" INT_CONFIANCE="0.00948100133" INT_CONF_99="0.01246016169"/>
				<VALEURS INSTANT="30" NB_VAL="10000" PREMOY="7938" PREVAR="7938" MOYENNE="0.7938" INT_CONF_90="0.006654673426" INT_CONFIANCE="0.00792954457" INT_CONF_99="0.01042119962"/>
				<VALEURS INSTANT="40" NB_VAL="10000" PREMOY="8865" PREVAR="8865" MOYENNE="0.8865" INT_CONF_90="0.005217520578" INT_CONFIANCE="0.006217068715" INT_CONF_99="0.008170622356"/>
				<VALEURS INSTANT="50" NB_VAL="10000" PREMOY="9376" PREVAR="9376" MOYENNE="0.9376" INT_CONF_90="0.003978578799" INT_CONFIANCE="0.004740776277" INT_CONF_99="0.006230443061"/>
				<VALEURS INSTANT="60" NB_VAL="10000" PREMOY="9663" PREVAR="9663" MOYENNE="0.9663" INT_CONF_90="0.002968231776" INT_CONFIANCE="0.003536871707" INT_CONF_99="0.004648242503"/>
				<VALEURS INSTANT="70" NB_VAL="10000" PREMOY="9813" PREVAR="9813" MOYENNE="0.9813" INT_CONF_90="0.002228171282" INT_CONFIANCE="0.002655033893" INT_CONF_99="0.003489309878"/>
				<VALEURS INSTANT="80" NB_VAL="10000" PREMOY="9894" PREVAR="9894" MOYENNE="0.9894" INT_CONF_90="0.001684479599" INT_CONFIANCE="0.002007184305" INT_CONF_99="0.002637890251"/>
				<VALEURS INSTANT="90" NB_VAL="10000" PREMOY="9943" PREVAR="9943" MOYENNE="0.9943" INT_CONF_90="0.001238291858" INT_CONFIANCE="0.001475518008" INT_CONF_99="0.001939161521"/>
				<VALEURS INSTANT="100" NB_VAL="10000" PREMOY="9964" PREVAR="9964" MOYENNE="0.9964" INT_CONF_90="0.0009851332548" INT_CONFIANCE="0.001173860466" INT_CONF_99="0.00154271587"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="1975" PREVAR="1975" MOYENNE="0.1975" INT_CONF_90="0.006548365931" INT_CONFIANCE="0.007802871184" INT_CONF_99="0.01025472239"/>
				<VALEURS INSTANT="20" NB_VAL="10000" PREMOY="2403" PREVAR="2403" MOYENNE="0.2403" INT_CONF_90="0.007027887785" INT_CONFIANCE="0.008374257587" INT_CONF_99="0.01100565224"/>
				<VALEURS INSTANT="30" NB_VAL="10000" PREMOY="2488" PREVAR="2488" MOYENNE="0.2488" INT_CONF_90="0.007110986391" INT_CONFIANCE="0.008473275834" INT_CONF_99="0.01113578442"/>
				<VALEURS INSTANT="40" NB_VAL="10000" PREMOY="2560" PREVAR="2560" MOYENNE="0.256" INT_CONF_90="0.007178493645" INT_CONFIANCE="0.008553715812" INT_CONF_99="0.01124150059"/>
				<VALEURS INSTANT="50" NB_VAL="10000" PREMOY="2577" PREVAR="2577" MOYENNE="0.2577" INT_CONF_90="0.007194055922" INT_CONFIANCE="0.008572259436" INT_CONF_99="0.01126587107"/>
				<VALEURS INSTANT="60" NB_VAL="10000" PREMOY="2539" PREVAR="2539" MOYENNE="0.2539" INT_CONF_90="0.007159072166" INT_CONFIANCE="0.008530573657" INT_CONF_99="0.01121108661"/>
				<VALEURS INSTANT="70" NB_VAL="10000" PREMOY="2582" PREVAR="2582" MOYENNE="0.2582" INT_CONF_90="0.007198605988" INT_CONFIANCE="0.008577681183" INT_CONF_99="0.01127299646"/>
				<VALEURS INSTANT="80" NB_VAL="10000" PREMOY="2589" PREVAR="2589" MOYENNE="0.2589" INT_CONF_90="0.007204955481" INT_CONFIANCE="0.008585247083" INT_CONF_99="0.01128293975"/>
				<VALEURS INSTANT="90" NB_VAL="10000" PREMOY="2517" PREVAR="2517" MOYENNE="0.2517" INT_CONF_90="0.007138489914" INT_CONFIANCE="0.008506048353" INT_CONF_99="0.01117885486"/>
				<VALEURS INSTANT="100" NB_VAL="10000" PREMOY="2484" PREVAR="2484" MOYENNE="0.2484" INT_CONF_90="0.007107159324" INT_CONFIANCE="0.008468715596" INT_CONF_99="0.01112979125"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
