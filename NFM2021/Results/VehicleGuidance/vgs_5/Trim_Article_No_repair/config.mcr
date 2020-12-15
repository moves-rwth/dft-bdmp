<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="326.454">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="1000000" OPTIM_INTERACTIONS="VRAI" GRAINE="1603473042" RNG="mt19937"/>
	<HISTOIRE>
		<INTERVALLE T0="0" T1="100000" N="10"/>
		<INSTANTS_ORDONNES>
			<INSTANT VALEUR="0"/>
			<INSTANT VALEUR="10000"/>
			<INSTANT VALEUR="20000"/>
			<INSTANT VALEUR="30000"/>
			<INSTANT VALEUR="40000"/>
			<INSTANT VALEUR="50000"/>
			<INSTANT VALEUR="60000"/>
			<INSTANT VALEUR="70000"/>
			<INSTANT VALEUR="80000"/>
			<INSTANT VALEUR="90000"/>
			<INSTANT VALEUR="100000"/>
		</INSTANTS_ORDONNES>
	</HISTOIRE>
	<GROUPES>
		<GROUPE NOM="ALL"/>
	</GROUPES>
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="S(UE_1)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="1000000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="1000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10000" NB_VAL="1000000" PREMOY="59995" PREVAR="59995" MOYENNE="0.059995" INT_CONF_90="0.0003906155072" INT_CONFIANCE="0.0004654477952" INT_CONF_99="0.0006117027711"/>
				<VALEURS INSTANT="20000" NB_VAL="1000000" PREMOY="158097" PREVAR="158097" MOYENNE="0.158097" INT_CONF_90="0.0006000945919" INT_CONFIANCE="0.0007150579011" INT_CONF_99="0.0009397464208"/>
				<VALEURS INSTANT="30000" NB_VAL="1000000" PREMOY="264004" PREVAR="264004" MOYENNE="0.264004" INT_CONF_90="0.0007250531612" INT_CONFIANCE="0.0008639554475" INT_CONF_99="0.001135431184"/>
				<VALEURS INSTANT="40000" NB_VAL="1000000" PREMOY="365203" PREVAR="365203" MOYENNE="0.365203" INT_CONF_90="0.0007919749969" INT_CONFIANCE="0.0009436978548" INT_CONF_99="0.001240230588"/>
				<VALEURS INSTANT="50000" NB_VAL="1000000" PREMOY="457284" PREVAR="457284" MOYENNE="0.457284" INT_CONF_90="0.0008194192939" INT_CONFIANCE="0.0009763998015" INT_CONF_99="0.001283208279"/>
				<VALEURS INSTANT="60000" NB_VAL="1000000" PREMOY="539208" PREVAR="539208" MOYENNE="0.539208" INT_CONF_90="0.0008198936042" INT_CONFIANCE="0.0009769649781" INT_CONF_99="0.001283951048"/>
				<VALEURS INSTANT="70000" NB_VAL="1000000" PREMOY="611144" PREVAR="611144" MOYENNE="0.611144" INT_CONF_90="0.0008018498425" INT_CONFIANCE="0.0009554644771" INT_CONF_99="0.001255694568"/>
				<VALEURS INSTANT="80000" NB_VAL="1000000" PREMOY="673097" PREVAR="673097" MOYENNE="0.673097" INT_CONF_90="0.0007715696752" INT_CONFIANCE="0.0009193833772" INT_CONF_99="0.001208275913"/>
				<VALEURS INSTANT="90000" NB_VAL="1000000" PREMOY="726347" PREVAR="726347" MOYENNE="0.726347" INT_CONF_90="0.0007333293215" INT_CONFIANCE="0.0008738171158" INT_CONF_99="0.001148391628"/>
				<VALEURS INSTANT="100000" NB_VAL="1000000" PREMOY="772004" PREVAR="772004" MOYENNE="0.772004" INT_CONF_90="0.0006900813001" INT_CONFIANCE="0.0008222838411" INT_CONF_99="0.001080665349"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="1000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10000" NB_VAL="1000000" PREMOY="59995" PREVAR="59995" MOYENNE="0.059995" INT_CONF_90="0.0003906155072" INT_CONFIANCE="0.0004654477952" INT_CONF_99="0.0006117027711"/>
				<VALEURS INSTANT="20000" NB_VAL="1000000" PREMOY="158097" PREVAR="158097" MOYENNE="0.158097" INT_CONF_90="0.0006000945919" INT_CONFIANCE="0.0007150579011" INT_CONF_99="0.0009397464208"/>
				<VALEURS INSTANT="30000" NB_VAL="1000000" PREMOY="264004" PREVAR="264004" MOYENNE="0.264004" INT_CONF_90="0.0007250531612" INT_CONFIANCE="0.0008639554475" INT_CONF_99="0.001135431184"/>
				<VALEURS INSTANT="40000" NB_VAL="1000000" PREMOY="365203" PREVAR="365203" MOYENNE="0.365203" INT_CONF_90="0.0007919749969" INT_CONFIANCE="0.0009436978548" INT_CONF_99="0.001240230588"/>
				<VALEURS INSTANT="50000" NB_VAL="1000000" PREMOY="457284" PREVAR="457284" MOYENNE="0.457284" INT_CONF_90="0.0008194192939" INT_CONFIANCE="0.0009763998015" INT_CONF_99="0.001283208279"/>
				<VALEURS INSTANT="60000" NB_VAL="1000000" PREMOY="539208" PREVAR="539208" MOYENNE="0.539208" INT_CONF_90="0.0008198936042" INT_CONFIANCE="0.0009769649781" INT_CONF_99="0.001283951048"/>
				<VALEURS INSTANT="70000" NB_VAL="1000000" PREMOY="611144" PREVAR="611144" MOYENNE="0.611144" INT_CONF_90="0.0008018498425" INT_CONFIANCE="0.0009554644771" INT_CONF_99="0.001255694568"/>
				<VALEURS INSTANT="80000" NB_VAL="1000000" PREMOY="673097" PREVAR="673097" MOYENNE="0.673097" INT_CONF_90="0.0007715696752" INT_CONFIANCE="0.0009193833772" INT_CONF_99="0.001208275913"/>
				<VALEURS INSTANT="90000" NB_VAL="1000000" PREMOY="726347" PREVAR="726347" MOYENNE="0.726347" INT_CONF_90="0.0007333293215" INT_CONFIANCE="0.0008738171158" INT_CONF_99="0.001148391628"/>
				<VALEURS INSTANT="100000" NB_VAL="1000000" PREMOY="772004" PREVAR="772004" MOYENNE="0.772004" INT_CONF_90="0.0006900813001" INT_CONFIANCE="0.0008222838411" INT_CONF_99="0.001080665349"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>