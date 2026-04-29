#include "Enemies.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

Erika::Erika()
{
    vileplume = "unknown";
    vileplumeLevel = 0;
    vileplumeHealth = 0;
    vileplumeAttack = 0;
    ivysaur = "unknown";
    ivysaurLevel = 0;
    ivysaurHealth = 0;
    ivysaurAttack = 0;
    torterra = "unknown";
    torterraLevel = 0;
    torterraHealth = 0;
    torterraAttack = 0;
    lotad = "unknown";
    lotadLevel = 0;
    lotadHealth = 0;
    lotadAttack = 0;
}
Erika::Erika(string vilename, int vilelevel, int vilehealth, int vileattack, string ivename, int ivelevel, int ivehealth, int iveattack, string torname, int torlevel, int torhealth, int torattack, string lotname, int lotlevel, int lothealth, int lotattack)
{
    vileplume = vilename;
    vileplumeLevel = vilelevel;
    vileplumeHealth = vilehealth;
    vileplumeAttack = vileattack;
    ivysaur = ivename;
    ivysaurLevel = ivelevel;
    ivysaurHealth = ivehealth;
    ivysaurAttack = iveattack;
    torterra = torname;
    torterraLevel = torlevel;
    torterraHealth = torhealth;
    torterraAttack = torattack;
    lotad = lotname;
    lotadLevel = lotlevel;
    lotadHealth = lothealth;
    lotadAttack = lotattack;
}
void Erika::setVileplumeName(string name)
{
    vileplume = name;
}
void Erika::setVileplumeLevel(int level)
{
    vileplumeLevel = level;
}
void Erika::setVileplumeHealth(int health)
{
    vileplumeHealth = health;
}
void Erika::setVileplumeAttack(int attack)
{
    vileplumeAttack = attack;
}
string Erika::getVileplumeName() const
{
    return vileplume;
}
int  Erika::getVileplumeLevel() const
{
    return vileplumeLevel;
}
int Erika::getVileplumeHealth() const
{
    return vileplumeHealth;
}
int Erika::getVileplumeAttack() const
{
    return vileplumeAttack;
}
void Erika::setIvysaurName(string ivname)
{
    ivysaur = ivname;
}
void Erika::setIvysaurLevel(int ivlevel)
{
    ivysaurLevel = ivlevel;
}
void Erika::setIvysaurHealth(int ivhealth)
{
    ivysaurHealth = ivhealth;
}
void Erika::setIvysaurAttack(int ivattack)
{
    ivysaurAttack = ivattack;
}
string Erika::getIvysaurName() const
{
    return ivysaur;
}
int Erika::getIvysaurLevel() const
{
    return ivysaurLevel;
}
int Erika::getIvysaurHealth() const
{
    return ivysaurHealth;
}
int Erika::getIvysaurAttack() const
{
    return ivysaurAttack;
}
void Erika::setTorterraName(string torname)
{
    torterra = torname;
}
void Erika::setTorterraLevel(int torlevel)
{
    torterraLevel = torlevel;
}
void Erika::setTorterraHealth(int torhealth)
{
    torterraHealth = torhealth;
}
void Erika::setTorterraAttack(int torattack)
{
    torterraAttack = torattack;
}
string Erika::getTorterraName() const
{
    return torterra;
}
int Erika::getTorterraLevel() const
{
    return torterraLevel;
}
int Erika::getTorterraHealth() const
{
    return torterraHealth;
}
int Erika::getTorterraAttack() const
{
    return torterraAttack;
}
void Erika::setLotadName(string loname)
{
    lotad = loname;
}
void Erika::setLotadLevel(int lolevel)
{
    lotadLevel = lolevel;
}
void Erika::setLotadHealth(int lohealth)
{
    lotadHealth = lohealth;
}
void Erika::setLotadAttack(int loattack)
{
    lotad = loattack;
}
string Erika::getLotadName() const
{
    return lotad;
}
int Erika::getLotadLevel() const
{
    return lotadLevel;
}
int Erika::getLotadHealth() const
{
    return lotadHealth;
}
int Erika::getLotadAttack() const
{
    return lotadAttack;
}