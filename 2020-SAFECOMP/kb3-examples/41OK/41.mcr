<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="26.14">
	<FIGARO0>#\41.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" GRAINE="1576674259" RNG="mt19937"/>
	<HISTOIRE>
		<INTERVALLE T0="6" T1="26" N="10"/>
		<INSTANTS_ORDONNES>
			<INSTANT VALEUR="6"/>
			<INSTANT VALEUR="8"/>
			<INSTANT VALEUR="10"/>
			<INSTANT VALEUR="12"/>
			<INSTANT VALEUR="14"/>
			<INSTANT VALEUR="16"/>
			<INSTANT VALEUR="18"/>
			<INSTANT VALEUR="20"/>
			<INSTANT VALEUR="22"/>
			<INSTANT VALEUR="24"/>
			<INSTANT VALEUR="26"/>
		</INSTANTS_ORDONNES>
	</HISTOIRE>
	<GROUPES>
		<GROUPE NOM="TOUT"/>
	</GROUPES>
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="real(EI_1)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="100000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="DEJA_REALISE(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="6" NB_VAL="100000" PREMOY="5209" PREVAR="5209" MOYENNE="0.05209" INT_CONF_90="0.00115581307" INT_CONFIANCE="0.00137723832" INT_CONF_99="0.001809999973"/>
				<VALEURS INSTANT="8" NB_VAL="100000" PREMOY="9099" PREVAR="9099" MOYENNE="0.09099" INT_CONF_90="0.001495918843" INT_CONFIANCE="0.001782499964" INT_CONF_99="0.002342604646"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="13460" PREVAR="13460" MOYENNE="0.1346" INT_CONF_90="0.001775243149" INT_CONFIANCE="0.00211533591" INT_CONF_99="0.002780025712"/>
				<VALEURS INSTANT="12" NB_VAL="100000" PREMOY="18013" PREVAR="18013" MOYENNE="0.18013" INT_CONF_90="0.001998906094" INT_CONFIANCE="0.002381847155" INT_CONF_99="0.003130281247"/>
				<VALEURS INSTANT="14" NB_VAL="100000" PREMOY="22499" PREVAR="22499" MOYENNE="0.22499" INT_CONF_90="0.002172011552" INT_CONFIANCE="0.002588115345" INT_CONF_99="0.003401363902"/>
				<VALEURS INSTANT="16" NB_VAL="100000" PREMOY="27071" PREVAR="27071" MOYENNE="0.27071" INT_CONF_90="0.002311155403" INT_CONFIANCE="0.002753915722" INT_CONF_99="0.003619262775"/>
				<VALEURS INSTANT="18" NB_VAL="100000" PREMOY="31471" PREVAR="31471" MOYENNE="0.31471" INT_CONF_90="0.002415568394" INT_CONFIANCE="0.002878331665" INT_CONF_99="0.003782773222"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="35676" PREVAR="35676" MOYENNE="0.35676" INT_CONF_90="0.0024917328" INT_CONFIANCE="0.002969087291" INT_CONF_99="0.003902046464"/>
				<VALEURS INSTANT="22" NB_VAL="100000" PREMOY="39679" PREVAR="39679" MOYENNE="0.39679" INT_CONF_90="0.002544728744" INT_CONFIANCE="0.003032235949" INT_CONF_99="0.003985037961"/>
				<VALEURS INSTANT="24" NB_VAL="100000" PREMOY="43452" PREVAR="43452" MOYENNE="0.43452" INT_CONF_90="0.00257834115" INT_CONFIANCE="0.003072287663" INT_CONF_99="0.004037674893"/>
				<VALEURS INSTANT="26" NB_VAL="100000" PREMOY="46875" PREVAR="46875" MOYENNE="0.46875" INT_CONF_90="0.002595655082" INT_CONFIANCE="0.003092918517" INT_CONF_99="0.004064788462"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="6" NB_VAL="100000" PREMOY="3318" PREVAR="3318" MOYENNE="0.03318" INT_CONF_90="0.0009316180055" INT_CONFIANCE="0.001110093016" INT_CONF_99="0.001458911142"/>
				<VALEURS INSTANT="8" NB_VAL="100000" PREMOY="5064" PREVAR="5064" MOYENNE="0.05064" INT_CONF_90="0.001140483964" INT_CONFIANCE="0.001358972536" INT_CONF_99="0.001785994637"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="6771" PREVAR="6771" MOYENNE="0.06771" INT_CONF_90="0.00130685917" INT_CONFIANCE="0.001557221125" INT_CONF_99="0.002046537737"/>
				<VALEURS INSTANT="12" NB_VAL="100000" PREMOY="8083" PREVAR="8083" MOYENNE="0.08083" INT_CONF_90="0.001417787294" INT_CONFIANCE="0.001689400338" INT_CONF_99="0.002220250862"/>
				<VALEURS INSTANT="14" NB_VAL="100000" PREMOY="8971" PREVAR="8971" MOYENNE="0.08971" INT_CONF_90="0.001486405091" INT_CONFIANCE="0.001771163611" INT_CONF_99="0.002327706136"/>
				<VALEURS INSTANT="16" NB_VAL="100000" PREMOY="9916" PREVAR="9916" MOYENNE="0.09916" INT_CONF_90="0.001554601061" INT_CONFIANCE="0.001852424246" INT_CONF_99="0.002434500832"/>
				<VALEURS INSTANT="18" NB_VAL="100000" PREMOY="10466" PREVAR="10466" MOYENNE="0.10466" INT_CONF_90="0.001592249894" INT_CONFIANCE="0.001897285666" INT_CONF_99="0.002493458797"/>
				<VALEURS INSTANT="20" NB_VAL="100000" PREMOY="11026" PREVAR="11026" MOYENNE="0.11026" INT_CONF_90="0.001629173817" INT_CONFIANCE="0.001941283301" INT_CONF_99="0.002551281554"/>
				<VALEURS INSTANT="22" NB_VAL="100000" PREMOY="11500" PREVAR="11500" MOYENNE="0.115" INT_CONF_90="0.001659386014" INT_CONFIANCE="0.001977283409" INT_CONF_99="0.002598593769"/>
				<VALEURS INSTANT="24" NB_VAL="100000" PREMOY="11676" PREVAR="11676" MOYENNE="0.11676" INT_CONF_90="0.001670372293" INT_CONFIANCE="0.001990374388" INT_CONF_99="0.00261579825"/>
				<VALEURS INSTANT="26" NB_VAL="100000" PREMOY="11893" PREVAR="11893" MOYENNE="0.11893" INT_CONF_90="0.001683750688" INT_CONFIANCE="0.002006315753" INT_CONF_99="0.00263674878"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
