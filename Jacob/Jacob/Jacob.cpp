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
    int health, attack, level, ivhealth, ivattack, ivlevel, torhealth, torattack, torlevel, lohealth, loattack, lolevel;
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
    while (inFile >> ivline >> ivname >> ivhealth >> ivattack >> ivlevel) {
        cout << "Name: " << ivname << endl;
        cout << "Health: " << ivhealth << endl;
        cout << "Attack: " << ivattack << endl;
        cout << "Level: " << ivlevel << endl;
        cout << endl;
    }
    while (inFile >> torline >> torname >> torhealth >> torattack >> torlevel) {
        cout << "Name: " << torname << endl;
        cout << "Health: " << torhealth << endl;
        cout << "Attack: " << torattack << endl;
        cout << "Level: " << torlevel << endl;
        cout << endl;
    }
    while (inFile >> loline >> loname >> lohealth >> loattack >> lolevel) {
        cout << "Name: " << loname << endl;
        cout << "Health: " << lohealth << endl;
        cout << "Attack: " << loattack << endl;
        cout << "Level: " << lolevel << endl;
        cout << endl;
    }


    inFile.close();
    return 0;
