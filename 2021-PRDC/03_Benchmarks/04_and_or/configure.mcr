<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="75.844">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" OPTIM_INTERACTIONS="VRAI" GRAINE="1608371119" RNG="mt19937"/>
	<HISTOIRE>
		<INTERVALLE T0="0" T1="1000" N="10"/>
		<INSTANTS_ORDONNES>
			<INSTANT VALEUR="0"/>
			<INSTANT VALEUR="100"/>
			<INSTANT VALEUR="200"/>
			<INSTANT VALEUR="300"/>
			<INSTANT VALEUR="400"/>
			<INSTANT VALEUR="500"/>
			<INSTANT VALEUR="600"/>
			<INSTANT VALEUR="700"/>
			<INSTANT VALEUR="800"/>
			<INSTANT VALEUR="900"/>
			<INSTANT VALEUR="1000"/>
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
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="24106" PREVAR="24106" MOYENNE="0.24106" INT_CONF_90="0.002224811227" INT_CONFIANCE="0.002651030134" INT_CONF_99="0.003484048042"/>
				<VALEURS INSTANT="200" NB_VAL="100000" PREMOY="43842" PREVAR="43842" MOYENNE="0.43842" INT_CONF_90="0.002580939741" INT_CONFIANCE="0.00307538408" INT_CONF_99="0.00404174428"/>
				<VALEURS INSTANT="300" NB_VAL="100000" PREMOY="58344" PREVAR="58344" MOYENNE="0.58344" INT_CONF_90="0.002564270006" INT_CONFIANCE="0.003055520835" INT_CONF_99="0.004015639522"/>
				<VALEURS INSTANT="400" NB_VAL="100000" PREMOY="69158" PREVAR="69158" MOYENNE="0.69158" INT_CONF_90="0.002402256344" INT_CONFIANCE="0.002862469355" INT_CONF_99="0.003761926589"/>
				<VALEURS INSTANT="500" NB_VAL="100000" PREMOY="77149" PREVAR="77149" MOYENNE="0.77149" INT_CONF_90="0.002183959727" INT_CONFIANCE="0.002602352495" INT_CONF_99="0.003420074709"/>
				<VALEURS INSTANT="600" NB_VAL="100000" PREMOY="82995" PREVAR="82995" MOYENNE="0.82995" INT_CONF_90="0.001954074659" INT_CONFIANCE="0.002328427123" INT_CONF_99="0.003060075347"/>
				<VALEURS INSTANT="700" NB_VAL="100000" PREMOY="87413" PREVAR="87413" MOYENNE="0.87413" INT_CONF_90="0.001725345195" INT_CONFIANCE="0.00205587874" INT_CONF_99="0.002701885658"/>
				<VALEURS INSTANT="800" NB_VAL="100000" PREMOY="90619" PREVAR="90619" MOYENNE="0.90619" INT_CONF_90="0.001516565145" INT_CONFIANCE="0.001807101588" INT_CONF_99="0.002374936696"/>
				<VALEURS INSTANT="900" NB_VAL="100000" PREMOY="93013" PREVAR="93013" MOYENNE="0.93013" INT_CONF_90="0.001326001659" INT_CONFIANCE="0.001580030842" INT_CONF_99="0.00207651482"/>
				<VALEURS INSTANT="1000" NB_VAL="100000" PREMOY="94796" PREVAR="94796" MOYENNE="0.94796" INT_CONF_90="0.001155288685" INT_CONFIANCE="0.001376613477" INT_CONF_99="0.001809178789"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="100" NB_VAL="100000" PREMOY="1623" PREVAR="1623" MOYENNE="0.01623" INT_CONF_90="0.0006572535145" INT_CONFIANCE="0.0007831670623" INT_CONF_99="0.001029257131"/>
				<VALEURS INSTANT="200" NB_VAL="100000" PREMOY="1616" PREVAR="1616" MOYENNE="0.01616" INT_CONF_90="0.000655857948" INT_CONFIANCE="0.0007815041397" INT_CONF_99="0.001027071678"/>
				<VALEURS INSTANT="300" NB_VAL="100000" PREMOY="1646" PREVAR="1646" MOYENNE="0.01646" INT_CONF_90="0.0006618168175" INT_CONFIANCE="0.0007886045814" INT_CONF_99="0.00103640325"/>
				<VALEURS INSTANT="400" NB_VAL="100000" PREMOY="1669" PREVAR="1669" MOYENNE="0.01669" INT_CONF_90="0.0006663467228" INT_CONFIANCE="0.0007940023047" INT_CONF_99="0.001043497069"/>
				<VALEURS INSTANT="500" NB_VAL="100000" PREMOY="1693" PREVAR="1693" MOYENNE="0.01693" INT_CONF_90="0.0006710387047" INT_CONFIANCE="0.0007995931545" INT_CONF_99="0.001050844699"/>
				<VALEURS INSTANT="600" NB_VAL="100000" PREMOY="1571" PREVAR="1571" MOYENNE="0.01571" INT_CONF_90="0.0006468096621" INT_CONFIANCE="0.0007707224255" INT_CONF_99="0.001012902088"/>
				<VALEURS INSTANT="700" NB_VAL="100000" PREMOY="1592" PREVAR="1592" MOYENNE="0.01592" INT_CONF_90="0.0006510488922" INT_CONFIANCE="0.0007757737875" INT_CONF_99="0.00101954071"/>
				<VALEURS INSTANT="800" NB_VAL="100000" PREMOY="1555" PREVAR="1555" MOYENNE="0.01555" INT_CONF_90="0.0006435597854" INT_CONFIANCE="0.0007668499527" INT_CONF_99="0.00100781279"/>
				<VALEURS INSTANT="900" NB_VAL="100000" PREMOY="1654" PREVAR="1654" MOYENNE="0.01654" INT_CONF_90="0.0006633961897" INT_CONFIANCE="0.0007904865224" INT_CONF_99="0.001038876543"/>
				<VALEURS INSTANT="1000" NB_VAL="100000" PREMOY="1665" PREVAR="1665" MOYENNE="0.01665" INT_CONF_90="0.0006655612823" INT_CONFIANCE="0.0007930663933" INT_CONF_99="0.001042267071"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>