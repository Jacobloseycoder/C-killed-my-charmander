#include "Lucas.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>


Sabrina::Sabrina()
{
    alakazam = "unknown";
    alakazamlvl = 0;
    alakazamhp = 0;
    alakazamatk = 0;
    metagross = "unknown";
    metagrosslvl = 0;
    metagrosshp = 0;
    metagrossatk = 0;
   
}
Sabrina::Sabrina(string menam, int melvl , int mehp, int meatk, string alnam, int allvl, int alhp, int alatk)
{
    alakazam = alnam;
    alakazamlvl = allvl;
    alakazamhp = alhp;
    alakazamatk = alatk;
    metagross = menam;
    metagrosslvl = melvl;
    metagrosshp = mehp;
    metagrossatk = meatk;
}
void Sabrina::setAlakazamName(string name)
{
    alakazam = name;
}
void Sabrina::SetAlakazam(int lvl, int hp, int atk)
{
    alakazamlvl = lvl;
    alakazamhp = hp;
    alakazamatk = atk;
}
void Sabrina::setMetagrossName(string mename)
{
    metagross = mename;
}
void Sabrina::setMetagross(int melvl, int mehp, int meatk)
{
    metagrosslvl = melvl;
    metagrosshp = mehp;
    metagrossatk =meatk;
}
string Sabrina::getAlakazamName() const
{
    return alakazam;
}
int Sabrina::getAlakazam() const
{
    return alakazamlvl;
    return alakazamatk;
    return alakazamhp;
}
string Sabrina::getMetagrossName() const
{
    return metagross;
}
int Sabrina::getMetagross() const
{
    return metagrosslvl;
    return metagrossatk;
    return metagrosshp;
}

