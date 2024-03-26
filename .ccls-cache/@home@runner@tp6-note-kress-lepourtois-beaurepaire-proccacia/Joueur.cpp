#include "joueur.h"
#include "carte.h" // Inclure le fichier d'en-tête de Carte si nécessaire

Joueur::Joueur(int pos, int money) : position(pos), argent(money) {}

int Joueur::getPosition() const { return position; }

void Joueur::setPosition(int newPos) { position = newPos; }

int Joueur::getArgent() const { return argent; }

void Joueur::setArgent(int amount) { argent = amount; }

void Joueur::seDeplacer(int newPos) { position = newPos; }

void Joueur::acheterMaison() {
  // Code pour acheter une maison
}

void Joueur::acheterTerrain() {
  // Code pour acheter un terrain
}

void Joueur::payerJoueur(Joueur &otherPlayer, int amount) {
  otherPlayer.argent += amount;
  argent -= amount;
}

void Joueur::payerAmende(int amount) { argent -= amount; }

void Joueur::lireCarte(Carte &card) {
  // Code pour lire une carte
}
