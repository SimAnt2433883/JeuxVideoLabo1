#pragma once
#include <vector>
#include "Vaisseau.h"

using std::vector;

class Station
{
private:
	int platinumDisponible;
	int vieStation;
	vector<Vaisseau*> vecVaisseau;
public:
	Station();
	~Station();
	vector<Vaisseau*> getVaisseauDispo();
	void init();
	void ajouterVaisseau(Vaisseau* vaisseau);
	string to_string();
};

