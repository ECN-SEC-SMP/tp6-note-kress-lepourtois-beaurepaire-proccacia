#pragma once

#include "carte.h" // Include the header file for Carte class
#include <iostream>

using namespace std;

class Joueur {
private:
  int position;
  int argent;
  string nomdujoueur;

public:
  Joueur();

  int getPosition() const;
  void setPosition(int newPos);

  int getArgent() const;
  void setArgent(int amount);
  void seDeplacer();
  void payerAmende(int amount);
  void lireCarte(Carte &card);

  string getNomduJoueur() const;
  void setNomdujoueur(string nomdujoueur_);
};
