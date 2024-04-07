#include "carte.h"

// Constructeur
Carte::Carte(string type, bool payer, int coutAPayerOuRecevoir, bool deplacer,
             int positionOuAller)
    : type(type), payer(payer), coutAPayerOuRecevoir(coutAPayerOuRecevoir),
      deplacer(deplacer), positionOuAller(positionOuAller) {}

// Getters
string Carte::getType() const { return type; }

bool Carte::getPayer() const { return payer; }

int Carte::getCoutAPayerOuRecevoir() const { return coutAPayerOuRecevoir; }

bool Carte::getDeplacer() const { return deplacer; }

int Carte::getPositionOuAller() const { return positionOuAller; }

// Setters
void Carte::setType(const string type) { this->type = type; }

void Carte::setPayer(bool payer) { this->payer = payer; }

void Carte::setCoutAPayerOuRecevoir(int coutAPayerOuRecevoir) {
  this->coutAPayerOuRecevoir = coutAPayerOuRecevoir;
}

void Carte::setDeplacer(bool deplacer) { this->deplacer = deplacer; }

void Carte::setPositionOuAller(int positionOuAller) {
  this->positionOuAller = positionOuAller;
}