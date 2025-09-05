#include "FactionMechante.h"

FactionMechante::FactionMechante() : Faction(0, 0, 0, 0, "")
{
	attaque = 9;
	defense = 7;
	vie = 5;
	capacite = 6;
	nom = "Faction mechante";
}

FactionMechante::~FactionMechante() {}

string FactionMechante::to_string()
{
	return Faction::to_string();
}