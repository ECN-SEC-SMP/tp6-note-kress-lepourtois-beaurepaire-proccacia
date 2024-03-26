#ifndef PLATEAU_H
#define PLATEAU_H

#include "carte.h"
#include "case.h"
#include <vector>

class Plateau {
private:
  std::vector<Case> cases;
  std::vector<Carte> cartes;
  int argentCentre;
  std::vector<int> maisonsEtHotels;

public:
  Plateau();
  int getArgentCentre() const;
  void setArgentCentre(int argent);

  // Ajouter des getters et setters si nécessaire
};

#endif // PLATEAU_H
