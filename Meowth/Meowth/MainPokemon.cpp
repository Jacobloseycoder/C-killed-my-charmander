#include "Pokemon.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ifstream inFile("C:\\Users\\2020920\\Desktop\\C-killed-my-charmander\\Meowth\\Meowth\\Pokedex.txt");
	if (!inFile)
	{
		cout << "Error!!!! File not found." << endl;
		return 0;
	}

    string name;
    int health, attack, level;

    while (inFile >> name >> health >> attack >> level) {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Attack: " << attack << endl;
        cout << "Level: " << level << endl;
        cout << endl;
    }

    inFile.close();
    return 0;
}