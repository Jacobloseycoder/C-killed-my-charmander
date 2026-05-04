#include "Blaine.h"
#include <string>
#include <iostream>

Blaine::Blaine()
{
	armarouge = "unknown";
	armarougelvl = 0;
	armarougehp = 0;
	armarougeatk = 0;
	incineroar = "unknown";
	incineroarlvl = 0;
	incineroarhp = 0;
	incineroaratk = 0;
	Volcarona = "unknown";
	volcaronalvl = 0;
	volcaronahp = 0;
	volcaronaatk = 0;
	ho_oh = "unknown";
	ho_ohlvl = 0;
	ho_ohhp = 0;
	ho_ohatk = 0;
}
Blaine::Blaine(string name, int lvl, int hp, int atk, string inname, int inlvl, int inhp, int inatk, string volname, int vollvl, int volhp, int volatk, string ho_ohname, int ho_ohlvl, int ho_ohhp, int ho_ohatk)
{
	armarouge = name;
	armarougelvl = lvl;
	armarougehp = hp;
	armarougeatk = atk;
	incineroar = inname;
	incineroarlvl = inlvl;
	incineroarhp = inhp;
	incineroaratk = inatk;
	Volcarona = volname;
	volcaronalvl = vollvl;
	volcaronahp = volhp;
	volcaronaatk = volatk;
	ho_oh = ho_ohname;
	ho_ohlvl = ho_ohlvl;
	ho_ohhp = ho_ohhp;
	ho_ohatk = ho_ohatk;
}
void Blaine::setarmarougeName(string name)
{
	armarouge = name;
}
void Blaine::Setarmarouge(int lvl, int hp, int atk)
{
	armarougelvl = lvl;
	armarougehp = hp;
	armarougeatk = atk;
}
void Blaine::setincineroarName(string inname)
{
	incineroar = inname;
}
void Blaine::setincineroar(int inlvl, int inhp, int intk)
{
	incineroarlvl = inlvl;
	incineroarhp = inhp;
	incineroaratk = intk;
}
void Blaine::setvolcaronaName(string volname)
{
	Volcarona = volname;
}
void Blaine::setvolcarona(int vollvl, int volhp, int volatk)
{
	volcaronalvl = vollvl;
	volcaronahp = volhp;
	volcaronaatk = volatk;
}
void Blaine::setho_ohName(string ho_ohname)
{
	ho_oh = ho_ohname;
}
void Blaine::setho_oh(int ho_ohlvl, int ho_ohhp, int ho_ohatk)
{
	ho_ohlvl = ho_ohlvl;
	ho_ohhp = ho_ohhp;
	ho_ohatk = ho_ohatk;
}
string Blaine::getAlakazamName() const
{
	return armarouge;
}
int Blaine::getAlakazam() const
{
	return armarougelvl;
	return armarougehp;
	return armarougeatk;
}
string Blaine::getIncineroarName() const
{
	return incineroar;
}
int Blaine::getIncineroar() const
{
	return incineroarlvl;
	return incineroarhp;
	return incineroaratk;
}
string Blaine::getVolcaronaName() const
{
	return Volcarona;
}
int Blaine::getVolcarona() const
{
	return volcaronalvl;
	return volcaronahp;
	return volcaronaatk;
}
string Blaine::getho_ohName() const
{
	return ho_oh;
}
int Blaine::getho_oh() const
{
	return ho_ohlvl;
	return ho_ohhp;
	return ho_ohatk;
}

