#include "Lorelei.h"
#include <string>
#include <iostream>
using namespace std;

Lorelei::Lorelei()
{
	jinx = "Unknown";
	jinxhp = 0;
	jinkatk = 0;
	jinxlvl = 0;
	Mamoswine = "Unknown";
	MamoswinehP = 0;
	Mamoswineatk = 0;
	Mamoswinelvl = 0;
	Weavile = "Unknown";
	WeavilehP = 0;
	Weavileatk = 0;
	Weavilelvl = 0;
	Glaceon = "Unknown";
	GlaceonhP = 0;
	Glaceonatk = 0;
	Glaceonlvl = 0;
	Froslass = "Unknown";
	FroslasshP = 0;
	Froslassatk = 0;
	Froslasslvl = 0;
}
Lorelei::Lorelei(string jinxname, int jinxHP, int jinkAtk, int jinxLvl, string Mamoswinename, int MamoswineHP, int MamoswineAtk, int MamoswineLvl, string Weavilename, int WeavileHP, int WeavileAtk, int WeavileLvl, string Glaceonname, int GlaceonHP, int GlaceonAtk, int GlaceonLvl, string Froslassname, int FroslassHP, int FroslassAtk, int FroslassLvl)
{
	jinx = jinxHP;
	jinxhp = jinxHP;
	jinkatk = jinkAtk;
	jinxlvl = jinxLvl;
	Mamoswine = Mamoswinename;
	MamoswinehP = MamoswineHP;
	Mamoswineatk = MamoswineAtk;
	Mamoswinelvl = MamoswineLvl;
	Weavile = Weavilename;
	WeavilehP = WeavileHP;
	Weavileatk = WeavileAtk;
	Weavilelvl = WeavileLvl;
	Glaceon = Glaceonname;
	GlaceonhP = GlaceonHP;
	Glaceonatk = GlaceonAtk;
	Glaceonlvl = GlaceonLvl;
	Froslass = Froslassname;
	FroslasshP = FroslassHP;
	Froslassatk = FroslassAtk;
	Froslasslvl = FroslassLvl;
}
void Lorelei::setJinkName(string jinxname)
{
	jinx = jinxname;
}
void Lorelei::setJink(int jinxHP, int jinkAtk, int jinxLvl)
{
	jinxhp = jinxHP;
	jinkatk = jinkAtk;
	jinxlvl = jinxLvl;
}
void Lorelei::setMamoswineName(string Mamoswinename)
{
	Mamoswine = Mamoswinename;
}
void Lorelei::setMamoswine(int MamoswineHP, int MamoswineAtk, int MamoswineLvl)
{
	MamoswinehP = MamoswineHP;
	Mamoswineatk = MamoswineAtk;
	Mamoswinelvl = MamoswineLvl;
}
void Lorelei::setWeavileName(string Weavilename)
{
	Weavile = Weavilename;
}
void Lorelei::setWeavile(int WeavileHP, int WeavileAtk, int WeavileLvl)
{
	WeavilehP = WeavileHP;
	Weavileatk = WeavileAtk;
	Weavilelvl = WeavileLvl;
}
void Lorelei::setGlaceonName(string Glaceonname)
{
	Glaceon = Glaceonname;
}
void Lorelei::setGlaceon(int GlaceonHP, int GlaceonAtk, int GlaceonLvl)
{
	GlaceonhP = GlaceonHP;
	Glaceonatk = GlaceonAtk;
	Glaceonlvl = GlaceonLvl;
}
void Lorelei::setFroslassName(string Froslassname)
{
	Froslass = Froslassname;
}
void Lorelei::setFroslass(int FroslassHP, int FroslassAtk, int FroslassLvl)
{
	FroslasshP = FroslassHP;
	Froslassatk = FroslassAtk;
	Froslasslvl = FroslassLvl;
}
string Lorelei::getJinkName()
{
	return jinx;
}
int Lorelei::getJink()
{
	return jinxhp, jinkatk, jinxlvl;
}
string Lorelei::getMamoswineName()
{
	return Mamoswine;
}
int Lorelei::getMamoswine()
{
	return MamoswinehP, Mamoswineatk, Mamoswinelvl;
}
string Lorelei::getWeavileName()
{
	return Weavile;
}
int Lorelei::getWeavile()
{
	return WeavilehP, Weavileatk, Weavilelvl;
}
string Lorelei::getGlaceonName()
{
	return Glaceon;
}
int Lorelei::getGlaceon()
{
	return GlaceonhP, Glaceonatk, Glaceonlvl;
}
string Lorelei::getFroslassName()
{
	return Froslass;
}
int Lorelei::getFroslass()
{
	return FroslasshP, Froslassatk, Froslasslvl;
}

