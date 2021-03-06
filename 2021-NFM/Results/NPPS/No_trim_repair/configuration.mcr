<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="14802.3">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1603286843" RNG="mt19937"/>
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
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="30" PREVAR="30" MOYENNE="3E-6" INT_CONF_90="9.009212812E-7" INT_CONFIANCE="1.073515558E-6" INT_CONF_99="1.410840159E-6"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="80" PREVAR="80" MOYENNE="8E-6" INT_CONF_90="1.471194614E-6" INT_CONFIANCE="1.753039182E-6" INT_CONF_99="2.303886572E-6"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="108" PREVAR="108" MOYENNE="1.08E-5" INT_CONF_90="1.709371278E-6" INT_CONFIANCE="2.036844616E-6" INT_CONF_99="2.67687055E-6"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="146" PREVAR="146" MOYENNE="1.46E-5" INT_CONF_90="1.98746792E-6" INT_CONFIANCE="2.368217709E-6" INT_CONF_99="3.112369099E-6"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="188" PREVAR="188" MOYENNE="1.88E-5" INT_CONF_90="2.255286457E-6" INT_CONFIANCE="2.687343666E-6" INT_CONF_99="3.531772166E-6"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="226" PREVAR="226" MOYENNE="2.26E-5" INT_CONF_90="2.472727062E-6" INT_CONFIANCE="2.946440523E-6" INT_CONF_99="3.872283532E-6"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="259" PREVAR="259" MOYENNE="2.59E-5" INT_CONF_90="2.647104752E-6" INT_CONFIANCE="3.154224674E-6" INT_CONF_99="4.145358498E-6"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="285" PREVAR="285" MOYENNE="2.85E-5" INT_CONF_90="2.776790476E-6" INT_CONFIANCE="3.30875498E-6" INT_CONF_99="4.348445972E-6"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="324" PREVAR="324" MOYENNE="3.24E-5" INT_CONF_90="2.960685926E-6" INT_CONFIANCE="3.527880259E-6" INT_CONF_99="4.636425723E-6"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="362" PREVAR="362" MOYENNE="3.62E-5" INT_CONF_90="3.129488026E-6" INT_CONFIANCE="3.729020674E-6" INT_CONF_99="4.900769331E-6"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="3" PREVAR="3" MOYENNE="3E-7" INT_CONF_90="2.848967087E-7" INT_CONFIANCE="3.394758849E-7" INT_CONF_99="4.46147434E-7"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="3" PREVAR="3" MOYENNE="3E-7" INT_CONF_90="2.848967087E-7" INT_CONFIANCE="3.394758849E-7" INT_CONF_99="4.46147434E-7"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="1" PREVAR="1" MOYENNE="1E-7" INT_CONF_90="1.644852079E-7" INT_CONFIANCE="1.959965131E-7" INT_CONF_99="2.575833669E-7"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="3" PREVAR="3" MOYENNE="3E-7" INT_CONF_90="2.848967087E-7" INT_CONFIANCE="3.394758849E-7" INT_CONF_99="4.46147434E-7"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="2" PREVAR="2" MOYENNE="2E-7" INT_CONF_90="2.326172002E-7" INT_CONFIANCE="2.771809131E-7" INT_CONF_99="3.642778727E-7"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
