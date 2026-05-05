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
class LtSurge
{
private:
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
class Erika
{
    string gloom;
    int gloomlvl;
    int gloomatk;
    int gloomhp;
    string sunkern;
    int sunkernlvl;
    int sunkernatk;
    int sunkernhp;
public:
    Erika();
    Erika(string, int, int, int, string, int, int, int);
    void setGloomName(string);
    void setGloom(int, int, int);
    void setSunkernName(string);
    void setSunkern(int, int, int);
    string getGloomName();
    int getGloom();
    string getSunkernName();
    int getSunkern();
};
class Koga
{
private:
    string clodsire;
    int clodsirelvl;;
    int clodsirehp;
    int clodsireatk;
    string toxapex;
    int toxapexlvl;
    int toxapexhp;
    int toxapexatk;
    string Garbodor;
    int Garbodorlvl;
    int Garbodorhp;
    int Garbodoratk;
public:
    Koga();
    Koga(string, int, int, int, string, int, int, int, string, int, int, int);
    void setClodsireName(string);
    void SetClodsire(int, int, int);
    void setToxapexName(string);
    void setToxapex(int, int, int);
    void setGarbodorName(string);
    void setGarbodor(int, int, int);
    string getClodsireName() const;
    int getClodsire() const;
    string getToxapexName() const;
    int getToxapex() const;
    string getGarbodorName() const;
    int getGarbodor() const;
};
class Sabrina
{
private:
    string alakazam;
    int alakazamlvl;
    int alakazamhp;
    int alakazamatk;
    string metagross;
    int metagrosslvl;
    int metagrosshp;
    int metagrossatk;
public:
    Sabrina();
    Sabrina(string, int, int, int, string, int, int, int);
    void setAlakazamName(string);
    void SetAlakazam(int, int, int);
    void setMetagrossName(string);
    void setMetagross(int, int, int);
    string getAlakazamName() const;
    int getAlakazam() const;
    string getMetagrossName() const;
    int getMetagross() const;
};
class Blaine
{
private:
    string armarouge;
    int armarougelvl;
    int armarougehp;
    int armarougeatk;
    string incineroar;
    int incineroarlvl;
    int incineroarhp;
    int incineroaratk;
    string Volcarona;
    int volcaronalvl;
    int volcaronahp;
    int volcaronaatk;
    string ho_oh;
    int ho_ohlvl;
    int ho_ohhp;
    int ho_ohatk;

public:
    Blaine();
    Blaine(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
    void setarmarougeName(string);
    void Setarmarouge(int, int, int);
    void setincineroarName(string);
    void setincineroar(int, int, int);
    void setvolcaronaName(string);
    void setvolcarona(int, int, int);
    void setho_ohName(string);
    void setho_oh(int, int, int);
    string getAlakazamName() const;
    int getAlakazam() const;
    string getIncineroarName() const;
    int getIncineroar() const;
    string getVolcaronaName() const;
    int getVolcarona() const;
    string getho_ohName() const;
    int getho_oh() const;
};
class Giovanni
{
    string persian;
    int persianlvl;
    int persianhp;
    int persianatk;
    string nidoking;
    int nidokinglvl;
    int nidokinghp;
    int nidokingatk;
    string Flygon;
    int Flygonlvl;
    int Flygonhp;
    int Flygonatk;
    string Ursaluna;
    int Ursalunalvl;
    int Ursalunahp;
    int Ursalunaatk;
public:
    Giovanni();
    Giovanni(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
    void setPersianName(string);
    string getPersianName();
    void setPersian(int, int, int);
    int getPersion();
    void setNidokingName(string);
    void setNidoking(int, int, int);
    string getNidoking();
    void setFlygonName(string);
    void setFlygon(int, int, int);
    string getFlygonName();
    int getFlygon();
    void setUrsalunaName(string);
    void setUrsaluna(int, int, int);
    string getUrsalunaName();
    int getUrsaluna();
};
class Lorelei
{
private:

