#include "VaisseauCombat.h"
#include "Utils.h"
#include <vector>

using std::vector;

VaisseauCombat::VaisseauCombat(Faction* faction, Enums::Rang rang) : Vaisseau(faction, rang)
{
	vector<string> noms =
	{
		"Destroyer",
		"Annihilator",
		"Death ship",
		"Killer",
		"Destructor"
	};
	nom = getNomRandom(noms);
	this->attaque += Utils::random(1, 6);
}

inline string VaisseauCombat::getNomRandom(vector<string> noms)
{
	return noms[Utils::random(0, noms.size())];
}

VaisseauCombat::~VaisseauCombat() {}

string VaisseauCombat::to_string()
{
	return "Vaisseau de combat!!!! pew pew\n" +
		Vaisseau::to_string();
}