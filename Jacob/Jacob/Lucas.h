#pragma once
#ifndef LUCAS_H
#define LUCAS_H

#include <string>
#include <iostream>
using namespace std;
class Sabrina
{
private:
	string alakazam;
	int alakazamlvl;
	int alakazamhp;
	int alakazamatk;
	string metagross;
	int metagrosslvl;
	int metagrosshp;
	int metagrossatk;
public:
	Sabrina();
	Sabrina(string, int, int, int, string, int, int, int);
	void setAlakazamName(string);
	void SetAlakazam(int, int, int);
	void setMetagrossName(string);
	void setMetagross(int, int, int);
	string getAlakazamName() const;
	int getAlakazam() const;
	string getMetagrossName() const;
	int getMetagross() const;


};
#endif LUCAS_H


