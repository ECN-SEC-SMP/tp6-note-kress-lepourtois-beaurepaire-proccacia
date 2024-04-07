#include "case.h"

Case::Case(int num, string t, string col, int loyer, int prix, string name,
           string nomduprop)
    : numero(num), type(t), couleur(col), coutlocationinit(loyer),
      coutAchat(prix), nom(name), nomduproprietaire(nomduprop) {
  nbdemaison = 0;
  coutLocation = coutlocationinit;
}

int Case::getNumero() const { return numero; }

void Case::setNumero(int num) { numero = num; }

string Case::getType() const { return type; }

void Case::setType(string t) { type = t; }

string Case::getCouleur() const { return couleur; }

void Case::setCouleur(string col) { couleur = col; }

int Case::getCoutLocation() const { return coutLocation; }

void Case::setCoutLocation(int loyer) { coutLocation = loyer; }

int Case::getCoutAchat() const { return coutAchat; }

void Case::setCoutAchat(int prix) { coutAchat = prix; }

string Case::getNom() const { return nom; }

void Case::setNom(string name) { nom = name; }

string Case::getNomduProprio() const { return nomduproprietaire; }
void Case::setNomduProprio(string nomduproprio) {
  nomduproprietaire = nomduproprio;
}

int Case::getNbdeMaison() const { return nbdemaison; }
void Case::setNbdeMaison() {
  nbdemaison += 1;
  coutLocation = coutlocationinit + 100 * nbdemaison;
}