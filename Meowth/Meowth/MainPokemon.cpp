#include "Pokemon.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	fstream inFile("C:\\Users\\2020920\\Desktop\\C-killed-my-charmander\\Meowth\\Meowth\\Pokedex.txt");
	if (!inFile)
	{
		cout << "Error!!!! File not found." << endl;
		return 0;
	}
	else
	{
		int hp, attack, level;
		string name;
		while (inFile >> name >> hp >> attack >> level)
		{
			Pokemon pokemon(name, hp, attack, level);
			cout << "Name: " << pokemon.getName() << endl;
			cout << "HP: " << pokemon.getHp() << endl;
			cout << "Attack: " << pokemon.getAttack() << endl;
			cout << "Level: " << pokemon.getLevel() << endl;
			cout << endl;
		}

	}
}