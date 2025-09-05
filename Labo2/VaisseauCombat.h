#pragma once
#include "Vaisseau.h"
#include <vector>

using std::vector;

class VaisseauCombat : public Vaisseau
{
private:
	string getNomRandom(vector<string> noms);
public:
	VaisseauCombat(Faction* faction, Enums::Rang rang);
	~VaisseauCombat();
	string to_string();
};

