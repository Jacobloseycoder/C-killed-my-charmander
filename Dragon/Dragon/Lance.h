#pragma once
#include <string>
#include <iostream>
using namespace std;
class Lance
{
private:
	string dragonite;
	int dragoniteatk;
	int dragonitehp;
	int dragonitelvl;
	string Salamence;
	int Salamenceatk;
	int Salamencehp;
	int Salamencelvl;
	string Garchomp;
	int Garchompatk;
	int Garchomphp;
	int Garchomplvl;
	string Altaria;
	int Altariaatk;
	int Altariahp;
	int Altarialvl;
	string Archaludon;
	int Archaludonatk;
	int Archaludonhp;
	int Archaludonlvl;
public:
	Lance();
	Lance(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
	void setDragoniteName(string);
	void setDragonite(int, int, int);
	void setSalamenceName(string);
	void setSalamence(int, int, int);
	void setGarchompName(string);
	void setGarchomp(int, int, int);
	void setAltariaName(string);
	void setAltaria(int, int, int);
	void setArchaludonName(string);
	void setArchaludon(int, int, int);
	string getDragoniteName();
	int getDragonite();
	string getSalamenceName();
	int getSalamence();
	string getGarchompName();
	int getGarchomp();
	string getAltariaName();
	int getAltaria();
	string getArchaludonName();
	int getArchaludon();
};

