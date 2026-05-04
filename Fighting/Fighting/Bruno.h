#pragma once
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
class Bruno
{
private:
	string heracross;
	int heracrosshp;
	int heracrossatk;
	int heracrosslvl;
	string blaziken;
	int blazikenhp;
	int blazikenatk;
	int blazikenlvl;
	string infernape;
	int infernapehp;
	int infernapeatk;
	int infernapelvl;
	string lucario;
	int lucariohp;
	int lucarioatk;
	int lucariolvl;
	string conkeldurr;
	int conkeldurrhp;
	int conkeldurratk;
	int conkeldurrlvl;
public:
	Bruno();
	Bruno(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
	void setHeracrossName(string);
	void setHeracross(int, int, int);
	void setBlazikenName(string);
	void setBlaziken(int, int, int);
	void setInfernapeName(string);
	void setInfernape(int, int, int);
	void setLucarioName(string);
	void setLucario(int, int, int);
	void setConkeldurrName(string);
	void setConkeldurr(int, int, int);
	string getHeracrossName();
	int getHeracross();
	string getBlazikenName();
	int getBlaziken();
	string getInfernapeName();
	int getInfernape();
	string getLucarioName();
	int getLucario();
	string getConkeldurrName();
	int getConkeldurr();

};


