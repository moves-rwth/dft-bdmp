<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="199.281">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" OPTIM_INTERACTIONS="VRAI" GRAINE="1608371275" RNG="mt19937"/>
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
	<INDICATEURS NB_HISTOIRES="100000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="100000" PREMOY="7533" PREVAR="7533" MOYENNE="0.07533" INT_CONF_90="0.001372790412" INT_CONFIANCE="0.001635783165" INT_CONF_99="0.002149785874"/>
				<VALEURS INSTANT="2000" NB_VAL="100000" PREMOY="14574" PREVAR="14574" MOYENNE="0.14574" INT_CONF_90="0.001835317848" INT_CONFIANCE="0.00218691944" INT_CONF_99="0.00287410252"/>
				<VALEURS INSTANT="3000" NB_VAL="100000" PREMOY="21003" PREVAR="21003" MOYENNE="0.21003" INT_CONF_90="0.002118716435" INT_CONFIANCE="0.002524610199" INT_CONF_99="0.003317903899"/>
				<VALEURS INSTANT="4000" NB_VAL="100000" PREMOY="26988" PREVAR="26988" MOYENNE="0.26988" INT_CONF_90="0.002308922432" INT_CONFIANCE="0.00275125497" INT_CONF_99="0.003615765949"/>
				<VALEURS INSTANT="5000" NB_VAL="100000" PREMOY="32385" PREVAR="32385" MOYENNE="0.32385" INT_CONF_90="0.002433998727" INT_CONFIANCE="0.002900292795" INT_CONF_99="0.00381163507"/>
				<VALEURS INSTANT="6000" NB_VAL="100000" PREMOY="37453" PREVAR="37453" MOYENNE="0.37453" INT_CONF_90="0.002517522827" INT_CONFIANCE="0.002999818051" INT_CONF_99="0.003942433574"/>
				<VALEURS INSTANT="7000" NB_VAL="100000" PREMOY="42175" PREVAR="42175" MOYENNE="0.42175" INT_CONF_90="0.002568693201" INT_CONFIANCE="0.003060791405" INT_CONF_99="0.004022566233"/>
				<VALEURS INSTANT="8000" NB_VAL="100000" PREMOY="46574" PREVAR="46574" MOYENNE="0.46574" INT_CONF_90="0.002594627216" INT_CONFIANCE="0.003091693736" INT_CONF_99="0.004063178826"/>
				<VALEURS INSTANT="9000" NB_VAL="100000" PREMOY="50644" PREVAR="50644" MOYENNE="0.50644" INT_CONF_90="0.002600523889" INT_CONFIANCE="0.003098720067" INT_CONF_99="0.004072413"/>
				<VALEURS INSTANT="10000" NB_VAL="100000" PREMOY="54308" PREVAR="54308" MOYENNE="0.54308" INT_CONF_90="0.002591068285" INT_CONFIANCE="0.003087453003" INT_CONF_99="0.004057605551"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="100000" PREMOY="26" PREVAR="26" MOYENNE="0.00026" INT_CONF_90="8.38604287E-5" INT_CONFIANCE="9.992601657E-5" INT_CONF_99="0.0001313251924"/>
				<VALEURS INSTANT="2000" NB_VAL="100000" PREMOY="29" PREVAR="29" MOYENNE="0.00029" INT_CONF_90="8.856515498E-5" INT_CONFIANCE="0.0001055320523" INT_CONF_99="0.0001386927803"/>
				<VALEURS INSTANT="3000" NB_VAL="100000" PREMOY="25" PREVAR="25" MOYENNE="0.00025" INT_CONF_90="8.22323271E-5" INT_CONFIANCE="9.79860109E-5" INT_CONF_99="0.0001287755899"/>
				<VALEURS INSTANT="4000" NB_VAL="100000" PREMOY="26" PREVAR="26" MOYENNE="0.00026" INT_CONF_90="8.38604287E-5" INT_CONFIANCE="9.992601657E-5" INT_CONF_99="0.0001313251924"/>
				<VALEURS INSTANT="5000" NB_VAL="100000" PREMOY="24" PREVAR="24" MOYENNE="0.00024" INT_CONF_90="8.057129966E-5" INT_CONFIANCE="9.600677161E-5" INT_CONF_99="0.0001261744257"/>
				<VALEURS INSTANT="6000" NB_VAL="100000" PREMOY="18" PREVAR="18" MOYENNE="0.00018" INT_CONF_90="6.97788861E-5" INT_CONFIANCE="8.314679804E-5" INT_CONF_99="0.0001092735368"/>
				<VALEURS INSTANT="7000" NB_VAL="100000" PREMOY="34" PREVAR="34" MOYENNE="0.00034" INT_CONF_90="9.58942321E-5" INT_CONFIANCE="0.0001142651996" INT_CONF_99="0.0001501700942"/>
				<VALEURS INSTANT="8000" NB_VAL="100000" PREMOY="22" PREVAR="22" MOYENNE="0.00022" INT_CONF_90="7.714191799E-5" INT_CONFIANCE="9.192040508E-5" INT_CONF_99="0.0001208040237"/>
				<VALEURS INSTANT="9000" NB_VAL="100000" PREMOY="27" PREVAR="27" MOYENNE="0.00027" INT_CONF_90="8.545748634E-5" INT_CONFIANCE="0.000101829031" INT_CONF_99="0.0001338261801"/>
				<VALEURS INSTANT="10000" NB_VAL="100000" PREMOY="30" PREVAR="30" MOYENNE="0.0003" INT_CONF_90="9.00787484E-5" INT_CONFIANCE="0.0001073356128" INT_CONF_99="0.0001410630633"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
