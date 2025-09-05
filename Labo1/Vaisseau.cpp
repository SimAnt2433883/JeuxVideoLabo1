#include "Vaisseau.h"

Vaisseau::Vaisseau(int valeurMarchande, int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp)
{
	this->valeurMarchande = valeurMarchande;
	this->attaque = attaque;
	this->defense = defense;
	this->vie = vie;
	this->capacite = capacite;
	this->nom = nom;
	this->niveau = niveau;
	this->exp = exp;
};

Vaisseau::Vaisseau(int valeurMarchande, string nom, int niveau, int exp, Faction faction)
{
	this->valeurMarchande = valeurMarchande;
	this->nom = nom;
	this->niveau = niveau;
	this->exp = exp;
	this->faction = faction;
	attaque = faction.getAttaque();
	defense = faction.getDefense();
	vie = faction.getVie();
	capacite = faction.getCapacite();
}

Vaisseau::~Vaisseau() { }

int Vaisseau::getAtt() { return attaque; }

int Vaisseau::getDef() { return defense; }

int Vaisseau::getVie() { return vie; }

string Vaisseau::to_string()
{
	return "Attaque: " + std::to_string(attaque) + "\n" +
		   "Defense: " + std::to_string(defense) + "\n" +
		   "Vie: " + std::to_string(vie) + "\n" +
		   "Capacite: " + std::to_string(capacite) + "\n" +
		   "Nom: " + nom + "\n" +
		   "Niveau: " + std::to_string(niveau) + "\n" +
		   "Exp: " + std::to_string(exp) + "\n" +
		   "Valeur marchande: " + std::to_string(valeurMarchande) + "\n";
}
