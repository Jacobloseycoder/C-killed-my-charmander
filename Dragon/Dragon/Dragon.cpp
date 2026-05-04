#include "Lance.h"
#include <iostream>
#include <string>
using namespace std;

Lance::Lance()
{
	dragonite = "Unknown";
	dragoniteatk = 0;
	dragonitehp = 0;
	dragonitelvl = 0;
	Salamence = "Unknown";
	Salamenceatk = 0;
	Salamencehp = 0;
	Salamencelvl = 0;
	Garchomp = "Unknown";
	Garchompatk = 0;
	Garchomphp = 0;
	Garchomplvl = 0;
	Altaria = "Unknown";
	Altariaatk = 0;
	Altariahp = 0;
	Altarialvl = 0;
	Archaludon = "Unknown";
	Archaludonatk = 0;
	Archaludonhp = 0;
	Archaludonlvl = 0;
}
Lance::Lance(string dname, int datk, int dhp, int dlvl, string sname, int satk, int shp, int slvl, string gname, int gatk, int ghp, int glvl, string aname, int aatk, int ahp, int alvl, string arname, int aratk, int arhp, int arlvl)
{
	dragonite = dname;
	dragoniteatk = datk;
	dragonitehp = dhp;
	dragonitelvl = dlvl;
	Salamence = sname;
	Salamenceatk = satk;
	Salamencehp = shp;
	Salamencelvl = slvl;
	Garchomp = gname;
	Garchompatk = gatk;
	Garchomphp = ghp;
	Garchomplvl = glvl;
	Altaria = aname;
	Altariaatk = aatk;
	Altariahp = ahp;
	Altarialvl = alvl;
	Archaludon = arname;
	Archaludonatk = aratk;
	Archaludonhp = arhp;
	Archaludonlvl = arlvl;
}
void Lance::setDragoniteName(string dname)
{
	dragonite = dname;
}
void Lance::setDragonite(int datk, int dhp, int dlvl)
{
	dragoniteatk = datk;
	dragonitehp = dhp;
	dragonitelvl = dlvl;
}
void Lance::setSalamenceName(string sname)
{
	Salamence = sname;
}
void Lance::setSalamence(int satk, int shp, int slvl)
{
	Salamenceatk = satk;
	Salamencehp = shp;
	Salamencelvl = slvl;
}
void Lance::setGarchompName(string gname)
{
	Garchomp = gname;
}
void Lance::setGarchomp(int gatk, int ghp, int glvl)
{
	Garchompatk = gatk;
	Garchomphp = ghp;
	Garchomplvl = glvl;
}
void Lance::setAltariaName(string aname)
{
	Altaria = aname;
}
void Lance::setAltaria(int aatk, int ahp, int alvl)
{
	Altariaatk = aatk;
	Altariahp = ahp;
	Altarialvl = alvl;
}
void Lance::setArchaludonName(string arname)
{
	Archaludon = arname;
}
void Lance::setArchaludon(int aratk, int arhp, int arlvl)
{
	Archaludonatk = aratk;
	Archaludonhp = arhp;
	Archaludonlvl = arlvl;
}
string Lance::getDragoniteName()
{
	return dragonite;
}
int Lance::getDragonite()
{
	return dragoniteatk, dragonitehp, dragonitelvl;
}
string Lance::getSalamenceName()
{
	return Salamence;
}
int Lance::getSalamence()
{
	return Salamenceatk, Salamencehp, Salamencelvl;
}
string Lance::getGarchompName()
{
	return Garchomp;
}
int Lance::getGarchomp()
{
	return Garchompatk, Garchomphp, Garchomplvl;
}
string Lance::getAltariaName()
{
	return Altaria;
}
int Lance::getAltaria()
{
	return Altariaatk, Altariahp, Altarialvl;
}
string Lance::getArchaludonName()
{
	return Archaludon;
}
int Lance::getArchaludon()
{
	return Archaludonatk, Archaludonhp, Archaludonlvl;
}