#pragma once#pragma once
#ifndef BLAINE_H
#define BLAINE_H

#include <string>
#include <iostream>
using namespace std;
class Blaine
{
private:
	string armarouge;
	int armarougelvl;
	int armarougehp;
	int armarougeatk;
	string incineroar;
	int incineroarlvl;
	int incineroarhp;
	int incineroaratk;
	string Volcarona;
	int volcaronalvl;
	int volcaronahp;
	int volcaronaatk;
	string ho_oh;
	int ho_ohlvl;
	int ho_ohhp;
	int ho_ohatk;

public:
	Blaine();
	Blaine(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
	void setarmarougeName(string);
	void Setarmarouge(int, int, int);
	void setincineroarName(string);
	void setincineroar(int, int, int);
	void setvolcaronaName(string);
	void setvolcarona(int, int, int);
	void setho_ohName(string);
	void setho_oh(int, int, int);
	string getAlakazamName() const;
	int getAlakazam() const;
	string getIncineroarName() const;
	int getIncineroar() const;
	string getVolcaronaName() const;
	int getVolcarona() const;
	string getho_ohName() const;
	int getho_oh() const;


};
#endif BLAINE_H



