#include <iostream>
#include <string>
#include <fstream>
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
Brock::Brock()
{
    onix = "unknown";
    onixLevel = 0;
    onixHealth = 0;
    onixAttack = 0;
    geodude = "unknown";
    geodudeLevel = 0;
    geodudeHealth = 0;
    geodudeAttack = 0;
    bonsly = "unknown";
    bonslyLevel = 0;
    bonslyHealth = 0;
    bonslyAttack = 0;
}
Brock::Brock(string name, int level, int health, int attack, string gname, int glevel, int ghealth, int gattack, string bname, int blevel, int bhealth, int battack)
{
    onix = name;
    onixLevel = level;
    onixHealth = health;
    onixAttack = attack;
    geodude = gname;
    geodudeLevel = glevel;
    geodudeHealth = ghealth;
    geodudeAttack = gattack;
    bonsly = bname;
    bonslyLevel = blevel;
    bonslyHealth = bhealth;
    bonslyAttack = battack;
}
void Brock::setOnixName(string name)
{
    onix = name;

}
void Brock::setOnixLevel(int level)
{
    onixLevel = level;

}
void Brock::setOnixHealth(int health)
{
    onixHealth = health;

}
void Brock::setOnixAttack(int attack)
{
    onixAttack = attack;
}
string Brock::getOnixName() const
{
    return onix;
}
int Brock::getOnixLevel() const
{
    return onixLevel;
}
int Brock::getOnixHealth() const
{
    return onixHealth;
}
int Brock::getOnixAttack() const
{
    return onixAttack;
}
void Brock::setGeodudeName(string gname)
{
    geodude = gname;

}
void Brock::setGeodudeLevel(int glevel)
{
    geodudeLevel = glevel;

}
void Brock::setGeodudeHealth(int ghealth)
{
    geodudeHealth = ghealth;

}
void Brock::setGeodudeAttack(int gattack)
{
    geodudeAttack = gattack;
}
string Brock::getGeodudeName() const
{
    return geodude;
}
int Brock::getGeodudeLevel() const
{
    return geodudeLevel;
}
int Brock::getGeodudeHealth() const
{
    return geodudeHealth;
}
int Brock::getGeodudeAttack() const
{
    return geodudeAttack;
}
void Brock::setBonslyName(string bname)
{
    bonsly = bname;

}
void Brock::setBonslyLevel(int blevel)
{
    bonslyLevel = blevel;

}
void Brock::setBonslyHealth(int bhealth)
{
    bonslyHealth = bhealth;

}
void Brock::setBonslyAttack(int battack)
{
    bonslyAttack = battack;
}
string Brock::getBonslyName() const
{
    return bonsly;
}
int Brock::getBonslyLevel() const
{
    return bonslyLevel;
}
int Brock::getBonslyHealth() const
{
    return bonslyHealth;
}
int Brock::getBonslyAttack() const
{
    return bonslyAttack;
}
int Brock::Broc()
{
    ifstream inFile("C:\\Users\\Squir\\OneDrive\\Desktop\\Visual studio code\\ConsoleApplication1\\pokedex.txt");
    if (!inFile)
    {
        cout << "Error!!!! File not found." << endl;
        return 0;
    }
    string onix, geodude, bonsly;
    int onixHealth, onixAttack, onixLevel, geodudeLevel, geodudeHealth, geodudeAttack, bonslyHealth, bonslyAttack, bonslyLevel;
    int oline = 95;
    int gline = 74;
    int bline = 438;
    while (inFile >> oline >> onix >> onixHealth >> onixAttack >> onixLevel) {
        cout << "Name: " << onix << endl;
        cout << "Health: " << onixHealth << endl;
        cout << "Attack: " << onixAttack << endl;
        cout << "Level: " << onixLevel << endl;
        cout << endl;
    }
    while (inFile >> gline >> geodude >> geodudeHealth >> geodudeAttack >> geodudeLevel) {
        cout << "Name: " << geodude << endl;
        cout << "Health: " << geodudeHealth << endl;
        cout << "Attack: " << geodudeAttack << endl;
        cout << "Level: " << geodudeLevel << endl;
        cout << endl;
    }
    while (inFile >> bline >> bonsly >> bonslyHealth >> bonslyAttack >> bonslyLevel) {
        cout << "Name: " << bonsly << endl;
        cout << "Health: " << bonslyHealth << endl;
        cout << "Attack: " << bonslyAttack << endl;
        cout << "Level: " << bonslyLevel << endl;
        cout << endl;
    }
    inFile.close();
    return 0;
}

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
Misty::Misty()
{
    psyduck = "unknown";
    psyduckLevel = 0;
    psyduckHealth = 0;
    psyduckAttack = 0;
    seel = "unknown";
    seelLevel = 0;
    seelHealth = 0;
    seelAttack = 0;
    mudkip = "unknown";
    mudkipLevel = 0;
    mudkipHealth = 0;
    mudkipAttack = 0;
}
Misty::Misty(string pname, int plevel, int phealth, int pattack, string sname, int slevel, int shealth, int sattack, string mname, int mlevel, int mhealth, int mattack)
{
    psyduck = pname;
    psyduckLevel = plevel;
    psyduckHealth = phealth;
    psyduckAttack = pattack;
    seel = sname;
    seelLevel = slevel;
    seelHealth = shealth;
    seelAttack = sattack;
    mudkip = mname;
    mudkipLevel = mlevel;
    mudkipHealth = mhealth;
    mudkipAttack = mattack;
}
void Misty::setPsyduckName(string pname)
{
    psyduck = pname;

}
void Misty::setPsyduckLevel(int plevel)
{
    psyduckLevel = plevel;

}
void Misty::setPsyduckHealth(int phealth)
{
    psyduckHealth = phealth;

}
void Misty::setPsyduckAttack(int pattack)
{
    psyduckAttack = pattack;
}
string Misty::getPsyduckName() const
{
    return psyduck;
}
int Misty::getPsyduckLevel() const
{
    return psyduckLevel;
}
int Misty::getPsyduckHealth() const
{
    return psyduckHealth;
}
int Misty::getPsyduckAttack() const
{
    return psyduckAttack;
}
void Misty::setSeelName(string sname)
{
    seel = sname;

}
void Misty::setSeelLevel(int slevel)
{
    seelLevel = slevel;

}
void Misty::setSeelHealth(int shealth)
{
    seelHealth = shealth;

}
void Misty::setSeelAttack(int sattack)
{
    seelAttack = sattack;
}
string Misty::getSeelName() const
{
    return seel;
}
int Misty::getSeelLevel() const
{
    return seelLevel;
}
int Misty::getSeelHealth() const
{
    return seelHealth;
}
int Misty::getSeelAttack() const
{
    return seelAttack;
}
void Misty::setMudkipName(string mname)
{
    mudkip = mname;

}
void Misty::setMudkipLevel(int mlevel)
{
    mudkipLevel = mlevel;

}
void Misty::setMudkipHealth(int mhealth)
{
    mudkipHealth = mhealth;

}
void Misty::setMudkipAttack(int mattack)
{
    mudkipAttack = mattack;
}
string Misty::getMudkipName() const
{
    return mudkip;
}
int Misty::getMudkipLevel() const
{
    return mudkipLevel;
}
int Misty::getMudkipHealth() const
{
    return mudkipHealth;
}
int Misty::getMudkipAttack() const
{
    return mudkipAttack;
}
int Misty::Mist()
{
    ifstream inFile("C:\\Users\\Squir\\OneDrive\\Desktop\\Visual studio code\\ConsoleApplication1\\pokedex.txt");
    if (!inFile)
    {
        cout << "Error!!!! File not found." << endl;
        return 0;
    }
    string psyduck, seel, mudkip;
    int psyduckHealth, psyduckAttack, psyduckLevel, seelLevel, seelHealth, seelAttack, mudkipLevel, mudkipHealth, mudkipAttack;
    int pline = 54;
    int gline = 74;
    int mline = 258;
    while (inFile >> pline >> psyduck >> psyduckHealth >> psyduckAttack >> psyduckLevel) {
        cout << "Name: " << psyduck << endl;
        cout << "Health: " << psyduckHealth << endl;
        cout << "Attack: " << psyduckAttack << endl;
        cout << "Level: " << psyduckLevel << endl;
        cout << endl;
    }
    while (inFile >> gline >> seel >> seelHealth >> seelAttack >> seelLevel) {
        cout << "Name: " << seel << endl;
        cout << "Health: " << seelHealth << endl;
        cout << "Attack: " << seelAttack << endl;
        cout << "Level: " << seelLevel << endl;
        cout << endl;
    }
    while (inFile >> mline >> mudkip >> mudkipHealth >> mudkipAttack >> mudkipLevel) {
        cout << "Name: " << mudkip << endl;
        cout << "Health: " << mudkipHealth << endl;
        cout << "Attack: " << mudkipAttack << endl;
        cout << "Level: " << mudkipLevel << endl;
        cout << endl;
    }
    inFile.close();
    return 0;
}
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

