#include "VaisseauExploration.h"

VaisseauExploration::VaisseauExploration() : Vaisseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp)
{
	valeurMarchande = 7;
	attaque = 15;
	defense = 12;
	vie = 75;
	capacite = 15;
	nom = "Internet Explorer";
	niveau = 1;
	exp = 0;
}
VaisseauExploration::~VaisseauExploration() {}

string VaisseauExploration::to_string()
{
	return "Vaisseau d'exploration!!!! explore explore\n" +
		Vaisseau::to_string();
}