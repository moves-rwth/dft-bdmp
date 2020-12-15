<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="19039.3">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1603397714" RNG="mt19937"/>
	<HISTOIRE>
		<INTERVALLE T0="0" T1="500" N="10"/>
		<INSTANTS_ORDONNES>
			<INSTANT VALEUR="0"/>
			<INSTANT VALEUR="50"/>
			<INSTANT VALEUR="100"/>
			<INSTANT VALEUR="150"/>
			<INSTANT VALEUR="200"/>
			<INSTANT VALEUR="250"/>
			<INSTANT VALEUR="300"/>
			<INSTANT VALEUR="350"/>
			<INSTANT VALEUR="400"/>
			<INSTANT VALEUR="450"/>
			<INSTANT VALEUR="500"/>
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
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="4897818" PREVAR="4897818" MOYENNE="0.4897818" INT_CONF_90="0.0002600196471" INT_CONFIANCE="0.0003098329923" INT_CONF_99="0.0004071900263"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="7397156" PREVAR="7397156" MOYENNE="0.7397156" INT_CONF_90="0.0002282355697" INT_CONFIANCE="0.0002719598704" INT_CONF_99="0.0003574162517"/>
				<VALEURS INSTANT="150" NB_VAL="10000000" PREMOY="8672563" PREVAR="8672563" MOYENNE="0.8672563" INT_CONF_90="0.0001764849031" INT_CONFIANCE="0.0002102950537" INT_CONF_99="0.0002763748554"/>
				<VALEURS INSTANT="200" NB_VAL="10000000" PREMOY="9323419" PREVAR="9323419" MOYENNE="0.9323419" INT_CONF_90="0.0001306394579" INT_CONFIANCE="0.000155666753" INT_CONF_99="0.0002045810188"/>
				<VALEURS INSTANT="250" NB_VAL="10000000" PREMOY="9655514" PREVAR="9655514" MOYENNE="0.9655514" INT_CONF_90="9.4863765E-5" INT_CONFIANCE="0.0001130373205" INT_CONF_99="0.0001485563857"/>
				<VALEURS INSTANT="300" NB_VAL="10000000" PREMOY="9823458" PREVAR="9823458" MOYENNE="0.9823458" INT_CONF_90="6.849881955E-5" INT_CONFIANCE="8.162150235E-5" INT_CONF_99="0.0001072689562"/>
				<VALEURS INSTANT="350" NB_VAL="10000000" PREMOY="9910084" PREVAR="9910084" MOYENNE="0.9910084" INT_CONF_90="4.910028659E-5" INT_CONFIANCE="5.850668936E-5" INT_CONF_99="7.689090887E-5"/>
				<VALEURS INSTANT="400" NB_VAL="10000000" PREMOY="9954108" PREVAR="9954108" MOYENNE="0.9954108" INT_CONF_90="3.515576369E-5" INT_CONFIANCE="4.189074012E-5" INT_CONF_99="5.505382575E-5"/>
				<VALEURS INSTANT="450" NB_VAL="10000000" PREMOY="9976513" PREVAR="9976513" MOYENNE="0.9976513" INT_CONF_90="2.517851023E-5" INT_CONFIANCE="3.000209121E-5" INT_CONF_99="3.942947528E-5"/>
				<VALEURS INSTANT="500" NB_VAL="10000000" PREMOY="9987983" PREVAR="9987983" MOYENNE="0.9987983" INT_CONF_90="1.802037389E-5" INT_CONFIANCE="2.147263266E-5" INT_CONF_99="2.821985417E-5"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="50" NB_VAL="10000000" PREMOY="4897818" PREVAR="4897818" MOYENNE="0.4897818" INT_CONF_90="0.0002600196471" INT_CONFIANCE="0.0003098329923" INT_CONF_99="0.0004071900263"/>
				<VALEURS INSTANT="100" NB_VAL="10000000" PREMOY="7397156" PREVAR="7397156" MOYENNE="0.7397156" INT_CONF_90="0.0002282355697" INT_CONFIANCE="0.0002719598704" INT_CONF_99="0.0003574162517"/>
				<VALEURS INSTANT="150" NB_VAL="10000000" PREMOY="8672563" PREVAR="8672563" MOYENNE="0.8672563" INT_CONF_90="0.0001764849031" INT_CONFIANCE="0.0002102950537" INT_CONF_99="0.0002763748554"/>
				<VALEURS INSTANT="200" NB_VAL="10000000" PREMOY="9323419" PREVAR="9323419" MOYENNE="0.9323419" INT_CONF_90="0.0001306394579" INT_CONFIANCE="0.000155666753" INT_CONF_99="0.0002045810188"/>
				<VALEURS INSTANT="250" NB_VAL="10000000" PREMOY="9655514" PREVAR="9655514" MOYENNE="0.9655514" INT_CONF_90="9.4863765E-5" INT_CONFIANCE="0.0001130373205" INT_CONF_99="0.0001485563857"/>
				<VALEURS INSTANT="300" NB_VAL="10000000" PREMOY="9823458" PREVAR="9823458" MOYENNE="0.9823458" INT_CONF_90="6.849881955E-5" INT_CONFIANCE="8.162150235E-5" INT_CONF_99="0.0001072689562"/>
				<VALEURS INSTANT="350" NB_VAL="10000000" PREMOY="9910084" PREVAR="9910084" MOYENNE="0.9910084" INT_CONF_90="4.910028659E-5" INT_CONFIANCE="5.850668936E-5" INT_CONF_99="7.689090887E-5"/>
				<VALEURS INSTANT="400" NB_VAL="10000000" PREMOY="9954108" PREVAR="9954108" MOYENNE="0.9954108" INT_CONF_90="3.515576369E-5" INT_CONFIANCE="4.189074012E-5" INT_CONF_99="5.505382575E-5"/>
				<VALEURS INSTANT="450" NB_VAL="10000000" PREMOY="9976513" PREVAR="9976513" MOYENNE="0.9976513" INT_CONF_90="2.517851023E-5" INT_CONFIANCE="3.000209121E-5" INT_CONF_99="3.942947528E-5"/>
				<VALEURS INSTANT="500" NB_VAL="10000000" PREMOY="9987983" PREVAR="9987983" MOYENNE="0.9987983" INT_CONF_90="1.802037389E-5" INT_CONFIANCE="2.147263266E-5" INT_CONF_99="2.821985417E-5"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
