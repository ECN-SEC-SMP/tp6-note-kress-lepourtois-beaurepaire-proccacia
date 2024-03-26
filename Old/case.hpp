#pragma once

class Joueur {
public:
  Joueur(int pos = 0, int money = 1500);
  void seDeplacer(int newPos);
  void acheterMaison();
  void acheterTerrain();
  void payerJoueur(Joueur& otherPlayer, int amount);
  void payerAmende(int amount);
  void lireCarte(Carte& card);

private:
  int position;
  int argent;
};