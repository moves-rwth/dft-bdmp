<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="41.75">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" OPTIM_INTERACTIONS="VRAI" GRAINE="1609241540" RNG="mt19937"/>
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
	<INDICATEURS NB_HISTOIRES="100000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="21720" PREVAR="21720" MOYENNE="0.2172" INT_CONF_90="0.002144777222" INT_CONFIANCE="0.00255566359" INT_CONF_99="0.003358715018"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="38867" PREVAR="38867" MOYENNE="0.38867" INT_CONF_90="0.002535451073" INT_CONFIANCE="0.003021180906" INT_CONF_99="0.003970509155"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="52232" PREVAR="52232" MOYENNE="0.52232" INT_CONF_90="0.002598147045" INT_CONFIANCE="0.003095887878" INT_CONF_99="0.004068690868"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="62650" PREVAR="62650" MOYENNE="0.6265" INT_CONF_90="0.002516127884" INT_CONFIANCE="0.00299815587" INT_CONF_99="0.003940249095"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="70849" PREVAR="70849" MOYENNE="0.70849" INT_CONF_90="0.002363852974" INT_CONFIANCE="0.002816708847" INT_CONF_99="0.003701787021"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="77187" PREVAR="77187" MOYENNE="0.77187" INT_CONF_90="0.002182680412" INT_CONFIANCE="0.002600828095" INT_CONF_99="0.003418071305"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="82289" PREVAR="82289" MOYENNE="0.82289" INT_CONF_90="0.001985725915" INT_CONFIANCE="0.002366141979" INT_CONF_99="0.003109641125"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="86058" PREVAR="86058" MOYENNE="0.86058" INT_CONF_90="0.001801710599" INT_CONFIANCE="0.002146873871" INT_CONF_99="0.002821473664"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="89059" PREVAR="89059" MOYENNE="0.89059" INT_CONF_90="0.001623656988" INT_CONFIANCE="0.001934709584" INT_CONF_99="0.002542642216"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="91498" PREVAR="91498" MOYENNE="0.91498" INT_CONF_90="0.001450752143" INT_CONFIANCE="0.001728680439" INT_CONF_99="0.002271873722"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="9711" PREVAR="9711" MOYENNE="0.09711" INT_CONF_90="0.001540196983" INT_CONFIANCE="0.001835260702" INT_CONF_99="0.002411944087"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="11117" PREVAR="11117" MOYENNE="0.11117" INT_CONF_90="0.001635046186" INT_CONFIANCE="0.001948280671" INT_CONF_99="0.002560477668"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="11607" PREVAR="11607" MOYENNE="0.11607" INT_CONF_90="0.0016660798" INT_CONFIANCE="0.001985259559" INT_CONF_99="0.002609076219"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="11713" PREVAR="11713" MOYENNE="0.11713" INT_CONF_90="0.001672666355" INT_CONFIANCE="0.001993107935" INT_CONF_99="0.002619390745"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="11792" PREVAR="11792" MOYENNE="0.11792" INT_CONF_90="0.001677546598" INT_CONFIANCE="0.001998923113" INT_CONF_99="0.002627033192"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="11761" PREVAR="11761" MOYENNE="0.11761" INT_CONF_90="0.001675634462" INT_CONFIANCE="0.001996644658" INT_CONF_99="0.002624038792"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="11773" PREVAR="11773" MOYENNE="0.11773" INT_CONF_90="0.001676375086" INT_CONFIANCE="0.001997527168" INT_CONF_99="0.002625198608"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="11748" PREVAR="11748" MOYENNE="0.11748" INT_CONF_90="0.001674831486" INT_CONFIANCE="0.001995687853" INT_CONF_99="0.002622781335"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="11637" PREVAR="11637" MOYENNE="0.11637" INT_CONF_90="0.001667948408" INT_CONFIANCE="0.001987486146" INT_CONF_99="0.002612002453"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="11806" PREVAR="11806" MOYENNE="0.11806" INT_CONF_90="0.001678408922" INT_CONFIANCE="0.001999950636" INT_CONF_99="0.002628383589"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>