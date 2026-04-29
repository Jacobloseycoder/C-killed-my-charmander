#pragma once
#ifndef LIST_H
#define LIST_H

#include <string>
#include <iostream>
using namespace std;
class Koga
{
private:
	string clodsire;
	int clodsirelvl;;
	int clodsirehp;
	int clodsireatk;
	string toxapex;
	int toxapexlvl;
	int toxapexhp;
	int toxapexatk;
	string Garbodor;
	int Garbodorlvl;
	int Garbodorhp;
	int Garbodoratk;
public:
	Koga();
	Koga(string, int, int, int, string, int, int, int, string, int, int, int);
	void setClodsireName(string);
	void SetClodsire(int, int, int);
	void setToxapexName(string);
	void setToxapex(int, int, int);
	void setGarbodorName(string);
	void setGarbodor(int, int, int);
	string getClodsireName() const;
	int getClodsire() const;
	string getToxapexName() const;
	int getToxapex() const;
	string getGarbodorName() const;
	int getGarbodor() const;
	
};
#endif LIST_H

