<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="6.969">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" OPTIM_INTERACTIONS="VRAI" GRAINE="1609753321" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="95" PREVAR="95" MOYENNE="0.00095" INT_CONF_90="0.0001602441872" INT_CONFIANCE="0.0001909430175" INT_CONF_99="0.0002509419405"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="204" PREVAR="204" MOYENNE="0.00204" INT_CONF_90="0.0002346921269" INT_CONFIANCE="0.0002796533445" INT_CONF_99="0.0003675272019"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="298" PREVAR="298" MOYENNE="0.00298" INT_CONF_90="0.0002835221131" INT_CONFIANCE="0.0003378379506" INT_CONF_99="0.0004439948211"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="394" PREVAR="394" MOYENNE="0.00394" INT_CONF_90="0.0003258500041" INT_CONFIANCE="0.0003882748206" INT_CONF_99="0.0005102801778"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="473" PREVAR="473" MOYENNE="0.00473" INT_CONF_90="0.0003568846731" INT_CONFIANCE="0.000425254966" INT_CONF_99="0.000558880381"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="563" PREVAR="563" MOYENNE="0.00563" INT_CONF_90="0.0003891840865" INT_CONFIANCE="0.0004637421496" INT_CONF_99="0.0006094611704"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="645" PREVAR="645" MOYENNE="0.00645" INT_CONF_90="0.0004163912464" INT_CONFIANCE="0.0004961615298" INT_CONF_99="0.0006520675053"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="749" PREVAR="749" MOYENNE="0.00749" INT_CONF_90="0.0004484718873" INT_CONFIANCE="0.0005343880295" INT_CONF_99="0.0007023056976"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="837" PREVAR="837" MOYENNE="0.00837" INT_CONF_90="0.0004738756874" INT_CONFIANCE="0.0005646585705" INT_CONF_99="0.000742087976"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="923" PREVAR="923" MOYENNE="0.00923" INT_CONF_90="0.0004974095787" INT_CONFIANCE="0.0005927009744" INT_CONF_99="0.0007789419828"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="55" PREVAR="55" MOYENNE="0.00055" INT_CONF_90="0.0001219519505" INT_CONFIANCE="0.0001453149336" INT_CONF_99="0.0001909764069"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="92" PREVAR="92" MOYENNE="0.00092" INT_CONF_90="0.0001576960866" INT_CONFIANCE="0.0001879067638" INT_CONF_99="0.0002469516223"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="96" PREVAR="96" MOYENNE="0.00096" INT_CONF_90="0.0001610845636" INT_CONFIANCE="0.0001919443893" INT_CONF_99="0.0002522579676"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="109" PREVAR="109" MOYENNE="0.00109" INT_CONF_90="0.0001716339902" INT_CONFIANCE="0.0002045148256" INT_CONF_99="0.0002687783396"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="89" PREVAR="89" MOYENNE="0.00089" INT_CONF_90="0.0001551059743" INT_CONFIANCE="0.0001848204499" INT_CONF_99="0.0002428955137"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="90" PREVAR="90" MOYENNE="0.0009" INT_CONF_90="0.0001559741416" INT_CONFIANCE="0.0001858549365" INT_CONF_99="0.0002442550612"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="82" PREVAR="82" MOYENNE="0.00082" INT_CONF_90="0.0001488866171" INT_CONFIANCE="0.0001774096174" INT_CONF_99="0.0002331560181"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="83" PREVAR="83" MOYENNE="0.00083" INT_CONF_90="0.0001497909617" INT_CONFIANCE="0.000178487212" INT_CONF_99="0.0002345722191"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="85" PREVAR="85" MOYENNE="0.00085" INT_CONF_90="0.0001515834122" INT_CONFIANCE="0.0001806230519" INT_CONF_99="0.0002373791916"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="81" PREVAR="81" MOYENNE="0.00081" INT_CONF_90="0.0001479767275" INT_CONFIANCE="0.0001763254154" INT_CONF_99="0.0002317311336"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
