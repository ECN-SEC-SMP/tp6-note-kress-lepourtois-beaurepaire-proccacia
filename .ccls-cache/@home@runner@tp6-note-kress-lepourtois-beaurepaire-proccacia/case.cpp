#include "case.h"

Case::Case(int num, std::string t, std::string col, int loyer, int prix,
                 std::string name)
    : numero(num), type(t), couleur(col), coutLocation(loyer), coutAchat(prix),
      nom(name) {}

int Case::getNumero() const { return numero; }

void Case::setNumero(int num) { numero = num; }

std::string Case::getType() const { return type; }

void Case::setType(std::string t) { type = t; }

std::string Case::getCouleur() const { return couleur; }

void Case::setCouleur(std::string col) { couleur = col; }

int Case::getCoutLocation() const { return coutLocation; }

void Case::setCoutLocation(int loyer) { coutLocation = loyer; }

int Case::getCoutAchat() const { return coutAchat; }

void Case::setCoutAchat(int prix) { coutAchat = prix; }

std::string Case::getNom() const { return nom; }

void Case::setNom(std::string name) { nom = name; }
