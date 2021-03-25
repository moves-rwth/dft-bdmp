<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="11592.5">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1603142169" RNG="mt19937"/>
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
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="3973" PREVAR="3973" MOYENNE="0.0003973" INT_CONF_90="1.036572929E-5" INT_CONFIANCE="1.235154712E-5" INT_CONF_99="1.623270253E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="7898" PREVAR="7898" MOYENNE="0.0007898" INT_CONF_90="1.461214132E-5" INT_CONFIANCE="1.741146687E-5" INT_CONF_99="2.288257167E-5"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="12057" PREVAR="12057" MOYENNE="0.0012057" INT_CONF_90="1.80503043E-5" INT_CONFIANCE="2.1508297E-5" INT_CONF_99="2.82667251E-5"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="16090" PREVAR="16090" MOYENNE="0.001609" INT_CONF_90="2.084755943E-5" INT_CONFIANCE="2.484143716E-5" INT_CONF_99="3.264721866E-5"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="20150" PREVAR="20150" MOYENNE="0.002015" INT_CONF_90="2.332525509E-5" INT_CONFIANCE="2.779379813E-5" INT_CONF_99="3.6527283E-5"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="24242" PREVAR="24242" MOYENNE="0.0024242" INT_CONF_90="2.55790285E-5" INT_CONFIANCE="3.047933889E-5" INT_CONF_99="4.005668574E-5"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="28347" PREVAR="28347" MOYENNE="0.0028347" INT_CONF_90="2.765438472E-5" INT_CONFIANCE="3.295228213E-5" INT_CONF_99="4.330668766E-5"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="32292" PREVAR="32292" MOYENNE="0.0032292" INT_CONF_90="2.951018929E-5" INT_CONFIANCE="3.516361304E-5" INT_CONF_99="4.621287233E-5"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="36368" PREVAR="36368" MOYENNE="0.0036368" INT_CONF_90="3.131089043E-5" INT_CONFIANCE="3.730928407E-5" INT_CONF_99="4.903276519E-5"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="40470" PREVAR="40470" MOYENNE="0.004047" INT_CONF_90="3.302272395E-5" INT_CONFIANCE="3.934906262E-5" INT_CONF_99="5.17134916E-5"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="46" PREVAR="46" MOYENNE="4.6E-6" INT_CONF_90="1.115590447E-6" INT_CONFIANCE="1.329310036E-6" INT_CONF_99="1.747011461E-6"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="43" PREVAR="43" MOYENNE="4.3E-6" INT_CONF_90="1.078599374E-6" INT_CONFIANCE="1.285232387E-6" INT_CONF_99="1.689083546E-6"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="42" PREVAR="42" MOYENNE="4.2E-6" INT_CONF_90="1.065983796E-6" INT_CONFIANCE="1.270199975E-6" INT_CONF_99="1.669327587E-6"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="50" PREVAR="50" MOYENNE="5E-6" INT_CONF_90="1.16308321E-6" INT_CONFIANCE="1.38590124E-6" INT_CONF_99="1.821384992E-6"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="47" PREVAR="47" MOYENNE="4.7E-6" INT_CONF_90="1.127651179E-6" INT_CONFIANCE="1.343681306E-6" INT_CONF_99="1.765898532E-6"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="45" PREVAR="45" MOYENNE="4.5E-6" INT_CONF_90="1.103397891E-6" INT_CONFIANCE="1.314781687E-6" INT_CONF_99="1.727917953E-6"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="47" PREVAR="47" MOYENNE="4.7E-6" INT_CONF_90="1.127651179E-6" INT_CONFIANCE="1.343681306E-6" INT_CONF_99="1.765898532E-6"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="46" PREVAR="46" MOYENNE="4.6E-6" INT_CONF_90="1.115590447E-6" INT_CONFIANCE="1.329310036E-6" INT_CONF_99="1.747011461E-6"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="63" PREVAR="63" MOYENNE="6.3E-6" INT_CONF_90="1.305556816E-6" INT_CONFIANCE="1.555669272E-6" INT_CONF_99="2.044498254E-6"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="60" PREVAR="60" MOYENNE="6E-6" INT_CONF_90="1.274093183E-6" INT_CONFIANCE="1.518177984E-6" INT_CONF_99="1.995226294E-6"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>