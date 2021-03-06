<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="1547.06">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595937206" RNG="mt19937"/>
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
	<INDICATEURS NB_HISTOIRES="10000000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="1952" PREVAR="1952" MOYENNE="0.0001952" INT_CONF_90="7.266485064E-6" INT_CONFIANCE="8.658564215E-6" INT_CONF_99="1.13792949E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="3901" PREVAR="3901" MOYENNE="0.0003901" INT_CONF_90="1.027141128E-5" INT_CONFIANCE="1.223916011E-5" INT_CONF_99="1.60850008E-5"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="5927" PREVAR="5927" MOYENNE="0.0005927" INT_CONF_90="1.265947199E-5" INT_CONFIANCE="1.50847143E-5" INT_CONF_99="1.982469706E-5"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="7933" PREVAR="7933" MOYENNE="0.0007933" INT_CONF_90="1.464445675E-5" INT_CONFIANCE="1.744997313E-5" INT_CONF_99="2.293317754E-5"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="9891" PREVAR="9891" MOYENNE="0.0009891" INT_CONF_90="1.635053939E-5" INT_CONFIANCE="1.948289909E-5" INT_CONF_99="2.560489809E-5"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="11928" PREVAR="11928" MOYENNE="0.0011928" INT_CONF_90="1.795359885E-5" INT_CONFIANCE="2.139306517E-5" INT_CONF_99="2.811528464E-5"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="13892" PREVAR="13892" MOYENNE="0.0013892" INT_CONF_90="1.937346875E-5" INT_CONFIANCE="2.308494709E-5" INT_CONF_99="3.033879685E-5"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="15901" PREVAR="15901" MOYENNE="0.0015901" INT_CONF_90="2.072495174E-5" INT_CONFIANCE="2.469534086E-5" INT_CONF_99="3.245521537E-5"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="17898" PREVAR="17898" MOYENNE="0.0017898" INT_CONF_90="2.198569118E-5" INT_CONFIANCE="2.619760685E-5" INT_CONF_99="3.442952973E-5"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="19884" PREVAR="19884" MOYENNE="0.0019884" INT_CONF_90="2.317109414E-5" INT_CONFIANCE="2.761010375E-5" INT_CONF_99="3.628586739E-5"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="9" PREVAR="9" MOYENNE="9E-7" INT_CONF_90="4.934554264E-7" INT_CONFIANCE="5.879893041E-7" INT_CONF_99="7.727497915E-7"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="9" PREVAR="9" MOYENNE="9E-7" INT_CONF_90="4.934554264E-7" INT_CONFIANCE="5.879893041E-7" INT_CONF_99="7.727497915E-7"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="14" PREVAR="14" MOYENNE="1.4E-6" INT_CONF_90="6.154468932E-7" INT_CONFIANCE="7.333513244E-7" INT_CONF_99="9.637880809E-7"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="10" PREVAR="10" MOYENNE="1E-6" INT_CONF_90="5.201476644E-7" INT_CONFIANCE="6.19795116E-7" INT_CONF_99="8.145497601E-7"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="12" PREVAR="12" MOYENNE="1.2E-6" INT_CONF_90="5.69793161E-7" INT_CONFIANCE="6.789514642E-7" INT_CONF_99="8.922944664E-7"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="16" PREVAR="16" MOYENNE="1.6E-6" INT_CONF_90="6.579403382E-7" INT_CONFIANCE="7.839854644E-7" INT_CONF_99="1.030332695E-6"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="9" PREVAR="9" MOYENNE="9E-7" INT_CONF_90="4.934554264E-7" INT_CONFIANCE="5.879893041E-7" INT_CONF_99="7.727497915E-7"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="7" PREVAR="7" MOYENNE="7E-7" INT_CONF_90="4.351868239E-7" INT_CONFIANCE="5.185578759E-7" INT_CONF_99="6.815013261E-7"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="4" PREVAR="4" MOYENNE="4E-7" INT_CONF_90="3.289703665E-7" INT_CONFIANCE="3.919929674E-7" INT_CONF_99="5.151666565E-7"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="14" PREVAR="14" MOYENNE="1.4E-6" INT_CONF_90="6.154468932E-7" INT_CONFIANCE="7.333513244E-7" INT_CONF_99="9.637880809E-7"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
