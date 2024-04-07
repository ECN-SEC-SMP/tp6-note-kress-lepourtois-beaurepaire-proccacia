#include "jeu.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Jeu::Jeu() : joueurActuelIndex(0) {
  srand(time(0)); // Initialisation du générateur de nombres aléatoires
  plateau = Plateau();
  cout << "Veuillez saisir le nombre de joueurs : " << endl;
  cin >> nbdejoueur;
  if (nbdejoueur < 2) {
    nbdejoueur = 2;
  }
  if (nbdejoueur > 8) {
    nbdejoueur = 8;
  }
  for (int i = 0; i < nbdejoueur; i++) {
    Joueur joueur;
    joueurs.push_back(joueur);
  }
}

void Jeu::tourDeJeuPourLeJoueurActuel() {
  // Logique pour effectuer un tour de jeu pour le joueur actuel
  Joueur &joueurActuel = joueurs[joueurActuelIndex];
  cout << "\n \n ******************************************************"
       << endl;
  cout << "C'est au tour du joueur " << joueurActuel.getNomduJoueur() << endl;
  cout << "Il possède : " << joueurActuel.getArgent() << endl;
  // Déplacement du joueur sur le plateau
  joueurActuel.seDeplacer();
  int positiondujoueur = joueurActuel.getPosition();
  Case caseActuelle = plateau.getCase(positiondujoueur);
  // Affichage des informations de la case actuelle
  cout << "Vous êtes sur la case " << caseActuelle.getNumero() << endl;
  cout << "C'est une case de type " << caseActuelle.getType() << endl;
  if (caseActuelle.getType() == "terrain") {
    cout << "Couleur : " << caseActuelle.getCouleur() << endl;
    if (caseActuelle.getNomduProprio() == "vide") {
      cout << "Cette case n'est pas encore occupée" << endl;
      cout << "Cette case coute " << caseActuelle.getCoutAchat() << " euros"
           << endl;
      if (joueurActuel.getArgent() > caseActuelle.getCoutAchat()) {
        cout << "Voulez-vous acheter cette case ? (oui/non) : " << endl;
        string choix;
        cin >> choix;
        if (choix == "oui") {
          plateau.setProprioOnCase(positiondujoueur,
                                   joueurActuel.getNomduJoueur());
          joueurActuel.setArgent(joueurActuel.getArgent() -
                                 caseActuelle.getCoutAchat());
        }
      }
    } else if (caseActuelle.getNomduProprio() ==
               joueurActuel.getNomduJoueur()) {
      cout << "Cette case vous appartient" << endl;
      // TODO vérifier qu'on peut ajouter une maison
      // il faut qu'on possède la rue et qu'il y ait encore des maisons
      if ((joueurActuel.getArgent() > 150) &&
          (caseActuelle.getNbdeMaison() <= 3)) {
        cout << "Voulez-vous acheter une maison ? (oui/non) : " << endl;
        string choix;
        cin >> choix;
        if (choix == "oui") {
          joueurActuel.setArgent(joueurActuel.getArgent() - 150);
          plateau.achatmaison(positiondujoueur);
        }
      }

    } else {
      cout << "Cette case appartient à " << caseActuelle.getNomduProprio()
           << endl;
      cout << "Le loyer est de " << caseActuelle.getCoutLocation() << endl;
      for (Joueur &joueur : joueurs) {
        if (joueur.getNomduJoueur() == caseActuelle.getNomduProprio()) {
          cout << "Le joueur a été trouvé !" << endl;
          joueur.setArgent(joueur.getArgent() + caseActuelle.getCoutLocation());
          joueurActuel.setArgent(joueurActuel.getArgent() -
                                 caseActuelle.getCoutLocation());
          cout << "Vous avez payé " << endl;
          break;
        }
      }
    }
  } else if (caseActuelle.getType() == "chance") {
    cout << "Cette case est une carte chance" << endl;
    Carte carte = plateau.getcarte();
    if (carte.getDeplacer() == true) {
      cout << "Déplacement à la case : " << carte.getPositionOuAller() << endl;
      joueurActuel.setPosition(carte.getPositionOuAller());
      // TODO payer si la case n'est pas à lui
    }
    if (carte.getPayer() == true) {
      cout << "Payer : " << carte.getCoutAPayerOuRecevoir() << endl;
      plateau.setArgentCentre(carte.getCoutAPayerOuRecevoir());
      joueurActuel.setArgent(joueurActuel.getArgent() -
                             carte.getCoutAPayerOuRecevoir());
    } else {
      cout << "Gagner : " << carte.getCoutAPayerOuRecevoir() << endl;
      joueurActuel.setArgent(joueurActuel.getArgent() +
                             carte.getCoutAPayerOuRecevoir());
    }
  }
}

void Jeu::tourSuivant() {
  // Passer au joueur suivant pour le prochain tour
  joueurActuelIndex = (joueurActuelIndex + 1) % joueurs.size();
}

bool Jeu::conditionDeFinDePartie() {
  // Conditions de fin de jeu, par exemple, un joueur a perdu tout son
  // argent
  bool finDePartie = true;
  for (Joueur &joueur : joueurs) {
    if (joueur.getArgent() <= 0) {
      finDePartie = false;
      cout << "Fin de partie," << joueur.getNomduJoueur() << "n'a plus d'argent"
           << endl;
    }
  }
  return finDePartie;
}

bool Jeu::partieEnCours() {
  while (conditionDeFinDePartie()) {
    tourDeJeuPourLeJoueurActuel();
    tourSuivant();
  }
  return false;
}
