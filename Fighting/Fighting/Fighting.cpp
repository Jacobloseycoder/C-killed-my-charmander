#include "Bruno.h"
#include <iostream>
#include <string>
using namespace std;

Bruno::Bruno()
{
	heracross = "Unknown";
	heracrosshp = 0;
	heracrossatk = 0;
	heracrosslvl = 0;
	blaziken = "Unknown";
	blazikenhp = 0;
	blazikenatk = 0;
	blazikenlvl = 0;
	infernape = "Unknown";
	infernapehp = 0;
	infernapeatk = 0;
	infernapelvl = 0;
	lucario = "Unknown";
	lucariohp = 0;
	lucarioatk = 0;
	lucariolvl = 0;
	conkeldurr = "Unknown";
	conkeldurrhp = 0;
	conkeldurratk = 0;
	conkeldurrlvl = 0;
}
Bruno::Bruno(string h, int hh, int ha, int hl, string b, int bh, int ba, int bl, string i, int ih, int ia, int il, string l, int lh, int la, int ll, string c, int ch, int ca, int cl)
{
	heracross = h;
	heracrosshp = hh;
	heracrossatk = ha;
	heracrosslvl = hl;
	blaziken = b;
	blazikenhp = bh;
	blazikenatk = ba;
	blazikenlvl = bl;
	infernape = i;
	infernapehp = ih;
	infernapeatk = ia;
	infernapelvl = il;
	lucario = l;
	lucariohp = lh;
	lucarioatk = la;
	lucariolvl = ll;
	conkeldurr = c;
	conkeldurrhp = ch;
	conkeldurratk = ca;
	conkeldurrlvl = cl;
}
void Bruno::setHeracrossName(string h)
{
	heracross = h;
}
void Bruno::setHeracross(int hh, int ha, int hl)
{
	heracrosshp = hh;
	heracrossatk = ha;
	heracrosslvl = hl;
}
void Bruno::setBlazikenName(string b)
{
	blaziken = b;
}
void Bruno::setBlaziken(int bh, int ba, int bl)
{
	blazikenhp = bh;
	blazikenatk = ba;
	blazikenlvl = bl;
}
void Bruno::setInfernapeName(string i)
{
	infernape = i;
}
void Bruno::setInfernape(int ih, int ia, int il)
{
	infernapehp = ih;
	infernapeatk = ia;
	infernapelvl = il;
}
void Bruno::setLucarioName(string l)
{
	lucario = l;
}
void Bruno::setLucario(int lh, int la, int ll)
{
	lucariohp = lh;
	lucarioatk = la;
	lucariolvl = ll;
}
void Bruno::setConkeldurrName(string c)
{
	conkeldurr = c;
}
void Bruno::setConkeldurr(int ch, int ca, int cl)
{
	conkeldurrhp = ch;
	conkeldurratk = ca;
	conkeldurrlvl = cl;
}
string Bruno::getHeracrossName()
{
	return heracross;
}
int Bruno::getHeracross()
{
	return heracrosshp, heracrossatk, heracrosslvl;
}
string Bruno::getBlazikenName()
{
	return blaziken;
}
int Bruno::getBlaziken()
{
	return blazikenhp, blazikenatk, blazikenlvl;
}
string Bruno::getInfernapeName()
{
	return infernape;
}
int Bruno::getInfernape()
{
	return infernapehp, infernapeatk, infernapelvl;
}
string Bruno::getLucarioName()
{
	return lucario;
}
int Bruno::getLucario()
{
	return lucariohp, lucarioatk, lucariolvl;
}
string Bruno::getConkeldurrName()
{
	return conkeldurr;
}
int Bruno::getConkeldurr()
{
	return conkeldurrhp, conkeldurratk, conkeldurrlvl;
}

