#include "Giovanni.h"
#include <iostream>
#include <string>
using namespace std;

Giovanni::Giovanni()
{
	persian = "Unknown";
	persianlvl = 0;
	persianhp = 0;
	persianatk = 0;
	nidoking = "Unknown";
	nidokinglvl = 0;
	nidokinghp = 0;
	nidokingatk = 0;
	Flygon = "Unknown";
	Flygonlvl = 0;
	Flygonhp = 0;
	Flygonatk = 0;
	Ursaluna = "Unknown";
	Ursalunalvl = 0;
	Ursalunahp = 0;
	Ursalunaatk = 0;
}
Giovanni::Giovanni(string name, int lvl, int hp, int atk, string nname, int nlvl, int nhp, int natk, string fname, int flvl, int fhp, int fatk, string uname, int ulvl, int uhp, int uatk)
{
	persian = name;
	persianlvl = lvl;
	persianhp = hp;
	persianatk = atk;
	nidoking = nname;
	nidokinglvl = nlvl;
	nidokinghp = nhp;
	nidokingatk = natk;
	Flygon = fname;
	Flygonlvl = flvl;
	Flygonhp = fhp;
	Flygonatk = fatk;
	Ursaluna = uname;
	Ursalunalvl = ulvl;
	Ursalunahp = uhp;
	Ursalunaatk = uatk;
}
void Giovanni::setPersianName(string name)
{
	persian = name;
}
string Giovanni::getPersianName()
{
	return persian;
}
void Giovanni::setPersian(int lvl, int hp, int atk)
{
	persianlvl = lvl;
	persianhp = hp;
	persianatk = atk;
}
int Giovanni::getPersion()
{
	return persianlvl, persianhp, persianatk;
}
void Giovanni::setNidokingName(string nname)
{
	nidoking = nname;
}
void Giovanni::setNidoking(int nlvl, int nhp, int natk)
{
	nidokinglvl = nlvl;
	nidokinghp = nhp;
	nidokingatk = natk;
}
string Giovanni::getNidoking()
{
	return nidoking;
}
void Giovanni::setFlygonName(string fname)
{
	Flygon = fname;
}
void Giovanni::setFlygon(int flvl, int fhp, int fatk)
{
	Flygonlvl = flvl;
	Flygonhp = fhp;
	Flygonatk = fatk;
}
string Giovanni::getFlygonName()
{
	return Flygon;
}
int Giovanni::getFlygon()
{
	return Flygonlvl, Flygonhp, Flygonatk;
}
void Giovanni::setUrsalunaName(string uname)
{
	Ursaluna = uname;
}
void Giovanni::setUrsaluna(int ulvl, int uhp, int uatk)
{
	Ursalunalvl = ulvl;
	Ursalunahp = uhp;
	Ursalunaatk = uatk;
}
string Giovanni::getUrsalunaName()
{
	return Ursaluna;
}
int Giovanni::getUrsaluna()
{
	return Ursalunalvl, Ursalunahp, Ursalunaatk;
}
