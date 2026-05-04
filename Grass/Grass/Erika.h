#pragma once
#include <iostream>
#include <string>
using namespace std;
class Erika
{
	string gloom;
	int gloomlvl;
	int gloomatk;
	int gloomhp;
	string sunkern;
	int sunkernlvl;
	int sunkernatk;
	int sunkernhp;
public:
	Erika();
	Erika(string, int, int, int, string, int, int, int);
	void setGloomName(string);
	void setGloom(int, int, int);
	void setSunkernName(string);
	void setSunkern(int, int, int);
	string getGloomName();
	int getGloom();
	string getSunkernName();
	int getSunkern();

};

