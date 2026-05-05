#include "Battle.h"
#include <string>
using namespace std;

Battle::Battle()
{
	turn = 0;
	name = "";
	hp = 0;
	attk = 0;
	lvl = 0;
	move1 = "";
	move2 = "";
	move3 = "";
	move4 = "";
}

Battle::Battle(string n, int h, int a, int l, string m1, string m2, string m3, string m4)
{
	turn = 0;
	name = n;
	hp = h;
	attk = a;
	lvl = l;
	move1 = m1;
	move2 = m2;
	move3 = m3;
	move4 = m4;
}

void Battle::setNameP1(string n)
{
	name = n;
}

string Battle::getNameP1()
{
	return name;
}

void Battle::setNameP2(string n)
{
	name = n;
}

string Battle::getNameP2()
{
	return name;
}

void Battle::setHpP1(int h)
{
	hp = h;
}

int Battle::getHpP1()
{
	return hp;
}

void Battle::setHpP2(int h)
{
	hp = h;
}

int Battle::getHpP2()
{
	return hp;
}

void Battle::setAttkP1(int a)
{
	attk = a;
}

int Battle::getAttkP1()
{
	return attk;
}

void Battle::setAttkP2(int a)
{
	attk = a;
}

int Battle::getAttkP2()
{
	return attk;
}

void Battle::setLvlP1(int l)
{
	lvl = l;
}

int Battle::getLvlP1()
{
	return lvl;
}

void Battle::setLvlP2(int l)
{
	lvl = l;
}

int Battle::getLvlP2()
{
	return lvl;
}

void Battle::setMove1P1(string m1)
{
	move1 = m1;
}

string Battle::getMove1P1()
{
	return move1;
}

void Battle::setMove1P2(string m1)
{
	move1 = m1;
}

string Battle::getMove1P2()
{
	return move1;
}

void Battle::setMove2P1(string m2)
{
	move2 = m2;
}

string Battle::getMove2P1()
{
	return move2;
}

void Battle::setMove2P2(string m2)
{
	move2 = m2;
}

string Battle::getMove2P2()
{
	return move2;
}

void Battle::setMove3P1(string m3)
{
	move3 = m3;
}

string Battle::getMove3P1()
{
	return move3;
}

void Battle::setMove3P2(string m3)
{
	move3 = m3;
}

string Battle::getMove3P2()
{
	return move3;
}

void Battle::setMove4P1(string m4)
{
	move4 = m4;
}

string Battle::getMove4P1()
{
	return move4;
}

void Battle::setMove4P2(string m4)
{
	move4 = m4;
}

string Battle::getMove4P2()
{
	return move4;
}

void Battle::p1(string n, int h, int a, int l, string m1, string m2, string m3, string m4)
{
	name = n;
	hp = h;
	attk = a;
	lvl = l;
	move1 = m1;
	move2 = m2;
	move3 = m3;
	move4 = m4;
}

void Battle::p2(string n, int h, int a, int l, string m1, string m2, string m3, string m4)
{
	name = n;
	attk = a;
	lvl = l;
	move1 = m1;
	move2 = m2;
	move3 = m3;
	move4 = m4;
}