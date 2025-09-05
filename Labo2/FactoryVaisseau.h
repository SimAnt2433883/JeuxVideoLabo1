#pragma once
#include "Vaisseau.h"
#include "Faction.h"
#include "Enums.h"

class FactoryVaisseau
{
public:
	static Vaisseau* getRandomVaisseau();
private:
	static Faction* getRandomFaction();
	static Enums::Rang getRang();
};