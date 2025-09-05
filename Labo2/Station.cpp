#include "Station.h"
#include "FactoryVaisseau.h"

Station::Station()
{
	init();
}

Station::~Station()
{
	for (auto& i : vecVaisseau)
	{
		delete i;
		i = nullptr;
	}
}

vector<Vaisseau*> Station::getVaisseauDispo() { return vecVaisseau; }
void Station::ajouterVaisseau(Vaisseau* vaisseau) { vecVaisseau.push_back(vaisseau); }

void Station::init()
{
	for (int i = 0; i < 3; i++)
		vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
}

string Station::to_string()
{
	string tostring = "STATION:\n";
	for (int i = 0; i < vecVaisseau.size(); i++)
		tostring += vecVaisseau[i]->to_string() + "\n";
	return tostring;
}