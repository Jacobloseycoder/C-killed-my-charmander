#include "List.h"
#include "List.cpp"
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

    string name, toname, ganame;
	int lvl, hp, atk, tolvl, tohp, toatk, galvl, gahp, gaatk;
    int line = 980;
    int ivline = 748;
    int torline = 569;
    int loline = 270;
    while (inFile >> line >> name >> hp >> atk >> lvl) {
        cout << "Name: " << name << endl;
        cout << "Health: " << hp << endl;
        cout << "Attack: " << atk << endl;
        cout << "Level: " << lvl<< endl;
        cout << endl;
    }
    while (inFile >> ivline >> toname >> tohp >> toatk >> tolvl) {
        cout << "Name: " << toname << endl;
        cout << "Health: " << tohp << endl;
        cout << "Attack: " << toatk << endl;
        cout << "Level: " << tolvl << endl;
        cout << endl;
    }
    while (inFile >> torline >> ganame >> gahp >> gaatk >> galvl) {
        cout << "Name: " << ganame << endl;
        cout << "Health: " << gahp << endl;
        cout << "Attack: " << gaatk << endl;
        cout << "Level: " << galvl << endl;
        cout << endl;
    }
    inFile.close();
    return 0;
}