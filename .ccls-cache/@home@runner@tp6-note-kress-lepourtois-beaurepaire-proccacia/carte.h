#pragma once

#include <string>

using namespace std;

class Carte {
private:
  string type;
  bool payer;
  int coutAPayerOuRecevoir;
  bool deplacer;
  int positionOuAller;

public:
  // Constructeur
  Carte(string type, bool payer, int coutAPayerOuRecevoir, bool deplacer,
        int positionOuAller);

  // Getters
  string getType() const;
  bool getPayer() const;
  int getCoutAPayerOuRecevoir() const;
  bool getDeplacer() const;
  int getPositionOuAller() const;

  // Setters
  void setType(const string type);
  void setPayer(bool payer);
  void setCoutAPayerOuRecevoir(int coutAPayerOuRecevoir);
  void setDeplacer(bool deplacer);
  void setPositionOuAller(int positionOuAller);
};
