#include "Grille.h"
#include "Situation.h"
#include "Base.h"
#include <math.h>

Grille::Grille(std::string id) {
	_id = id;
}

Grille::~Grille() {

}

std::vector<std::string> Grille::calculeCoupsPossible(char joueur) {
	std::vector<std::string> coupsPossibles;

	std::string coup;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (getCase(i, j) == '0') {
				coup = _id;
				coup[i * 3 + j] = joueur;
				coup[9] = joueur;
				coupsPossibles.push_back(coup);
			}
		}
	}

	return coupsPossibles;

}

char Grille::getCase(int i, int j) {
	return _id.at(i * 3 + j);
}

//retourne 1 si joueur 1 a gagne
//retourne 2 si joueur 2 a gagne
//retourne 0 si personne a gagne

char Grille::joueurGagnant() {
	char cases[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			cases[i][j] = getCase(i, j);

		}
	}

	for (int i = 0; i < 3; i++) {

		if (tousEgauxDiffZerro(cases[i][0], cases[i][1], cases[i][2])) {
			return cases[i][0];
		}
		if (tousEgauxDiffZerro(cases[0][i], cases[1][i], cases[2][i])) {
			return cases[0][i];
		}
	}

	if (tousEgauxDiffZerro(cases[0][0], cases[1][1], cases[2][2])) {
		return cases[0][0];
	}

	if (tousEgauxDiffZerro(cases[0][2], cases[1][1], cases[2][0])) {
		return cases[0][2];
	}
	return '0';

}

bool Grille::tousEgauxDiffZerro(char c1, char c2, char c3) {
	if ((c1 == '0') || (c1 != c2) || (c1 != c3)) {
		return false;
	} else

		return true;

}

Situation* Grille::meilleurCoup(char joueur, Base & bdd) {

	std::vector<std::string> vCoups;
	vCoups = calculeCoupsPossible(joueur);

	Situation* pBestSituation = new Situation("0000000000");
	Situation* pS = new Situation("0000000000");

	int score = -1000; //TODO meilleure methode??

	for (std::vector<std::string>::iterator it = vCoups.begin();
			it != vCoups.end(); it++) {
		//bdd.getSituation(*it, *pS);

		if (pS->score() > score) {
			*pBestSituation = *pS;
			score = pS->score();
		}

	}

	return pS;

}

Situation* Grille::joueCoup(std::string position, char joueur, Base& bdd) {
	int i;
	int j;

	std::string sCoup = _id;

	char ligne = position.at(0);
	if (ligne == 'A') {
		i = 0;
	} else if (ligne == 'B') {
		i = 1;
	} else if (ligne == 'C') {
		i = 2;
	}

	char colonne = position.at(1);

	if (colonne == '1') {
		j = 0;
	} else if (colonne == '2') {
		j = 1;
	} else if (colonne == '3') {
		j = 2;
	}

	sCoup[i * 3 + j] = joueur;

	sCoup[9] = joueur;

	Situation* pS = new Situation(sCoup);

	//bdd.getSituation(sCoup, *pS);

	return pS;

}
