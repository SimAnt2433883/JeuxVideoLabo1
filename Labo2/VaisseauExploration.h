#pragma once
# include "Vaisseau.h"
#include <vector>

using std::vector;

class VaisseauExploration : public Vaisseau
{
private:
	string getNomRandom(vector<string> noms);
public:
	VaisseauExploration(Faction* faction, Enums::Rang rang);
	~VaisseauExploration();
	string to_string();
};

