#pragma once

#include <vector>
#include "Plateau.hpp"
#include "Joueur.hpp"

class Jeu {
public:
  Jeu();
  void tourDeJeu();
  void tourSuivant();
  void jouer();

private:
  Plateau plateau;
  std::vector<Joueur> joueurs;
  int joueurActuelIndex;
};