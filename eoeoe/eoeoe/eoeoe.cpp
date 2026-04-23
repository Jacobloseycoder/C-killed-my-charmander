#include <iostream>
#include <string>
#include <fstream>
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
    if (!inFile)
    {
        cout << "Error!!!! File not found." << endl;
        return 0;
    }

    string rname, vname, jname, saname;
    int rHealth, rAttack, rLevel;
    int vLevel, vHealth, vAttack;
    int jLevel, jHealth, jAttack;
    int saLevel, saHealth, saAttack;
    int rline = 26;
    int vline = 100;
    int jline = 135;
    int sline = 989;

    while (inFile >> rline >> rname >> rHealth >> rAttack >> rLevel) {
        cout << "Name: " << rname << endl;
        cout << "Health: " << rHealth << endl;
        cout << "Attack: " << rAttack << endl;
        cout << "Level: " << rLevel << endl;
        cout << endl;
    }
    while (inFile >> vline >> vname >> vHealth >> vAttack >> vLevel) {
        cout << "Name: " << vname << endl;
        cout << "Health: " << vHealth << endl;
        cout << "Attack: " << vAttack << endl;
        cout << "Level: " << vLevel << endl;
        cout << endl;
    }
    while (inFile >> jline >> jname >> jHealth >> jAttack >> jLevel) {
        cout << "Name: " << jname << endl;
        cout << "Health: " << jHealth << endl;
        cout << "Attack: " << jAttack << endl;
        cout << "Level: " << jLevel << endl;
        cout << endl;
    }
    while (inFile >> sline >> saname >> saHealth >> saAttack >> saLevel) {
        cout << "Name: " << saname << endl;
        cout << "Health: " << saHealth << endl;
        cout << "Attack: " << saAttack << endl;
        cout << "Level: " << saLevel << endl;
        cout << endl;
    }
    inFile.close();
    return 0;
}