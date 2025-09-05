#include <iostream>
#include "Faction.h"
#include "VaisseauTransport.h"
#include "VaisseauExploration.h"
#include "VaisseauCombat.h"
#include "Utils.h"
#include "FactoryVaisseau.h"
#include "Station.h"

using std::cout;

inline static void print(const string& chaine)
{
	cout << chaine + "\n";
}

int main()
{
	srand(time(0));

	Station* station = new Station();
	print(station->to_string());

	delete station;
	station = nullptr;
}
