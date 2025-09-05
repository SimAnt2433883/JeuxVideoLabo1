#include "VaisseauTransport.h"
#include "Utils.h"
#include <vector>

using std::vector;

VaisseauTransport::VaisseauTransport(Faction* faction, Enums::Rang rang) : Vaisseau(faction, rang)
{
	vector<string> noms =
	{
		"Cargo Titan",
		"Galaxy Freighter",
		"Nebula Hauler",
		"Star Carrier",
		"Space Mule"
	};
	nom = getNomRandom(noms);
	this->capacite += Utils::random(4, 9);
}

inline string VaisseauTransport::getNomRandom(vector<string> noms)
{
	return noms[Utils::random(0, noms.size())];
}

VaisseauTransport::~VaisseauTransport() {}

string VaisseauTransport::to_string()
{
	return "Vaisseau de transport!!!! transporte transporte\n" +
		Vaisseau::to_string();
}