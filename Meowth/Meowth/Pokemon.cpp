#include "Pokemon.h"
#include <string>
using namespace std;

Pokemon::Pokemon()
{
	name = "Unknown";
	hp = 0;
	attack = 0;
	level = 0;
}

Pokemon::Pokemon(string n, int h, int a, int l)
{
	name = n;
	hp = h;
	attack = a;
	level = l;
}

string Pokemon::setName(string n)
{
	return name;
}

int Pokemon::setHp(int h)
{
	return hp;
}

int Pokemon::setAttack(int a)
{
	return attack;
}

int Pokemon::setLevel(int l)
{
	return level;
}

string Pokemon::getName() const
{
	return name;
}

int Pokemon::getHp() const
{
	return hp;
}

int Pokemon::getAttack() const
{
	return attack;
}

int Pokemon::getLevel() const
{
	return level;
}