    string jinx;
    int jinxhp;
    int jinkatk;
    int jinxlvl;
    string Mamoswine;
    int MamoswinehP;
    int Mamoswineatk;
    int Mamoswinelvl;
    string Weavile;
    int WeavilehP;
    int Weavileatk;
    int Weavilelvl;
    string Glaceon;
    int GlaceonhP;
    int Glaceonatk;
    int Glaceonlvl;
    string Froslass;
    int FroslasshP;
    int Froslassatk;
    int Froslasslvl;
public:
    Lorelei();
    Lorelei(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
    void setJinkName(string);
    void setJink(int, int, int);
    void setMamoswineName(string);
    void setMamoswine(int, int, int);
    void setWeavileName(string);
    void setWeavile(int, int, int);
    void setGlaceonName(string);
    void setGlaceon(int, int, int);
    void setFroslassName(string);
    void setFroslass(int, int, int);
    string getJinkName();
    int getJink();
    string getMamoswineName();
    int getMamoswine();
    string getWeavileName();
    int getWeavile();
    string getGlaceonName();
    int getGlaceon();
    string getFroslassName();
    int getFroslass();
};
class Bruno
{
private:
    string heracross;
    int heracrosshp;
    int heracrossatk;
    int heracrosslvl;
    string blaziken;
    int blazikenhp;
    int blazikenatk;
    int blazikenlvl;
    string infernape;
    int infernapehp;
    int infernapeatk;
    int infernapelvl;
    string lucario;
    int lucariohp;
    int lucarioatk;
    int lucariolvl;
    string conkeldurr;
    int conkeldurrhp;
    int conkeldurratk;
    int conkeldurrlvl;
public:
    Bruno();
    Bruno(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
    void setHeracrossName(string);
    void setHeracross(int, int, int);
    void setBlazikenName(string);
    void setBlaziken(int, int, int);
    void setInfernapeName(string);
    void setInfernape(int, int, int);
    void setLucarioName(string);
    void setLucario(int, int, int);
    void setConkeldurrName(string);
    void setConkeldurr(int, int, int);
    string getHeracrossName();
    int getHeracross();
    string getBlazikenName();
    int getBlaziken();
    string getInfernapeName();
    int getInfernape();
    string getLucarioName();
    int getLucario();
    string getConkeldurrName();
    int getConkeldurr();
};
class Agatha
{
private:
    string Gengar;
    int Gengarhp;
    int Gengaratk;
    int Gengarlvl;
    string Chandelure;
    int Chandelurehp;
    int Chandelureatk;
    int Chandelurelvl;
    string Dragapult;
    int Dragapultthp;
    int Dragupultpatk;
    int Dragupultlvl;
    string Ahnihilape;
    int Ahnihilapehp;
    int Ahnihilapeatk;
    int Ahnihilapelvl;
    string Gholdengo;
    int Gholdengohp;
    int Gholdengoatk;
    int Gholdengolvl;
public:
    Agatha();
    Agatha(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
    void setGengarName(string);
    void setGengar(int, int, int);
    void setChandelureName(string);
    void setChandelure(int, int, int);
    void setDragapultName(string);
    void setDragapult(int, int, int);
    void setAhnihilapeName(string);
    void setAhnihilape(int, int, int);
    void setGholdengoName(string);
    void setGholdengo(int, int, int);
    string getGengarName();
    int getGengar();
    string getChandelureName();
    int getChandelure();
    string getDragapultName();
    int getDragapult();
    string getAhnihilapeName();
    int getAhnihilape();
    string getGholdengoName();
    int getGholdengo();
};
class Lance
{
private:
    string dragonite;
    int dragoniteatk;
    int dragonitehp;
    int dragonitelvl;
    string Salamence;
    int Salamenceatk;
    int Salamencehp;
    int Salamencelvl;
    string Garchomp;
    int Garchompatk;
    int Garchomphp;
    int Garchomplvl;
    string Altaria;
    int Altariaatk;
    int Altariahp;
    int Altarialvl;
    string Archaludon;
    int Archaludonatk;
    int Archaludonhp;
    int Archaludonlvl;
public:
    Lance();
    Lance(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
    void setDragoniteName(string);
    void setDragonite(int, int, int);
    void setSalamenceName(string);
    void setSalamence(int, int, int);
    void setGarchompName(string);
    void setGarchomp(int, int, int);
    void setAltariaName(string);
    void setAltaria(int, int, int);
    void setArchaludonName(string);
    void setArchaludon(int, int, int);
    string getDragoniteName();
    int getDragonite();
    string getSalamenceName();
    int getSalamence();
    string getGarchompName();
    int getGarchomp();
    string getAltariaName();
    int getAltaria();
    string getArchaludonName();
    int getArchaludon();
};
class Rival
{
private:
    string machamp;
    int machamplvl;
    int machampatk;
    int machamphp;
    string latios;
    int latioslvl;
    int latiosatk;
    int latioshp;
    string giratina;
    int giratinalvl;
    int giratinaatk;
    int giratinahp;
    string melmetal;
    int melmetallvl;
    int melmetalatk;
    int melmetalhp;
    string greninja;
    int greninjalvl;
    int greninjaatk;
    int greninjahp;
    string zeraora;
    int zeraoralvl;
    int zeraoraatk;
    int zeraorahp;
public:
    Rival();
    Rival(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
    void setMachampName(string);
    void setMachamp(int, int, int);
    void setLatiosName(string);
    void setLatios(int, int, int);
    void setGiratinaName(string);
    void setGiratina(int, int, int);
    void setMelmetalName(string);
    void setMelmetal(int, int, int);
    void setGrenninjaName(string);
    void setGrenninja(int, int, int);
    void setZeraoraName(string);
    void setZeraora(int, int, int);
    string getMachampName();
    int getMachamp();
    string getLatiosName();
    int getLatios();
    string getGiratinaName();
    int getGiratina();
    string getMelmetalName();
    int getMelmetal();
    string getGreninjaName();
    int getGreninja();
    string getZeraoraName();
    int getZeraora();
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
Koga::Koga()
{
    clodsire = "unknown";
    clodsirelvl = 0;
    clodsirehp = 0;
    clodsireatk = 0;
    toxapex = "unknown";
    toxapexlvl = 0;
    toxapexhp = 0;
    toxapexatk = 0;
    Garbodor = "unknown";
    Garbodorlvl = 0;
    Garbodorhp = 0;
    Garbodoratk = 0;
}
Koga::Koga(string clnam, int cllvl, int clhp, int clatk, string toxnam, int toxlvl, int toxhp, int toxatk, string garnam, int garlvl, int garhp, int garatk)
{
    clodsire = clnam;
    clodsirelvl = cllvl;
    clodsirehp = clhp;
    clodsireatk = clatk;
    toxapex = toxnam;
    toxapexlvl = toxlvl;
    toxapexhp = toxhp;
    toxapexatk = toxatk;
    Garbodor = garnam;
    Garbodorlvl = garlvl;
    Garbodorhp = garhp;
    Garbodoratk = garatk;
}
void Koga::setClodsireName(string name)
{
    clodsire = name;
}
void Koga::SetClodsire(int lvl, int hp, int atk)
{
    clodsirelvl = lvl;
    clodsirehp = hp;
    clodsireatk = atk;
}
void Koga::setToxapexName(string toname)
{
    toxapex = toname;
}
void Koga::setToxapex(int tolvl, int tohp, int toatk)
{
    toxapexlvl = tolvl;
    toxapexhp = tohp;
    toxapexatk = toatk;
}
void Koga::setGarbodorName(string ganame)
{
    Garbodor = ganame;
}
void Koga::setGarbodor(int galvl, int gahp, int gaatk)
{
    Garbodorlvl = galvl;
    Garbodorhp = gahp;
    Garbodoratk = gaatk;
}
string Koga::getClodsireName() const
{
    return clodsire;
}
int Koga::getClodsire() const
{
    return clodsirelvl;
    return clodsireatk;
    return clodsirehp;
}
string Koga::getToxapexName() const
{
    return toxapex;
}
int Koga::getToxapex() const
{
    return toxapexlvl;
    return toxapexatk;
    return toxapexhp;
}
string Koga::getGarbodorName() const
{
    return Garbodor;
}
int Koga::getGarbodor() const
{
    return Garbodorlvl;
    return Garbodorhp;
    return Garbodoratk;
}
Sabrina::Sabrina()
{
    alakazam = "unknown";
    alakazamlvl = 0;
    alakazamhp = 0;
    alakazamatk = 0;
    metagross = "unknown";
    metagrosslvl = 0;
    metagrosshp = 0;
    metagrossatk = 0;

}
Sabrina::Sabrina(string menam, int melvl, int mehp, int meatk, string alnam, int allvl, int alhp, int alatk)
{
    alakazam = alnam;
    alakazamlvl = allvl;
    alakazamhp = alhp;
    alakazamatk = alatk;
    metagross = menam;
    metagrosslvl = melvl;
    metagrosshp = mehp;
    metagrossatk = meatk;
}
void Sabrina::setAlakazamName(string name)
{
    alakazam = name;
}
void Sabrina::SetAlakazam(int lvl, int hp, int atk)
{
    alakazamlvl = lvl;
    alakazamhp = hp;
    alakazamatk = atk;
}
void Sabrina::setMetagrossName(string mename)
{
    metagross = mename;
}
void Sabrina::setMetagross(int melvl, int mehp, int meatk)
{
    metagrosslvl = melvl;
    metagrosshp = mehp;
    metagrossatk = meatk;
}
string Sabrina::getAlakazamName() const
{
    return alakazam;
}
int Sabrina::getAlakazam() const
{
    return alakazamlvl;
    return alakazamatk;
    return alakazamhp;
}
string Sabrina::getMetagrossName() const
{
    return metagross;
}
int Sabrina::getMetagross() const
{
    return metagrosslvl;
    return metagrossatk;
    return metagrosshp;
}
Blaine::Blaine()
{
    armarouge = "unknown";
    armarougelvl = 0;
    armarougehp = 0;
    armarougeatk = 0;
    incineroar = "unknown";
    incineroarlvl = 0;
    incineroarhp = 0;
    incineroaratk = 0;
    Volcarona = "unknown";
    volcaronalvl = 0;
    volcaronahp = 0;
    volcaronaatk = 0;
    ho_oh = "unknown";
    ho_ohlvl = 0;
    ho_ohhp = 0;
    ho_ohatk = 0;
}
Blaine::Blaine(string name, int lvl, int hp, int atk, string inname, int inlvl, int inhp, int inatk, string volname, int vollvl, int volhp, int volatk, string ho_ohname, int ho_ohlvl, int ho_ohhp, int ho_ohatk)
{
    armarouge = name;
    armarougelvl = lvl;
    armarougehp = hp;
    armarougeatk = atk;
    incineroar = inname;
    incineroarlvl = inlvl;
    incineroarhp = inhp;
    incineroaratk = inatk;
    Volcarona = volname;
    volcaronalvl = vollvl;
    volcaronahp = volhp;
    volcaronaatk = volatk;
    ho_oh = ho_ohname;
    ho_ohlvl = ho_ohlvl;
    ho_ohhp = ho_ohhp;
    ho_ohatk = ho_ohatk;
}
void Blaine::setarmarougeName(string name)
{
    armarouge = name;
}
void Blaine::Setarmarouge(int lvl, int hp, int atk)
{
    armarougelvl = lvl;
    armarougehp = hp;
    armarougeatk = atk;
}
void Blaine::setincineroarName(string inname)
{
    incineroar = inname;
}
void Blaine::setincineroar(int inlvl, int inhp, int intk)
{
    incineroarlvl = inlvl;
    incineroarhp = inhp;
    incineroaratk = intk;
}
void Blaine::setvolcaronaName(string volname)
{
    Volcarona = volname;
}
void Blaine::setvolcarona(int vollvl, int volhp, int volatk)
{
    volcaronalvl = vollvl;
    volcaronahp = volhp;
    volcaronaatk = volatk;
}
void Blaine::setho_ohName(string ho_ohname)
{
    ho_oh = ho_ohname;
}
void Blaine::setho_oh(int ho_ohlvl, int ho_ohhp, int ho_ohatk)
{
    ho_ohlvl = ho_ohlvl;
    ho_ohhp = ho_ohhp;
    ho_ohatk = ho_ohatk;
}
string Blaine::getAlakazamName() const
{
    return armarouge;
}
int Blaine::getAlakazam() const
{
    return armarougelvl;
    return armarougehp;
    return armarougeatk;
}
string Blaine::getIncineroarName() const
{
    return incineroar;
}
int Blaine::getIncineroar() const
{
    return incineroarlvl;
    return incineroarhp;
    return incineroaratk;
}
string Blaine::getVolcaronaName() const
{
    return Volcarona;
}
int Blaine::getVolcarona() const
{
    return volcaronalvl;
    return volcaronahp;
    return volcaronaatk;
}
string Blaine::getho_ohName() const
{
    return ho_oh;
}
int Blaine::getho_oh() const
{
    return ho_ohlvl;
    return ho_ohhp;
    return ho_ohatk;
}
Giovanni::Giovanni()
{
    persian = "Unknown";
    persianlvl = 0;
    persianhp = 0;
    persianatk = 0;
    nidoking = "Unknown";
    nidokinglvl = 0;
    nidokinghp = 0;
    nidokingatk = 0;
    Flygon = "Unknown";
    Flygonlvl = 0;
    Flygonhp = 0;
    Flygonatk = 0;
    Ursaluna = "Unknown";
    Ursalunalvl = 0;
    Ursalunahp = 0;
    Ursalunaatk = 0;
}
Giovanni::Giovanni(string name, int lvl, int hp, int atk, string nname, int nlvl, int nhp, int natk, string fname, int flvl, int fhp, int fatk, string uname, int ulvl, int uhp, int uatk)
{
    persian = name;
    persianlvl = lvl;
    persianhp = hp;
    persianatk = atk;
    nidoking = nname;
    nidokinglvl = nlvl;
    nidokinghp = nhp;
    nidokingatk = natk;
    Flygon = fname;
    Flygonlvl = flvl;
    Flygonhp = fhp;
    Flygonatk = fatk;
    Ursaluna = uname;
    Ursalunalvl = ulvl;
    Ursalunahp = uhp;
    Ursalunaatk = uatk;
}
void Giovanni::setPersianName(string name)
{
    persian = name;
}
string Giovanni::getPersianName()
{
    return persian;
}
void Giovanni::setPersian(int lvl, int hp, int atk)
{
    persianlvl = lvl;
    persianhp = hp;
    persianatk = atk;
}
int Giovanni::getPersion()
{
    return persianlvl, persianhp, persianatk;
}
void Giovanni::setNidokingName(string nname)
{
    nidoking = nname;
}
void Giovanni::setNidoking(int nlvl, int nhp, int natk)
{
    nidokinglvl = nlvl;
    nidokinghp = nhp;
    nidokingatk = natk;
}
string Giovanni::getNidoking()
{
    return nidoking;
}
void Giovanni::setFlygonName(string fname)
{
    Flygon = fname;
}
void Giovanni::setFlygon(int flvl, int fhp, int fatk)
{
    Flygonlvl = flvl;
    Flygonhp = fhp;
    Flygonatk = fatk;
}
string Giovanni::getFlygonName()
{
    return Flygon;
}
int Giovanni::getFlygon()
{
    return Flygonlvl, Flygonhp, Flygonatk;
}
void Giovanni::setUrsalunaName(string uname)
{
    Ursaluna = uname;
}
void Giovanni::setUrsaluna(int ulvl, int uhp, int uatk)
{
    Ursalunalvl = ulvl;
    Ursalunahp = uhp;
    Ursalunaatk = uatk;
}
string Giovanni::getUrsalunaName()
{
    return Ursaluna;
}
int Giovanni::getUrsaluna()
{
    return Ursalunalvl, Ursalunahp, Ursalunaatk;
}
Lorelei::Lorelei()
{
    jinx = "Unknown";
    jinxhp = 0;
    jinkatk = 0;
    jinxlvl = 0;
    Mamoswine = "Unknown";
    MamoswinehP = 0;
    Mamoswineatk = 0;
    Mamoswinelvl = 0;
    Weavile = "Unknown";
    WeavilehP = 0;
    Weavileatk = 0;
    Weavilelvl = 0;
    Glaceon = "Unknown";
    GlaceonhP = 0;
    Glaceonatk = 0;
    Glaceonlvl = 0;
    Froslass = "Unknown";
    FroslasshP = 0;
    Froslassatk = 0;
    Froslasslvl = 0;
}
Lorelei::Lorelei(string jinxname, int jinxHP, int jinkAtk, int jinxLvl, string Mamoswinename, int MamoswineHP, int MamoswineAtk, int MamoswineLvl, string Weavilename, int WeavileHP, int WeavileAtk, int WeavileLvl, string Glaceonname, int GlaceonHP, int GlaceonAtk, int GlaceonLvl, string Froslassname, int FroslassHP, int FroslassAtk, int FroslassLvl)
{
    jinx = jinxHP;
    jinxhp = jinxHP;
    jinkatk = jinkAtk;
    jinxlvl = jinxLvl;
    Mamoswine = Mamoswinename;
    MamoswinehP = MamoswineHP;
    Mamoswineatk = MamoswineAtk;
    Mamoswinelvl = MamoswineLvl;
    Weavile = Weavilename;
    WeavilehP = WeavileHP;
    Weavileatk = WeavileAtk;
    Weavilelvl = WeavileLvl;
    Glaceon = Glaceonname;
    GlaceonhP = GlaceonHP;
    Glaceonatk = GlaceonAtk;
    Glaceonlvl = GlaceonLvl;
    Froslass = Froslassname;
    FroslasshP = FroslassHP;
    Froslassatk = FroslassAtk;
    Froslasslvl = FroslassLvl;
}
void Lorelei::setJinkName(string jinxname)
{
    jinx = jinxname;
}
void Lorelei::setJink(int jinxHP, int jinkAtk, int jinxLvl)
{
    jinxhp = jinxHP;
    jinkatk = jinkAtk;
    jinxlvl = jinxLvl;
}
void Lorelei::setMamoswineName(string Mamoswinename)
{
    Mamoswine = Mamoswinename;
}
void Lorelei::setMamoswine(int MamoswineHP, int MamoswineAtk, int MamoswineLvl)
{
    MamoswinehP = MamoswineHP;
    Mamoswineatk = MamoswineAtk;
    Mamoswinelvl = MamoswineLvl;
}
void Lorelei::setWeavileName(string Weavilename)
{
    Weavile = Weavilename;
}
void Lorelei::setWeavile(int WeavileHP, int WeavileAtk, int WeavileLvl)
{
    WeavilehP = WeavileHP;
    Weavileatk = WeavileAtk;
    Weavilelvl = WeavileLvl;
}
void Lorelei::setGlaceonName(string Glaceonname)
{
    Glaceon = Glaceonname;
}
void Lorelei::setGlaceon(int GlaceonHP, int GlaceonAtk, int GlaceonLvl)
{
    GlaceonhP = GlaceonHP;
    Glaceonatk = GlaceonAtk;
    Glaceonlvl = GlaceonLvl;
}
void Lorelei::setFroslassName(string Froslassname)
{
    Froslass = Froslassname;
}
void Lorelei::setFroslass(int FroslassHP, int FroslassAtk, int FroslassLvl)
{
    FroslasshP = FroslassHP;
    Froslassatk = FroslassAtk;
    Froslasslvl = FroslassLvl;
}
string Lorelei::getJinkName()
{
    return jinx;
}
int Lorelei::getJink()
{
    return jinxhp, jinkatk, jinxlvl;
}
string Lorelei::getMamoswineName()
{
    return Mamoswine;
}
int Lorelei::getMamoswine()
{
    return MamoswinehP, Mamoswineatk, Mamoswinelvl;
}
string Lorelei::getWeavileName()
{
    return Weavile;
}
int Lorelei::getWeavile()
{
    return WeavilehP, Weavileatk, Weavilelvl;
}
string Lorelei::getGlaceonName()
{
    return Glaceon;
}
int Lorelei::getGlaceon()
{
    return GlaceonhP, Glaceonatk, Glaceonlvl;
}
string Lorelei::getFroslassName()
{
    return Froslass;
}
int Lorelei::getFroslass()
{
    return FroslasshP, Froslassatk, Froslasslvl;
}
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
Agatha::Agatha()
{
    Gengar = "Unkownn";
    Gengarhp = 0;
    Gengaratk = 0;
    Gengarlvl = 0;
    Chandelure = "Unkownn";
    Chandelurehp = 0;
    Chandelureatk = 0;
    Chandelurelvl = 0;
    Dragapult = "Unkownn";
    Dragapultthp = 0;
    Dragupultpatk = 0;
    Dragupultlvl = 0;
    Ahnihilape = "Unkownn";
    Ahnihilapehp = 0;
    Ahnihilapeatk = 0;
    Ahnihilapelvl = 0;
    Gholdengo = "Unkownn";
    Gholdengohp = 0;
    Gholdengoatk = 0;
    Gholdengolvl = 0;
}
Agatha::Agatha(string g, int ghp, int gatk, int glvl, string c, int chp, int catk, int clvl, string d, int dhp, int datk, int dlvl, string a, int ahp, int aatk, int alvl, string gh, int ghp2, int ghatk2, int ghlvl2)
{
    Gengar = g;
    Gengarhp = ghp;
    Gengaratk = gatk;
    Gengarlvl = glvl;
    Chandelure = c;
    Chandelurehp = chp;
    Chandelureatk = catk;
    Chandelurelvl = clvl;
    Dragapult = d;
    Dragapultthp = dhp;
    Dragupultpatk = datk;
    Dragupultlvl = dlvl;
    Ahnihilape = a;
    Ahnihilapehp = ahp;
    Ahnihilapeatk = aatk;
    Ahnihilapelvl = alvl;
    Gholdengo = gh;
    Gholdengohp = ghp2;
    Gholdengoatk = ghatk2;
    Gholdengolvl = ghlvl2;
}
void Agatha::setGengarName(string g)
{
    Gengar = g;
}
void Agatha::setGengar(int ghp, int gatk, int glvl)
{
    Gengarhp = ghp;
    Gengaratk = gatk;
    Gengarlvl = glvl;
}
void Agatha::setChandelureName(string c)
{
    Chandelure = c;
}
void Agatha::setChandelure(int chp, int catk, int clvl)
{
    Chandelurehp = chp;
    Chandelureatk = catk;
    Chandelurelvl = clvl;
}
void Agatha::setDragapultName(string d)
{
    Dragapult = d;
}
void Agatha::setDragapult(int dhp, int datk, int dlvl)
{
    Dragapultthp = dhp;
    Dragupultpatk = datk;
    Dragupultlvl = dlvl;
}
void Agatha::setAhnihilapeName(string a)
{
    Ahnihilape = a;
}
void Agatha::setAhnihilape(int ahp, int aatk, int alvl)
{
    Ahnihilapehp = ahp;
    Ahnihilapeatk = aatk;
    Ahnihilapelvl = alvl;
}
void Agatha::setGholdengoName(string gh)
{
    Gholdengo = gh;
}
void Agatha::setGholdengo(int ghp2, int ghatk2, int ghlvl2)
{
    Gholdengohp = ghp2;
    Gholdengoatk = ghatk2;
    Gholdengolvl = ghlvl2;
}
string Agatha::getGengarName()
{
    return Gengar;
}
int Agatha::getGengar()
{
    return Gengarhp, Gengaratk, Gengarlvl;
}
string Agatha::getChandelureName()
{
    return Chandelure;
}
int Agatha::getChandelure()
{
    return Chandelurehp, Chandelureatk, Chandelurelvl;
}
string Agatha::getDragapultName()
{
    return Dragapult;
}
int Agatha::getDragapult()
{
    return Dragapultthp, Dragupultpatk, Dragupultlvl;
}
string Agatha::getAhnihilapeName()
{
    return Ahnihilape;
}
int Agatha::getAhnihilape()
{
    return Ahnihilapehp, Ahnihilapeatk, Ahnihilapelvl;
}
string Agatha::getGholdengoName()
{
    return Gholdengo;
}
int Agatha::getGholdengo()
{
    return Gholdengohp, Gholdengoatk, Gholdengolvl;
}
Lance::Lance()
{
    dragonite = "Unknown";
    dragoniteatk = 0;
    dragonitehp = 0;
    dragonitelvl = 0;
    Salamence = "Unknown";
    Salamenceatk = 0;
    Salamencehp = 0;
    Salamencelvl = 0;
    Garchomp = "Unknown";
    Garchompatk = 0;
    Garchomphp = 0;
    Garchomplvl = 0;
    Altaria = "Unknown";
    Altariaatk = 0;
    Altariahp = 0;
    Altarialvl = 0;
    Archaludon = "Unknown";
    Archaludonatk = 0;
    Archaludonhp = 0;
    Archaludonlvl = 0;
}
Lance::Lance(string dname, int datk, int dhp, int dlvl, string sname, int satk, int shp, int slvl, string gname, int gatk, int ghp, int glvl, string aname, int aatk, int ahp, int alvl, string arname, int aratk, int arhp, int arlvl)
{
    dragonite = dname;
    dragoniteatk = datk;
    dragonitehp = dhp;
    dragonitelvl = dlvl;
    Salamence = sname;
    Salamenceatk = satk;
    Salamencehp = shp;
    Salamencelvl = slvl;
    Garchomp = gname;
    Garchompatk = gatk;
    Garchomphp = ghp;
    Garchomplvl = glvl;
    Altaria = aname;
    Altariaatk = aatk;
    Altariahp = ahp;
    Altarialvl = alvl;
    Archaludon = arname;
    Archaludonatk = aratk;
    Archaludonhp = arhp;
    Archaludonlvl = arlvl;
}
void Lance::setDragoniteName(string dname)
{
    dragonite = dname;
}
void Lance::setDragonite(int datk, int dhp, int dlvl)
{
    dragoniteatk = datk;
    dragonitehp = dhp;
    dragonitelvl = dlvl;
}
void Lance::setSalamenceName(string sname)
{
    Salamence = sname;
}
void Lance::setSalamence(int satk, int shp, int slvl)
{
    Salamenceatk = satk;
    Salamencehp = shp;
    Salamencelvl = slvl;
}
void Lance::setGarchompName(string gname)
{
    Garchomp = gname;
}
void Lance::setGarchomp(int gatk, int ghp, int glvl)
{
    Garchompatk = gatk;
    Garchomphp = ghp;
    Garchomplvl = glvl;
}
void Lance::setAltariaName(string aname)
{
    Altaria = aname;
}
void Lance::setAltaria(int aatk, int ahp, int alvl)
{
    Altariaatk = aatk;
    Altariahp = ahp;
    Altarialvl = alvl;
}
void Lance::setArchaludonName(string arname)
{
    Archaludon = arname;
}
void Lance::setArchaludon(int aratk, int arhp, int arlvl)
{
    Archaludonatk = aratk;
    Archaludonhp = arhp;
    Archaludonlvl = arlvl;
}
string Lance::getDragoniteName()
{
    return dragonite;
}
int Lance::getDragonite()
{
    return dragoniteatk, dragonitehp, dragonitelvl;
}
string Lance::getSalamenceName()
{
    return Salamence;
}
int Lance::getSalamence()
{
    return Salamenceatk, Salamencehp, Salamencelvl;
}
string Lance::getGarchompName()
{
    return Garchomp;
}
int Lance::getGarchomp()
{
    return Garchompatk, Garchomphp, Garchomplvl;
}
string Lance::getAltariaName()
{
    return Altaria;
}
int Lance::getAltaria()
{
    return Altariaatk, Altariahp, Altarialvl;
}
string Lance::getArchaludonName()
{
    return Archaludon;
}
int Lance::getArchaludon()
{
    return Archaludonatk, Archaludonhp, Archaludonlvl;
}
Rival::Rival()
{
    machamp = "Unknown";
    machamplvl = 0;
    machampatk = 0;
    machamphp = 0;
    latios = "Unknown";
    latioslvl = 0;
    latiosatk = 0;
    latioshp = 0;
    giratina = "Unknown";
    giratinalvl = 0;
    giratinaatk = 0;
    giratinahp = 0;
    melmetal = "Unknown";
    melmetallvl = 0;
    melmetalatk = 0;
    melmetalhp = 0;
    greninja = "Unknown";
    greninjalvl = 0;
    greninjaatk = 0;
    greninjahp = 0;
    zeraora = "Unknown";
    zeraoralvl = 0;
    zeraoraatk = 0;
    zeraorahp = 0;
}
Rival::Rival(string m, int mlvl, int matk, int mhp, string l, int llvl, int latk, int lhp, string g, int glvl, int gatk, int ghp, string me, int melvl, int meatk, int mehp, string gr, int grlvl, int gratk, int grhp, string z, int zlvl, int zatk, int zhp)
{
    machamp = m;
    machamplvl = mlvl;
    machampatk = matk;
    machamphp = mhp;
    latios = l;
    latioslvl = llvl;
    latiosatk = latk;
    latioshp = lhp;
    giratina = g;
    giratinalvl = glvl;
    giratinaatk = gatk;
    giratinahp = ghp;
    melmetal = me;
    melmetallvl = melvl;
    melmetalatk = meatk;
    melmetalhp = mehp;
    greninja = gr;
    greninjalvl = grlvl;
    greninjaatk = gratk;
    greninjahp = grhp;
    zeraora = z;
    zeraoralvl = zlvl;
    zeraoraatk = zatk;
    zeraorahp = zhp;
}
void Rival::setMachampName(string m)
{
    machamp = m;
}
void Rival::setMachamp(int mlvl, int matk, int mhp)
{
    machamplvl = mlvl;
    machampatk = matk;
    machamphp = mhp;
}
void Rival::setLatiosName(string l)
{
    latios = l;
}
void Rival::setLatios(int llvl, int latk, int lhp)
{
    latioslvl = llvl;
    latiosatk = latk;
    latioshp = lhp;
}
void Rival::setGiratinaName(string g)
{
    giratina = g;
}
void Rival::setGiratina(int glvl, int gatk, int ghp)
{
    giratinalvl = glvl;
    giratinaatk = gatk;
    giratinahp = ghp;
}
void Rival::setMelmetalName(string me)
{
    melmetal = me;
}
void Rival::setMelmetal(int melvl, int meatk, int mehp)
{
    melmetallvl = melvl;
    melmetalatk = meatk;
    melmetalhp = mehp;
}
void Rival::setGrenninjaName(string gr)
{
    greninja = gr;
}
void Rival::setGrenninja(int grlvl, int gratk, int grhp)
{
    greninjalvl = grlvl;
    greninjaatk = gratk;
    greninjahp = grhp;
}
void Rival::setZeraoraName(string z)
{
    zeraora = z;
}
void Rival::setZeraora(int zlvl, int zatk, int zhp)
{
    zeraoralvl = zlvl;
    zeraoraatk = zatk;
    zeraorahp = zhp;
}
string Rival::getMachampName()
{
    return machamp;
}
int Rival::getMachamp()
{
    return machamplvl, machampatk, machamphp;
}
string Rival::getLatiosName()
{
    return latios;
}
int Rival::getLatios()
{
    return latioslvl, latiosatk, latioshp;
}
string Rival::getGiratinaName()
{
    return giratina;
}
int Rival::getGiratina()
{
    return giratinalvl, giratinaatk, giratinahp;
}
string Rival::getMelmetalName()
{
    return melmetal;
}
int Rival::getMelmetal()
{
    return melmetallvl, melmetalatk, melmetalhp;
}
string Rival::getGreninjaName()
{
    return greninja;
}
int Rival::getGreninja()
{
    return greninjalvl, greninjaatk, greninjahp;
}
string Rival::getZeraoraName()
{
    return zeraora;
}
int Rival::getZeraora()
{
    return zeraoralvl, zeraoraatk, zeraorahp;
}