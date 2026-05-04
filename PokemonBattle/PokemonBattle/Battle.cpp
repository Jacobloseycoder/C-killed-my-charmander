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

void Battle::setName(string n)
{
	name = n;
}

string Battle::getName()
{
	return name;
}

void Battle::setHp(int h)
{
	hp = h;
}

int Battle::getHp()
{
	return hp;
}

void Battle::setAttk(int a)
{
	attk = a;
}

int Battle::getAttk()
{
	return attk;
}

void Battle::setLvl(int l)
{
	lvl = l;
}

int Battle::getLvl()
{
	return lvl;
}

void Battle::setMove1(string m1)
{
	move1 = m1;
}

string Battle::getMove1()
{
	return move1;
}

void Battle::setMove2(string m2)
{
	move2 = m2;
}

string Battle::getMove2()
{
	return move2;
}

void Battle::setMove3(string m3)
{
	move3 = m3;
}

string Battle::getMove3()
{
	return move3;
}

void Battle::setMove4(string m4)
{
	move4 = m4;
}

string Battle::getMove4()
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