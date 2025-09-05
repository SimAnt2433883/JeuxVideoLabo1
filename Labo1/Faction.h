#pragma once

#include <string>
using std::string;

class Faction
{
protected:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;

public:
	Faction();
	Faction(int attaque, int defense, int vie, int capacite, string nom);
	~Faction();
	string getNom();
	int getAttaque();
	int getDefense();
	int getVie();
	int getCapacite();
	virtual string to_string();
};

