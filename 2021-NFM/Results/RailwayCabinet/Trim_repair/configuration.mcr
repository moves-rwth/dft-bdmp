<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="10204.9">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1603139871" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="3399560" PREVAR="3399560" MOYENNE="0.339956" INT_CONF_90="0.0002463909028" INT_CONFIANCE="0.0002935933172" INT_CONF_99="0.0003858474517"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="6520934" PREVAR="6520934" MOYENNE="0.6520934" INT_CONF_90="0.0002477496822" INT_CONFIANCE="0.0002952124051" INT_CONF_99="0.0003879752962"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="8205490" PREVAR="8205490" MOYENNE="0.820549" INT_CONF_90="0.0001995961094" INT_CONFIANCE="0.0002378337965" INT_CONF_99="0.0003125669385"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="9076903" PREVAR="9076903" MOYENNE="0.9076903" INT_CONF_90="0.0001505633908" INT_CONFIANCE="0.0001794076195" INT_CONF_99="0.0002357818409"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="9526251" PREVAR="9526251" MOYENNE="0.9526251" INT_CONF_90="0.0001104999377" INT_CONFIANCE="0.0001316689978" INT_CONF_99="0.0001730425875"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="9756320" PREVAR="9756320" MOYENNE="0.975632" INT_CONF_90="8.02010088E-5" INT_CONFIANCE="9.556554216E-5" INT_CONF_99="0.0001255945512"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="9874358" PREVAR="9874358" MOYENNE="0.9874358" INT_CONF_90="5.793602898E-5" INT_CONFIANCE="6.903514186E-5" INT_CONF_99="9.072765628E-5"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="9935352" PREVAR="9935352" MOYENNE="0.9935352" INT_CONF_90="4.16865588E-5" INT_CONFIANCE="4.967267435E-5" INT_CONF_99="6.528103229E-5"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="9966746" PREVAR="9966746" MOYENNE="0.9966746" INT_CONF_90="2.994508232E-5" INT_CONFIANCE="3.568182084E-5" INT_CONF_99="4.689391358E-5"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="9982948" PREVAR="9982948" MOYENNE="0.9982948" INT_CONF_90="2.146070261E-5" INT_CONFIANCE="2.557204342E-5" INT_CONF_99="3.360739912E-5"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="1923134" PREVAR="1923134" MOYENNE="0.1923134" INT_CONF_90="0.0002049996321" INT_CONFIANCE="0.0002442725008" INT_CONF_99="0.0003210288397"/>
				<VALEURS INSTANT="20" NB_VAL="10000000" PREMOY="2595447" PREVAR="2595447" MOYENNE="0.2595447" INT_CONF_90="0.0002280249532" INT_CONFIANCE="0.000271708905" INT_CONF_99="0.0003570864269"/>
				<VALEURS INSTANT="30" NB_VAL="10000000" PREMOY="2709062" PREVAR="2709062" MOYENNE="0.2709062" INT_CONF_90="0.0002311681751" INT_CONFIANCE="0.0002754542906" INT_CONF_99="0.0003620087035"/>
				<VALEURS INSTANT="40" NB_VAL="10000000" PREMOY="2726926" PREVAR="2726926" MOYENNE="0.2726926" INT_CONF_90="0.0002316447967" INT_CONFIANCE="0.0002760222211" INT_CONF_99="0.0003627550915"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="2731335" PREVAR="2731335" MOYENNE="0.2731335" INT_CONF_90="0.0002317617073" INT_CONFIANCE="0.0002761615289" INT_CONF_99="0.0003629381732"/>
				<VALEURS INSTANT="60" NB_VAL="10000000" PREMOY="2730435" PREVAR="2730435" MOYENNE="0.2730435" INT_CONF_90="0.0002317378658" INT_CONFIANCE="0.00027613312" INT_CONF_99="0.0003629008375"/>
				<VALEURS INSTANT="70" NB_VAL="10000000" PREMOY="2731917" PREVAR="2731917" MOYENNE="0.2731917" INT_CONF_90="0.0002317771185" INT_CONFIANCE="0.0002761798925" INT_CONF_99="0.000362962307"/>
				<VALEURS INSTANT="80" NB_VAL="10000000" PREMOY="2731048" PREVAR="2731048" MOYENNE="0.2731048" INT_CONF_90="0.0002317541058" INT_CONFIANCE="0.0002761524712" INT_CONF_99="0.0003629262693"/>
				<VALEURS INSTANT="90" NB_VAL="10000000" PREMOY="2730033" PREVAR="2730033" MOYENNE="0.2730033" INT_CONF_90="0.0002317272128" INT_CONFIANCE="0.0002761204261" INT_CONF_99="0.0003628841549"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="2732186" PREVAR="2732186" MOYENNE="0.2732186" INT_CONF_90="0.0002317842398" INT_CONFIANCE="0.0002761883781" INT_CONF_99="0.000362973459"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>