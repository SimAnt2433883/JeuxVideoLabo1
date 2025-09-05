#include "VaisseauCombat.h"

VaisseauCombat::VaisseauCombat() : Vaisseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp)
{
	valeurMarchande = 4;
	attaque = 20;
	defense = 8;
	vie = 200;
	capacite = 10;
	nom = "Fighter";
	niveau = 1;
	exp = 0;
}
VaisseauCombat::~VaisseauCombat() {}

string VaisseauCombat::to_string()
{
	return "Vaisseau de combat!!!! pew pew\n" +
		Vaisseau::to_string();
}