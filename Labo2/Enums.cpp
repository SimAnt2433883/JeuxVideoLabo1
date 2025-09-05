#include "Enums.h"
#include <string>
using std::string;

string Enums::rangToString(Rang rang)
{
	switch (rang)
	{
		case Enums::Rang::JUNIOR: 
			return "Junior";
		case Enums::Rang::SENIOR: 
			return "Senior";
		case Enums::Rang::VETERAN: 
			return "Veteran";
		default: 
			return "Inconnu";
	}
}