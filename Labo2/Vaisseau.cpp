#include "Vaisseau.h"
#include "Utils.h"

Vaisseau::Vaisseau(int valeurMarchande, int attaque, int defense, int vie, int capacite,
	string nom, int niveau, int exp, Faction* faction, Enums::Rang rang)
{
	this->faction = faction;
	this->rang = rang;
	this->valeurMarchande = valeurMarchande;
	this->attaque = attaque + faction->getAttaque() + getAttaqueRang();
	this->defense = defense + faction->getDefense() + getDefenseRang();
	this->vie = vie + faction->getVie() + getVieRang();
	this->capacite = capacite + faction->getCapacite() + getCapaciteRang();
	this->nom = nom;
	this->niveau = niveau + getExpRang();
	this->exp = exp;
}

Vaisseau::Vaisseau(Faction* faction, Enums::Rang rang)
{
	this->faction = faction;
	this->rang = rang;
	this->valeurMarchande = 10 + getValeurMarchandeRang();
	this->attaque = faction->getAttaque() + getAttaqueRang();
	this->defense = faction->getDefense() + getDefenseRang();
	this->vie = faction->getVie() + getVieRang();
	this->capacite = faction->getCapacite() + getCapaciteRang();
	nom = "Vaisseau";
	niveau = 1;
	exp = getExpRang();
}

Vaisseau::~Vaisseau()
{
	delete faction;
	faction = nullptr;
}

inline int Vaisseau::getValeurMarchandeRang()
{
	return Utils::random(0, ((int)rang * 4) - 3);
}

inline int Vaisseau::getExpRang()
{
	return Utils::random(0, (int)rang * 10);
}

inline int Vaisseau::getAttaqueRang()
{
	return ((int)rang * 2) - 1 + Utils::random(0, 4);
}

inline int Vaisseau::getDefenseRang()
{
	return ((int)rang * 3) - 2 + Utils::random(0, 4);
}

inline int Vaisseau::getVieRang()
{
	return ((int)rang * 2) - 2 + Utils::random(0, 4);
}

inline int Vaisseau::getCapaciteRang()
{
	return ((int)rang * 3) - 3 + Utils::random(0, 4);
}

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
		"Valeur marchande: " + std::to_string(valeurMarchande) + "\n" +
		"Faction: " + faction->getNom() + "\n" + 
		"Rang: " + Enums::rangToString(rang) + "\n";
}
