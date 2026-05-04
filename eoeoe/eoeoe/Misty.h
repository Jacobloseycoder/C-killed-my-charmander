#pragma once
#ifndef MISTY_H
#define MISTY_H
#include <string>
using namespace std;

class Misty
{
private:
    string psyduck;
    int psyduckLevel;
    int psyduckHealth;
    int psyduckAttack;
    string seel;
    int seelLevel;
    int seelHealth;
    int seelAttack;
    string mudkip;
    int mudkipLevel;
    int mudkipHealth;
    int mudkipAttack;
public:
    Misty();
    Misty(string, int, int, int, string, int, int, int, string, int, int, int);
    void setPsyduckName(string);
    void setPsyduckLevel(int);
    void setPsyduckHealth(int);
    void setPsyduckAttack(int);
    string getPsyduckName() const;
    int getPsyduckLevel() const;
    int getPsyduckHealth() const;
    int getPsyduckAttack() const;
    int Mist();
    void setSeelName(string);
    void setSeelLevel(int);
    void setSeelHealth(int);
    void setSeelAttack(int);
    string getSeelName() const;
    int getSeelLevel() const;
    int getSeelHealth() const;
    int getSeelAttack() const;
    void setMudkipName(string);
    void setMudkipLevel(int);
    void setMudkipHealth(int);
    void setMudkipAttack(int);
    string getMudkipName() const;
    int getMudkipLevel() const;
    int getMudkipHealth() const;
    int getMudkipAttack() const;

};
#endif
