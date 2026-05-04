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
	void setName(string);
	string getName();
	void setHp(int);
	int getHp();
	void setAttk(int);
	int getAttk();
	void setLvl(int);
	int getLvl();
	void setMove1(string);
	string getMove1();
	void setMove2(string);
	string getMove2();
	void setMove3(string);
	string getMove3();
	void setMove4(string);
	string getMove4();

	void p1(string, int, int, int, string, string, string, string);
	void p2(string, int, int, int, string, string, string, string);
};

#endif