<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="19.188">
	<FIGARO0>#\29.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" GRAINE="1576693378" RNG="mt19937"/>
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
		<GROUPE NOM="TOUT"/>
	</GROUPES>
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="real(Perte_systeme)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="100000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="DEJA_REALISE(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="100000" PREMOY="6032" PREVAR="6032" MOYENNE="0.06032" INT_CONF_90="0.001238361747" INT_CONFIANCE="0.001475601286" INT_CONF_99="0.001939270966"/>
				<VALEURS INSTANT="2" NB_VAL="100000" PREMOY="15613" PREVAR="15613" MOYENNE="0.15613" INT_CONF_90="0.001888025361" INT_CONFIANCE="0.00224972441" INT_CONF_99="0.002956642334"/>
				<VALEURS INSTANT="3" NB_VAL="100000" PREMOY="26176" PREVAR="26176" MOYENNE="0.26176" INT_CONF_90="0.002286532071" INT_CONFIANCE="0.002724575169" INT_CONF_99="0.003580702708"/>
				<VALEURS INSTANT="4" NB_VAL="100000" PREMOY="36509" PREVAR="36509" MOYENNE="0.36509" INT_CONF_90="0.002504280215" INT_CONFIANCE="0.00298403848" INT_CONF_99="0.00392169568"/>
				<VALEURS INSTANT="5" NB_VAL="100000" PREMOY="45997" PREVAR="45997" MOYENNE="0.45997" INT_CONF_90="0.002592391368" INT_CONFIANCE="0.003089029556" INT_CONF_99="0.004059677495"/>
				<VALEURS INSTANT="6" NB_VAL="100000" PREMOY="54511" PREVAR="54511" MOYENNE="0.54511" INT_CONF_90="0.002590133442" INT_CONFIANCE="0.003086339067" INT_CONF_99="0.00405614159"/>
				<VALEURS INSTANT="7" NB_VAL="100000" PREMOY="61627" PREVAR="61627" MOYENNE="0.61627" INT_CONF_90="0.002529445113" INT_CONFIANCE="0.003014024353" INT_CONF_99="0.00396110384"/>
				<VALEURS INSTANT="8" NB_VAL="100000" PREMOY="67937" PREVAR="67937" MOYENNE="0.67937" INT_CONF_90="0.002427627955" INT_CONFIANCE="0.00289270154" INT_CONF_99="0.00380165846"/>
				<VALEURS INSTANT="9" NB_VAL="100000" PREMOY="73306" PREVAR="73306" MOYENNE="0.73306" INT_CONF_90="0.002300930279" INT_CONFIANCE="0.002741731717" INT_CONF_99="0.00360325026"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="77728" PREVAR="77728" MOYENNE="0.77728" INT_CONF_90="0.0021641892" INT_CONFIANCE="0.002578794423" INT_CONF_99="0.003389114119"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="100000" PREMOY="5591" PREVAR="5591" MOYENNE="0.05591" INT_CONF_90="0.001195028643" INT_CONFIANCE="0.001423966629" INT_CONF_99="0.001871411449"/>
				<VALEURS INSTANT="2" NB_VAL="100000" PREMOY="13803" PREVAR="13803" MOYENNE="0.13803" INT_CONF_90="0.001794153883" INT_CONFIANCE="0.002137869474" INT_CONF_99="0.002809639868"/>
				<VALEURS INSTANT="3" NB_VAL="100000" PREMOY="22245" PREVAR="22245" MOYENNE="0.22245" INT_CONF_90="0.002163252617" INT_CONFIANCE="0.002577678414" INT_CONF_99="0.003387647433"/>
				<VALEURS INSTANT="4" NB_VAL="100000" PREMOY="30026" PREVAR="30026" MOYENNE="0.30026" INT_CONF_90="0.002384207009" INT_CONFIANCE="0.002840962213" INT_CONF_99="0.003733661381"/>
				<VALEURS INSTANT="5" NB_VAL="100000" PREMOY="36726" PREVAR="36726" MOYENNE="0.36726" INT_CONF_90="0.002507415637" INT_CONFIANCE="0.002987774572" INT_CONF_99="0.003926605742"/>
				<VALEURS INSTANT="6" NB_VAL="100000" PREMOY="42405" PREVAR="42405" MOYENNE="0.42405" INT_CONF_90="0.002570560294" INT_CONFIANCE="0.003063016187" INT_CONF_99="0.004025490095"/>
				<VALEURS INSTANT="7" NB_VAL="100000" PREMOY="46787" PREVAR="46787" MOYENNE="0.46787" INT_CONF_90="0.002595364388" INT_CONFIANCE="0.003092572133" INT_CONF_99="0.004064333236"/>
				<VALEURS INSTANT="8" NB_VAL="100000" PREMOY="50615" PREVAR="50615" MOYENNE="0.50615" INT_CONF_90="0.002600542882" INT_CONFIANCE="0.003098742698" INT_CONF_99="0.004072442742"/>
				<VALEURS INSTANT="9" NB_VAL="100000" PREMOY="53896" PREVAR="53896" MOYENNE="0.53896" INT_CONF_90="0.002592832372" INT_CONFIANCE="0.003089555045" INT_CONF_99="0.004060368106"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="56247" PREVAR="56247" MOYENNE="0.56247" INT_CONF_90="0.002580361004" INT_CONFIANCE="0.003074694471" INT_CONF_99="0.00404083798"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
