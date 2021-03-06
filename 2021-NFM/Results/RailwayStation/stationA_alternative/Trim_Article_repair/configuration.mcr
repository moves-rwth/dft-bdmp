<?xml version= "1.0" encoding="UTF-8" ?>
<AMC_SORTIES xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="mc_res.xsd" COPYRIGHT="Yams Copyright© EDF 2003-2013. All rights reserved." VERSION="2.0.3.1" TEMPS_CALCUL="30497.5">
	<FIGARO0>#\export_fig0.fi</FIGARO0>
	<PARAMETRES MAX_NB_TOURS_REGLES="200" MAX_NB_TOURS_TPS_FIXE="10" MAX_NB_HISTOIRES="10000000" GRAINE="1603397514" RNG="mt19937"/>
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
	<INDICATEURS NB_HISTOIRES="361306">
		<INDICATEUR NOM="Unreliability" EXPRESSION="ALREADY_REALIZED(system_failure)" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="361306" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="100" NB_VAL="361306" PREMOY="100398" PREVAR="100398" MOYENNE="0.2778752636" INT_CONF_90="0.001225802035" INT_CONFIANCE="0.001460635443" INT_CONF_99="0.001919602493"/>
				<VALEURS INSTANT="200" NB_VAL="361306" PREMOY="172976" PREVAR="172976" MOYENNE="0.4787520827" INT_CONF_90="0.001366994564" INT_CONFIANCE="0.001628876975" INT_CONF_99="0.002140709591"/>
				<VALEURS INSTANT="300" NB_VAL="361306" PREMOY="225770" PREVAR="225770" MOYENNE="0.6248719922" INT_CONF_90="0.001324873941" INT_CONFIANCE="0.001578687081" INT_CONF_99="0.002074748816"/>
				<VALEURS INSTANT="400" NB_VAL="361306" PREMOY="263232" PREVAR="263232" MOYENNE="0.7285569573" INT_CONF_90="0.001216915423" INT_CONFIANCE="0.001450046376" INT_CONF_99="0.001905686085"/>
				<VALEURS INSTANT="500" NB_VAL="361306" PREMOY="290660" PREVAR="290660" MOYENNE="0.8044704489" INT_CONF_90="0.001085301823" INT_CONFIANCE="0.001293218859" INT_CONF_99="0.001699579562"/>
				<VALEURS INSTANT="600" NB_VAL="361306" PREMOY="310479" PREVAR="310479" MOYENNE="0.8593242293" INT_CONF_90="0.0009514313624" INT_CONFIANCE="0.001133702123" INT_CONF_99="0.001489938802"/>
				<VALEURS INSTANT="700" NB_VAL="361306" PREMOY="324563" PREVAR="324563" MOYENNE="0.8983050378" INT_CONF_90="0.0008270864771" INT_CONFIANCE="0.0009855358279" INT_CONF_99="0.001295215066"/>
				<VALEURS INSTANT="800" NB_VAL="361306" PREMOY="334792" PREVAR="334792" MOYENNE="0.92661622" INT_CONF_90="0.0007135744167" INT_CONFIANCE="0.0008502776589" INT_CONF_99="0.001117455503"/>
				<VALEURS INSTANT="900" NB_VAL="361306" PREMOY="342155" PREVAR="342155" MOYENNE="0.9469950679" INT_CONF_90="0.000613085836" INT_CONFIANCE="0.0007305379469" INT_CONF_99="0.0009600906721"/>
				<VALEURS INSTANT="1000" NB_VAL="361306" PREMOY="347557" PREVAR="347557" MOYENNE="0.9619463834" INT_CONF_90="0.0005235554505" INT_CONFIANCE="0.0006238557498" INT_CONF_99="0.0008198863435"/>
			</COMBINAISON>
		</INDICATEUR>
		<INDICATEUR NOM="Unavailability" EXPRESSION="system_failure" FONCTION="MOYENNE;INT_CONF_90;INT_CONFIANCE;INT_CONF_99" TYPE="LOCAL">
			<COMBINAISON>
				<VALEURS INSTANT="0" NB_VAL="361306" PREMOY="0" PREVAR="0" MOYENNE="0" INT_CONF_90="0" INT_CONFIANCE="0" INT_CONF_99="0"/>
				<VALEURS INSTANT="100" NB_VAL="361306" PREMOY="11305" PREVAR="11305" MOYENNE="0.03128926727" INT_CONF_90="0.0004764134734" INT_CONFIANCE="0.0005676825337" INT_CONF_99="0.0007460621417"/>
				<VALEURS INSTANT="200" NB_VAL="361306" PREMOY="11333" PREVAR="11333" MOYENNE="0.03136676391" INT_CONF_90="0.0004769840138" INT_CONFIANCE="0.0005683623755" INT_CONF_99="0.0007469556064"/>
				<VALEURS INSTANT="300" NB_VAL="361306" PREMOY="11365" PREVAR="11365" MOYENNE="0.03145533149" INT_CONF_90="0.0004776351102" INT_CONFIANCE="0.0005691382059" INT_CONF_99="0.0007479752214"/>
				<VALEURS INSTANT="400" NB_VAL="361306" PREMOY="11388" PREVAR="11388" MOYENNE="0.03151898944" INT_CONF_90="0.0004781024621" INT_CONFIANCE="0.000569695091" INT_CONF_99="0.0007487070933"/>
				<VALEURS INSTANT="500" NB_VAL="361306" PREMOY="11404" PREVAR="11404" MOYENNE="0.03156327324" INT_CONF_90="0.0004784272699" INT_CONFIANCE="0.0005700821238" INT_CONF_99="0.0007492157413"/>
				<VALEURS INSTANT="600" NB_VAL="361306" PREMOY="11393" PREVAR="11393" MOYENNE="0.03153282813" INT_CONF_90="0.0004782039916" INT_CONFIANCE="0.0005698160709" INT_CONF_99="0.000748866088"/>
				<VALEURS INSTANT="700" NB_VAL="361306" PREMOY="11360" PREVAR="11360" MOYENNE="0.03144149281" INT_CONF_90="0.000477533443" INT_CONFIANCE="0.0005690170618" INT_CONF_99="0.0007478160109"/>
				<VALEURS INSTANT="800" NB_VAL="361306" PREMOY="11614" PREVAR="11614" MOYENNE="0.03214449802" INT_CONF_90="0.0004826672907" INT_CONFIANCE="0.0005751344279" INT_CONF_99="0.0007558556017"/>
				<VALEURS INSTANT="900" NB_VAL="361306" PREMOY="11317" PREVAR="11317" MOYENNE="0.03132248011" INT_CONF_90="0.0004766580859" INT_CONFIANCE="0.0005679740079" INT_CONF_99="0.0007464452042"/>
				<VALEURS INSTANT="1000" NB_VAL="361306" PREMOY="11345" PREVAR="11345" MOYENNE="0.03139997675" INT_CONF_90="0.0004772282935" INT_CONFIANCE="0.0005686534532" INT_CONF_99="0.0007473381476"/>
			</COMBINAISON>
		</INDICATEUR>
	</INDICATEURS>
</AMC_SORTIES>
