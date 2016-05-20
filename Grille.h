/*
 * grille.h
 *
 *  Created on: 11 mai 2016
 *      Author: veysseired
 */

#ifndef GRILLE_H_
#define GRILLE_H_

#include "Situation.h"
#include "Base.h"
#include <vector>
#include <string>

class Grille
{

  public:
    Grille(std::string id);
    ~Grille();

  private:
    std::string _id;

  public:
    std::vector<std::string> calculeCoupsPossible(char joueur);
    char getCase(int i, int j);
    char joueurGagnant();
    bool tousEgauxDiffZerro(char c1, char c2, char c3);
    Situation* meilleurCoup(char joueur, Base& bdd);
    void setId(std::string id)
    {
      _id = id;
    }
    Situation* joueCoup(std::string position, char joueur, Base& bdd);

};

#endif /* GRILLE_H_ */
