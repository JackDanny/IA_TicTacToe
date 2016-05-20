#include "Situation.h"

void Situation::setId(std::string id)
{
  _id = id;
}

void Situation::setNbGagne(int nbGagne)
{
  _nbGagne = nbGagne;
}
void Situation::setNbPerdu(int nbPerdu)
{
  _nbPerdu = nbPerdu;
}

void Situation::initialise()
{
  _nbGagne = 0;
  _nbPerdu = 0;
}

int Situation::score(){
  return _nbGagne - _nbPerdu;
}

Situation::Situation(std::string id)
{
  _id = id;
  _nbGagne = 0;
  _nbPerdu = 0;
}

Situation::~Situation()
{

}



