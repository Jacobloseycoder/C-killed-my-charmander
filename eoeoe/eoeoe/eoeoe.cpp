#include "Enemies.h"
#include "Enemies.cpp"
#include <iostream>
#include <string>
#include <fstream>
<<<<<<< HEAD
#include <iomanip>
using namespace std;

int main()
{
    ifstream inFile("C:\\Users\\2020920\\Desktop\\C-killed-my-charmander\\Meowth\\Meowth\\Pokedex.txt");
=======
#include "Brock.h"
#include "Misty.h"
#include "LtSurge.h"
using namespace std;

int Brock::Broc()
{
    ifstream inFile("C:\\Users\\Squir\\OneDrive\\Desktop\\Visual studio code\\ConsoleApplication1\\pokedex.txt");
    if (!inFile)
    {
        cout << "Error!!!! File not found." << endl;
        return 0;
    }
    string onix, geodude, bonsly;
    int onixHealth, onixAttack, onixLevel, geodudeLevel, geodudeHealth, geodudeAttack, bonslyHealth, bonslyAttack, bonslyLevel;
    int oline = 95;
    int gline = 74;
    int bline = 438;
    while (inFile >> oline >> onix >> onixHealth >> onixAttack >> onixLevel) {
        cout << "Name: " << onix << endl;
        cout << "Health: " << onixHealth << endl;
        cout << "Attack: " << onixAttack << endl;
        cout << "Level: " << onixLevel << endl;
        cout << endl;
    }
    while (inFile >> gline >> geodude >> geodudeHealth >> geodudeAttack >> geodudeLevel) {
        cout << "Name: " << geodude << endl;
        cout << "Health: " << geodudeHealth << endl;
        cout << "Attack: " << geodudeAttack << endl;
        cout << "Level: " << geodudeLevel << endl;
        cout << endl;
    }
    while (inFile >> bline >> bonsly >> bonslyHealth >> bonslyAttack >> bonslyLevel) {
        cout << "Name: " << bonsly << endl;
        cout << "Health: " << bonslyHealth << endl;
        cout << "Attack: " << bonslyAttack << endl;
        cout << "Level: " << bonslyLevel << endl;
        cout << endl;
    }
    inFile.close();
    return 0;
}


int Misty::Mist()
{
    ifstream inFile("C:\\Users\\Squir\\OneDrive\\Desktop\\Visual studio code\\ConsoleApplication1\\pokedex.txt");
    if (!inFile)
    {
        cout << "Error!!!! File not found." << endl;
        return 0;
    }
    string psyduck, seel, mudkip;
    int psyduckHealth, psyduckAttack, psyduckLevel, seelLevel, seelHealth, seelAttack, mudkipLevel, mudkipHealth, mudkipAttack;
    int pline = 54;
    int gline = 74;
    int mline = 258;
    while (inFile >> pline >> psyduck >> psyduckHealth >> psyduckAttack >> psyduckLevel) {
        cout << "Name: " << psyduck << endl;
        cout << "Health: " << psyduckHealth << endl;
        cout << "Attack: " << psyduckAttack << endl;
        cout << "Level: " << psyduckLevel << endl;
        cout << endl;
    }
    while (inFile >> gline >> seel >> seelHealth >> seelAttack >> seelLevel) {
        cout << "Name: " << seel << endl;
        cout << "Health: " << seelHealth << endl;
        cout << "Attack: " << seelAttack << endl;
        cout << "Level: " << seelLevel << endl;
        cout << endl;
    }
    while (inFile >> mline >> mudkip >> mudkipHealth >> mudkipAttack >> mudkipLevel) {
        cout << "Name: " << mudkip << endl;
        cout << "Health: " << mudkipHealth << endl;
        cout << "Attack: " << mudkipAttack << endl;
        cout << "Level: " << mudkipLevel << endl;
        cout << endl;
    }
    inFile.close();
    return 0;
}
int LtSurge::Surge()
{
    ifstream inFile("C:\\Users\\Squir\\OneDrive\\Desktop\\Visual studio code\\ConsoleApplication1\\pokedex.txt");
>>>>>>> acb77cd2e76e64705c07de31c3bc23e09502d766
    if (!inFile)
    {
        cout << "Error!!!! File not found." << endl;
        return 0;
    }

    string name, ivname, torname, loname;
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