#include "Brock.h"
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