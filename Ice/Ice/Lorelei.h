#pragma once
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Lorelei
{
private:

	string jinx;
	int jinxhp;
	int jinkatk;
	int jinxlvl;
	string Mamoswine;
	int MamoswinehP;
	int Mamoswineatk;
	int Mamoswinelvl;
	string Weavile;
	int WeavilehP;
	int Weavileatk;
	int Weavilelvl;
	string Glaceon;
	int GlaceonhP;
	int Glaceonatk;
	int Glaceonlvl;
	string Froslass;
	int FroslasshP;
	int Froslassatk;
	int Froslasslvl;
public:
	Lorelei();
	Lorelei(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
	void setJinkName(string);
	void setJink(int, int, int);
	void setMamoswineName(string);
	void setMamoswine(int, int, int);
	void setWeavileName(string);
	void setWeavile(int, int, int);
	void setGlaceonName(string);
	void setGlaceon(int, int, int);
	void setFroslassName(string);
	void setFroslass(int, int, int);
	string getJinkName();
	int getJink();
	string getMamoswineName();
	int getMamoswine();
	string getWeavileName();
	int getWeavile();
	string getGlaceonName();
	int getGlaceon();
	string getFroslassName();
	int getFroslass();

	
};

