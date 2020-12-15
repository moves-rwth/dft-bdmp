<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="3977.94">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1603435183" RNG="mt19937"/>
	<HISTOIRE>
		<INTERVALLE T0="0" T1="500" N="10"/>
		<INSTANTS_ORDONNES>
			<INSTANT VALEUR="0"/>
			<INSTANT VALEUR="50"/>
			<INSTANT VALEUR="100"/>
			<INSTANT VALEUR="150"/>
			<INSTANT VALEUR="200"/>
			<INSTANT VALEUR="250"/>
			<INSTANT VALEUR="300"/>
			<INSTANT VALEUR="350"/>
			<INSTANT VALEUR="400"/>
			<INSTANT VALEUR="450"/>
			<INSTANT VALEUR="500"/>
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
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="2027819" PREVAR="2027819" MOYENNE="0.2027819" INT_CONF_90="0.0002091365979" INT_CONFIANCE="0.0002492020071" INT_CONF_99="0.0003275073164"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="3645731" PREVAR="3645731" MOYENNE="0.3645731" INT_CONF_90="0.0002503525265" INT_CONFIANCE="0.0002983138901" INT_CONF_99="0.000392051343"/>
				<VALEURS INSTANT="150" NB_VAL="10000000" PREMOY="4934663" PREVAR="4934663" MOYENNE="0.4934663" INT_CONF_90="0.0002600517565" INT_CONFIANCE="0.0003098712532" INT_CONF_99="0.0004072403097"/>
				<VALEURS INSTANT="200" NB_VAL="10000000" PREMOY="5961145" PREVAR="5961145" MOYENNE="0.5961145" INT_CONF_90="0.0002552236079" INT_CONFIANCE="0.0003041181504" INT_CONF_99="0.0003996794426"/>
				<VALEURS INSTANT="250" NB_VAL="10000000" PREMOY="6779418" PREVAR="6779418" MOYENNE="0.6779418" INT_CONF_90="0.0002430469954" INT_CONFIANCE="0.0002896087996" INT_CONF_99="0.0003806109022"/>
				<VALEURS INSTANT="300" NB_VAL="10000000" PREMOY="7432529" PREVAR="7432529" MOYENNE="0.7432529" INT_CONF_90="0.0002272207293" INT_CONFIANCE="0.0002707506117" INT_CONF_99="0.0003558270146"/>
				<VALEURS INSTANT="350" NB_VAL="10000000" PREMOY="7952708" PREVAR="7952708" MOYENNE="0.7952708" INT_CONF_90="0.0002098815597" INT_CONFIANCE="0.0002500896852" INT_CONF_99="0.0003286739244"/>
				<VALEURS INSTANT="400" NB_VAL="10000000" PREMOY="8367244" PREVAR="8367244" MOYENNE="0.8367244" INT_CONF_90="0.0001922554814" INT_CONFIANCE="0.0002290868855" INT_CONF_99="0.0003010715361"/>
				<VALEURS INSTANT="450" NB_VAL="10000000" PREMOY="8698564" PREVAR="8698564" MOYENNE="0.8698564" INT_CONF_90="0.0001750096754" INT_CONFIANCE="0.0002085372088" INT_CONF_99="0.000274064653"/>
				<VALEURS INSTANT="500" NB_VAL="10000000" PREMOY="8962880" PREVAR="8962880" MOYENNE="0.896288" INT_CONF_90="0.000158586117" INT_CONFIANCE="0.000188967302" INT_CONF_99="0.0002483454073"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="2027819" PREVAR="2027819" MOYENNE="0.2027819" INT_CONF_90="0.0002091365979" INT_CONFIANCE="0.0002492020071" INT_CONF_99="0.0003275073164"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="3645731" PREVAR="3645731" MOYENNE="0.3645731" INT_CONF_90="0.0002503525265" INT_CONFIANCE="0.0002983138901" INT_CONF_99="0.000392051343"/>
				<VALEURS INSTANT="150" NB_VAL="10000000" PREMOY="4934663" PREVAR="4934663" MOYENNE="0.4934663" INT_CONF_90="0.0002600517565" INT_CONFIANCE="0.0003098712532" INT_CONF_99="0.0004072403097"/>
				<VALEURS INSTANT="200" NB_VAL="10000000" PREMOY="5961145" PREVAR="5961145" MOYENNE="0.5961145" INT_CONF_90="0.0002552236079" INT_CONFIANCE="0.0003041181504" INT_CONF_99="0.0003996794426"/>
				<VALEURS INSTANT="250" NB_VAL="10000000" PREMOY="6779418" PREVAR="6779418" MOYENNE="0.6779418" INT_CONF_90="0.0002430469954" INT_CONFIANCE="0.0002896087996" INT_CONF_99="0.0003806109022"/>
				<VALEURS INSTANT="300" NB_VAL="10000000" PREMOY="7432529" PREVAR="7432529" MOYENNE="0.7432529" INT_CONF_90="0.0002272207293" INT_CONFIANCE="0.0002707506117" INT_CONF_99="0.0003558270146"/>
				<VALEURS INSTANT="350" NB_VAL="10000000" PREMOY="7952708" PREVAR="7952708" MOYENNE="0.7952708" INT_CONF_90="0.0002098815597" INT_CONFIANCE="0.0002500896852" INT_CONF_99="0.0003286739244"/>
				<VALEURS INSTANT="400" NB_VAL="10000000" PREMOY="8367244" PREVAR="8367244" MOYENNE="0.8367244" INT_CONF_90="0.0001922554814" INT_CONFIANCE="0.0002290868855" INT_CONF_99="0.0003010715361"/>
				<VALEURS INSTANT="450" NB_VAL="10000000" PREMOY="8698564" PREVAR="8698564" MOYENNE="0.8698564" INT_CONF_90="0.0001750096754" INT_CONFIANCE="0.0002085372088" INT_CONF_99="0.000274064653"/>
				<VALEURS INSTANT="500" NB_VAL="10000000" PREMOY="8962880" PREVAR="8962880" MOYENNE="0.896288" INT_CONF_90="0.000158586117" INT_CONFIANCE="0.000188967302" INT_CONF_99="0.0002483454073"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>