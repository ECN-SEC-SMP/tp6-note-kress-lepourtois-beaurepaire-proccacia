#ifndef CASE_H
#define CASE_H

#include <string>
#include <vector>

class Case {
private:
  int numero;
  std::string type;
  std::string couleur;
  std::vector<int> listeMaison;
  int coutLocation;
  int coutAchat;
  std::string nom;

public:
  Case(int num, std::string t, std::string col, int loyer, int prix,
       std::string name);

  int getNumero() const;
  void setNumero(int num);

  std::string getType() const;
  void setType(std::string t);

  std::string getCouleur() const;
  void setCouleur(std::string col);

  int getCoutLocation() const;
  void setCoutLocation(int loyer);

  int getCoutAchat() const;
  void setCoutAchat(int prix);

  std::string getNom() const;
  void setNom(std::string name);
};

#endif // CASE_H
