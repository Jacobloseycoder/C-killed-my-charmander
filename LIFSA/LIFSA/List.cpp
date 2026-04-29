#include "List.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

Koga::Koga()
{
    clodsire = "unknown";
    clodsirelvl = 0;
    clodsirehp = 0;
    clodsireatk = 0;
    toxapex = "unknown";
    toxapexlvl = 0;
    toxapexhp = 0;
    toxapexatk = 0;
    Garbodor = "unknown";
    Garbodorlvl = 0;
    Garbodorhp = 0;
    Garbodoratk = 0;
}
Koga::Koga(string clnam, int cllvl, int clhp, int clatk, string toxnam, int toxlvl, int toxhp, int toxatk, string garnam, int garlvl, int garhp, int garatk)
{
    clodsire = clnam;
    clodsirelvl = cllvl;
    clodsirehp = clhp;
    clodsireatk = clatk;
    toxapex = toxnam;
    toxapexlvl = toxlvl;
    toxapexhp = toxhp;
    toxapexatk = toxatk;
    Garbodor = garnam;
    Garbodorlvl = garlvl;
    Garbodorhp = garhp;
    Garbodoratk = garatk;
}
void Koga::setClodsireName(string name)
{
	clodsire = name;
}
void Koga::SetClodsire(int lvl, int hp, int atk)
{
    clodsirelvl = lvl;
    clodsirehp = hp;
    clodsireatk = atk;
}
void Koga::setToxapexName(string toname)
{
    toxapex = toname;
}
void Koga::setToxapex(int tolvl, int tohp, int toatk)
{
    toxapexlvl = tolvl;
    toxapexhp = tohp;
    toxapexatk = toatk;
}
void Koga::setGarbodorName(string ganame)
{
    Garbodor = ganame;
}
void Koga::setGarbodor(int galvl, int gahp, int gaatk)
{
    Garbodorlvl = galvl;
    Garbodorhp = gahp;
    Garbodoratk = gaatk;
}
string Koga::getClodsireName() const
{
    return clodsire;
}
int Koga::getClodsire() const
{
    return clodsirelvl;
	return clodsireatk;
	return clodsirehp;
}
string Koga::getToxapexName() const
{
    return toxapex;
}
int Koga::getToxapex() const
{
    return toxapexlvl;
    return toxapexatk;
    return toxapexhp;
}
string Koga::getGarbodorName() const
{
    return Garbodor;
}
int Koga::getGarbodor() const
{
    return Garbodorlvl;
    return Garbodorhp;
    return Garbodoratk;
}

