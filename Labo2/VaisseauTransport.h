#pragma once
# include "Vaisseau.h"
#include <vector>

using std::vector;

class VaisseauTransport : public Vaisseau
{
private:
	string getNomRandom(vector<string> noms);
public:
	VaisseauTransport(Faction* faction, Enums::Rang rang);
	~VaisseauTransport();
	string to_string();
};

