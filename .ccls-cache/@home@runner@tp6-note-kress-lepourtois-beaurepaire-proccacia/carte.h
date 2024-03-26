#ifndef CARTE_H
#define CARTE_H

#include <string>

class Carte {
private:
  std::string instruction;

public:
  Carte(std::string instr);

  std::string getInstruction() const;
  void setInstruction(std::string instr);
};

#endif // CARTE_H
