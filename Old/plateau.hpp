#pragma once

#include <vector>
#include "Terrain.hpp"
#include "Carte.hpp"

class Plateau {
public:
  Plateau();

private:
  std::vector<Terrain> cases;
  std::vector<Carte> cartes;
  int argentCentre;
  std::vector<int> maisonsEtHotels;
};
