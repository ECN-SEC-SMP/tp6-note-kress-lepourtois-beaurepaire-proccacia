#include "joueur.h"

using namespace std;

Joueur::Joueur() : position(0), argent(1000) {
  std::cout << "Veuillez saisir le nom du joueur : ";
  std::cin >> nomdujoueur;
}

int Joueur::getPosition() const { return position; }

void Joueur::setPosition(int newPos) { position = newPos; }

int Joueur::getArgent() const { return argent; }

void Joueur::setArgent(int amount) { argent = amount; }

string Joueur::getNomduJoueur() const { return nomdujoueur; }

void Joueur::setNomdujoueur(string nomdujoueur_) { nomdujoueur = nomdujoueur_; }

void Joueur::seDeplacer() {
  // Simulation d'un lancer de dé pour avancer le joueur
  int oldpostion = position;
  int de1 = rand() % 6 + 1;
  int de2 = rand() % 6 + 1;
  int sommeDes = de1 + de2;
  // pour pouvoir passer par la case départ
  position = (oldpostion + sommeDes) % 40;
  if (position == 0) {
    cout << "vous êtes tombé sur la case départ, recevez 400" << endl;
    argent += 400;
  }
  if (oldpostion > position) {
    cout << "vous avez fait un tour, recevez 100" << endl;
    argent += 100;
  }
}

void Joueur::payerAmende(int amount) { argent -= amount; }

void Joueur::lireCarte(Carte &card) {}
