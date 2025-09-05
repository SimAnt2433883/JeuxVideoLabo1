#include "VaisseauExploration.h"
#include "Utils.h"
#include <vector>

using std::vector;

VaisseauExploration::VaisseauExploration(Faction* faction, Enums::Rang rang) : Vaisseau(faction, rang)
{
    vector<string> noms =
    {
        "Star Seeker",
        "Cosmos Voyager",
        "Stellar Scout",
        "Infinity",
        "Pathfinder"
    };
    nom = getNomRandom(noms);
	this->defense += Utils::random(3, 8);
}

inline string VaisseauExploration::getNomRandom(vector<string> noms)
{
	return noms[Utils::random(0, noms.size())];
}

VaisseauExploration::~VaisseauExploration() {}

string VaisseauExploration::to_string()
{
	return "Vaisseau d'exploration!!!! explore explore\n" +
		Vaisseau::to_string();
}