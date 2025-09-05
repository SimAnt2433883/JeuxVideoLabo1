#include "FactoryVaisseau.h"
#include "Utils.h"
#include "VaisseauCombat.h"
#include "VaisseauExploration.h"
#include "VaisseauTransport.h"
#include "FactionGentille.h"
#include "FactionMechante.h"
#include "Enums.h";

Enums::Rang FactoryVaisseau::getRang()
{
	return (Enums::Rang)Utils::random(1, 4);
}

Faction* FactoryVaisseau::getRandomFaction()
{
	Faction* faction(0);
	Enums::TypeFaction typeF = (Enums::TypeFaction)Utils::random(1, 3);

	if (typeF == Enums::TypeFaction::GENTILLE)
		faction = new FactionGentille();
	else
		faction = new FactionMechante();

	return faction;
}

Vaisseau* FactoryVaisseau::getRandomVaisseau() 
{
	Vaisseau* vaisseau(0);
	Faction* faction = getRandomFaction();

	Enums::TypeVaisseau typeV = (Enums::TypeVaisseau)Utils::random(1, 4);
	Enums::Rang rang = getRang();
	switch (typeV)
	{
		case (Enums::TypeVaisseau::COMBAT):
			vaisseau = new VaisseauCombat(faction, rang);
			break;
		case (Enums::TypeVaisseau::EXPLORATION):
			vaisseau = new VaisseauExploration(faction, rang);
			break;
		case (Enums::TypeVaisseau::TRANSPORT):
			vaisseau = new VaisseauTransport(faction, rang);
			break;
	}
	return vaisseau;
}