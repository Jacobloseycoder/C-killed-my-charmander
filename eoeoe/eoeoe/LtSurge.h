#pragma once
#include "LtSurge.h"
#include <string>
#ifndef LT_SURGE_H
#define LT_SURGE_H
using namespace std;
class LtSurge
{
private:
    //Raichu
    //Voltorb
    //Jolteon
    //Sandyshocks
    string raichu;
    int raichuLevel;
    int raichuHealth;
    int raichuAttack;
    string voltorb;
    int voltorbLevel;
    int voltorbHealth;
    int voltorbAttack;
    string jolteon;
    int jolteonLevel;
    int jolteonHealth;
    int jolteonAttack;
    string sandyshocks;
    int sandyshocksLevel;
    int sandyshocksHealth;
    int sandyshocksAttack;
public:
    LtSurge();
    LtSurge(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
    void setRaichuName(string);
    void setRaichuLevel(int);
    void setRaichuHealth(int);
    void setRaichuAttack(int);
    string getRaichuName() const;
    int getRaichuLevel() const;
    int getRaichuHealth() const;
    int getRaichuAttack() const;
    int Surge();
    void setVoltorbName(string);
    void setVoltorbLevel(int);
    void setVoltorbHealth(int);
    void setVoltorbAttack(int);
    string getVoltorbName() const;
    int getVoltorbLevel() const;
    int getVoltorbHealth() const;
    int getVoltorbAttack() const;
    void setJolteonName(string);
    void setJolteonLevel(int);
    void setJolteonHealth(int);
    void setJolteonAttack(int);
    string getJolteonName() const;
    int getJolteonLevel() const;
    int getJolteonHealth() const;
    int getJolteonAttack() const;
    void setSandyshocksName(string);
    void setSandyshocksLevel(int);
    void setSandyshocksHealth(int);
    void setSandyshocksAttack(int);
    string getSandyshocksName() const;
    int getSandyshocksLevel() const;
    int getSandyshocksHealth() const;
    int getSandyshocksAttack() const;
};
#endif

