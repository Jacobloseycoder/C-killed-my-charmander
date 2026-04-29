#pragma once
#ifndef ENEMIES_H
#define ENEMIES_H#
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Erika
{
private:
    string vileplume;
    int vileplumeLevel;
    int vileplumeHealth;
    int vileplumeAttack;
    string ivysaur;
    int ivysaurLevel;
    int ivysaurHealth;
    int ivysaurAttack;
    string torterra;
    int  torterraLevel;
    int  torterraHealth;
    int torterraAttack;
    string lotad;
    int lotadLevel;
    int lotadHealth;
    int lotadAttack;
public:
    Erika(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
    void setVileplumeName(string);
    void setVileplumeLevel(int);
    void setVileplumeHealth(int);
    void setVileplumeAttack(int);
    string getVileplumeName() const;
    int getVileplumeLevel() const;
    int getVileplumeHealth() const;
    int getVileplumeAttack() const;
    void setIvysaurName(string);
    void setIvysaurLevel(int);
    void setIvysaurHealth(int);
    void setIvysaurAttack(int);
    string getIvysaurName() const;
    int getIvysaurLevel() const;
    int getIvysaurHealth() const;
    int getIvysaurAttack() const;
    void setTorterraName(string);
    void setTorterraLevel(int);
    void setTorterraHealth(int);
    void setTorterraAttack(int);
    string getTorterraName() const;
    int getTorterraLevel() const;
    int getTorterraHealth() const;
    int getTorterraAttack() const;
    void setTorterraName(string);
    void setTorterraLevel(int);
    void setTorterraHealth(int);
    void setTorterraAttack(int);
    string getTorterraName() const;
    int getTorterraLevel() const;
    int getTorterraHealth() const;
    int getTorterraAttack() const;
    void setTorterraName(string);
    void setTorterraLevel(int);
    void setTorterraHealth(int);
    void setTorterraAttack(int);
    string getTorterraName() const;
    int getTorterraLevel() const;
    int getTorterraHealth() const;
    int getTorterraAttack() const;
    void setLotadName(string);
    void setLotadLevel(int);
    void setLotadHealth(int);
    void setLotadAttack(int);
    string getLotadName() const;
    int getLotadLevel() const;
    int getLotadHealth() const;
    int getLotadAttack() const;
};
#endif ENEMIES_H


