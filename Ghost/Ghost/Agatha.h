#pragma once
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
{

}
class Agatha
{
private:
	string Gengar;
	int Gengarhp;
	int Gengaratk;
	int Gengarlvl;
	string Chandelure;
	int Chandelurehp;
	int Chandelureatk;
	int Chandelurelvl;
	string Dragapult;
	int Dragapultthp;
	int Dragupultpatk;
	int Dragupultlvl;
	string Ahnihilape;
	int Ahnihilapehp;
	int Ahnihilapeatk;
	int Ahnihilapelvl;
	string Gholdengo;
	int Gholdengohp;
	int Gholdengoatk;
	int Gholdengolvl;
public:
	Agatha();
	Agatha(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
	void setGengarName(string);
	void setGengar(int, int, int);
	void setChandelureName(string);
	void setChandelure(int, int, int);
	void setDragapultName(string);
	void setDragapult(int, int, int);
	void setAhnihilapeName(string);
	void setAhnihilape(int, int, int);
	void setGholdengoName(string);
	void setGholdengo(int, int, int);
	string getGengarName();
	int getGengar();
	string getChandelureName();
	int getChandelure();
	string getDragapultName();
	int getDragapult();
	string getAhnihilapeName();
	int getAhnihilape();
	string getGholdengoName();
	int getGholdengo();
};

