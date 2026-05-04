#include <iostream>
#include "Battle.h"
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main()
{
    struct PokemonInfo {
        string name;
        int hp;
        int attk;
        int lvl;
        string move1;
        string move2;
        string move3;
        string move4;
    };
    Battle bat;
    string name = "", pokemon1, pokemon2, pokemon3, pokemon4;
    int attk = 0, lvl = 1, hp = 1;

    vector<vector<string>> pokedex = {
{"Bulbasaur","45","49","VineWhip","Tackle","LeechSeed","Growl"},
{"Ivysaur","60","61","RazorLeaf","VineWhip","SleepPowder","PoisonPowder"},
{"Venusaur","80","81","SolarBeam","RazorLeaf","SleepPowder","SludgeBomb"},
{"Charmander","39","51","Ember","Scratch","Smokescreen","MetalClaw"},
{"Charmeleon","58","64","Flamethrower","Ember","Slash","Smokescreen"},
{"Charizard","78","84","Flamethrower","Fly","DragonClaw","Slash"},
{"Squirtle","44","48","WaterGun","Tackle","TailWhip","Bubble"},
{"Wartortle","59","63","WaterGun","Bite","RapidSpin","Withdraw"},
{"Blastoise","79","83","HydroPump","Surf","IceBeam","Bite"},
{"Caterpie","45","30","Tackle","StringShot","BugBite","Snore"},
{"Metapod","50","10","Harden","Tackle","StringShot","BugBite"},
{"Butterfree","60","45","Confusion","SleepPowder","Gust","Psychic"},
{"Weedle","40","35","PoisonSting","StringShot","BugBite","Tackle"},
{"Kakuna","45","15","Harden","PoisonSting","StringShot","BugBite"},
{"Beedrill","65","90","Twineedle","FuryAttack","PoisonJab","DrillRun"},
{"Pidgey","40","45","Gust","Tackle","SandAttack","QuickAttack"},
{"Pidgeotto","63","60","WingAttack","QuickAttack","Whirlwind","Gust"},
{"Pidgeot","83","80","WingAttack","Fly","QuickAttack","Hurricane"},
{"Rattata","30","56","Tackle","QuickAttack","HyperFang","Bite"},
{"Raticate","55","81","HyperFang","SuperFang","Crunch","QuickAttack"},
{"Spearow","40","60","Peck","Growl","FuryAttack","Leer"},
{"Fearow","65","90","DrillPeck","FuryAttack","Agility","Leer"},
{"Ekans","35","60","Wrap","Bite","PoisonSting","Glare"},
{"Arbok","60","85","Crunch","PoisonFang","Glare","Screech"},
{"Pikachu","35","55","Thunderbolt","QuickAttack","ThunderWave","IronTail"},
{"Raichu","60","90","Thunderbolt","ThunderPunch","QuickAttack","IronTail"},
{"Sandshrew","50","75","Dig","Slash","SandAttack","DefenseCurl"},
{"Sandslash","75","100","Earthquake","Slash","RockSlide","SwordsDance"},
{"NidoranF","55","47","PoisonSting","Scratch","TailWhip","DoubleKick"},
{"Nidorina","70","61","PoisonSting","Bite","DoubleKick","HelpingHand"},
{"Nidoqueen","90","91","Earthquake","SludgeBomb","IceBeam","BodySlam"},
{"NidoranM","46","57","Peck","DoubleKick","Leer","PoisonSting"},
{"Nidorino","61","71","PoisonJab","DoubleKick","HornAttack","FuryAttack"},
{"Nidoking","81","101","Earthquake","SludgeBomb","Megahorn","IceBeam"},
{"Clefairy","70","45","Sing","DoubleSlap","Metronome","Moonlight"},
{"Clefable","95","70","Moonblast","Flamethrower","Thunderbolt","SoftBoiled"},
{"Vulpix","38","41","Ember","QuickAttack","ConfuseRay","WillOWisp"},
{"Ninetales","73","76","Flamethrower","FireBlast","ConfuseRay","NastyPlot"},
{"Jigglypuff","115","45","Sing","Pound","Rollout","DefenseCurl"},
{"Wigglytuff","140","70","BodySlam","PlayRough","ShadowBall","Thunderbolt"},
{"Zubat","40","45","Bite","WingAttack","ConfuseRay","Supersonic"},
{"Golbat","75","80","Bite","WingAttack","ConfuseRay","AirCutter"},
{"Oddish","45","50","Absorb","SleepPowder","PoisonPowder","StunSpore"},
{"Gloom","60","65","MegaDrain","SleepPowder","PoisonPowder","Acid"},
{"Vileplume","75","80","SolarBeam","GigaDrain","SleepPowder","SludgeBomb"},
{"Paras","35","70","Scratch","LeechLife","Spore","StunSpore"},
{"Parasect","60","95","Slash","Spore","GigaDrain","XScissor"},
{"Venonat","60","55","Confusion","Psybeam","StunSpore","Supersonic"},
{"Venomoth","70","65","Psychic","BugBuzz","SleepPowder","QuiverDance"},
{"Diglett","10","55","Dig","Magnitude","SandAttack","RockTomb"},
{"Dugtrio","35","100","Earthquake","RockSlide","Sandstorm","SuckerPunch"},
{"Meowth","40","45","Scratch","Bite","PayDay","Screech"},
{"Persian","65","70","Slash","Bite","Swift","Screech"},
{"Psyduck","50","51","WaterGun","Confusion","Disable","Screech"},
{"Golduck","80","81","Surf","Psychic","IceBeam","CalmMind"},
{"Mankey","40","80","KarateChop","LowKick","FocusEnergy","SeismicToss"},
{"Primeape","65","105","CloseCombat","RockSlide","UTurn","FocusEnergy"},
{"Growlithe","55","70","Ember","Bite","Roar","FlameWheel"},
{"Arcanine","90","110","Flamethrower","ExtremeSpeed","Crunch","FireBlast"},
{"Poliwag","40","50","Bubble","WaterGun","Hypnosis","DoubleSlap"},
{"Poliwhirl","65","65","WaterGun","Hypnosis","BodySlam","MudShot"},
{"Poliwrath","90","95","Surf","DynamicPunch","IcePunch","BulkUp"},
{"Abra","15","10","Teleport","Confusion","Psychic","Reflect"},
{"Kadabra","40","35","Psychic","Confusion","Recover","Disable"},
{"Alakazam","55","50","Psychic","CalmMind","Recover","ShadowBall"},
{"Machop","70","80","KarateChop","LowKick","FocusEnergy","BulkUp"},
{"Machoke","80","100","CrossChop","Submission","BulkUp","RockSlide"},
{"Machamp","90","130","DynamicPunch","CrossChop","BulkUp","StoneEdge"},
{"Bellsprout","50","75","VineWhip","Growth","SleepPowder","Acid"},
{"Weepinbell","65","90","RazorLeaf","SleepPowder","Acid","Slam"},
{"Victreebel","80","105","SolarBeam","SludgeBomb","SleepPowder","RazorLeaf"},
{"Tentacool","40","40","PoisonSting","BubbleBeam","Supersonic","Acid"},
{"Tentacruel","80","70","Surf","SludgeBomb","IceBeam","Barrier"},
{"Geodude","40","80","RockThrow","Magnitude","DefenseCurl","Rollout"},
{"Graveler","55","95","RockSlide","Magnitude","SelfDestruct","Earthquake"},
{"Golem","80","110","Earthquake","StoneEdge","Explosion","RockBlast"},
{"Ponyta","50","85","Ember","Stomp","FireSpin","FlameWheel"},
{"Rapidash","65","100","Flamethrower","Megahorn","Agility","FireSpin"},
{"Slowpoke","90","65","WaterGun","Confusion","Yawn","SlackOff"},
{"Slowbro","95","75","Surf","Psychic","SlackOff","Amnesia"},
{"Magnemite","15","35","ThunderShock","SonicBoom","ThunderWave","Spark"},
{"Magneton","50","60","Thunderbolt","ThunderWave","FlashCannon","TriAttack"},
{"Farfetchd","51","65","Peck","Slash","FuryCutter","SwordsDance"},
{"Doduo","35","85","Peck","FuryAttack","QuickAttack","TriAttack"},
{"Dodrio","60","110","DrillPeck","TriAttack","Agility","JumpKick"},
{"Seel","65","45","Headbutt","AuroraBeam","Rest","IceShard"},
{"Dewgong","90","70","IceBeam","Surf","AuroraBeam","Rest"},
{"Grimer","80","80","Sludge","PoisonGas","Minimize","MudSlap"},
{"Muk","105","105","SludgeBomb","Minimize","Curse","Toxic"},
{"Shellder","30","65","Tackle","IceShard","Clamp","Supersonic"},
{"Cloyster","50","95","IceBeam","Surf","Spikes","ShellSmash"},
{"Gastly","30","35","Lick","Hypnosis","NightShade","ConfuseRay"},
{"Haunter","45","50","ShadowBall","Hypnosis","Curse","ConfuseRay"},
{"Gengar","60","65","ShadowBall","SludgeBomb","Hypnosis","Thunderbolt"},
{"Onix","35","45","RockThrow","Bind","RockTomb","Sandstorm"},
{"Drowzee","60","48","Confusion","Hypnosis","Headbutt","Psybeam"},
{"Hypno","85","73","Psychic","Hypnosis","DreamEater","CalmMind"},
{"Krabby","30","105","Bubble","Crabhammer","ViceGrip","Stomp"},
{"Kingler","55","130","Crabhammer","XScissor","SwordsDance","Stomp"},
{"Voltorb","40","30","Spark","SonicBoom","SelfDestruct","LightScreen"},
{"Electrode","60","50","Thunderbolt","Explosion","LightScreen","Reflect"},
{"Exeggcute","60","40","Confusion","SleepPowder","LeechSeed","Reflect"},
{"Exeggutor","95","95","Psychic","SolarBeam","SleepPowder","Explosion"},
{"Cubone","50","50","BoneClub","Headbutt","FocusEnergy","Bonemerang"},
{"Marowak","60","80","Bonemerang","Earthquake","SwordsDance","RockSlide"},
{"Hitmonlee","50","110","HighJumpKick","MegaKick","BlazeKick","FocusEnergy"},
{"Hitmonchan","50","105","FirePunch","IcePunch","ThunderPunch","MachPunch"},
{"Lickitung","90","55","Lick","Slam","Disable","BodySlam"},
{"Koffing","40","65","Smog","Sludge","SelfDestruct","Toxic"},
{"Weezing","65","90","SludgeBomb","Explosion","Toxic","Flamethrower"},
{"Rhyhorn","80","85","HornAttack","Stomp","RockBlast","Bulldoze"},
{"Rhydon","105","130","Earthquake","Megahorn","StoneEdge","RockSlide"},
{"Chansey","150","5","SoftBoiled","SeismicToss","ThunderWave","Toxic"},
{"Tangela","65","55","VineWhip","SleepPowder","StunSpore","GigaDrain"},
{"Kangaskhan","105","95","MegaPunch","Crunch","Earthquake","FakeOut"},
{"Horsea","30","40","Bubble","Smokescreen","Twister","WaterPulse"},
{"Seadra","55","65","Surf","DragonBreath","Agility","IceBeam"},
{"Goldeen","45","67","Peck","HornAttack","WaterPulse","Agility"},
{"Seaking","80","91","Waterfall","Megahorn","HornDrill","AquaTail"},
{"Staryu","30","45","WaterGun","RapidSpin","Recover","Swift"},
{"Starmie","60","75","Surf","Psychic","Thunderbolt","Recover"},
{"MrMime","40","45","Psychic","Barrier","Reflect","LightScreen"},
{"Scyther","70","110","Slash","WingAttack","SwordsDance","XScissor"},
{"Jynx","65","50","IceBeam","Psychic","LovelyKiss","Blizzard"},
{"Electabuzz","65","83","ThunderPunch","Thunderbolt","LightScreen","Psychic"},
{"Magmar","65","95","Flamethrower","FirePunch","ConfuseRay","SunnyDay"},
{"Pinsir","65","115","XScissor","SwordsDance","ViceGrip","RockSlide"},
{"Tauros","75","100","BodySlam","Earthquake","Thrash","ZenHeadbutt"},
{"Magikarp","10","10","Splash","Tackle","Flail","Bounce"},
{"Gyarados","95","115","Waterfall","Crunch","DragonDance","IceFang"},
{"Lapras","130","85","Surf","IceBeam","Thunderbolt","ConfuseRay"},
{"Ditto","48","48","Transform","Rest","SleepTalk","Substitute"},
{"Eevee","55","55","QuickAttack","Bite","SandAttack","Swift"},
{"Vaporeon","130","65","Surf","IceBeam","AuroraBeam","Wish"},
{"Jolteon","65","65","Thunderbolt","ThunderWave","DoubleKick","Agility"},
{"Flareon","65","130","Flamethrower","FireBlast","QuickAttack","Bite"},
{"Porygon","65","60","TriAttack","Recover","Thunderbolt","IceBeam"},
{"Omanyte","35","40","WaterGun","RockThrow","AncientPower","Bite"},
{"Omastar","70","60","Surf","RockSlide","AncientPower","IceBeam"},
{"Kabuto","30","80","Scratch","AquaJet","AncientPower","MudShot"},
{"Kabutops","60","115","Slash","Waterfall","AncientPower","SwordsDance"},
{"Aerodactyl","80","105","RockSlide","WingAttack","Crunch","Fly"},
{"Snorlax","160","110","BodySlam","Rest","SleepTalk","Earthquake"},
{"Articuno","90","85","IceBeam","Fly","Reflect","Agility"},
{"Zapdos","90","90","Thunderbolt","DrillPeck","Agility","LightScreen"},
{"Moltres","90","100","Flamethrower","Fly","SunnyDay","FireBlast"},
{"Dratini","41","64","DragonBreath","ThunderWave","Slam","Agility"},
{"Dragonair","61","84","DragonBreath","Surf","ThunderWave","Agility"},
{"Dragonite","91","134","DragonClaw","Fly","Thunderbolt","IceBeam"},
{"Mewtwo","106","110","Psychic","CalmMind","Recover","IceBeam"},
{"Mew","100","100","Psychic","Transform","Metronome","SoftBoiled"}
    };

    //this will generate a random pokemon depending on gyms beaten
    //need a way to track gyms beaten and use that to determine which pokemon can be generated
    //need to make sure not to generate evoved forms of pokemon
    //need a list of pokemon that can be generated at each gym level
    //need to make a list of pokemon that evolve from what pokemon
    //need to make a list of pokemon that evolve at what gym level
    cout << "Enter the name of your pokemon: ";
    cin >> name;
    bat.setName(name);
    if (name.empty())
    {
        cout << "Please enter a valid pokemon name." << endl;
    }
    else
    {
        string targetName = bat.getName();

        auto it = std::find_if(pokedex.begin(), pokedex.end(), [&](const vector<string>& p) {
            return p[0] == targetName;
            });
        if (it != pokedex.end()) {
            int hp = stoi((*it)[1]);
            int attk = stoi((*it)[2]);
            string move1 = (*it)[3];
            string move2 = (*it)[4];
            string move3 = (*it)[5];
            string move4 = (*it)[6];
            bat.setHp(hp);
            bat.setAttk(attk);
            bat.setMove1(move1);
            bat.setMove2(move2);
            bat.setMove3(move3);
            bat.setMove4(move4);

            if (it != pokedex.end()) {
                int index = std::distance(pokedex.begin(), it);
                if ((*it)[0] == bat.getName())
                {
                    cout << "You used " << bat.getName() << "!" << endl;
                    cout << "Your HP is " << bat.getHp() << ". Prepare for battle!" << endl;
                    int choice = 0;
                    while (choice < 1 || choice > 4)
                    {
                        cout << "Choose a move: " << endl;
                        cout << "1. " << bat.getMove1() << "\tDamage: " << bat.getAttk() << endl;
                        cout << "2. " << bat.getMove2() << "\tDamage: " << bat.getAttk() << endl;
                        cout << "3. " << bat.getMove3() << "\tDamage: " << bat.getAttk() << endl;
                        cout << "4. " << bat.getMove4() << "\tDamage: " << bat.getAttk() << endl;
                        cout << ":> ";
                        cin >> choice;

                        switch (choice)
                        {
                        case 1:
                            cout << "You used " << bat.getMove1() << "!" << endl;
                            cout << "It dealt " << bat.getAttk() << " damage!" << endl;
                            hp -= bat.getAttk();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                return 0;
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 2:
                            cout << "You used " << bat.getMove2() << "!" << endl;
                            cout << "It dealt " << bat.getAttk() << " damage!" << endl;
                            hp -= bat.getAttk();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                return 0;
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 3:
                            cout << "You used " << bat.getMove3() << "!" << endl;
                            cout << "It dealt " << bat.getAttk() << " damage!" << endl;
                            hp -= bat.getAttk();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                return 0;
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 4:
                            cout << "You used " << bat.getMove4() << "!" << endl;
                            cout << "It dealt " << bat.getAttk() << " damage!" << endl;
                            hp -= bat.getAttk();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                return 0;
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please choose a move between 1 and 4." << endl;
                            break;
                        }
                    }
                }


            }
            else
            {
                cout << "Pokemon not found. Please enter a valid pokemon name." << endl;
            }
        }
        return 0;
    }
}
        