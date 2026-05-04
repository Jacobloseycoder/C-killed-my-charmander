#include "Misty.h"

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