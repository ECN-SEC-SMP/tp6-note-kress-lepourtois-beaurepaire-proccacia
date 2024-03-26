#include "terrain.h"

Terrain::Terrain(int num, std::string t, std::string col, int loyer, int prix,
                 std::string name)
    : numero(num), type(t), couleur(col), coutLocation(loyer), coutAchat(prix),
      nom(name) {}

int Terrain::getNumero() const { return numero; }

void Terrain::setNumero(int num) { numero = num; }

std::string Terrain::getType() const { return type; }

void Terrain::setType(std::string t) { type = t; }

std::string Terrain::getCouleur() const { return couleur; }

void Terrain::setCouleur(std::string col) { couleur = col; }

int Terrain::getCoutLocation() const { return coutLocation; }

void Terrain::setCoutLocation(int loyer) { coutLocation = loyer; }

int Terrain::getCoutAchat() const { return coutAchat; }

void Terrain::setCoutAchat(int prix) { coutAchat = prix; }

std::string Terrain::getNom() const { return nom; }

void Terrain::setNom(std::string name) { nom = name; }
