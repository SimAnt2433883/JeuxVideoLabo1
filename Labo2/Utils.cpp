#include "Utils.h"
#include <cstdlib>
#include <ctime>

int Utils::random(int min, int max) 
{
	return (min + rand() % (max - min));
}