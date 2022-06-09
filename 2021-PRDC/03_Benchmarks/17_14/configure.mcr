<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="7.656">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" OPTIM_INTERACTIONS="VRAI" GRAINE="1609243464" RNG="mt19937"/>
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
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="998" PREVAR="998" MOYENNE="0.00998" INT_CONF_90="0.000517028073" INT_CONFIANCE="0.0006160778879" INT_CONF_99="0.0008096644889"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="2855" PREVAR="2855" MOYENNE="0.02855" INT_CONF_90="0.0008662438263" INT_CONFIANCE="0.001032194758" INT_CONF_99="0.001356535364"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="5013" PREVAR="5013" MOYENNE="0.05013" INT_CONF_90="0.001135031221" INT_CONFIANCE="0.001352475183" INT_CONF_99="0.001777455658"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="7169" PREVAR="7169" MOYENNE="0.07169" INT_CONF_90="0.001341845995" INT_CONFIANCE="0.001598910562" INT_CONF_99="0.002101327005"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="9247" PREVAR="9247" MOYENNE="0.09247" INT_CONF_90="0.001506807572" INT_CONFIANCE="0.001795474704" INT_CONF_99="0.002359656363"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="11370" PREVAR="11370" MOYENNE="0.1137" INT_CONF_90="0.001651191624" INT_CONFIANCE="0.001967519176" INT_CONF_99="0.002585761377"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="13359" PREVAR="13359" MOYENNE="0.13359" INT_CONF_90="0.001769601888" INT_CONFIANCE="0.002108613923" INT_CONF_99="0.002771191513"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="15276" PREVAR="15276" MOYENNE="0.15276" INT_CONF_90="0.001871263388" INT_CONFIANCE="0.002229751257" INT_CONF_99="0.002930393133"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="17146" PREVAR="17146" MOYENNE="0.17146" INT_CONF_90="0.001960491752" INT_CONFIANCE="0.002336073573" INT_CONF_99="0.003070124497"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="18966" PREVAR="18966" MOYENNE="0.18966" INT_CONF_90="0.00203914628" INT_CONFIANCE="0.002429796367" INT_CONF_99="0.003193297264"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="561" PREVAR="561" MOYENNE="0.00561" INT_CONF_90="0.00038849611" INT_CONFIANCE="0.0004629223739" INT_CONF_99="0.0006083838012"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="963" PREVAR="963" MOYENNE="0.00963" INT_CONF_90="0.000507970804" INT_CONFIANCE="0.0006052854697" INT_CONF_99="0.0007954808315"/>
				<VALEURS INSTANT="30" NB_VAL="100000" PREMOY="1199" PREVAR="1199" MOYENNE="0.01199" INT_CONF_90="0.0005661312543" INT_CONFIANCE="0.0006745880265" INT_CONF_99="0.0008865599309"/>
				<VALEURS INSTANT="40" NB_VAL="100000" PREMOY="1219" PREVAR="1219" MOYENNE="0.01219" INT_CONF_90="0.0005707756428" INT_CONFIANCE="0.0006801221653" INT_CONF_99="0.0008938330302"/>
				<VALEURS INSTANT="50" NB_VAL="100000" PREMOY="1202" PREVAR="1202" MOYENNE="0.01202" INT_CONF_90="0.0005668304602" INT_CONFIANCE="0.000675421183" INT_CONF_99="0.0008876548854"/>
				<VALEURS INSTANT="60" NB_VAL="100000" PREMOY="1250" PREVAR="1250" MOYENNE="0.0125" INT_CONF_90="0.0005778969848" INT_CONFIANCE="0.0006886077805" INT_CONF_99="0.0009049850313"/>
				<VALEURS INSTANT="70" NB_VAL="100000" PREMOY="1219" PREVAR="1219" MOYENNE="0.01219" INT_CONF_90="0.0005707756428" INT_CONFIANCE="0.0006801221653" INT_CONF_99="0.0008938330302"/>
				<VALEURS INSTANT="80" NB_VAL="100000" PREMOY="1243" PREVAR="1243" MOYENNE="0.01243" INT_CONF_90="0.0005762970261" INT_CONFIANCE="0.0006867013093" INT_CONF_99="0.0009024795006"/>
				<VALEURS INSTANT="90" NB_VAL="100000" PREMOY="1231" PREVAR="1231" MOYENNE="0.01231" INT_CONF_90="0.0005735433183" INT_CONFIANCE="0.000683420059" INT_CONF_99="0.0008981672021"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="1206" PREVAR="1206" MOYENNE="0.01206" INT_CONF_90="0.0005677613287" INT_CONFIANCE="0.0006765303829" INT_CONF_99="0.0008891126228"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>