int LtSurge::Surge()
{
    ifstream inFile("C:\\Users\\Squir\\OneDrive\\Desktop\\Visual studio code\\ConsoleApplication1\\pokedex.txt");
    if (!inFile)
    {
        cout << "Error!!!! File not found." << endl;
        return 0;
    }

    string rname, vname, jname, saname;
    int rHealth, rAttack, rLevel;
    int vLevel, vHealth, vAttack;
    int jLevel, jHealth, jAttack;
    int saLevel, saHealth, saAttack;
    int rline = 26;
    int vline = 100;
    int jline = 135;
    int sline = 989;

    while (inFile >> rline >> rname >> rHealth >> rAttack >> rLevel) {
        cout << "Name: " << rname << endl;
        cout << "Health: " << rHealth << endl;
        cout << "Attack: " << rAttack << endl;
        cout << "Level: " << rLevel << endl;
        cout << endl;
    }
    while (inFile >> vline >> vname >> vHealth >> vAttack >> vLevel) {
        cout << "Name: " << vname << endl;
        cout << "Health: " << vHealth << endl;
        cout << "Attack: " << vAttack << endl;
        cout << "Level: " << vLevel << endl;
        cout << endl;
    }
    while (inFile >> jline >> jname >> jHealth >> jAttack >> jLevel) {
        cout << "Name: " << jname << endl;
        cout << "Health: " << jHealth << endl;
        cout << "Attack: " << jAttack << endl;
        cout << "Level: " << jLevel << endl;
        cout << endl;
    }
    while (inFile >> sline >> saname >> saHealth >> saAttack >> saLevel) {
        cout << "Name: " << saname << endl;
        cout << "Health: " << saHealth << endl;
        cout << "Attack: " << saAttack << endl;
        cout << "Level: " << saLevel << endl;
        cout << endl;
    }
    inFile.close();
    return 0;
}