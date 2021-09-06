<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="141.641">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" OPTIM_INTERACTIONS="VRAI" GRAINE="1608371287" RNG="mt19937"/>
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
	<INDICATEURS NB_HISTOIRES="100000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="100000" PREMOY="53262" PREVAR="53262" MOYENNE="0.53262" INT_CONF_90="0.002595199011" INT_CONFIANCE="0.003092375074" INT_CONF_99="0.004064074256"/>
				<VALEURS INSTANT="2000" NB_VAL="100000" PREMOY="78371" PREVAR="78371" MOYENNE="0.78371" INT_CONF_90="0.002141523203" INT_CONFIANCE="0.002551786181" INT_CONF_99="0.003353619234"/>
				<VALEURS INSTANT="3000" NB_VAL="100000" PREMOY="89988" PREVAR="89988" MOYENNE="0.89988" INT_CONF_90="0.001561275663" INT_CONFIANCE="0.001860377537" INT_CONF_99="0.00244495324"/>
				<VALEURS INSTANT="4000" NB_VAL="100000" PREMOY="95326" PREVAR="95326" MOYENNE="0.95326" INT_CONF_90="0.001097935705" INT_CONFIANCE="0.001308273082" INT_CONF_99="0.001719364186"/>
				<VALEURS INSTANT="5000" NB_VAL="100000" PREMOY="97796" PREVAR="97796" MOYENNE="0.97796" INT_CONF_90="0.0007636479863" INT_CONFIANCE="0.0009099440882" INT_CONF_99="0.00119587057"/>
				<VALEURS INSTANT="6000" NB_VAL="100000" PREMOY="98969" PREVAR="98969" MOYENNE="0.98969" INT_CONF_90="0.0005254190242" INT_CONFIANCE="0.0006260763382" INT_CONF_99="0.0008228046946"/>
				<VALEURS INSTANT="7000" NB_VAL="100000" PREMOY="99546" PREVAR="99546" MOYENNE="0.99546" INT_CONF_90="0.0003496767066" INT_CONFIANCE="0.0004166661311" INT_CONF_99="0.0005475927261"/>
				<VALEURS INSTANT="8000" NB_VAL="100000" PREMOY="99802" PREVAR="99802" MOYENNE="0.99802" INT_CONF_90="0.0002312219648" INT_CONFIANCE="0.000275518385" INT_CONF_99="0.0003620929379"/>
				<VALEURS INSTANT="9000" NB_VAL="100000" PREMOY="99909" PREVAR="99909" MOYENNE="0.99909" INT_CONF_90="0.0001568374859" INT_CONFIANCE="0.0001868836764" INT_CONF_99="0.000245607056"/>
				<VALEURS INSTANT="10000" NB_VAL="100000" PREMOY="99956" PREVAR="99956" MOYENNE="0.99956" INT_CONF_90="0.0001090831429" INT_CONFIANCE="0.0001299807801" INT_CONF_99="0.0001708238909"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="100000" PREMOY="414" PREVAR="414" MOYENNE="0.00414" INT_CONF_90="0.0003339844022" INT_CONFIANCE="0.0003979675686" INT_CONF_99="0.0005230186221"/>
				<VALEURS INSTANT="2000" NB_VAL="100000" PREMOY="411" PREVAR="411" MOYENNE="0.00411" INT_CONF_90="0.0003327771259" INT_CONFIANCE="0.0003965290079" INT_CONF_99="0.0005211280308"/>
				<VALEURS INSTANT="3000" NB_VAL="100000" PREMOY="408" PREVAR="408" MOYENNE="0.00408" INT_CONF_90="0.0003315653803" INT_CONFIANCE="0.0003950851218" INT_CONF_99="0.0005192304408"/>
				<VALEURS INSTANT="4000" NB_VAL="100000" PREMOY="403" PREVAR="403" MOYENNE="0.00403" INT_CONF_90="0.0003295357387" INT_CONFIANCE="0.000392666651" INT_CONF_99="0.0005160520277"/>
				<VALEURS INSTANT="5000" NB_VAL="100000" PREMOY="400" PREVAR="400" MOYENNE="0.004" INT_CONF_90="0.0003283118322" INT_CONFIANCE="0.0003912082742" INT_CONF_99="0.0005141353936"/>
				<VALEURS INSTANT="6000" NB_VAL="100000" PREMOY="393" PREVAR="393" MOYENNE="0.00393" INT_CONF_90="0.0003254378597" INT_CONFIANCE="0.0003877837195" INT_CONF_99="0.0005096347609"/>
				<VALEURS INSTANT="7000" NB_VAL="100000" PREMOY="403" PREVAR="403" MOYENNE="0.00403" INT_CONF_90="0.0003295357387" INT_CONFIANCE="0.000392666651" INT_CONF_99="0.0005160520277"/>
				<VALEURS INSTANT="8000" NB_VAL="100000" PREMOY="355" PREVAR="355" MOYENNE="0.00355" INT_CONF_90="0.0003093633074" INT_CONFIANCE="0.0003686296798" INT_CONF_99="0.0004844620578"/>
				<VALEURS INSTANT="9000" NB_VAL="100000" PREMOY="386" PREVAR="386" MOYENNE="0.00386" INT_CONF_90="0.0003225378688" INT_CONFIANCE="0.0003843281619" INT_CONF_99="0.0005050933834"/>
				<VALEURS INSTANT="10000" NB_VAL="100000" PREMOY="405" PREVAR="405" MOYENNE="0.00405" INT_CONF_90="0.0003303491163" INT_CONFIANCE="0.0003936358517" INT_CONF_99="0.0005173257748"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
