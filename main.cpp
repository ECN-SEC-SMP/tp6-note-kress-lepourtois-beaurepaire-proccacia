#include "carte.h"
#include "case.h"
#include "joueur.h"
#include "plateau.h"
#include <iostream>

int main() {
  // Création d'un joueur
  Joueur joueur1;
  joueur1.setPosition(5);
  joueur1.setArgent(2000);

  // Affichage de la position et de l'argent du joueur
  std::cout << "Position du joueur : " << joueur1.getPosition() << std::endl;
  std::cout << "Argent du joueur : " << joueur1.getArgent() << std::endl;

  // Création d'un terrain
  Case terrain1(1, "vide", "bleu", 50, 200, "Avenue des Champs-Élysées");

  // Affichage des informations du terrain
  std::cout << "Nom du terrain : " << terrain1.getNom() << std::endl;
  std::cout << "Type du terrain : " << terrain1.getType() << std::endl;
  std::cout << "Couleur du terrain : " << terrain1.getCouleur() << std::endl;
  std::cout << "Coût de location : " << terrain1.getCoutLocation() << std::endl;
  std::cout << "Coût d'achat : " << terrain1.getCoutAchat() << std::endl;

  // Création du plateau
  Plateau plateau;

  // Création d'une carte
  Carte carte1("Avancez à la case départ");

  // Affichage de l'instruction de la carte
  std::cout << "Instruction de la carte : " << carte1.getInstruction()
            << std::endl;

  return 0;
}
