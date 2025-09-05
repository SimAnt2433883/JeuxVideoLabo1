#include "FactionGentille.h"

FactionGentille::FactionGentille() : Faction(0, 0, 0, 0, "")
{
	attaque = 13;
	defense = 2;
	vie = 4;
	capacite = 8;
	nom = "Faction gentille";
}

FactionGentille::~FactionGentille() {}

string FactionGentille::to_string()
{
	return Faction::to_string();
}