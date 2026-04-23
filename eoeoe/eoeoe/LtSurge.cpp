#include "LtSurge.h"
#include <string>
using namespace std;

LtSurge::LtSurge()
{
    raichu = "unknown";
    raichuLevel = 0;
    raichuHealth = 0;
    raichuAttack = 0;
    voltorb = "unknown";
    voltorbLevel = 0;
    voltorbHealth = 0;
    voltorbAttack = 0;
    jolteon = "unknown";
    jolteonLevel = 0;
    jolteonHealth = 0;
    jolteonAttack = 0;
    sandyshocks = "unknown";
    sandyshocksLevel = 0;
    sandyshocksHealth = 0;
    sandyshocksAttack = 0;
}
LtSurge::LtSurge(string rname, int rlevel, int rhealth, int rattack, string vname, int vlevel, int vhealth, int vattack, string jname, int jlevel, int jhealth, int jattack, string saname, int salevel, int sahealth, int saattack)
{
    raichu = rname;
    raichuLevel = rlevel;
    raichuHealth = rhealth;
    raichuAttack = rattack;
    voltorb = vname;
    voltorbLevel = vlevel;
    voltorbHealth = vhealth;
    voltorbAttack = vattack;
    jolteon = jname;
    jolteonLevel = jlevel;
    jolteonHealth = jhealth;
    jolteonAttack = jattack;
    sandyshocks = saname;
    sandyshocksLevel = salevel;
    sandyshocksHealth = sahealth;
    sandyshocksAttack = saattack;
}
void LtSurge::setRaichuName(string rname) {
    raichu = rname;
}
void LtSurge::setRaichuLevel(int rlevel) {
    raichuLevel = rlevel;
}
void LtSurge::setRaichuHealth(int rhealth) {
    raichuHealth = rhealth;
}
void LtSurge::setRaichuAttack(int rattack) {
    raichuAttack = rattack;
}
string LtSurge::getRaichuName() const {
    return raichu;
}
int LtSurge::getRaichuLevel() const {
    return raichuLevel;
}
int LtSurge::getRaichuHealth() const {
    return raichuHealth;
}
int LtSurge::getRaichuAttack() const {
    return raichuAttack;
}

void LtSurge::setVoltorbName(string vname) {
    voltorb = vname;
}
void LtSurge::setVoltorbLevel(int vlevel) {
    voltorbLevel = vlevel;
}
void LtSurge::setVoltorbHealth(int vhealth) {
    voltorbHealth = vhealth;
}
void LtSurge::setVoltorbAttack(int vattack) {
    voltorbAttack = vattack;
}
string LtSurge::getVoltorbName() const {
    return voltorb;
}
int LtSurge::getVoltorbLevel() const {
    return voltorbLevel;
}
int LtSurge::getVoltorbHealth() const {
    return voltorbHealth;
}
int LtSurge::getVoltorbAttack() const {
    return voltorbAttack;
}

void LtSurge::setJolteonName(string jname) {
    jolteon = jname;
}
void LtSurge::setJolteonLevel(int jlevel) {
    jolteonLevel = jlevel;
}
void LtSurge::setJolteonHealth(int jhealth) {
    jolteonHealth = jhealth;
}
void LtSurge::setJolteonAttack(int jattack) {
    jolteonAttack = jattack;
}
string LtSurge::getJolteonName() const {
    return jolteon;
}
int LtSurge::getJolteonLevel() const {
    return jolteonLevel;
}
int LtSurge::getJolteonHealth() const {
    return jolteonHealth;
}
int LtSurge::getJolteonAttack() const {
    return jolteonAttack;
}

void LtSurge::setSandyshocksName(string saname) {
    sandyshocks = saname;
}
void LtSurge::setSandyshocksLevel(int salevel) {
    sandyshocksLevel = salevel;
}
void LtSurge::setSandyshocksHealth(int sahealth) {
    sandyshocksHealth = sahealth;
}
void LtSurge::setSandyshocksAttack(int saattack) {
    sandyshocksAttack = saattack;
}
string LtSurge::getSandyshocksName() const {
    return sandyshocks;
}
int LtSurge::getSandyshocksLevel() const {
    return sandyshocksLevel;
}
int LtSurge::getSandyshocksHealth() const {
    return sandyshocksHealth;
}
int LtSurge::getSandyshocksAttack() const {
    return sandyshocksAttack;
}