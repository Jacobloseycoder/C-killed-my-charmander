#pragma once
#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std;

class Pokemon
{
private:
	string name;
	int hp;
	int attack;
	int level;
public:
	Pokemon();
	Pokemon(string name, int hp, int attack, int level);
	string setName(string n);
	int setHp(int h);
	int setAttack(int a);
	int setLevel(int l);
	string getName() const;
	int getHp() const;
	int getAttack() const;
	int getLevel() const;
};

#endif