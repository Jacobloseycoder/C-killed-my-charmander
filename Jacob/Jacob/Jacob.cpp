#include "Lucas.h"
#include "Lucas.cpp"
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

    string name, mename;
	int health, attack, level, mehp, meatk, melvl;
    int line = 45;
    int ivline = 2;
    int torline = 389;
    int loline = 270;
    while (inFile >> line >> name >> health >> attack >> level) {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Attack: " << attack << endl;
        cout << "Level: " << level << endl;
        cout << endl;
    }
    while (inFile >> ivline >> mename >> mehp >> meatk >> melvl) {
        cout << "Name: " << mename << endl;
        cout << "Health: " << mehp << endl;
        cout << "Attack: " << meatk << endl;
        cout << "Level: " << melvl << endl;
        cout << endl;
    }


    inFile.close();
    return 0;
