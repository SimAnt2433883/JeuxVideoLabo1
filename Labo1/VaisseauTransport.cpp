#include "VaisseauTransport.h"

VaisseauTransport::VaisseauTransport() : Vaisseau(valeurMarchande, attaque, defense, vie, capacite, nom, niveau, exp) 
{
	valeurMarchande = 10;
	attaque = 5;
	defense = 3;
	vie = 100;
	capacite = 50;
	nom = "Cargo";
	niveau = 1;
	exp = 0;
}
VaisseauTransport::~VaisseauTransport() {}

string VaisseauTransport::to_string()
{
	return "Vaisseau de transport!!!! transporte transporte\n" + 
			Vaisseau::to_string();
}