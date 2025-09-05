#pragma once
#include <string>
#include "Faction.h"
using std::string;

class Vaisseau
{
protected:
	int valeurMarchande;
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
	int niveau;
	int exp;
	Faction faction;

public:
	Vaisseau(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp);
	Vaisseau(int valeurMarchande, string nom, int niveau, int exp, Faction faction);
	~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();
	virtual string to_string();
};