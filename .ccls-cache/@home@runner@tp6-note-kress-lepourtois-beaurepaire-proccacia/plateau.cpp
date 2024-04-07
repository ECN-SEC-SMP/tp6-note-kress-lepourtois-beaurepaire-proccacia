#include "plateau.h"
#include <iostream> // Pour utiliser cout

Plateau::Plateau() : argentCentre(0), maisonsEtHotels(20) {
  // Les couleurs de terrain standard du Monopoly
  vector<string> couleurs{"brun",  "bleu clair", "rose", "orange",
                          "rouge", "jaune",      "vert", "bleu foncé"};

  // Création des cases Terrain

  for (int i = 0; i < 40; ++i) {
    string nom = "Case " + to_string(i + 1);
    int coutAchat = 100;              // Prix d'achat de la case
    int coutLocation = 50;            // Loyer par défaut
    string couleur = couleurs[i / 5]; // Répartition des couleurs uniformément
    if ((i != 3) && (i != 12) && (i != 17) && (i ! 26)) {
      Case terrain(i + 1, "terrain", couleur, coutLocation, coutAchat, nom,
                   "vide");
      cases.push_back(terrain);
    } else {
      Case terrain1(i + 1, "chance", couleur, coutLocation, coutAchat, nom,
                    "vide");
      cases.push_back(terrain1);
    }
  }

  Carte chance("chance", true, 50, false, 0);
  cartes.push_back(chance);
  Carte chance1("chance", false, 30, false, 0);
  cartes.push_back(chance1);
  Carte chance2("chance", true, 0, true, 25);
  cartes.push_back(chance2);
  Carte chance3("chance", true, 50, true, 10);
  cartes.push_back(chance3);

  /*
  // Création des cartes Caisse de Communauté
  int nb_commu;
  cout << "Saisir le Nombre de cartes de Caisse de Communauté \n";
  cin >> nb_commu;
  for (int i = 0; i < nb_commu; ++i) {
    string description = "Carte Caisse de Communauté " + to_string(i + 1);
    Carte chance(description);
    cartes.push_back(chance);
  }
  */
}

int Plateau::getArgentCentre() const { return argentCentre; }

void Plateau::setArgentCentre(int argent) { argentCentre += argent; }

Case Plateau::getCase(int index) const { return cases[index]; }

void Plateau::setProprioOnCase(int index, string nom) {
  cases[index].setNomduProprio(nom);
}

void Plateau::achatmaison(int index) { cases[index].setNbdeMaison(); }

Carte Plateau::getcarte() {
  // srand(static_cast<unsigned int>(time(nullptr)));
  // Vérifier si le vecteur de cartes n'est pas vide
  if (cartes.empty()) {
    std::cerr << "Erreur : Le vecteur de cartes est vide." << std::endl;
    exit(EXIT_FAILURE);
  }

  // Générer un indice aléatoire dans la plage des indices valides du vecteur
  int indiceAleatoire = rand() % cartes.size();

  // Retourner la carte correspondante
  return cartes[indiceAleatoire];
}