<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="2.687">
	<FIGARO0>#\05.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000" OPTIM_INTERACTIONS="VRAI" GRAINE="1575990620" RNG="mt19937"/>
	<HISTOIRE>
		<INTERVALLE T0="0" T1="20" N="10"/>
		<INSTANTS_ORDONNES>
			<INSTANT VALEUR="0"/>
			<INSTANT VALEUR="2"/>
			<INSTANT VALEUR="4"/>
			<INSTANT VALEUR="6"/>
			<INSTANT VALEUR="8"/>
			<INSTANT VALEUR="10"/>
			<INSTANT VALEUR="12"/>
			<INSTANT VALEUR="14"/>
			<INSTANT VALEUR="16"/>
			<INSTANT VALEUR="18"/>
			<INSTANT VALEUR="20"/>
		</INSTANTS_ORDONNES>
	</HISTOIRE>
	<GROUPES>
		<GROUPE NOM="ALL"/>
	</GROUPES>
	<ETATS>
		<ETAT NOM="system_failure" TYPE="ANALYSE" EXPRESSION="S(UE_1)"/>
	</ETATS>
	<INDICATEURS NB_HISTOIRES="10000">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="2" NB_VAL="10000" PREMOY="464" PREVAR="464" MOYENNE="0.0464" INT_CONF_90="0.003459943296" INT_CONFIANCE="0.004122783016" INT_CONF_99="0.005418261342"/>
				<VALEURS INSTANT="4" NB_VAL="10000" PREMOY="1523" PREVAR="1523" MOYENNE="0.1523" INT_CONF_90="0.005910141966" INT_CONFIANCE="0.007042379263" INT_CONF_99="0.009255265477"/>
				<VALEURS INSTANT="6" NB_VAL="10000" PREMOY="2908" PREVAR="2908" MOYENNE="0.2908" INT_CONF_90="0.00746979072" INT_CONFIANCE="0.008900818215" INT_CONF_99="0.01169767098"/>
				<VALEURS INSTANT="8" NB_VAL="10000" PREMOY="4264" PREVAR="4264" MOYENNE="0.4264" INT_CONF_90="0.008134671866" INT_CONFIANCE="0.009693074175" INT_CONF_99="0.01273887296"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="5487" PREVAR="5487" MOYENNE="0.5487" INT_CONF_90="0.00818515705" INT_CONFIANCE="0.009753231073" INT_CONF_99="0.01281793261"/>
				<VALEURS INSTANT="12" NB_VAL="10000" PREMOY="6496" PREVAR="6496" MOYENNE="0.6496" INT_CONF_90="0.007847510884" INT_CONFIANCE="0.009350900238" INT_CONF_99="0.01228917968"/>
				<VALEURS INSTANT="14" NB_VAL="10000" PREMOY="7326" PREVAR="7326" MOYENNE="0.7326" INT_CONF_90="0.007280161749" INT_CONFIANCE="0.008674861014" INT_CONF_99="0.01140071255"/>
				<VALEURS INSTANT="16" NB_VAL="10000" PREMOY="8010" PREVAR="8010" MOYENNE="0.801" INT_CONF_90="0.006567040068" INT_CONFIANCE="0.007825122824" INT_CONF_99="0.01028396603"/>
				<VALEURS INSTANT="18" NB_VAL="10000" PREMOY="8467" PREVAR="8467" MOYENNE="0.8467" INT_CONF_90="0.005926014737" INT_CONFIANCE="0.007061292865" INT_CONF_99="0.009280122191"/>
				<VALEURS INSTANT="20" NB_VAL="10000" PREMOY="8847" PREVAR="8847" MOYENNE="0.8847" INT_CONF_90="0.005253388719" INT_CONFIANCE="0.006259808307" INT_CONF_99="0.008226791763"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="10000" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="2" NB_VAL="10000" PREMOY="418" PREVAR="418" MOYENNE="0.0418" INT_CONF_90="0.003291873168" INT_CONFIANCE="0.0039225148" INT_CONF_99="0.005155064"/>
				<VALEURS INSTANT="4" NB_VAL="10000" PREMOY="1272" PREVAR="1272" MOYENNE="0.1272" INT_CONF_90="0.005480596062" INT_CONFIANCE="0.006530542967" INT_CONF_99="0.008582597815"/>
				<VALEURS INSTANT="6" NB_VAL="10000" PREMOY="2278" PREVAR="2278" MOYENNE="0.2278" INT_CONF_90="0.006898721745" INT_CONFIANCE="0.008220346523" INT_CONF_99="0.01080337859"/>
				<VALEURS INSTANT="8" NB_VAL="10000" PREMOY="3145" PREVAR="3145" MOYENNE="0.3145" INT_CONF_90="0.007637318885" INT_CONFIANCE="0.00910044064" INT_CONF_99="0.01196001961"/>
				<VALEURS INSTANT="10" NB_VAL="10000" PREMOY="3935" PREVAR="3935" MOYENNE="0.3935" INT_CONF_90="0.008035532108" INT_CONFIANCE="0.009574941687" INT_CONF_99="0.01258362038"/>
				<VALEURS INSTANT="12" NB_VAL="10000" PREMOY="4521" PREVAR="4521" MOYENNE="0.4521" INT_CONF_90="0.008186434165" INT_CONFIANCE="0.009754752852" INT_CONF_99="0.01281993257"/>
				<VALEURS INSTANT="14" NB_VAL="10000" PREMOY="5024" PREVAR="5024" MOYENNE="0.5024" INT_CONF_90="0.008224166063" INT_CONFIANCE="0.009799713251" INT_CONF_99="0.01287902062"/>
				<VALEURS INSTANT="16" NB_VAL="10000" PREMOY="5480" PREVAR="5480" MOYENNE="0.548" INT_CONF_90="0.008186275693" INT_CONFIANCE="0.009754564021" INT_CONF_99="0.01281968441"/>
				<VALEURS INSTANT="18" NB_VAL="10000" PREMOY="5607" PREVAR="5607" MOYENNE="0.5607" INT_CONF_90="0.008163431436" INT_CONFIANCE="0.009727343369" INT_CONF_99="0.01278391037"/>
				<VALEURS INSTANT="20" NB_VAL="10000" PREMOY="5877" PREVAR="5877" MOYENNE="0.5877" INT_CONF_90="0.008096762168" INT_CONFIANCE="0.009647901914" INT_CONF_99="0.01267950648"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
