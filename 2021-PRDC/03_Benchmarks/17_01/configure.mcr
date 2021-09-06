<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="14.281">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" OPTIM_INTERACTIONS="VRAI" GRAINE="1609241511" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="15090" PREVAR="15090" MOYENNE="0.1509" INT_CONF_90="0.00186187667" INT_CONFIANCE="0.002218566276" INT_CONF_99="0.00291569356"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="27776" PREVAR="27776" MOYENNE="0.27776" INT_CONF_90="0.00232971336" INT_CONFIANCE="0.002776028927" INT_CONF_99="0.003648324484"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="38491" PREVAR="38491" MOYENNE="0.38491" INT_CONF_90="0.002530904746" INT_CONFIANCE="0.003015763615" INT_CONF_99="0.00396338962"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="47635" PREVAR="47635" MOYENNE="0.47635" INT_CONF_90="0.002597828689" INT_CONFIANCE="0.003095508533" INT_CONF_99="0.004068192324"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="55410" PREVAR="55410" MOYENNE="0.5541" INT_CONF_90="0.002585471061" INT_CONFIANCE="0.003080783489" INT_CONF_99="0.004048840314"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="62131" PREVAR="62131" MOYENNE="0.62131" INT_CONF_90="0.00252303317" INT_CONFIANCE="0.003006384039" INT_CONF_99="0.003951062754"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="67759" PREVAR="67759" MOYENNE="0.67759" INT_CONF_90="0.002431166012" INT_CONFIANCE="0.002896917402" INT_CONF_99="0.003807199047"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="72464" PREVAR="72464" MOYENNE="0.72464" INT_CONF_90="0.002323477376" INT_CONFIANCE="0.002768598281" INT_CONF_99="0.003638558949"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="76574" PREVAR="76574" MOYENNE="0.76574" INT_CONF_90="0.002203010699" INT_CONFIANCE="0.002625053163" INT_CONF_99="0.003449908477"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="80099" PREVAR="80099" MOYENNE="0.80099" INT_CONF_90="0.002076719624" INT_CONFIANCE="0.002474567836" INT_CONF_99="0.003252137013"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="7564" PREVAR="7564" MOYENNE="0.07564" INT_CONF_90="0.001375381574" INT_CONFIANCE="0.00163887073" INT_CONF_99="0.002153843626"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="8812" PREVAR="8812" MOYENNE="0.08812" INT_CONF_90="0.001474459878" INT_CONFIANCE="0.001756929991" INT_CONF_99="0.002308999967"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="8914" PREVAR="8914" MOYENNE="0.08914" INT_CONF_90="0.001482139221" INT_CONFIANCE="0.001766080507" INT_CONF_99="0.002321025797"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="9125" PREVAR="9125" MOYENNE="0.09125" INT_CONF_90="0.001497840324" INT_CONFIANCE="0.001784789553" INT_CONF_99="0.00234561368"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="9011" PREVAR="9011" MOYENNE="0.09011" INT_CONF_90="0.001489387864" INT_CONFIANCE="0.00177471781" INT_CONF_99="0.00233237715"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="9141" PREVAR="9141" MOYENNE="0.09141" INT_CONF_90="0.001499020944" INT_CONFIANCE="0.00178619635" INT_CONF_99="0.002347462526"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="8951" PREVAR="8951" MOYENNE="0.08951" INT_CONF_90="0.001484910364" INT_CONFIANCE="0.001769382532" INT_CONF_99="0.002325365399"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="9072" PREVAR="9072" MOYENNE="0.09072" INT_CONF_90="0.001493919548" INT_CONFIANCE="0.001780117653" INT_CONF_99="0.002339473754"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="9052" PREVAR="9052" MOYENNE="0.09052" INT_CONF_90="0.001492436009" INT_CONFIANCE="0.001778349905" INT_CONF_99="0.002337150537"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="9119" PREVAR="9119" MOYENNE="0.09119" INT_CONF_90="0.001497397233" INT_CONFIANCE="0.001784261576" INT_CONF_99="0.0023449198"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
