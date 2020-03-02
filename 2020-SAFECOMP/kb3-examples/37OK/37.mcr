<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="11.468">
	<FIGARO0>#\37.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="100000" GRAINE="1576346481" RNG="mt19937"/>
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
		<GROUPE NOM="TOUT"/>
	</GROUPES>
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="real(EI_1)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="100000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="DEJA_REALISE(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="100000" PREMOY="140" PREVAR="140" MOYENNE="0.0014" INT_CONF_90="0.0001944852496" INT_CONFIANCE="0.0002317438221" INT_CONF_99="0.0003045633466"/>
				<VALEURS INSTANT="2" NB_VAL="100000" PREMOY="890" PREVAR="890" MOYENNE="0.0089" INT_CONF_90="0.0004885180459" INT_CONFIANCE="0.0005821060434" INT_CONF_99="0.0007650178678"/>
				<VALEURS INSTANT="3" NB_VAL="100000" PREMOY="2513" PREVAR="2513" MOYENNE="0.02513" INT_CONF_90="0.0008141350777" INT_CONFIANCE="0.00097010326" INT_CONF_99="0.001274933212"/>
				<VALEURS INSTANT="4" NB_VAL="100000" PREMOY="4864" PREVAR="4864" MOYENNE="0.04864" INT_CONF_90="0.001118912426" INT_CONFIANCE="0.001333268424" INT_CONF_99="0.00175221367"/>
				<VALEURS INSTANT="5" NB_VAL="100000" PREMOY="8001" PREVAR="8001" MOYENNE="0.08001" INT_CONF_90="0.001411206468" INT_CONFIANCE="0.001681558789" INT_CONF_99="0.002209945308"/>
				<VALEURS INSTANT="6" NB_VAL="100000" PREMOY="11824" PREVAR="11824" MOYENNE="0.11824" INT_CONF_90="0.001679516509" INT_CONFIANCE="0.00200127041" INT_CONF_99="0.002630118067"/>
				<VALEURS INSTANT="7" NB_VAL="100000" PREMOY="15879" PREVAR="15879" MOYENNE="0.15879" INT_CONF_90="0.001901037385" INT_CONFIANCE="0.002265229217" INT_CONF_99="0.002977019127"/>
				<VALEURS INSTANT="8" NB_VAL="100000" PREMOY="20271" PREVAR="20271" MOYENNE="0.20271" INT_CONF_90="0.00209108947" INT_CONFIANCE="0.00249169059" INT_CONF_99="0.003274640152"/>
				<VALEURS INSTANT="9" NB_VAL="100000" PREMOY="24727" PREVAR="24727" MOYENNE="0.24727" INT_CONF_90="0.002244048282" INT_CONFIANCE="0.002673952534" INT_CONF_99="0.003514173215"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="29170" PREVAR="29170" MOYENNE="0.2917" INT_CONF_90="0.002364306114" INT_CONFIANCE="0.002817248798" INT_CONF_99="0.003702496637"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="100000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1" NB_VAL="100000" PREMOY="130" PREVAR="130" MOYENNE="0.0013" INT_CONF_90="0.0001874200593" INT_CONFIANCE="0.0002233251158" INT_CONF_99="0.0002934992788"/>
				<VALEURS INSTANT="2" NB_VAL="100000" PREMOY="805" PREVAR="805" MOYENNE="0.00805" INT_CONF_90="0.0004648038331" INT_CONFIANCE="0.0005538487729" INT_CONF_99="0.0007278814781"/>
				<VALEURS INSTANT="3" NB_VAL="100000" PREMOY="2168" PREVAR="2168" MOYENNE="0.02168" INT_CONF_90="0.0007575250082" INT_CONFIANCE="0.0009026480987" INT_CONF_99="0.001186282004"/>
				<VALEURS INSTANT="4" NB_VAL="100000" PREMOY="4011" PREVAR="4011" MOYENNE="0.04011" INT_CONF_90="0.001020619671" INT_CONFIANCE="0.001216145204" INT_CONF_99="0.001598287496"/>
				<VALEURS INSTANT="5" NB_VAL="100000" PREMOY="6359" PREVAR="6359" MOYENNE="0.06359" INT_CONF_90="0.001269270843" INT_CONFIANCE="0.001512431802" INT_CONF_99="0.001987674523"/>
				<VALEURS INSTANT="6" NB_VAL="100000" PREMOY="9080" PREVAR="9080" MOYENNE="0.0908" INT_CONF_90="0.001494512348" INT_CONFIANCE="0.001780824019" INT_CONF_99="0.002340402078"/>
				<VALEURS INSTANT="7" NB_VAL="100000" PREMOY="11747" PREVAR="11747" MOYENNE="0.11747" INT_CONF_90="0.001674769692" INT_CONFIANCE="0.00199561422" INT_CONF_99="0.002622684565"/>
				<VALEURS INSTANT="8" NB_VAL="100000" PREMOY="14432" PREVAR="14432" MOYENNE="0.14432" INT_CONF_90="0.00182787217" INT_CONFIANCE="0.002178047353" INT_CONF_99="0.002862442609"/>
				<VALEURS INSTANT="9" NB_VAL="100000" PREMOY="17017" PREVAR="17017" MOYENNE="0.17017" INT_CONF_90="0.001954622686" INT_CONFIANCE="0.002329080138" INT_CONF_99="0.003060933556"/>
				<VALEURS INSTANT="10" NB_VAL="100000" PREMOY="19597" PREVAR="19597" MOYENNE="0.19597" INT_CONF_90="0.00206470397" INT_CONFIANCE="0.00246025028" INT_CONF_99="0.003233320534"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
