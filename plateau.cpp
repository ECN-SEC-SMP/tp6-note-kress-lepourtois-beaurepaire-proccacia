#include "plateau.h"
#include <iostream> // Pour utiliser std::cout

Plateau::Plateau() : argentCentre(0), maisonsEtHotels(20) {
  // Les couleurs de terrain standard du Monopoly
  std::vector<std::string> couleurs{"brun",   "bleu clair", "rose",
                                    "orange", "rouge",      "jaune",
                                    "vert",   "bleu foncé"};

  // Création des cases Terrain
  for (int i = 0; i < 40; ++i) {
    std::string nom = "Case " + std::to_string(i + 1);
    int coutAchat = 100;   // Prix d'achat de la case
    int coutLocation = 50; // Loyer par défaut
    std::string couleur =
        couleurs[i / 5]; // Répartition des couleurs uniformément
    Case terrain(i + 1, "terrain", couleur, coutLocation, coutAchat, nom);
    cases.push_back(terrain);
  }

  // Création des cartes Chance
  for (int i = 0; i < 10; ++i) {
    std::string description = "Carte Chance " + std::to_string(i + 1);
    Carte chance(description);
    cartes.push_back(chance);
  }
}

int Plateau::getArgentCentre() const { return argentCentre; }

void Plateau::setArgentCentre(int argent) { argentCentre = argent; }
