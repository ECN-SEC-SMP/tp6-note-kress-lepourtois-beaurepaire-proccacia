#ifndef JOUEUR_H
#define JOUEUR_H

class Joueur {
private:
  int position;
  int argent;

public:
  Joueur(int pos = 0, int money = 1500);

  int getPosition() const;
  void setPosition(int newPos);

  int getArgent() const;
  void setArgent(int amount);

  void seDeplacer(int newPos);
  void acheterMaison();
  void acheterTerrain();
  void payerJoueur(Joueur &otherPlayer, int amount);
  void payerAmende(int amount);
  void lireCarte(Carte &card);
};

#endif // JOUEUR_H
