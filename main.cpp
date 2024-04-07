#include "carte.h"
#include "case.h"
#include "jeu.h"
#include "joueur.h"
#include "plateau.h"
#include <iostream>

using namespace std;

int main() {
  // TODO saisir le nom du joueur
  Jeu unepartie;
  unepartie.partieEnCours();
  /*
  // Création d'un joueur
  Joueur joueur1;
  joueur1.setPosition(5);
  joueur1.setArgent(2000);

  // Affichage de la position et de l'argent du joueur
  cout << "Position du joueur : " << joueur1.getPosition() << endl;
  cout << "Argent du joueur : " << joueur1.getArgent() << endl;

  // Création d'un terrain
  Case terrain1(1, "vide", "bleu", 50, 200, "Avenue des Champs-Élysées",
                "pas de proprio");

  // Affichage des informations du terrain
  cout << "Nom du terrain : " << terrain1.getNom() << endl;
  cout << "Type du terrain : " << terrain1.getType() << endl;
  cout << "Couleur du terrain : " << terrain1.getCouleur() << endl;
  cout << "Coût de location : " << terrain1.getCoutLocation() << endl;
  cout << "Coût d'achat : " << terrain1.getCoutAchat() << endl;

  // Création du plateau
  Plateau plateau;

  // Création d'une carte
  Carte carte1("Avancez à la case départ");

  // Affichage de l'instruction de la carte
  cout << "Instruction de la carte : " << carte1.getInstruction() << endl;
*/
  return 0;
}
