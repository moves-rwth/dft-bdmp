<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="5.016">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" OPTIM_INTERACTIONS="VRAI" GRAINE="1609243439" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="728" PREVAR="728" MOYENNE="0.00728" INT_CONF_90="0.0004421869744" INT_CONFIANCE="0.0005268990824" INT_CONF_99="0.0006924635417"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="2044" PREVAR="2044" MOYENNE="0.02044" INT_CONF_90="0.0007360085117" INT_CONFIANCE="0.0008770095727" INT_CONF_99="0.001152587232"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="3613" PREVAR="3613" MOYENNE="0.03613" INT_CONF_90="0.0009706665914" INT_CONFIANCE="0.001156622347" INT_CONF_99="0.001520061116"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="5185" PREVAR="5185" MOYENNE="0.05185" INT_CONF_90="0.001153293316" INT_CONFIANCE="0.001374235843" INT_CONF_99="0.001806054046"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="6720" PREVAR="6720" MOYENNE="0.0672" INT_CONF_90="0.001302284211" INT_CONFIANCE="0.001551769716" INT_CONF_99="0.002039373363"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="8264" PREVAR="8264" MOYENNE="0.08264" INT_CONF_90="0.001432161267" INT_CONFIANCE="0.001706528009" INT_CONF_99="0.002242760462"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="9741" PREVAR="9741" MOYENNE="0.09741" INT_CONF_90="0.001542317905" INT_CONFIANCE="0.00183778794" INT_CONF_99="0.002415265444"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="11185" PREVAR="11185" MOYENNE="0.11185" INT_CONF_90="0.001639411677" INT_CONFIANCE="0.001953482482" INT_CONF_99="0.002567314015"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="12634" PREVAR="12634" MOYENNE="0.12634" INT_CONF_90="0.001728098655" INT_CONFIANCE="0.002059159696" INT_CONF_99="0.00270619757"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="14015" PREVAR="14015" MOYENNE="0.14015" INT_CONF_90="0.001805654975" INT_CONFIANCE="0.002151573891" INT_CONF_99="0.002827650545"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="394" PREVAR="394" MOYENNE="0.00394" INT_CONF_90="0.0003258500041" INT_CONFIANCE="0.0003882748206" INT_CONF_99="0.0005102801778"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="727" PREVAR="727" MOYENNE="0.00727" INT_CONF_90="0.0004418853958" INT_CONFIANCE="0.0005265397287" INT_CONF_99="0.0006919912705"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="840" PREVAR="840" MOYENNE="0.0084" INT_CONF_90="0.0004747169863" INT_CONFIANCE="0.0005656610416" INT_CONF_99="0.0007434054478"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="929" PREVAR="929" MOYENNE="0.00929" INT_CONF_90="0.0004990085653" INT_CONFIANCE="0.0005946062874" INT_CONF_99="0.0007814459912"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="942" PREVAR="942" MOYENNE="0.00942" INT_CONF_90="0.000502454915" INT_CONFIANCE="0.0005987128726" INT_CONF_99="0.0007868429651"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="942" PREVAR="942" MOYENNE="0.00942" INT_CONF_90="0.000502454915" INT_CONFIANCE="0.0005987128726" INT_CONF_99="0.0007868429651"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="894" PREVAR="894" MOYENNE="0.00894" INT_CONF_90="0.0004896047282" INT_CONFIANCE="0.0005834009073" INT_CONF_99="0.0007667196092"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="891" PREVAR="891" MOYENNE="0.00891" INT_CONF_90="0.0004887899513" INT_CONFIANCE="0.0005824300392" INT_CONF_99="0.0007654436708"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="946" PREVAR="946" MOYENNE="0.00946" INT_CONF_90="0.0005035104019" INT_CONFIANCE="0.0005999705648" INT_CONF_99="0.0007884958546"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="912" PREVAR="912" MOYENNE="0.00912" INT_CONF_90="0.0004944641623" INT_CONFIANCE="0.0005891912889" INT_CONF_99="0.0007743294691"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>