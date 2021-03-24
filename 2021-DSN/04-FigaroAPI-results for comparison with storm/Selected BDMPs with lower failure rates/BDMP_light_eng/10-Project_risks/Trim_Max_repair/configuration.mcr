<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="955.891">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1595931455" RNG="mt19937"/>
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
	<INDICATEURS NB_HISTOIRES="10000000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="1814196" PREVAR="1814196" MOYENNE="0.1814196" INT_CONF_90="0.0002004470381" INT_CONFIANCE="0.0002388477421" INT_CONF_99="0.0003138994904"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="3298794" PREVAR="3298794" MOYENNE="0.3298794" INT_CONF_90="0.0002445574809" INT_CONFIANCE="0.0002914086568" INT_CONF_99="0.0003829763181"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="4514407" PREVAR="4514407" MOYENNE="0.4514407" INT_CONF_90="0.0002588445446" INT_CONFIANCE="0.0003084327693" INT_CONF_99="0.0004053498193"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="5508143" PREVAR="5508143" MOYENNE="0.5508143" INT_CONF_90="0.0002587274059" INT_CONFIANCE="0.0003082931897" INT_CONF_99="0.0004051663803"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="6321475" PREVAR="6321475" MOYENNE="0.6321475" INT_CONF_90="0.0002508262228" INT_CONFIANCE="0.000298878335" INT_CONF_99="0.0003927931502"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="6990040" PREVAR="6990040" MOYENNE="0.699004" INT_CONF_90="0.0002385871571" INT_CONFIANCE="0.0002842945665" INT_CONF_99="0.0003736268082"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="7535642" PREVAR="7535642" MOYENNE="0.7535642" INT_CONF_90="0.0002241500799" INT_CONFIANCE="0.0002670917017" INT_CONF_99="0.0003510183864"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="7981797" PREVAR="7981797" MOYENNE="0.7981797" INT_CONF_90="0.0002087659339" INT_CONFIANCE="0.0002487603331" INT_CONF_99="0.0003269268576"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="8347324" PREVAR="8347324" MOYENNE="0.8347324" INT_CONF_90="0.0001931943252" INT_CONFIANCE="0.0002302055885" INT_CONF_99="0.0003025417627"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="8646776" PREVAR="8646776" MOYENNE="0.8646776" INT_CONF_90="0.000177925756" INT_CONFIANCE="0.0002120119384" INT_CONF_99="0.0002786312269"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="1000" NB_VAL="10000000" PREMOY="19713" PREVAR="19713" MOYENNE="0.0019713" INT_CONF_90="2.307144235E-5" INT_CONFIANCE="2.749136114E-5" INT_CONF_99="3.612981297E-5"/>
				<VALEURS INSTANT="2000" NB_VAL="10000000" PREMOY="19985" PREVAR="19985" MOYENNE="0.0019985" INT_CONF_90="2.322975039E-5" INT_CONFIANCE="2.767999709E-5" INT_CONF_99="3.637772291E-5"/>
				<VALEURS INSTANT="3000" NB_VAL="10000000" PREMOY="19900" PREVAR="19900" MOYENNE="0.00199" INT_CONF_90="2.318039619E-5" INT_CONFIANCE="2.762118785E-5" INT_CONF_99="3.630043438E-5"/>
				<VALEURS INSTANT="4000" NB_VAL="10000000" PREMOY="19971" PREVAR="19971" MOYENNE="0.0019971" INT_CONF_90="2.322162873E-5" INT_CONFIANCE="2.767031953E-5" INT_CONF_99="3.636500442E-5"/>
				<VALEURS INSTANT="5000" NB_VAL="10000000" PREMOY="19836" PREVAR="19836" MOYENNE="0.0019836" INT_CONF_90="2.314316537E-5" INT_CONFIANCE="2.757682452E-5" INT_CONF_99="3.624213102E-5"/>
				<VALEURS INSTANT="6000" NB_VAL="10000000" PREMOY="19955" PREVAR="19955" MOYENNE="0.0019955" INT_CONF_90="2.321234334E-5" INT_CONFIANCE="2.765925528E-5" INT_CONF_99="3.635046352E-5"/>
				<VALEURS INSTANT="7000" NB_VAL="10000000" PREMOY="20053" PREVAR="20053" MOYENNE="0.0020053" INT_CONF_90="2.326915777E-5" INT_CONFIANCE="2.772695395E-5" INT_CONF_99="3.643943476E-5"/>
				<VALEURS INSTANT="8000" NB_VAL="10000000" PREMOY="19631" PREVAR="19631" MOYENNE="0.0019631" INT_CONF_90="2.302350188E-5" INT_CONFIANCE="2.743423646E-5" INT_CONF_99="3.605473834E-5"/>
				<VALEURS INSTANT="9000" NB_VAL="10000000" PREMOY="19875" PREVAR="19875" MOYENNE="0.0019875" INT_CONF_90="2.316586008E-5" INT_CONFIANCE="2.760386698E-5" INT_CONF_99="3.627767087E-5"/>
				<VALEURS INSTANT="10000" NB_VAL="10000000" PREMOY="19976" PREVAR="19976" MOYENNE="0.0019976" INT_CONF_90="2.322452965E-5" INT_CONFIANCE="2.767377619E-5" INT_CONF_99="3.636954725E-5"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
