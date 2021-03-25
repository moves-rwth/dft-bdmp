<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="2317.89">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="1000000" OPTIM_INTERACTIONS="VRAI" GRAINE="1603473162" RNG="mt19937"/>
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
				<VALEURS INSTANT="10000" NB_VAL="1000000" PREMOY="10301" PREVAR="10301" MOYENNE="0.010301" INT_CONF_90="0.0001660803032" INT_CONFIANCE="0.0001978971893" INT_CONF_99="0.0002600812816"/>
				<VALEURS INSTANT="20000" NB_VAL="1000000" PREMOY="20525" PREVAR="20525" MOYENNE="0.020525" INT_CONF_90="0.0002332196453" INT_CONFIANCE="0.0002778987719" INT_CONF_99="0.0003652213"/>
				<VALEURS INSTANT="30000" NB_VAL="1000000" PREMOY="30686" PREVAR="30686" MOYENNE="0.030686" INT_CONF_90="0.0002836803492" INT_CONFIANCE="0.0003380265009" INT_CONF_99="0.0004442426185"/>
				<VALEURS INSTANT="40000" NB_VAL="1000000" PREMOY="40470" PREVAR="40470" MOYENNE="0.04047" INT_CONF_90="0.0003241326283" INT_CONFIANCE="0.0003862284381" INT_CONF_99="0.0005075907723"/>
				<VALEURS INSTANT="50000" NB_VAL="1000000" PREMOY="50074" PREVAR="50074" MOYENNE="0.050074" INT_CONF_90="0.0003587384272" INT_CONFIANCE="0.0004274638536" INT_CONF_99="0.0005617833546"/>
				<VALEURS INSTANT="60000" NB_VAL="1000000" PREMOY="59542" PREVAR="59542" MOYENNE="0.059542" INT_CONF_90="0.0003892317704" INT_CONFIANCE="0.0004637989686" INT_CONF_99="0.0006095358432"/>
				<VALEURS INSTANT="70000" NB_VAL="1000000" PREMOY="69083" PREVAR="69083" MOYENNE="0.069083" INT_CONF_90="0.0004171266571" INT_CONFIANCE="0.000497037827" INT_CONF_99="0.0006532191563"/>
				<VALEURS INSTANT="80000" NB_VAL="1000000" PREMOY="78493" PREVAR="78493" MOYENNE="0.078493" INT_CONF_90="0.0004423760976" INT_CONFIANCE="0.0005271244369" INT_CONF_99="0.0006927597082"/>
				<VALEURS INSTANT="90000" NB_VAL="1000000" PREMOY="87736" PREVAR="87736" MOYENNE="0.087736" INT_CONF_90="0.0004653460733" INT_CONFIANCE="0.0005544948929" INT_CONF_99="0.0007287306246"/>
				<VALEURS INSTANT="100000" NB_VAL="1000000" PREMOY="96901" PREVAR="96901" MOYENNE="0.096901" INT_CONF_90="0.0004865849588" INT_CONFIANCE="0.0005798026246" INT_CONF_99="0.0007619906589"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="1000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="10000" NB_VAL="1000000" PREMOY="21" PREVAR="21" MOYENNE="2.1E-5" INT_CONF_90="7.537580391E-6" INT_CONFIANCE="8.981594713E-6" INT_CONF_99="1.180382941E-5"/>
				<VALEURS INSTANT="20000" NB_VAL="1000000" PREMOY="19" PREVAR="19" MOYENNE="1.9E-5" INT_CONF_90="7.169676236E-6" INT_CONFIANCE="8.543209205E-6" INT_CONF_99="1.122769255E-5"/>
				<VALEURS INSTANT="30000" NB_VAL="1000000" PREMOY="18" PREVAR="18" MOYENNE="1.8E-5" INT_CONF_90="6.978453897E-6" INT_CONFIANCE="8.315353387E-6" INT_CONF_99="1.092823892E-5"/>
				<VALEURS INSTANT="40000" NB_VAL="1000000" PREMOY="27" PREVAR="27" MOYENNE="2.7E-5" INT_CONF_90="8.54678716E-6" INT_CONFIANCE="1.018414058E-5" INT_CONF_99="1.338424434E-5"/>
				<VALEURS INSTANT="50000" NB_VAL="1000000" PREMOY="20" PREVAR="20" MOYENNE="2E-5" INT_CONF_90="7.355928931E-6" INT_CONFIANCE="8.765143319E-6" INT_CONF_99="1.151936374E-5"/>
				<VALEURS INSTANT="60000" NB_VAL="1000000" PREMOY="28" PREVAR="28" MOYENNE="2.8E-5" INT_CONF_90="8.703617672E-6" INT_CONFIANCE="1.037101595E-5" INT_CONF_99="1.362984047E-5"/>
				<VALEURS INSTANT="70000" NB_VAL="1000000" PREMOY="19" PREVAR="19" MOYENNE="1.9E-5" INT_CONF_90="7.169676236E-6" INT_CONFIANCE="8.543209205E-6" INT_CONF_99="1.122769255E-5"/>
				<VALEURS INSTANT="80000" NB_VAL="1000000" PREMOY="23" PREVAR="23" MOYENNE="2.3E-5" INT_CONF_90="7.888343129E-6" INT_CONFIANCE="9.399554933E-6" INT_CONF_99="1.235312286E-5"/>
				<VALEURS INSTANT="90000" NB_VAL="1000000" PREMOY="32" PREVAR="32" MOYENNE="3.2E-5" INT_CONF_90="9.304540063E-6" INT_CONFIANCE="1.108706024E-5" INT_CONF_99="1.457088322E-5"/>
				<VALEURS INSTANT="100000" NB_VAL="1000000" PREMOY="18" PREVAR="18" MOYENNE="1.8E-5" INT_CONF_90="6.978453897E-6" INT_CONFIANCE="8.315353387E-6" INT_CONF_99="1.092823892E-5"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>