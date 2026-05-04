#include "Erika.h"

Erika::Erika()
{
	gloom = "Unknown";
	gloomlvl = 0;
	gloomatk = 0;
	gloomhp = 0;
	sunkern = "Unkown";
	sunkernlvl = 0;
	sunkernatk = 0;
	sunkernhp = 0;
}
Erika::Erika(string g, int gl, int ga, int gh, string s, int sl, int sa, int sh)
{
	gloom = g;
	gloomlvl = gl;
	gloomatk = ga;
	gloomhp = gh;
	sunkern = s;
	sunkernlvl = sl;
	sunkernatk = sa;
	sunkernhp = sh;
}
void Erika::setGloomName(string g)
{
	gloom = g;
}
void Erika::setGloom(int gl, int ga, int gh)
{
	gloomlvl = gl;
	gloomatk = ga;
	gloomhp = gh;
}
void Erika::setSunkernName(string s)
{
	sunkern = s;
}
void Erika::setSunkern(int sl, int sa, int sh)
{
	sunkernlvl = sl;
	sunkernatk = sa;
	sunkernhp = sh;
	}
string Erika::getGloomName()
{
	return gloom;
}
int Erika::getGloom()
{
	return gloomlvl;
	return gloomatk;
	return gloomhp;
}
string Erika::getSunkernName()
{
	return sunkern;
}
int Erika::getSunkern()
{
	return sunkernlvl;
	return sunkernatk;
	return sunkernhp;
}

