#pragma once
#include <string>
using namespace std;

class Brock
{
private:
    string onix;
    int onixLevel;
    int onixHealth;
    int onixAttack;
    string geodude;
    int geodudeLevel;
    int geodudeHealth;
    int geodudeAttack;
    string bonsly;
    int bonslyLevel;
    int bonslyHealth;
    int bonslyAttack;
public:
    Brock();
    Brock(string, int, int, int, string, int, int, int, string, int, int, int);
    void setOnixName(string);
    void setOnixLevel(int);
    void setOnixHealth(int);
    void setOnixAttack(int);
    string getOnixName() const;
    int getOnixLevel() const;
    int getOnixHealth() const;
    int getOnixAttack() const;
    int Broc();
    void setGeodudeName(string);
    void setGeodudeLevel(int);
    void setGeodudeHealth(int);
    void setGeodudeAttack(int);
    string getGeodudeName() const;
    int getGeodudeLevel() const;
    int getGeodudeHealth() const;
    int getGeodudeAttack() const;
    void setBonslyName(string);
    void setBonslyLevel(int);
    void setBonslyHealth(int);
    void setBonslyAttack(int);
    string getBonslyName() const;
    int getBonslyLevel() const;
    int getBonslyHealth() const;
    int getBonslyAttack() const;
};
