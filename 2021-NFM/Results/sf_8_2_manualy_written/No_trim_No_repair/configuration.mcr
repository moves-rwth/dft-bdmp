<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="48961.8">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1603175878" RNG="mt19937"/>
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
		<GROUPE NOM="ALL"/>
	</GROUPES>
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="S(UE_1)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="10000000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="10000000" PREMOY="9330932" PREVAR="9330932" MOYENNE="0.9330932" INT_CONF_90="0.0001299644316" INT_CONFIANCE="0.0001548624082" INT_CONF_99="0.0002035239295"/>
				<VALEURS INSTANT="2" NB_VAL="10000000" PREMOY="9970556" PREVAR="9970556" MOYENNE="0.9970556" INT_CONF_90="2.818285349E-5" INT_CONFIANCE="3.358199246E-5" INT_CONF_99="4.413426825E-5"/>
				<VALEURS INSTANT="3" NB_VAL="10000000" PREMOY="9998983" PREVAR="9998983" MOYENNE="0.9998983" INT_CONF_90="5.245238754E-6" INT_CONFIANCE="6.25009701E-6" INT_CONF_99="8.214028942E-6"/>
				<VALEURS INSTANT="4" NB_VAL="10000000" PREMOY="9999973" PREVAR="9999973" MOYENNE="0.9999973" INT_CONF_90="8.546891005E-7" INT_CONFIANCE="1.018426432E-6" INT_CONF_99="1.338440696E-6"/>
				<VALEURS INSTANT="5" NB_VAL="10000000" PREMOY="9999999" PREVAR="9999999" MOYENNE="0.9999999" INT_CONF_90="1.644852079E-7" INT_CONFIANCE="1.959965131E-7" INT_CONF_99="2.575833668E-7"/>
				<VALEURS INSTANT="6" NB_VAL="10000000" PREMOY="10000000" PREVAR="10000000" MOYENNE="1" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="7" NB_VAL="10000000" PREMOY="10000000" PREVAR="10000000" MOYENNE="1" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="8" NB_VAL="10000000" PREMOY="10000000" PREVAR="10000000" MOYENNE="1" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="9" NB_VAL="10000000" PREMOY="10000000" PREVAR="10000000" MOYENNE="1" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="10000000" PREVAR="10000000" MOYENNE="1" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="10000000" PREMOY="9330932" PREVAR="9330932" MOYENNE="0.9330932" INT_CONF_90="0.0001299644316" INT_CONFIANCE="0.0001548624082" INT_CONF_99="0.0002035239295"/>
				<VALEURS INSTANT="2" NB_VAL="10000000" PREMOY="9970556" PREVAR="9970556" MOYENNE="0.9970556" INT_CONF_90="2.818285349E-5" INT_CONFIANCE="3.358199246E-5" INT_CONF_99="4.413426825E-5"/>
				<VALEURS INSTANT="3" NB_VAL="10000000" PREMOY="9998983" PREVAR="9998983" MOYENNE="0.9998983" INT_CONF_90="5.245238754E-6" INT_CONFIANCE="6.25009701E-6" INT_CONF_99="8.214028942E-6"/>
				<VALEURS INSTANT="4" NB_VAL="10000000" PREMOY="9999973" PREVAR="9999973" MOYENNE="0.9999973" INT_CONF_90="8.546891005E-7" INT_CONFIANCE="1.018426432E-6" INT_CONF_99="1.338440696E-6"/>
				<VALEURS INSTANT="5" NB_VAL="10000000" PREMOY="9999999" PREVAR="9999999" MOYENNE="0.9999999" INT_CONF_90="1.644852079E-7" INT_CONFIANCE="1.959965131E-7" INT_CONF_99="2.575833668E-7"/>
				<VALEURS INSTANT="6" NB_VAL="10000000" PREMOY="10000000" PREVAR="10000000" MOYENNE="1" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="7" NB_VAL="10000000" PREMOY="10000000" PREVAR="10000000" MOYENNE="1" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="8" NB_VAL="10000000" PREMOY="10000000" PREVAR="10000000" MOYENNE="1" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="9" NB_VAL="10000000" PREMOY="10000000" PREVAR="10000000" MOYENNE="1" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="10000000" PREVAR="10000000" MOYENNE="1" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
