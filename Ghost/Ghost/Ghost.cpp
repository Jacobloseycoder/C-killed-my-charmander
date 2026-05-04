#include "Agatha.h"
#include <string>
#include <iostream>
using namespace std;

Agatha::Agatha()
{
	Gengar = "Gengar";
	Gengarhp = 60;
	Gengaratk = 65;
	Gengarlvl = 5;
	Chandelure = "Chandelure";
	Chandelurehp = 70;
	Chandelureatk = 75;
	Chandelurelvl = 5;
	Dragapult = "Dragapult";
	Dragapultthp = 80;
	Dragupultpatk = 85;
	Dragupultlvl = 5;
	Ahnihilape = "Ahnihilape";
	Ahnihilapehp = 90;
	Ahnihilapeatk = 95;
	Ahnihilapelvl = 5;
	Gholdengo = "Gholdengo";
	Gholdengohp = 100;
	Gholdengoatk = 105;
	Gholdengolvl = 5;
}
Agatha::Agatha(string g, int ghp, int gatk, int glvl, string c, int chp, int catk, int clvl, string d, int dhp, int datk, int dlvl, string a, int ahp, int aatk, int alvl, string gh, int ghp2, int ghatk2, int ghlvl2)
{
	Gengar = g;
	Gengarhp = ghp;
	Gengaratk = gatk;
	Gengarlvl = glvl;
	Chandelure = c;
	Chandelurehp = chp;
	Chandelureatk = catk;
	Chandelurelvl = clvl;
	Dragapult = d;
	Dragapultthp = dhp;
	Dragupultpatk = datk;
	Dragupultlvl = dlvl;
	Ahnihilape = a;
	Ahnihilapehp = ahp;
	Ahnihilapeatk = aatk;
	Ahnihilapelvl = alvl;
	Gholdengo = gh;
	Gholdengohp = ghp2;
	Gholdengoatk = ghatk2;
	Gholdengolvl = ghlvl2;
}
void Agatha::setGengarName(string g)
{
	Gengar = g;
}
void Agatha::setGengar(int ghp, int gatk, int glvl)
{
	Gengarhp = ghp;
	Gengaratk = gatk;
	Gengarlvl = glvl;
}
void Agatha::setChandelureName(string c)
{
	Chandelure = c;
}
void Agatha::setChandelure(int chp, int catk, int clvl)
{
	Chandelurehp = chp;
	Chandelureatk = catk;
	Chandelurelvl = clvl;
}
void Agatha::setDragapultName(string d)
{
	Dragapult = d;
}
void Agatha::setDragapult(int dhp, int datk, int dlvl)
{
	Dragapultthp = dhp;
	Dragupultpatk = datk;
	Dragupultlvl = dlvl;
}
void Agatha::setAhnihilapeName(string a)
{
	Ahnihilape = a;
}
void Agatha::setAhnihilape(int ahp, int aatk, int alvl)
{
	Ahnihilapehp = ahp;
	Ahnihilapeatk = aatk;
	Ahnihilapelvl = alvl;
}
void Agatha::setGholdengoName(string gh)
{
	Gholdengo = gh;
}
void Agatha::setGholdengo(int ghp2, int ghatk2, int ghlvl2)
{
	Gholdengohp = ghp2;
	Gholdengoatk = ghatk2;
	Gholdengolvl = ghlvl2;
}
string Agatha::getGengarName()
{
	return Gengar;
}
int Agatha::getGengar()
{
	return Gengarhp, Gengaratk, Gengarlvl;
}
string Agatha::getChandelureName()
{
	return Chandelure;
}
int Agatha::getChandelure()
{
	return Chandelurehp, Chandelureatk, Chandelurelvl;
}
string Agatha::getDragapultName()
{
	return Dragapult;
}
int Agatha::getDragapult()
{
	return Dragapultthp, Dragupultpatk, Dragupultlvl;
}
string Agatha::getAhnihilapeName()
{
	return Ahnihilape;
}
int Agatha::getAhnihilape()
{
	return Ahnihilapehp, Ahnihilapeatk, Ahnihilapelvl;
}
string Agatha::getGholdengoName()
{
	return Gholdengo;
}
int Agatha::getGholdengo()
{
	return Gholdengohp, Gholdengoatk, Gholdengolvl;
}

