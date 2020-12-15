<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="13719.8">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1603302120" RNG="mt19937"/>
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
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="79801" PREVAR="79801" MOYENNE="0.0079801" INT_CONF_90="4.627977392E-5" INT_CONFIANCE="5.51458361E-5" INT_CONF_99="7.247399408E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="391761" PREVAR="391761" MOYENNE="0.0391761" INT_CONF_90="0.0001009158467" INT_CONFIANCE="0.0001202488316" INT_CONF_99="0.0001580339283"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="809620" PREVAR="809620" MOYENNE="0.080962" INT_CONF_90="0.0001418842596" INT_CONFIANCE="0.000169065781" INT_CONF_99="0.0002221903462"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="1250975" PREVAR="1250975" MOYENNE="0.1250975" INT_CONF_90="0.0001720802443" INT_CONFIANCE="0.000205046571" INT_CONF_99="0.0002694771722"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="1688184" PREVAR="1688184" MOYENNE="0.1688184" INT_CONF_90="0.0001948429607" INT_CONFIANCE="0.0002321700618" INT_CONF_99="0.0003051235211"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="2108684" PREVAR="2108684" MOYENNE="0.2108684" INT_CONF_90="0.0002121814136" INT_CONFIANCE="0.0002528301344" INT_CONF_99="0.0003322754891"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="2512068" PREVAR="2512068" MOYENNE="0.2512068" INT_CONF_90="0.0002255919049" INT_CONFIANCE="0.0002688097446" INT_CONF_99="0.0003532762802"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="2895512" PREVAR="2895512" MOYENNE="0.2895512" INT_CONF_90="0.0002359152128" INT_CONFIANCE="0.0002811107435" INT_CONF_99="0.000369442551"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="3259565" PREVAR="3259565" MOYENNE="0.3259565" INT_CONF_90="0.0002438095177" INT_CONFIANCE="0.0002905174023" INT_CONF_99="0.0003818050099"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="3605565" PREVAR="3605565" MOYENNE="0.3605565" INT_CONF_90="0.0002497552482" INT_CONFIANCE="0.0002976021881" INT_CONF_99="0.000391116007"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="79801" PREVAR="79801" MOYENNE="0.0079801" INT_CONF_90="4.627977392E-5" INT_CONFIANCE="5.51458361E-5" INT_CONF_99="7.247399408E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="391761" PREVAR="391761" MOYENNE="0.0391761" INT_CONF_90="0.0001009158467" INT_CONFIANCE="0.0001202488316" INT_CONF_99="0.0001580339283"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="809620" PREVAR="809620" MOYENNE="0.080962" INT_CONF_90="0.0001418842596" INT_CONFIANCE="0.000169065781" INT_CONF_99="0.0002221903462"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="1250975" PREVAR="1250975" MOYENNE="0.1250975" INT_CONF_90="0.0001720802443" INT_CONFIANCE="0.000205046571" INT_CONF_99="0.0002694771722"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="1688184" PREVAR="1688184" MOYENNE="0.1688184" INT_CONF_90="0.0001948429607" INT_CONFIANCE="0.0002321700618" INT_CONF_99="0.0003051235211"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="2108684" PREVAR="2108684" MOYENNE="0.2108684" INT_CONF_90="0.0002121814136" INT_CONFIANCE="0.0002528301344" INT_CONF_99="0.0003322754891"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="2512068" PREVAR="2512068" MOYENNE="0.2512068" INT_CONF_90="0.0002255919049" INT_CONFIANCE="0.0002688097446" INT_CONF_99="0.0003532762802"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="2895512" PREVAR="2895512" MOYENNE="0.2895512" INT_CONF_90="0.0002359152128" INT_CONFIANCE="0.0002811107435" INT_CONF_99="0.000369442551"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="3259565" PREVAR="3259565" MOYENNE="0.3259565" INT_CONF_90="0.0002438095177" INT_CONFIANCE="0.0002905174023" INT_CONF_99="0.0003818050099"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="3605565" PREVAR="3605565" MOYENNE="0.3605565" INT_CONF_90="0.0002497552482" INT_CONFIANCE="0.0002976021881" INT_CONF_99="0.000391116007"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>