#pragma once
#include <string>
#include "Faction.h"
#include "Enums.h"
using std::string;

class Vaisseau
{
protected:
	Faction* faction;
	int valeurMarchande;
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
	int niveau;
	int exp;
	Enums::Rang rang;
	
	int getAttaqueRang();
	int getDefenseRang();
	int getVieRang();
	int getCapaciteRang();
	int getValeurMarchandeRang();
	int getExpRang();

public:
	Vaisseau(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp, Faction* faction, Enums::Rang rang);
	Vaisseau(Faction* faction, Enums::Rang rang);
	virtual ~Vaisseau();

	int getAtt();
	int getDef();
	int getVie();
	virtual string to_string();
};