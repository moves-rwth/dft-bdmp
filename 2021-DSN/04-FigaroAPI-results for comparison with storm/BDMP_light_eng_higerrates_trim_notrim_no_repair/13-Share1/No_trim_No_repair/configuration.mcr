<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="449.891">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1596002428" RNG="mt19937"/>
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
				<VALEURS INSTANT="1" NB_VAL="10000000" PREMOY="522009" PREVAR="522009" MOYENNE="0.0522009" INT_CONF_90="0.0001156975097" INT_CONFIANCE="0.0001378622963" INT_CONF_99="0.0001811819705"/>
				<VALEURS INSTANT="2" NB_VAL="10000000" PREMOY="1071585" PREVAR="1071585" MOYENNE="0.1071585" INT_CONF_90="0.0001608893759" INT_CONFIANCE="0.0001917118084" INT_CONF_99="0.0002519523041"/>
				<VALEURS INSTANT="3" NB_VAL="10000000" PREMOY="1631427" PREVAR="1631427" MOYENNE="0.1631427" INT_CONF_90="0.0001921924828" INT_CONFIANCE="0.0002290118178" INT_CONF_99="0.0003009728803"/>
				<VALEURS INSTANT="4" NB_VAL="10000000" PREMOY="2192220" PREVAR="2192220" MOYENNE="0.219222" INT_CONF_90="0.0002151952701" INT_CONFIANCE="0.0002564213713" INT_CONF_99="0.0003369951797"/>
				<VALEURS INSTANT="5" NB_VAL="10000000" PREMOY="2742087" PREVAR="2742087" MOYENNE="0.2742087" INT_CONF_90="0.0002320456139" INT_CONFIANCE="0.000276499825" INT_CONF_99="0.00036338277"/>
				<VALEURS INSTANT="6" NB_VAL="10000000" PREMOY="3275096" PREVAR="3275096" MOYENNE="0.3275096" INT_CONF_90="0.0002441079546" INT_CONFIANCE="0.0002908730124" INT_CONF_99="0.0003822723612"/>
				<VALEURS INSTANT="7" NB_VAL="10000000" PREMOY="3785176" PREVAR="3785176" MOYENNE="0.3785176" INT_CONF_90="0.0002522808734" INT_CONFIANCE="0.0003006116607" INT_CONF_99="0.0003950711288"/>
				<VALEURS INSTANT="8" NB_VAL="10000000" PREMOY="4269376" PREVAR="4269376" MOYENNE="0.4269376" INT_CONF_90="0.0002572823709" INT_CONFIANCE="0.0003065713216" INT_CONF_99="0.0004029034597"/>
				<VALEURS INSTANT="9" NB_VAL="10000000" PREMOY="4728202" PREVAR="4728202" MOYENNE="0.4728202" INT_CONF_90="0.0002596894231" INT_CONFIANCE="0.0003094395056" INT_CONF_99="0.0004066728965"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="5158500" PREVAR="5158500" MOYENNE="0.51585" INT_CONF_90="0.0002599432565" INT_CONFIANCE="0.0003097419672" INT_CONF_99="0.0004070703989"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="10000000" PREMOY="522009" PREVAR="522009" MOYENNE="0.0522009" INT_CONF_90="0.0001156975097" INT_CONFIANCE="0.0001378622963" INT_CONF_99="0.0001811819705"/>
				<VALEURS INSTANT="2" NB_VAL="10000000" PREMOY="1071585" PREVAR="1071585" MOYENNE="0.1071585" INT_CONF_90="0.0001608893759" INT_CONFIANCE="0.0001917118084" INT_CONF_99="0.0002519523041"/>
				<VALEURS INSTANT="3" NB_VAL="10000000" PREMOY="1631427" PREVAR="1631427" MOYENNE="0.1631427" INT_CONF_90="0.0001921924828" INT_CONFIANCE="0.0002290118178" INT_CONF_99="0.0003009728803"/>
				<VALEURS INSTANT="4" NB_VAL="10000000" PREMOY="2192220" PREVAR="2192220" MOYENNE="0.219222" INT_CONF_90="0.0002151952701" INT_CONFIANCE="0.0002564213713" INT_CONF_99="0.0003369951797"/>
				<VALEURS INSTANT="5" NB_VAL="10000000" PREMOY="2742087" PREVAR="2742087" MOYENNE="0.2742087" INT_CONF_90="0.0002320456139" INT_CONFIANCE="0.000276499825" INT_CONF_99="0.00036338277"/>
				<VALEURS INSTANT="6" NB_VAL="10000000" PREMOY="3275096" PREVAR="3275096" MOYENNE="0.3275096" INT_CONF_90="0.0002441079546" INT_CONFIANCE="0.0002908730124" INT_CONF_99="0.0003822723612"/>
				<VALEURS INSTANT="7" NB_VAL="10000000" PREMOY="3785176" PREVAR="3785176" MOYENNE="0.3785176" INT_CONF_90="0.0002522808734" INT_CONFIANCE="0.0003006116607" INT_CONF_99="0.0003950711288"/>
				<VALEURS INSTANT="8" NB_VAL="10000000" PREMOY="4269376" PREVAR="4269376" MOYENNE="0.4269376" INT_CONF_90="0.0002572823709" INT_CONFIANCE="0.0003065713216" INT_CONF_99="0.0004029034597"/>
				<VALEURS INSTANT="9" NB_VAL="10000000" PREMOY="4728202" PREVAR="4728202" MOYENNE="0.4728202" INT_CONF_90="0.0002596894231" INT_CONFIANCE="0.0003094395056" INT_CONF_99="0.0004066728965"/>
				<VALEURS INSTANT="10" NB_VAL="10000000" PREMOY="5158500" PREVAR="5158500" MOYENNE="0.51585" INT_CONF_90="0.0002599432565" INT_CONFIANCE="0.0003097419672" INT_CONF_99="0.0004070703989"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
