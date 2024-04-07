#pragma once

#include "carte.h"
#include "case.h"
#include <vector>

class Plateau {
private:
  vector<Case> cases;
  vector<Carte> cartes;
  int argentCentre;
  vector<int> maisonsEtHotels;

public:
  Plateau();
  int getArgentCentre() const;
  void setArgentCentre(int argent);
  Case getCase(int index) const;
  void setProprioOnCase(int index, string nom);
  void achatmaison(int index);
  Carte getcarte();
};
