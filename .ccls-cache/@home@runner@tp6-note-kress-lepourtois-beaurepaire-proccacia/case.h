#pragma once

#include <string>
#include <vector>

using namespace std;

class Case {
private:
  int numero;
  string type;
  string couleur;
  int nbdemaison;
  int coutLocation;
int coutlocationinit;
  int coutAchat;
  string nom;
  string nomduproprietaire;

public:
  Case(int num, string t, string col, int loyer, int prix, string name,
       string nomduproprio);

  int getNumero() const;
  void setNumero(int num);

  string getType() const;
  void setType(string t);

  string getCouleur() const;
  void setCouleur(string col);

  int getCoutLocation() const;
  void setCoutLocation(int loyer);

  int getCoutAchat() const;
  void setCoutAchat(int prix);

  string getNom() const;
  void setNom(string name);

  string getNomduProprio() const;
  void setNomduProprio(string nomduproprio);

  int getNbdeMaison() const;
  void setNbdeMaison();
};
