#include "carte.h"

Carte::Carte(std::string instr) : instruction(instr) {}

std::string Carte::getInstruction() const { return instruction; }

void Carte::setInstruction(std::string instr) { instruction = instr; }
