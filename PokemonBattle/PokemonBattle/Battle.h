#pragma once
#ifndef BATTLE_H
#define BATTLE_H
#include <string>
using namespace std;
class Battle
{
private:
	int turn;
	string name;
	int hp;
	int attk;
	int lvl;
	string move1, move2, move3, move4;
public:
	Battle();
	Battle(string, int, int, int, string, string, string, string);
	void setNameP1(string);
	string getNameP1();
	void setNameP2(string);
	string getNameP2();
	void setHpP1(int);
	int getHpP1();
	void setHpP2(int);
	int getHpP2();
	void setAttkP1(int);
	int getAttkP1();
	void setAttkP2(int);
	int getAttkP2();
	void setLvlP1(int);
	int getLvlP1();
	void setLvlP2(int);
	int getLvlP2();
	void setMove1P1(string);
	string getMove1P1();
	void setMove1P2(string);
	string getMove1P2();
	void setMove2P1(string);
	string getMove2P1();
	void setMove2P2(string);
	string getMove2P2();
	void setMove3P1(string);
	string getMove3P1();
	void setMove3P2(string);
	string getMove3P2();
	void setMove4P1(string);
	string getMove4P1();
	void setMove4P2(string);
	string getMove4P2();

	void p1(string, int, int, int, string, string, string, string);
	void p2(string, int, int, int, string, string, string, string);
};

#endif