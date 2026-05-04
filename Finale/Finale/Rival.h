#pragma once
#include <string>
#include <iostream>
using namespace std;
class Rival
{
	string machamp;
	int machamplvl;
	int machampatk;
	int machamphp;
	string latios;
	int latioslvl;
	int latiosatk;
	int latioshp;
	string giratina;
	int giratinalvl;
	int giratinaatk;
	int giratinahp;
	string melmetal;
	int melmetallvl;
	int melmetalatk;
	int melmetalhp;
	string greninja;
	int greninjalvl;
	int greninjaatk;
	int greninjahp;
	string zeraora;
	int zeraoralvl;
	int zeraoraatk;
	int zeraorahp;
public:
	Rival();
	Rival(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
	void setMachampName(string);
	void setMachamp(int, int, int);
	void setLatiosName(string);
	void setLatios(int, int, int);
	void setGiratinaName(string);
	void setGiratina(int, int, int);
	void setMelmetalName(string);
	void setMelmetal(int, int, int);
	void setGrenninjaName(string);
	void setGrenninja(int, int, int);
	void setZeraoraName(string);
	void setZeraora(int, int, int);
	string getMachampName();
	int getMachamp();
	string getLatiosName();
	int getLatios();
	string getGiratinaName();
	int getGiratina();
	string getMelmetalName();
	int getMelmetal();
	string getGreninjaName();
	int getGreninja();
	string getZeraoraName();
	int getZeraora();
};

