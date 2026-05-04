#include "Rival.h"
#include <iostream>
#include <string>
using namespace std;

Rival::Rival()
{
	machamp = "Unknown";
	machamplvl = 0;
	machampatk = 0;
	machamphp = 0;
	latios = "Unknown";
	latioslvl = 0;
	latiosatk = 0;
	latioshp = 0;
	giratina = "Unknown";
	giratinalvl = 0;
	giratinaatk = 0;
	giratinahp = 0;
	melmetal = "Unknown";
	melmetallvl = 0;
	melmetalatk = 0;
	melmetalhp = 0;
	greninja = "Unknown";
	greninjalvl = 0;
	greninjaatk = 0;
	greninjahp = 0;
	zeraora = "Unknown";
	zeraoralvl = 0;
	zeraoraatk = 0;
	zeraorahp = 0;
}
Rival::Rival(string m, int mlvl, int matk, int mhp, string l, int llvl, int latk, int lhp, string g, int glvl, int gatk, int ghp, string me, int melvl, int meatk, int mehp, string gr, int grlvl, int gratk, int grhp, string z, int zlvl, int zatk, int zhp)
{
	machamp = m;
	machamplvl = mlvl;
	machampatk = matk;
	machamphp = mhp;
	latios = l;
	latioslvl = llvl;
	latiosatk = latk;
	latioshp = lhp;
	giratina = g;
	giratinalvl = glvl;
	giratinaatk = gatk;
	giratinahp = ghp;
	melmetal = me;
	melmetallvl = melvl;
	melmetalatk = meatk;
	melmetalhp = mehp;
	greninja = gr;
	greninjalvl = grlvl;
	greninjaatk = gratk;
	greninjahp = grhp;
	zeraora = z;
	zeraoralvl = zlvl;
	zeraoraatk = zatk;
	zeraorahp = zhp;
}
void Rival::setMachampName(string m)
{
	machamp = m;
}
void Rival::setMachamp(int mlvl, int matk, int mhp)
{
	machamplvl = mlvl;
	machampatk = matk;
	machamphp = mhp;
}
void Rival::setLatiosName(string l)
{
	latios = l;
}
void Rival::setLatios(int llvl, int latk, int lhp)
{
	latioslvl = llvl;
	latiosatk = latk;
	latioshp = lhp;
}
void Rival::setGiratinaName(string g)
{
	giratina = g;
}
void Rival::setGiratina(int glvl, int gatk, int ghp)
{
	giratinalvl = glvl;
	giratinaatk = gatk;
	giratinahp = ghp;
}
void Rival::setMelmetalName(string me)
{
	melmetal = me;
}
void Rival::setMelmetal(int melvl, int meatk, int mehp)
{
	melmetallvl = melvl;
	melmetalatk = meatk;
	melmetalhp = mehp;
}
void Rival::setGrenninjaName(string gr)
{
	greninja = gr;
}
void Rival::setGrenninja(int grlvl, int gratk, int grhp)
{
	greninjalvl = grlvl;
	greninjaatk = gratk;
	greninjahp = grhp;
}
void Rival::setZeraoraName(string z)
{
	zeraora = z;
}
void Rival::setZeraora(int zlvl, int zatk, int zhp)
{
	zeraoralvl = zlvl;
	zeraoraatk = zatk;
	zeraorahp = zhp;
}
string Rival::getMachampName()
{
	return machamp;
}
int Rival::getMachamp()
{
	return machamplvl, machampatk, machamphp;
}
string Rival::getLatiosName()
{
	return latios;
}
int Rival::getLatios()
{
	return latioslvl, latiosatk, latioshp;
}
string Rival::getGiratinaName()
{
	return giratina;
}
int Rival::getGiratina()
{
	return giratinalvl, giratinaatk, giratinahp;
}
string Rival::getMelmetalName()
{
	return melmetal;
}
int Rival::getMelmetal()
{
	return melmetallvl, melmetalatk, melmetalhp;
}
string Rival::getGreninjaName()
{
	return greninja;
}
int Rival::getGreninja()
{
	return greninjalvl, greninjaatk, greninjahp;
}
string Rival::getZeraoraName()
{
	return zeraora;
}
int Rival::getZeraora()
{
	return zeraoralvl, zeraoraatk, zeraorahp;
}