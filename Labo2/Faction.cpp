#include "Faction.h"

Faction::Faction()
{
	attaque = 10;
	defense = 4;
	vie = 2;
	capacite = 5;
	nom = "Faction";
}

Faction::Faction(int attaque, int defense, int vie, int capacite, string nom)
{
	this->attaque = attaque;
	this->defense = defense;
	this->vie = vie;
	this->capacite = capacite;
	this->nom = nom;
}

Faction::~Faction(){}

string Faction::getNom() { return nom; }
int Faction::getAttaque() { return attaque; }
int Faction::getDefense() { return defense; }
int Faction::getVie() { return vie; }
int Faction::getCapacite() { return capacite; }

string Faction::to_string()
{
	return "Nom: " + nom + "\n" +
		   "Attaque: " + std::to_string(attaque) + "\n" +
		   "Defense: " + std::to_string(defense) + "\n" +
		   "Vie: " + std::to_string(vie) + "\n" +
		   "Capacite: " + std::to_string(capacite) + "\n";
}
