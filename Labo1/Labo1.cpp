#include <iostream>
#include "Faction.h"
#include "VaisseauTransport.h"
#include "VaisseauExploration.h"
#include "VaisseauCombat.h"

using std::cout;

inline static void print(const string& chaine)
{
    cout << chaine + "\n";
}

int main()
{
    Faction factions[2] = 
    {
        Faction(6, 4, 80, 15, "Faction bleue"), 
        Faction(3, 10, 90, 20, "Faction rouge") 
    };

    for (int i = 0; i < sizeof(factions) / sizeof(factions[0]); i++)
        print(factions[i].to_string());

    // Je voulais print les vaisseaux mais c'est trop compliquer ;(
}
