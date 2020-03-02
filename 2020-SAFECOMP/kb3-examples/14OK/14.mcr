<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="4.703">
	<FIGARO0>#\14.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000" GRAINE="1576271700" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="4197" PREVAR="4197" MOYENNE="0.4197" INT_CONF_90="0.0081175064" INT_CONFIANCE="0.00967262023" INT_CONF_99="0.01271199189"/>
				<VALEURS INSTANT="20" NB_VAL="10000" PREMOY="7314" PREVAR="7314" MOYENNE="0.7314" INT_CONF_90="0.007290500633" INT_CONFIANCE="0.008687180574" INT_CONF_99="0.01141690322"/>
				<VALEURS INSTANT="30" NB_VAL="10000" PREMOY="8767" PREVAR="8767" MOYENNE="0.8767" INT_CONF_90="0.005407965488" INT_CONFIANCE="0.006443998169" INT_CONF_99="0.008468858543"/>
				<VALEURS INSTANT="40" NB_VAL="10000" PREMOY="9422" PREVAR="9422" MOYENNE="0.9422" INT_CONF_90="0.003838507018" INT_CONFIANCE="0.004573870202" INT_CONF_99="0.006011091052"/>
				<VALEURS INSTANT="50" NB_VAL="10000" PREMOY="9731" PREVAR="9731" MOYENNE="0.9731" INT_CONF_90="0.002661225928" INT_CONFIANCE="0.003171051118" INT_CONF_99="0.00416747222"/>
				<VALEURS INSTANT="60" NB_VAL="10000" PREMOY="9870" PREVAR="9870" MOYENNE="0.987" INT_CONF_90="0.001863189904" INT_CONFIANCE="0.002220131093" INT_CONF_99="0.002917750081"/>
				<VALEURS INSTANT="70" NB_VAL="10000" PREMOY="9932" PREVAR="9932" MOYENNE="0.9932" INT_CONF_90="0.001351760282" INT_CONFIANCE="0.001610724181" INT_CONF_99="0.002116852749"/>
				<VALEURS INSTANT="80" NB_VAL="10000" PREMOY="9968" PREVAR="9968" MOYENNE="0.9968" INT_CONF_90="0.0009289789508" INT_CONFIANCE="0.001106948384" INT_CONF_99="0.00145477839"/>
				<VALEURS INSTANT="90" NB_VAL="10000" PREMOY="9984" PREVAR="9984" MOYENNE="0.9984" INT_CONF_90="0.0006574143012" INT_CONFIANCE="0.0007833586517" INT_CONF_99="0.001029508922"/>
				<VALEURS INSTANT="100" NB_VAL="10000" PREMOY="9993" PREVAR="9993" MOYENNE="0.9993" INT_CONF_90="0.0004350346341" INT_CONFIANCE="0.0005183765303" INT_CONF_99="0.0006812629974"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="2346" PREVAR="2346" MOYENNE="0.2346" INT_CONF_90="0.006970037307" INT_CONFIANCE="0.008305324386" INT_CONF_99="0.01091505856"/>
				<VALEURS INSTANT="20" NB_VAL="10000" PREMOY="3067" PREVAR="3067" MOYENNE="0.3067" INT_CONF_90="0.007584803918" INT_CONFIANCE="0.009037865103" INT_CONF_99="0.01187778132"/>
				<VALEURS INSTANT="30" NB_VAL="10000" PREMOY="3119" PREVAR="3119" MOYENNE="0.3119" INT_CONF_90="0.00762009413" INT_CONFIANCE="0.009079916048" INT_CONF_99="0.01193304569"/>
				<VALEURS INSTANT="40" NB_VAL="10000" PREMOY="3136" PREVAR="3136" MOYENNE="0.3136" INT_CONF_90="0.007631387991" INT_CONFIANCE="0.009093373533" INT_CONF_99="0.01195073185"/>
				<VALEURS INSTANT="50" NB_VAL="10000" PREMOY="3162" PREVAR="3162" MOYENNE="0.3162" INT_CONF_90="0.007648430961" INT_CONFIANCE="0.009113681516" INT_CONF_99="0.01197742109"/>
				<VALEURS INSTANT="60" NB_VAL="10000" PREMOY="3079" PREVAR="3079" MOYENNE="0.3079" INT_CONF_90="0.007593047888" INT_CONFIANCE="0.009047688414" INT_CONF_99="0.01189069136"/>
				<VALEURS INSTANT="70" NB_VAL="10000" PREMOY="3101" PREVAR="3101" MOYENNE="0.3101" INT_CONF_90="0.007608005632" INT_CONFIANCE="0.009065511692" INT_CONF_99="0.01191411514"/>
				<VALEURS INSTANT="80" NB_VAL="10000" PREMOY="3114" PREVAR="3114" MOYENNE="0.3114" INT_CONF_90="0.007616749683" INT_CONFIANCE="0.009075930887" INT_CONF_99="0.0119278083"/>
				<VALEURS INSTANT="90" NB_VAL="10000" PREMOY="3184" PREVAR="3184" MOYENNE="0.3184" INT_CONF_90="0.007662635905" INT_CONFIANCE="0.009130607776" INT_CONF_99="0.01199966599"/>
				<VALEURS INSTANT="100" NB_VAL="10000" PREMOY="3143" PREVAR="3143" MOYENNE="0.3143" INT_CONF_90="0.007636003787" INT_CONFIANCE="0.009098873602" INT_CONF_99="0.01195796017"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
