#pragma once
#include "Faction.h"

class FactionMechante : public Faction
{
public:
	FactionMechante();
	~FactionMechante();
	virtual string to_string();
};

