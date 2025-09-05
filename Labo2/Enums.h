#pragma once
#include <string>
using std::string;

class Enums
{
	// je voulais les mettre dans le .cpp mais ca causait beaucoup de problemes
public:
	enum TypeVaisseau
	{
		COMBAT = 1,
		EXPLORATION = 2,
		TRANSPORT = 3
	};

	enum TypeFaction
	{
		GENTILLE = 1,
		MECHANTE = 2
	};

	enum Rang
	{
		JUNIOR = 1,
		SENIOR = 2,
		VETERAN = 3
	};

	static string rangToString(Rang rang);
};
