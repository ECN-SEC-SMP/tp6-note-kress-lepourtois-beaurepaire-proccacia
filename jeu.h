#pragma once

#include "joueur.h"
#include "plateau.h"
#include <vector>

using namespace std;

class Jeu {
private:
  Plateau plateau;
  vector<Joueur> joueurs;
  int joueurActuelIndex;
  int nbdejoueur;

public:
  Jeu();
  void tourDeJeuPourLeJoueurActuel();
  void tourSuivant();
  bool partieEnCours();
  bool conditionDeFinDePartie();
};
