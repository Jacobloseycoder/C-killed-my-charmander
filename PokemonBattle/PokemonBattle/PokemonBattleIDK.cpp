#include <iostream>
#include "Battle.h"
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;
using std::cout;
using std::cin;
using std::endl;


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
{"Mew","100","100","Psychic","Transform","Metronome","SoftBoiled"},
{"Chikorita","45","49","RazorLeaf","Growl","Reflect","PoisonPowder"},
{"Bayleef","60","61","RazorLeaf","Reflect","PoisonPowder","Synthesis"},
{"Meganium","80","81","SolarBeam","RazorLeaf","Reflect","Synthesis"},
{"Cyndaquil","39","51","Ember","QuickAttack","Smokescreen","FlameWheel"},
{"Quilava","58","64","FlameWheel","QuickAttack","Smokescreen","Swift"},
{"Typhlosion","78","84","Flamethrower","QuickAttack","Swift","FireBlast"},
{"Totodile","50","65","WaterGun","Bite","Leer","Rage"},
{"Croconaw","65","80","Bite","WaterGun","Rage","ScaryFace"},
{"Feraligatr","85","105","Surf","Crunch","IceFang","DragonDance"},
{"Sentret","35","46","Tackle","QuickAttack","DefenseCurl","FurySwipes"},
{"Furret","85","76","QuickAttack","Slam","Amnesia","BatonPass"},
{"Hoothoot","60","30","Peck","Hypnosis","Growl","Reflect"},
{"Noctowl","100","50","AirSlash","Hypnosis","Reflect","Psychic"},
{"Ledyba","40","10","Tackle","Supersonic","Reflect","LightScreen"},
{"Ledian","55","35","CometPunch","LightScreen","Reflect","BatonPass"},
{"Spinarak","40","60","PoisonSting","StringShot","NightShade","ScaryFace"},
{"Ariados","70","90","SludgeBomb","SpiderWeb","NightSlash","SuckerPunch"},
{"Crobat","85","90","CrossPoison","AirSlash","ConfuseRay","Bite"},
{"Chinchou","75","38","Bubble","ThunderShock","Supersonic","ConfuseRay"},
{"Lanturn","115","58","Surf","Thunderbolt","ConfuseRay","IceBeam"},
{"Pichu","10","40","ThunderShock","Charm","TailWhip","SweetKiss"},
{"Cleffa","50","15","Pound","Charm","Sing","SweetKiss"},
{"Igglybuff","90","30","Pound","Sing","DefenseCurl","Charm"},
{"Togepi","35","10","Metronome","Charm","SweetKiss","AncientPower"},
{"Togetic","55","40","AirSlash","Metronome","AncientPower","Safeguard"},
{"Natu","40","50","Peck","Confusion","NightShade","Teleport"},
{"Xatu","65","75","Psychic","AirSlash","ConfuseRay","FutureSight"},
{"Mareep","55","40","ThunderShock","Growl","ThunderWave","CottonSpore"},
{"Flaaffy","70","55","ThunderShock","ThunderWave","CottonSpore","TakeDown"},
{"Ampharos","90","75","Thunderbolt","ThunderWave","PowerGem","SignalBeam"},
{"Bellossom","75","80","GigaDrain","SleepPowder","StunSpore","QuiverDance"},
{"Marill","70","10","Bubble","Rollout","TailWhip","DefenseCurl"},
{"Azumarill","100","50","Waterfall","PlayRough","AquaJet","BellyDrum"},
{"Sudowoodo","70","100","RockSlide","Mimic","Counter","SuckerPunch"},
{"Politoed","90","75","Surf","Hypnosis","PerishSong","IceBeam"},
{"Hoppip","35","35","Tackle","StunSpore","SleepPowder","LeechSeed"},
{"Skiploom","55","45","MegaDrain","SleepPowder","StunSpore","LeechSeed"},
{"Jumpluff","75","55","GigaDrain","SleepPowder","LeechSeed","Acrobatics"},
{"Aipom","55","70","Scratch","Swift","Agility","BatonPass"},
{"Sunkern","30","30","Absorb","Growth","MegaDrain","SunnyDay"},
{"Sunflora","75","75","SolarBeam","GigaDrain","SunnyDay","Growth"},
{"Yanma","65","65","WingAttack","Supersonic","QuickAttack","DoubleTeam"},
{"Wooper","55","45","WaterGun","MudShot","TailWhip","Slam"},
{"Quagsire","95","85","Surf","Earthquake","Amnesia","IcePunch"},
{"Espeon","65","65","Psychic","CalmMind","ShadowBall","MorningSun"},
{"Umbreon","95","65","FoulPlay","ConfuseRay","Moonlight","Toxic"},
{"Murkrow","60","85","Peck","Pursuit","NightShade","Haze"},
{"Slowking","95","75","Surf","Psychic","SlackOff","Amnesia"},
{"Misdreavus","60","60","ShadowBall","ConfuseRay","MeanLook","PainSplit"},
{"Unown","48","71","HiddenPower","HiddenPower","HiddenPower","HiddenPower"},
{"Wobbuffet","190","33","Counter","MirrorCoat","Safeguard","DestinyBond"},
{"Girafarig","70","80","Psychic","Crunch","Agility","BatonPass"},
{"Pineco","50","65","Tackle","SelfDestruct","Protect","BugBite"},
{"Forretress","75","90","Spikes","RapidSpin","Explosion","GyroBall"},
{"Dunsparce","100","70","Headbutt","Glare","Roost","AncientPower"},
{"Gligar","65","75","Slash","SandAttack","QuickAttack","Acrobatics"},
{"Steelix","75","85","Earthquake","IronTail","RockSlide","Sandstorm"},
{"Snubbull","60","80","Bite","Charm","Headbutt","ScaryFace"},
{"Granbull","90","110","PlayRough","Crunch","ThunderFang","CloseCombat"},
{"Qwilfish","65","95","Waterfall","PoisonJab","Spikes","ToxicSpikes"},
{"Scizor","70","130","BulletPunch","XScissor","SwordsDance","IronHead"},
{"Shuckle","10","10","Wrap","Toxic","Protect","Rest"},
{"Heracross","80","115","Megahorn","CloseCombat","RockSlide","SwordsDance"},
{"Sneasel","55","95","IceShard","Slash","FaintAttack","Agility"},
{"Teddiursa","60","80","Scratch","Lick","FurySwipes","Rest"},
{"Ursaring","90","130","Slash","CloseCombat","Crunch","Rest"},
{"Slugma","40","40","Ember","RockThrow","Harden","Amnesia"},
{"Magcargo","50","50","Flamethrower","RockSlide","Recover","Amnesia"},
{"Swinub","50","50","PowderSnow","MudSlap","Endure","IcyWind"},
{"Piloswine","100","100","IceFang","Earthquake","TakeDown","Blizzard"},
{"Corsola","55","55","BubbleBeam","Recover","RockBlast","MirrorCoat"},
{"Remoraid","35","65","WaterGun","LockOn","Psybeam","AuroraBeam"},
{"Octillery","75","105","Surf","Octazooka","IceBeam","Flamethrower"},
{"Delibird","45","55","Present","IceShard","QuickAttack","AerialAce"},
{"Mantine","85","40","Surf","AirSlash","ConfuseRay","IceBeam"},
{"Skarmory","65","80","SteelWing","Fly","Spikes","Roost"},
{"Houndour","45","60","Ember","Bite","Smog","Roar"},
{"Houndoom","75","90","Flamethrower","Crunch","NastyPlot","DarkPulse"},
{"Kingdra","75","95","Surf","DragonBreath","IceBeam","RainDance"},
{"Phanpy","90","60","Tackle","Rollout","DefenseCurl","TakeDown"},
{"Donphan","90","110","Earthquake","Rollout","RapidSpin","StoneEdge"},
{"Porygon1","85","80","TriAttack","Recover","Thunderbolt","IceBeam"},
{"Stantler","73","95","Stomp","Hypnosis","ConfuseRay","ShadowBall"},
{"Smeargle","55","10","Sketch","Sketch","Sketch","Sketch"},
{"Tyrogue","35","35","Tackle","FocusEnergy","Counter","FakeOut"},
{"Hitmontop","50","95","RapidSpin","CloseCombat","Counter","Detect"},
{"Smoochum","45","30","PowderSnow","Lick","SweetKiss","Confusion"},
{"Elekid","45","63","ThunderPunch","QuickAttack","Leer","Swift"},
{"Magby","45","75","Ember","Smokescreen","FirePunch","ConfuseRay"},
{"Miltank","95","80","BodySlam","MilkDrink","Rollout","HealBell"},
{"Blissey","155","10","SoftBoiled","SeismicToss","ThunderWave","Toxic"},
{"Raikou","90","85","Thunderbolt","CalmMind","Reflect","Extrasensory"},
{"Entei","115","115","Flamethrower","FireBlast","SunnyDay","Crunch"},
{"Suicune","100","75","Surf","CalmMind","IceBeam","Rest"},
{"Larvitar","50","64","Bite","RockSlide","Screech","Sandstorm"},
{"Pupitar","70","84","RockSlide","Screech","Sandstorm","Thrash"},
{"Tyranitar","100","134","Crunch","StoneEdge","Earthquake","DragonDance"},
{"Lugia","106","90","Aeroblast","Psychic","Recover","CalmMind"},
{"Ho-Oh","106","130","SacredFire","Fly","SunnyDay","Recover"},
{"Celebi","100","100","Psychic","GigaDrain","Recover","HealBell"},
{"Treecko","40","45","Absorb","QuickAttack","Pursuit","Screech"},
{"Grovyle","50","65","LeafBlade","QuickAttack","FuryCutter","Screech"},
{"Sceptile","70","85","LeafBlade","DragonClaw","QuickAttack","Agility"},
{"Torchic","45","60","Ember","Scratch","FocusEnergy","Peck"},
{"Combusken","60","85","DoubleKick","Ember","Peck","BulkUp"},
{"Blaziken","80","120","BlazeKick","SkyUppercut","BulkUp","BraveBird"},
{"Mudkip","50","70","WaterGun","Tackle","MudSlap","Protect"},
{"Marshtomp","70","85","WaterGun","MudShot","MudSlap","Protect"},
{"Swampert","100","110","Surf","Earthquake","IceBeam","Protect"},
{"Poochyena","35","55","Tackle","Bite","Howl","SandAttack"},
{"Mightyena","70","90","Crunch","TakeDown","Howl","SandAttack"},
{"Zigzagoon","38","30","Tackle","Headbutt","TailWhip","SandAttack"},
{"Linoone","78","70","Slash","Headbutt","BellyDrum","ShadowBall"},
{"Wurmple","45","45","Tackle","StringShot","PoisonSting","BugBite"},
{"Silcoon","50","35","Harden","Tackle","StringShot","BugBite"},
{"Beautifly","60","70","Gust","Absorb","StunSpore","SilverWind"},
{"Cascoon","50","35","Harden","Tackle","StringShot","BugBite"},
{"Dustox","60","50","Gust","Confusion","PoisonPowder","SilverWind"},
{"Lotad","40","30","Absorb","Bubble","Growl","Astonish"},
{"Lombre","60","50","WaterGun","FakeOut","NaturePower","Astonish"},
{"Ludicolo","80","70","Surf","GigaDrain","RainDance","IceBeam"},
{"Seedot","40","40","Bide","Growth","NaturePower","Tackle"},
{"Nuzleaf","70","70","RazorLeaf","FakeOut","NaturePower","FaintAttack"},
{"Shiftry","90","100","LeafBlade","FaintAttack","Extrasensory","SwordsDance"},
{"Taillow","40","55","Peck","QuickAttack","FocusEnergy","WingAttack"},
{"Swellow","60","85","AerialAce","QuickAttack","DoubleTeam","Facade"},
{"Wingull","40","30","WaterGun","WingAttack","Supersonic","Mist"},
{"Pelipper","60","50","Surf","Fly","Protect","IceBeam"},
{"Ralts","28","25","Confusion","Growl","DoubleTeam","Teleport"},
{"Kirlia","38","35","Confusion","DoubleTeam","CalmMind","Psychic"},
{"Gardevoir","68","65","Psychic","CalmMind","Thunderbolt","ShadowBall"},
{"Surskit","40","30","Bubble","QuickAttack","SweetScent","WaterSport"},
{"Masquerain","70","60","AirSlash","BugBuzz","Intimidate","QuiverDance"},
{"Shroomish","60","40","Absorb","StunSpore","LeechSeed","Headbutt"},
{"Breloom","60","130","MachPunch","SkyUppercut","Spore","SwordsDance"},
{"Slakoth","60","60","Scratch","Yawn","Encore","SlackOff"},
{"Vigoroth","80","80","Slash","Encore","Counter","FurySwipes"},
{"Slaking","150","160","HyperBeam","SlackOff","ShadowBall","Earthquake"},
{"Nincada","31","45","Scratch","FurySwipes","SandAttack","LeechLife"},
{"Ninjask","61","90","Slash","AerialAce","SwordsDance","DoubleTeam"},
{"Shedinja","1","90","ShadowBall","XScissor","SwordsDance","Protect"},
{"Whismur","64","51","Pound","Uproar","Supersonic","Howl"},
{"Loudred","84","71","Stomp","Uproar","Supersonic","Screech"},
{"Exploud","104","91","HyperVoice","Crunch","IceBeam","FireBlast"},
{"Makuhita","72","60","ArmThrust","BulkUp","KnockOff","FakeOut"},
{"Hariyama","144","120","CloseCombat","BulkUp","KnockOff","FakeOut"},
{"Azurill","50","20","Bubble","Slam","Charm","TailWhip"},
{"Nosepass","30","45","RockThrow","ThunderWave","Block","Sandstorm"},
{"Skitty","50","45","Tackle","Sing","Attract","Assist"},
{"Delcatty","70","65","Sing","Attract","Assist","DoubleEdge"},
{"Sableye","50","75","ShadowBall","NightShade","ConfuseRay","Detect"},
{"Mawile","50","85","Bite","IronHead","SwordsDance","Crunch"},
{"Aron","50","70","Tackle","MetalClaw","Harden","Headbutt"},
{"Lairon","60","90","IronHead","RockSlide","Protect","TakeDown"},
{"Aggron","70","110","IronHead","RockSlide","Earthquake","DoubleEdge"},
{"Meditite","30","40","Confusion","Detect","HiddenPower","CalmMind"},
{"Medicham","60","60","Psychic","HighJumpKick","CalmMind","IcePunch"},
{"Electrike","40","45","ThunderShock","QuickAttack","Howl","Spark"},
{"Manectric","70","75","Thunderbolt","Bite","ThunderWave","Flamethrower"},
{"Plusle","60","50","Thunderbolt","QuickAttack","ThunderWave","HelpingHand"},
{"Minun","60","40","Thunderbolt","QuickAttack","ThunderWave","HelpingHand"},
{"Volbeat","65","73","SignalBeam","ConfuseRay","TailGlow","DoubleTeam"},
{"Illumise","65","47","SilverWind","Charm","Moonlight","SweetScent"},
{"Roselia","50","60","MagicalLeaf","StunSpore","LeechSeed","GigaDrain"},
{"Gulpin","70","43","Sludge","Yawn","Toxic","Amnesia"},
{"Swalot","100","73","SludgeBomb","Yawn","Toxic","Amnesia"},
{"Carvanha","45","90","Bite","Crunch","Screech","AquaJet"},
{"Sharpedo","70","120","Crunch","Surf","IceFang","Screech"},
{"Wailmer","130","70","WaterGun","Rollout","Rest","Splash"},
{"Wailord","170","90","Surf","IceBeam","Rest","BodySlam"},
{"Numel","60","60","Ember","Magnitude","Amnesia","TakeDown"},
{"Camerupt","70","100","Earthquake","Flamethrower","RockSlide","Amnesia"},
{"Torkoal","70","85","Flamethrower","Smokescreen","Curse","Protect"},
{"Spoink","60","25","Psybeam","ConfuseRay","TeeterDance","Psychic"},
{"Grumpig","80","45","Psychic","ConfuseRay","CalmMind","ShadowBall"},
{"Spinda","60","60","DizzyPunch","TeeterDance","FakeOut","Uproar"},
{"Trapinch","45","100","Bite","SandAttack","Dig","Crunch"},
{"Vibrava","50","70","DragonBreath","Sandstorm","Fly","Screech"},
{"Flygon","80","100","Earthquake","DragonClaw","Fly","FireBlast"},
{"Cacnea","50","85","NeedleArm","LeechSeed","Growth","PinMissile"},
{"Cacturne","70","115","NeedleArm","FaintAttack","Sandstorm","SuckerPunch"},
{"Swablu","45","40","Peck","Sing","Safeguard","MirrorMove"},
{"Altaria","75","70","DragonClaw","Fly","DragonDance","Flamethrower"},
{"Zangoose","73","115","Slash","SwordsDance","CloseCombat","QuickAttack"},
{"Seviper","73","100","PoisonFang","Crunch","Screech","Coil"},
{"Lunatone","70","55","Psychic","RockSlide","CalmMind","Hypnosis"},
{"Solrock","70","95","RockSlide","Psychic","SunnyDay","CalmMind"},
{"Barboach","50","48","WaterGun","MudShot","Amnesia","Spark"},
{"Whiscash","110","78","Surf","Earthquake","Amnesia","IceBeam"},
{"Corphish","43","80","Bubble","Crabhammer","SwordsDance","KnockOff"},
{"Crawdaunt","63","120","Crabhammer","Crunch","SwordsDance","KnockOff"},
{"Baltoy","40","40","Confusion","RapidSpin","LightScreen","Reflect"},
{"Claydol","60","70","Psychic","Earthquake","LightScreen","RapidSpin"},
{"Lileep","66","41","MegaDrain","ConfuseRay","Ingrain","AncientPower"},
{"Cradily","86","81","GigaDrain","AncientPower","ConfuseRay","Recover"},
{"Anorith","45","95","Scratch","RockSlide","FuryCutter","MetalClaw"},
{"Armaldo","75","125","XScissor","RockSlide","SwordsDance","Earthquake"},
{"Feebas","20","15","Splash","Tackle","Flail","Recover"},
{"Milotic","95","60","Surf","IceBeam","Recover","DragonBreath"},
{"Castform","70","70","WeatherBall","SunnyDay","RainDance","Hail"},
{"Kecleon","60","90","Slash","ShadowSneak","SuckerPunch","Feint"},
{"Shuppet","44","75","Astonish","NightShade","Curse","Screech"},
{"Banette","64","115","ShadowBall","SuckerPunch","WillOWisp","Curse"},
{"Duskull","20","40","Astonish","ConfuseRay","WillOWisp","NightShade"},
{"Dusclops","40","70","ShadowPunch","ConfuseRay","WillOWisp","Protect"},
{"Tropius","99","68","RazorLeaf","AirSlash","SunnyDay","Synthesis"},
{"Chimecho","65","50","Psychic","HealBell","Yawn","Recover"},
{"Absol","65","130","Slash","SwordsDance","Crunch","PsychoCut"},
{"Wynaut","95","23","Counter","MirrorCoat","Safeguard","DestinyBond"},
{"Snorunt","50","50","PowderSnow","Bite","DoubleTeam","IceShard"},
{"Glalie","80","80","IceBeam","Crunch","Hail","Protect"},
{"Spheal","70","40","WaterGun","PowderSnow","BodySlam","Rollout"},
{"Sealeo","90","60","IceBall","AuroraBeam","Rest","BodySlam"},
{"Walrein","110","80","Surf","IceBeam","BodySlam","Rest"},
{"Clamperl","35","64","WaterGun","Clamp","Protect","IceBeam"},
{"Huntail","55","104","Crunch","Waterfall","IceFang","Screech"},
{"Gorebyss","55","84","Surf","Psychic","Agility","IceBeam"},
{"Relicanth","100","90","Waterfall","RockSlide","Amnesia","Rest"},
{"Luvdisc","43","30","WaterGun","Attract","SweetKiss","AquaRing"},
{"Bagon","45","75","Bite","Ember","DragonBreath","Headbutt"},
{"Shelgon","65","95","DragonBreath","Protect","Headbutt","RockSlide"},
{"Salamence","95","135","DragonClaw","Fly","Flamethrower","Crunch"},
{"Beldum","40","55","TakeDown","TakeDown","TakeDown","TakeDown"},
{"Metang","60","75","MetalClaw","Psychic","Pursuit","Confusion"},
{"Metagross","80","135","MeteorMash","Psychic","Earthquake","Agility"},
{"Regirock","80","100","RockSlide","Curse","Superpower","Explosion"},
{"Regice","80","50","IceBeam","Amnesia","Thunderbolt","Rest"},
{"Registeel","80","75","IronHead","Curse","Amnesia","Toxic"},
{"Latias","80","80","Psychic","DragonClaw","CalmMind","Recover"},
{"Latios","80","90","Psychic","DragonClaw","CalmMind","Thunderbolt"},
{"Kyogre","100","100","Surf","IceBeam","Thunder","CalmMind"},
{"Groudon","100","150","Earthquake","FireBlast","SolarBeam","SwordsDance"},
{"Rayquaza","105","150","DragonClaw","Fly","ExtremeSpeed","Crunch"},
{"Jirachi","100","100","Psychic","IronHead","Wish","CalmMind"},
{"Deoxys","50","150","Psychic","PsychoBoost","Recover","ExtremeSpeed"},
{"Turtwig","55","68","RazorLeaf","Tackle","Withdraw","LeechSeed"},
{"Grotle","75","89","RazorLeaf","Bite","Curse","LeechSeed"},
{"Torterra","95","109","Earthquake","WoodHammer","Crunch","LeechSeed"},
{"Chimchar","44","58","Ember","Scratch","Taunt","MachPunch"},
{"Monferno","64","78","FlameWheel","MachPunch","Taunt","FurySwipes"},
{"Infernape","76","104","Flamethrower","CloseCombat","MachPunch","GrassKnot"},
{"Piplup","53","51","Bubble","Pound","Growl","Peck"},
{"Prinplup","64","66","BubbleBeam","MetalClaw","Peck","Growl"},
{"Empoleon","84","86","Surf","FlashCannon","IceBeam","DrillPeck"},
{"Starly","40","55","Tackle","QuickAttack","WingAttack","Growl"},
{"Staravia","55","75","WingAttack","QuickAttack","DoubleTeam","Endeavor"},
{"Staraptor","85","120","BraveBird","CloseCombat","QuickAttack","Uturn"},
{"Bidoof","59","45","Tackle","DefenseCurl","Rollout","Headbutt"},
{"Bibarel","79","85","Waterfall","HyperFang","SuperFang","Curse"},
{"Kricketot","37","25","Growl","Bide","BugBite","StruggleBug"},
{"Kricketune","77","85","XScissor","Slash","Sing","FuryCutter"},
{"Shinx","45","65","Tackle","Spark","Leer","Bite"},
{"Luxio","60","85","Spark","Bite","Roar","Swagger"},
{"Luxray","80","120","Thunderbolt","Crunch","IceFang","Superpower"},
{"Budew","40","30","Absorb","Growth","WaterSport","StunSpore"},
{"Roserade","60","70","EnergyBall","SludgeBomb","ToxicSpikes","ShadowBall"},
{"Cranidos","67","125","Headbutt","AncientPower","Leer","TakeDown"},
{"Rampardos","97","165","HeadSmash","Earthquake","ZenHeadbutt","Crunch"},
{"Shieldon","30","42","Tackle","IronDefense","Taunt","MetalSound"},
{"Bastiodon","60","52","IronHead","StoneEdge","MetalSound","Protect"},
{"Burmy","40","29","Protect","Tackle","BugBite","HiddenPower"},
{"Wormadam","60","59","BugBuzz","Protect","QuiverDance","Psychic"},
{"Mothim","70","94","BugBuzz","AirSlash","QuiverDance","ShadowBall"},
{"Combee","30","30","Gust","SweetScent","BugBite","StruggleBug"},
{"Vespiquen","70","80","AttackOrder","DefendOrder","HealOrder","AirSlash"},
{"Pachirisu","60","45","Spark","QuickAttack","Charm","SuperFang"},
{"Buizel","55","65","WaterGun","QuickAttack","Pursuit","AquaJet"},
{"Floatzel","85","105","Waterfall","IceFang","Crunch","AquaJet"},
{"Cherubi","45","35","Absorb","Growth","SunnyDay","LeechSeed"},
{"Cherrim","70","60","SolarBeam","SunnyDay","Growth","WeatherBall"},
{"Shellos","76","48","MudSlap","WaterPulse","Recover","AncientPower"},
{"Gastrodon","111","83","Surf","EarthPower","Recover","IceBeam"},
{"Ambipom","75","100","DoubleHit","FakeOut","Uturn","LowKick"},
{"Drifloon","90","50","Astonish","Gust","Minimize","Stockpile"},
{"Drifblim","150","80","ShadowBall","Fly","Stockpile","Explosion"},
{"Buneary","55","66","QuickAttack","JumpKick","Charm","Agility"},
{"Lopunny","65","76","Return","JumpKick","Charm","Agility"},
{"Mismagius","60","60","ShadowBall","PowerGem","NastyPlot","Psychic"},
{"Honchkrow","100","125","BraveBird","NightSlash","Superpower","Roost"},
{"Glameow","49","55","Scratch","Bite","FakeOut","FurySwipes"},
{"Purugly","71","82","Slash","BodySlam","FakeOut","PlayRough"},
{"Chingling","45","30","Wrap","Confusion","Yawn","Astonish"},
{"Stunky","63","63","PoisonGas","Bite","FurySwipes","Smokescreen"},
{"Skuntank","103","93","PoisonJab","Crunch","Flamethrower","Toxic"},
{"Bronzor","57","24","Confusion","IronDefense","Hypnosis","Extrasensory"},
{"Bronzong","67","89","GyroBall","Psychic","Hypnosis","Earthquake"},
{"Bonsly","50","80","RockThrow","FakeTears","Copycat","LowKick"},
{"MimeJr","20","25","Confusion","Copycat","Barrier","Encore"},
{"Happiny","100","5","Pound","Charm","Copycat","Refresh"},
{"Chatot","76","65","Chatter","WingAttack","HyperVoice","Uturn"},
{"Spiritomb","50","92","ShadowBall","DarkPulse","WillOWisp","SuckerPunch"},
{"Gible","58","70","DragonBreath","SandAttack","TakeDown","Slash"},
{"Gabite","68","90","DragonClaw","Slash","Sandstorm","Dig"},
{"Garchomp","108","130","Earthquake","DragonClaw","StoneEdge","SwordsDance"},
{"Munchlax","135","85","BodySlam","Rest","SleepTalk","Crunch"},
{"Riolu","40","70","QuickAttack","ForcePalm","Counter","Endure"},
{"Lucario","70","110","AuraSphere","CloseCombat","ExtremeSpeed","FlashCannon"},
{"Hippopotas","68","72","SandAttack","Bite","Yawn","Dig"},
{"Hippowdon","108","112","Earthquake","Crunch","SlackOff","StoneEdge"},
{"Skorupi","40","50","PoisonSting","KnockOff","PinMissile","Bite"},
{"Drapion","70","90","CrossPoison","Crunch","Earthquake","SwordsDance"},
{"Croagunk","48","61","PoisonSting","LowKick","MudSlap","FakeOut"},
{"Toxicroak","83","106","PoisonJab","DrainPunch","SuckerPunch","SwordsDance"},
{"Carnivine","74","100","VineWhip","Bite","Growth","Crunch"},
{"Finneon","49","49","WaterGun","Attract","Gust","RainDance"},
{"Lumineon","69","69","Surf","IceBeam","RainDance","Uturn"},
{"Mantyke","45","20","Bubble","Supersonic","ConfuseRay","SignalBeam"},
{"Snover","60","62","PowderSnow","RazorLeaf","IcyWind","Mist"},
{"Abomasnow","90","92","Blizzard","WoodHammer","IceShard","Earthquake"},
{"Weavile","70","120","IcePunch","NightSlash","SwordsDance","IceShard"},
{"Magnezone","70","70","Thunderbolt","FlashCannon","VoltSwitch","TriAttack"},
{"Lickilicky","110","85","BodySlam","PowerWhip","Earthquake","Wish"},
{"Rhyperior","115","140","Earthquake","StoneEdge","Megahorn","HammerArm"},
{"Tangrowth","100","100","PowerWhip","SleepPowder","KnockOff","GigaDrain"},
{"Electivire","75","123","ThunderPunch","WildCharge","IcePunch","Earthquake"},
{"Magmortar","75","95","Flamethrower","FireBlast","Thunderbolt","Psychic"},
{"Togekiss","85","50","AirSlash","AuraSphere","ThunderWave","Roost"},
{"Yanmega","86","76","BugBuzz","AirSlash","AncientPower","Detect"},
{"Leafeon","65","110","LeafBlade","SwordsDance","QuickAttack","XScissor"},
{"Glaceon","65","60","IceBeam","ShadowBall","Hail","SignalBeam"},
{"Gliscor","75","95","Earthquake","AerialAce","SwordsDance","Roost"},
{"Mamoswine","110","130","Earthquake","IceShard","IcicleCrash","StoneEdge"},
{"PorygonZ","85","80","TriAttack","NastyPlot","DarkPulse","IceBeam"},
{"Gallade","68","125","CloseCombat","PsychoCut","SwordsDance","LeafBlade"},
{"Probopass","60","55","PowerGem","FlashCannon","ThunderWave","EarthPower"},
{"Dusknoir","45","100","ShadowPunch","Earthquake","WillOWisp","PainSplit"},
{"Froslass","70","80","IceBeam","ShadowBall","DestinyBond","Spikes"},
{"Rotom","50","50","Thunderbolt","ShadowBall","WillOWisp","VoltSwitch"},
{"Uxie","75","75","Psychic","CalmMind","Yawn","Uturn"},
{"Mesprit","80","105","Psychic","Thunderbolt","IceBeam","Uturn"},
{"Azelf","75","125","Psychic","Flamethrower","NastyPlot","Explosion"},
{"Dialga","100","120","RoarOfTime","FlashCannon","Thunderbolt","AuraSphere"},
{"Palkia","90","120","SpacialRend","Surf","Thunderbolt","FireBlast"},
{"Heatran","91","90","Flamethrower","FlashCannon","EarthPower","LavaPlume"},
{"Regigigas","110","160","GigaImpact","Earthquake","ZenHeadbutt","FirePunch"},
{"Giratina","150","100","ShadowForce","DragonClaw","AuraSphere","WillOWisp"},
{"Cresselia","120","70","Psychic","Moonlight","CalmMind","IceBeam"},
{"Phione","80","80","Surf","IceBeam","RainDance","Uturn"},
{"Manaphy","100","100","Surf","TailGlow","IceBeam","Psychic"},
{"Darkrai","70","90","DarkPulse","Hypnosis","DreamEater","NastyPlot"},
{"Shaymin","100","100","SeedFlare","EarthPower","LeechSeed","Synthesis"},
{"Arceus","120","120","Judgment","Recover","ExtremeSpeed","CalmMind"},
{"Victini","100","100","VCreate","Psychic","FlameCharge","QuickAttack"},
{"Snivy","45","45","VineWhip","Tackle","Leer","Wrap"},
{"Servine","60","60","LeafTornado","Wrap","Growth","LeechSeed"},
{"Serperior","75","75","LeafStorm","Coil","GigaDrain","Glare"},
{"Tepig","65","63","Ember","Tackle","TailWhip","DefenseCurl"},
{"Pignite","90","93","FlameCharge","ArmThrust","Rollout","TakeDown"},
{"Emboar","110","123","FlareBlitz","HammerArm","WildCharge","HeadSmash"},
{"Oshawott","55","55","WaterGun","Tackle","TailWhip","FocusEnergy"},
{"Dewott","75","75","RazorShell","FuryCutter","WaterPulse","FocusEnergy"},
{"Samurott","95","100","Surf","Megahorn","IceBeam","SwordsDance"},
{"Patrat","45","55","Tackle","Bite","Detect","SandAttack"},
{"Watchog","60","85","Crunch","Hypnosis","ConfuseRay","SuperFang"},
{"Lillipup","45","60","Tackle","Bite","OdorSleuth","TakeDown"},
{"Herdier","65","80","TakeDown","Crunch","Roar","WorkUp"},
{"Stoutland","85","110","Return","Crunch","IceFang","WorkUp"},
{"Purrloin","41","50","Scratch","Assist","SandAttack","FurySwipes"},
{"Liepard","64","88","NightSlash","PlayRough","SuckerPunch","NastyPlot"},
{"Pansage","50","53","VineWhip","Lick","LeechSeed","Bite"},
{"Simisage","75","98","SeedBomb","Crunch","RockSlide","Acrobatics"},
{"Pansear","50","53","Ember","Lick","Yawn","Bite"},
{"Simisear","75","98","Flamethrower","Crunch","RockSlide","Acrobatics"},
{"Panpour","50","53","WaterGun","Lick","WaterSport","Bite"},
{"Simipour","75","98","Surf","Crunch","IceBeam","Acrobatics"},
{"Munna","76","25","Psybeam","Hypnosis","Moonlight","Yawn"},
{"Musharna","116","55","Psychic","Moonlight","CalmMind","DreamEater"},
{"Pidove","50","55","Gust","QuickAttack","Leer","AirCutter"},
{"Tranquill","62","77","AirCutter","QuickAttack","Roost","Detect"},
{"Unfezant","80","115","Fly","Return","QuickAttack","Uturn"},
{"Blitzle","45","60","QuickAttack","Spark","TailWhip","Charge"},
{"Zebstrika","75","100","Thunderbolt","WildCharge","FlameCharge","VoltSwitch"},
{"Roggenrola","55","75","RockBlast","Harden","SandAttack","Headbutt"},
{"Boldore","70","105","RockSlide","PowerGem","IronDefense","Sandstorm"},
{"Gigalith","85","135","StoneEdge","Earthquake","Explosion","Sandstorm"},
{"Woobat","55","45","Confusion","AirCutter","Attract","Endeavor"},
{"Swoobat","67","57","Psychic","AirSlash","CalmMind","Roost"},
{"Drilbur","60","85","Scratch","MudSlap","RapidSpin","Dig"},
{"Excadrill","110","135","Earthquake","IronHead","RockSlide","SwordsDance"},
{"Audino","103","60","Pound","HelpingHand","HealPulse","DoubleEdge"},
{"Timburr","75","80","LowKick","RockThrow","BulkUp","WakeUpSlap"},
{"Gurdurr","85","105","DrainPunch","RockSlide","BulkUp","Payback"},
{"Conkeldurr","105","140","DrainPunch","MachPunch","StoneEdge","BulkUp"},
{"Tympole","50","50","Bubble","Supersonic","MudShot","Round"},
{"Palpitoad","75","65","MudShot","BubbleBeam","Supersonic","RainDance"},
{"Seismitoad","105","95","Surf","Earthquake","SludgeWave","RainDance"},
{"Throh","120","100","StormThrow","CircleThrow","BulkUp","Payback"},
{"Sawk","75","125","CloseCombat","KarateChop","BulkUp","RockSlide"},
{"Sewaddle","45","53","BugBite","RazorLeaf","StringShot","Protect"},
{"Swadloon","55","63","BugBite","RazorLeaf","Protect","Growth"},
{"Leavanny","75","103","XScissor","LeafBlade","SwordsDance","AerialAce"},
{"Venipede","30","45","PoisonSting","Rollout","DefenseCurl","Screech"},
{"Whirlipede","40","55","PoisonTail","IronDefense","Rollout","Screech"},
{"Scolipede","60","100","Megahorn","PoisonJab","Earthquake","SwordsDance"},
{"Cottonee","40","27","Absorb","Growth","LeechSeed","StunSpore"},
{"Whimsicott","60","67","GigaDrain","Hurricane","LeechSeed","Tailwind"},
{"Petilil","45","35","Absorb","Growth","LeechSeed","SleepPowder"},
{"Lilligant","70","60","PetalDance","QuiverDance","SleepPowder","GigaDrain"},
{"Basculin","70","92","Waterfall","Crunch","AquaJet","Headbutt"},
{"Sandile","50","72","Bite","SandAttack","Torment","Crunch"},
{"Krokorok","60","82","Crunch","Dig","Swagger","Sandstorm"},
{"Krookodile","95","117","Earthquake","Crunch","StoneEdge","DragonClaw"},
{"Darumaka","70","90","FirePunch","Headbutt","Facade","Uproar"},
{"Darmanitan","105","140","FlareBlitz","Superpower","RockSlide","Uturn"},
{"Maractus","75","86","GigaDrain","PinMissile","Acupressure","SuckerPunch"},
{"Dwebble","50","65","SmackDown","BugBite","ShellSmash","RockPolish"},
{"Crustle","70","105","StoneEdge","XScissor","ShellSmash","Earthquake"},
{"Scraggy","50","75","LowKick","Headbutt","Payback","Swagger"},
{"Scrafty","65","90","HighJumpKick","Crunch","DragonDance","IcePunch"},
{"Sigilyph","72","58","AirSlash","Psychic","CosmicPower","Roost"},
{"Yamask","38","30","Astonish","WillOWisp","Hex","Protect"},
{"Cofagrigus","58","50","ShadowBall","WillOWisp","Hex","NastyPlot"},
{"Tirtouga","54","78","WaterGun","Bite","AncientPower","AquaJet"},
{"Carracosta","74","108","Waterfall","StoneEdge","AquaJet","ShellSmash"},
{"Archen","55","112","WingAttack","AncientPower","QuickAttack","DragonClaw"},
{"Archeops","75","140","Acrobatics","StoneEdge","Uturn","DragonClaw"},
{"Trubbish","50","50","Pound","PoisonGas","Recycle","ToxicSpikes"},
{"Garbodor","80","95","GunkShot","ToxicSpikes","Explosion","SeedBomb"},
{"Zorua","40","65","Scratch","FurySwipes","FaintAttack","Torment"},
{"Zoroark","60","105","NightDaze","Flamethrower","NastyPlot","Uturn"},
{"Minccino","55","50","Tackle","TailSlap","Charm","Swift"},
{"Cinccino","75","95","TailSlap","BulletSeed","RockBlast","Uturn"},
{"Gothita","45","30","Confusion","Tickle","FakeTears","Psybeam"},
{"Gothorita","60","45","Psybeam","FakeTears","FutureSight","Psychic"},
{"Gothitelle","70","55","Psychic","ShadowBall","CalmMind","Thunderbolt"},
{"Solosis","45","30","Confusion","Recover","LightScreen","Reflect"},
{"Duosion","65","40","Psychic","Recover","CalmMind","ShadowBall"},
{"Reuniclus","110","65","Psychic","CalmMind","Recover","FocusBlast"},
{"Ducklett","62","44","WaterGun","WingAttack","BubbleBeam","Roost"},
{"Swanna","75","87","Surf","Fly","IceBeam","Roost"},
{"Vanillite","36","50","IceShard","IcyWind","Astonish","Hail"},
{"Vanillish","51","65","IceBeam","MirrorShot","AcidArmor","Hail"},
{"Vanilluxe","71","95","Blizzard","IceBeam","FlashCannon","Hail"},
{"Deerling","60","60","Tackle","LeechSeed","TakeDown","JumpKick"},
{"Sawsbuck","80","100","HornLeech","JumpKick","DoubleEdge","Megahorn"},
{"Emolga","55","75","ThunderShock","QuickAttack","Acrobatics","VoltSwitch"},
{"Karrablast","50","75","Peck","FuryAttack","BugBite","Headbutt"},
{"Escavalier","70","135","IronHead","Megahorn","SwordsDance","KnockOff"},
{"Foongus","69","55","Absorb","StunSpore","MegaDrain","Toxic"},
{"Amoonguss","114","85","GigaDrain","Spore","SludgeBomb","ClearSmog"},
{"Frillish","55","40","BubbleBeam","NightShade","Recover","WillOWisp"},
{"Jellicent","100","60","Surf","ShadowBall","Recover","IceBeam"},
{"Alomomola","165","75","Waterfall","Wish","Protect","Toxic"},
{"Joltik","50","47","ThunderShock","LeechLife","SpiderWeb","BugBite"},
{"Galvantula","70","77","Thunder","BugBuzz","VoltSwitch","EnergyBall"},
{"Ferroseed","44","50","Tackle","IronDefense","LeechSeed","MetalClaw"},
{"Ferrothorn","74","94","PowerWhip","GyroBall","LeechSeed","StealthRock"},
{"Klink","40","55","ViceGrip","ChargeBeam","Bind","GearGrind"},
{"Klang","60","80","GearGrind","ChargeBeam","Autotomize","ShiftGear"},
{"Klinklang","60","100","GearGrind","ShiftGear","WildCharge","FlashCannon"},
{"Tynamo","35","55","Tackle","ThunderWave","Spark","ChargeBeam"},
{"Eelektrik","65","85","Spark","Acid","Crunch","Thunderbolt"},
{"Eelektross","85","115","Thunderbolt","Crunch","DrainPunch","Flamethrower"},
{"Elgyem","55","55","Confusion","Headbutt","Recover","Psychic"},
{"Beheeyem","75","75","Psychic","CalmMind","Recover","ShadowBall"},
{"Litwick","50","30","Ember","Astonish","Smog","FireSpin"},
{"Lampent","60","40","FlameBurst","ShadowBall","WillOWisp","FireSpin"},
{"Chandelure","60","55","Flamethrower","ShadowBall","EnergyBall","CalmMind"},
{"Axew","46","87","Scratch","DragonClaw","Slash","DragonDance"},
{"Fraxure","66","117","DragonClaw","Slash","DragonDance","XScissor"},
{"Haxorus","76","147","DragonClaw","Earthquake","SwordsDance","PoisonJab"},
{"Cubchoo","55","70","PowderSnow","FurySwipes","Brine","IcyWind"},
{"Beartic","95","110","IcicleCrash","Superpower","AquaJet","SwordsDance"},
{"Cryogonal","70","50","IceBeam","Recover","Reflect","RapidSpin"},
{"Shelmet","50","40","Acid","BugBite","Protect","Recover"},
{"Accelgor","80","70","BugBuzz","EnergyBall","Recover","Uturn"},
{"Stunfisk","109","66","MudShot","Thunderbolt","Discharge","EarthPower"},
{"Mienfoo","45","85","DrainPunch","FakeOut","Detect","Uturn"},
{"Mienshao","65","125","HighJumpKick","Uturn","StoneEdge","KnockOff"},
{"Druddigon","77","120","DragonClaw","Crunch","RockSlide","Glare"},
{"Golett","59","74","ShadowPunch","MudSlap","Rollout","IronDefense"},
{"Golurk","89","124","ShadowPunch","Earthquake","DynamicPunch","StoneEdge"},
{"Pawniard","45","85","Scratch","MetalClaw","FaintAttack","SwordsDance"},
{"Bisharp","65","125","IronHead","NightSlash","SwordsDance","SuckerPunch"},
{"Bouffalant","95","110","HeadCharge","Earthquake","Megahorn","StoneEdge"},
{"Rufflet","70","83","Peck","WingAttack","HoneClaws","Slash"},
{"Braviary","100","123","BraveBird","Superpower","Uturn","BulkUp"},
{"Vullaby","70","55","Gust","FoulPlay","Protect","Roost"},
{"Mandibuzz","110","65","FoulPlay","Roost","Defog","Toxic"},
{"Heatmor","85","97","Flamethrower","BugBite","Slash","Amnesia"},
{"Durant","58","109","IronHead","XScissor","HoneClaws","RockSlide"},
{"Deino","52","65","Bite","DragonRage","Headbutt","FocusEnergy"},
{"Zweilous","72","85","Crunch","DragonBreath","Headbutt","WorkUp"},
{"Hydreigon","92","105","DragonPulse","DarkPulse","Flamethrower","Surf"},
{"Larvesta","55","85","Ember","BugBite","FlameCharge","StringShot"},
{"Volcarona","85","60","FieryDance","BugBuzz","QuiverDance","GigaDrain"},
{"Cobalion","91","90","IronHead","CloseCombat","SwordsDance","StoneEdge"},
{"Terrakion","91","129","CloseCombat","StoneEdge","SwordsDance","Earthquake"},
{"Virizion","91","90","LeafBlade","CloseCombat","SwordsDance","StoneEdge"},
{"Tornadus","79","115","Hurricane","AirSlash","Uturn","KnockOff"},
{"Thundurus","79","115","Thunderbolt","Thunder","NastyPlot","VoltSwitch"},
{"Reshiram","100","120","BlueFlare","DragonPulse","EarthPower","Flamethrower"},
{"Zekrom","100","150","BoltStrike","DragonClaw","Crunch","ZenHeadbutt"},
{"Landorus","89","125","Earthquake","StoneEdge","Uturn","RockSlide"},
{"Kyurem","125","130","IceBeam","DragonClaw","EarthPower","Roost"},
{"Keldeo","91","72","SecretSword","Surf","CalmMind","HydroPump"},
{"Meloetta","100","77","Psychic","RelicSong","CloseCombat","ShadowBall"},
{"Genesect","71","120","TechnoBlast","XScissor","Flamethrower","Thunderbolt"},
{"Chespin","56","61","VineWhip","Tackle","Growl","Rollout"},
{"Quilladin","61","78","VineWhip","Rollout","Bite","LeechSeed"},
{"Chesnaught","88","107","HammerArm","WoodHammer","Earthquake","LeechSeed"},
{"Fennekin","40","45","Ember","Scratch","TailWhip","Psybeam"},
{"Braixen","59","59","FlameCharge","Psybeam","FireSpin","LightScreen"},
{"Delphox","75","69","Flamethrower","Psychic","ShadowBall","CalmMind"},
{"Froakie","41","56","Bubble","QuickAttack","Lick","WaterPulse"},
{"Frogadier","54","63","WaterPulse","QuickAttack","Smokescreen","DoubleTeam"},
{"Greninja","72","95","WaterShuriken","NightSlash","HydroPump","IceBeam"},
{"Bunnelby","38","36","Tackle","MudSlap","QuickAttack","DoubleKick"},
{"Diggersby","85","56","Earthquake","Return","QuickAttack","SwordsDance"},
{"Fletchling","45","50","Peck","QuickAttack","Ember","Agility"},
{"Fletchinder","62","73","FlameCharge","AerialAce","Roost","SwordsDance"},
{"Talonflame","78","81","BraveBird","FlareBlitz","Roost","SwordsDance"},
{"Scatterbug","38","35","Tackle","StringShot","BugBite","Snore"},
{"Spewpa","45","22","Harden","Protect","BugBite","Tackle"},
{"Vivillon","80","52","BugBuzz","Hurricane","QuiverDance","SleepPowder"},
{"Litleo","62","50","Ember","Headbutt","WorkUp","NobleRoar"},
{"Pyroar","86","68","Flamethrower","HyperVoice","DarkPulse","WorkUp"},
{"Flabebe","44","38","FairyWind","VineWhip","Wish","MagicalLeaf"},
{"Floette","54","45","MagicalLeaf","Wish","PetalDance","Aromatherapy"},
{"Florges","78","65","Moonblast","PetalDance","Wish","Aromatherapy"},
{"Skiddo","66","65","VineWhip","Tackle","Growth","LeechSeed"},
{"Gogoat","123","100","HornLeech","Earthquake","BulkUp","MilkDrink"},
{"Pancham","67","82","KarateChop","Bite","WorkUp","ArmThrust"},
{"Pangoro","95","124","HammerArm","Crunch","BulkUp","PartingShot"},
{"Furfrou","75","80","Headbutt","Bite","CottonGuard","TakeDown"},
{"Espurr","62","48","Confusion","FakeOut","LightScreen","Reflect"},
{"Meowstic","74","48","Psychic","ShadowBall","LightScreen","Reflect"},
{"Honedge","45","80","ShadowSneak","AerialAce","SwordsDance","IronDefense"},
{"Doublade","59","110","ShadowSneak","IronHead","SwordsDance","SacredSword"},
{"Aegislash","60","50","ShadowBall","IronHead","KingsShield","SacredSword"},
{"Spritzee","78","52","FairyWind","SweetKiss","CalmMind","Aromatherapy"},
{"Aromatisse","101","72","Moonblast","CalmMind","Psychic","Aromatherapy"},
{"Swirlix","62","48","FairyWind","PlayRough","SweetKiss","CottonSpore"},
{"Slurpuff","82","80","PlayRough","BellyDrum","DrainPunch","Return"},
{"Inkay","53","54","Tackle","Peck","FoulPlay","Psybeam"},
{"Malamar","86","92","NightSlash","PsychoCut","Superpower","TopsyTurvy"},
{"Binacle","42","52","FuryCutter","SmackDown","MudSlap","Slash"},
{"Barbaracle","72","105","StoneEdge","RazorShell","ShellSmash","CrossChop"},
{"Skrelp","50","60","Acid","WaterGun","Twister","PoisonTail"},
{"Dragalge","65","75","DragonPulse","SludgeBomb","Surf","ToxicSpikes"},
{"Clauncher","50","53","WaterGun","BubbleBeam","ViceGrip","SmackDown"},
{"Clawitzer","71","73","WaterPulse","DarkPulse","IceBeam","AuraSphere"},
{"Helioptile","44","38","QuickAttack","ThunderShock","Charge","MudSlap"},
{"Heliolisk","62","55","Thunderbolt","HyperVoice","Surf","VoltSwitch"},
{"Tyrunt","58","89","Bite","RockThrow","DragonTail","Stomp"},
{"Tyrantrum","82","121","HeadSmash","DragonClaw","Earthquake","Crunch"},
{"Amaura","77","59","PowderSnow","AncientPower","AuroraBeam","LightScreen"},
{"Aurorus","123","77","Blizzard","FreezeDry","Thunderbolt","LightScreen"},
{"Sylveon","95","65","Moonblast","HyperVoice","CalmMind","Wish"},
{"Hawlucha","78","92","FlyingPress","HighJumpKick","SwordsDance","Acrobatics"},
{"Dedenne","67","58","Thunderbolt","PlayRough","Nuzzle","VoltSwitch"},
{"Carbink","50","50","PowerGem","Moonblast","Reflect","LightScreen"},
{"Goomy","45","50","Tackle","Bubble","DragonBreath","Protect"},
{"Sliggoo","68","75","DragonPulse","WaterPulse","Protect","RainDance"},
{"Goodra","90","100","DragonPulse","Surf","Thunderbolt","FireBlast"},
{"Klefki","57","80","PlayRough","FlashCannon","ThunderWave","Spikes"},
{"Phantump","43","70","Astonish","LeechSeed","WillOWisp","Hex"},
{"Trevenant","85","110","HornLeech","ShadowClaw","WillOWisp","LeechSeed"},
{"Pumpkaboo","49","66","ShadowSneak","RazorLeaf","LeechSeed","TrickOrTreat"},
{"Gourgeist","65","90","ShadowBall","SeedBomb","WillOWisp","LeechSeed"},
{"Bergmite","55","69","IceShard","IcyWind","Protect","Recover"},
{"Avalugg","95","117","Avalanche","Earthquake","RapidSpin","Recover"},
{"Noibat","40","30","Gust","Supersonic","Bite","WingAttack"},
{"Noivern","85","70","Hurricane","DragonPulse","Flamethrower","Roost"},
{"Xerneas","126","131","Moonblast","Geomancy","Thunderbolt","FocusBlast"},
{"Yveltal","126","131","DarkPulse","Hurricane","OblivionWing","Roost"},
{"Zygarde","108","100","ThousandArrows","DragonClaw","Earthquake","Coil"},
{"Diancie","50","100","DiamondStorm","Moonblast","EarthPower","Reflect"},
{"Hoopa","80","110","Psychic","ShadowBall","HyperspaceHole","NastyPlot"},
{"Volcanion","80","110","SteamEruption","Flamethrower","SludgeBomb","EarthPower"},
{"Rowlet","68","55","Leafage","Tackle","Growl","Peck"},
{"Dartrix","78","75","RazorLeaf","Pluck","Synthesis","FuryAttack"},
{"Decidueye","78","107","SpiritShackle","LeafBlade","BraveBird","SwordsDance"},
{"Litten","45","65","Ember","Scratch","Growl","Lick"},
{"Torracat","65","85","FlameCharge","Bite","Roar","Swagger"},
{"Incineroar","95","115","FlareBlitz","DarkestLariat","BulkUp","Earthquake"},
{"Popplio","50","54","WaterGun","Pound","Growl","DisarmingVoice"},
{"Brionne","60","69","BubbleBeam","DisarmingVoice","AquaJet","Sing"},
{"Primarina","80","74","SparklingAria","Moonblast","IceBeam","CalmMind"},
{"Pikipek","35","75","Peck","Growl","EchoedVoice","RockSmash"},
{"Trumbeak","55","85","Pluck","RockBlast","EchoedVoice","Roost"},
{"Toucannon","80","120","BeakBlast","DrillPeck","RockBlast","BulletSeed"},
{"Yungoos","48","70","Tackle","Leer","Bite","SandAttack"},
{"Gumshoos","88","110","Crunch","HyperFang","SuperFang","TakeDown"},
{"Grubbin","47","62","ViceGrip","StringShot","BugBite","Spark"},
{"Charjabug","57","82","BugBite","Spark","Charge","Crunch"},
{"Vikavolt","77","70","Thunderbolt","BugBuzz","EnergyBall","VoltSwitch"},
{"Crabrawler","47","82","Bubble","RockSmash","Leer","PowerUpPunch"},
{"Crabominable","97","132","IceHammer","CloseCombat","Earthquake","Avalanche"},
{"Oricorio","75","70","AirSlash","RevelationDance","Roost","TeeterDance"},
{"Cutiefly","40","45","FairyWind","BugBite","StunSpore","SweetScent"},
{"Ribombee","60","55","PollenPuff","Moonblast","QuiverDance","StunSpore"},
{"Rockruff","45","65","Tackle","Bite","RockThrow","Howl"},
{"Lycanroc","75","115","StoneEdge","Crunch","Accelerock","SwordsDance"},
{"Wishiwashi","45","20","WaterGun","Growl","Brine","TakeDown"},
{"Mareanie","50","53","PoisonSting","WaterGun","Recover","Venoshock"},
{"Toxapex","50","63","BanefulBunker","Recover","Scald","Toxic"},
{"Mudbray","70","100","MudSlap","DoubleKick","Bulldoze","Stomp"},
{"Mudsdale","100","125","Earthquake","HeavySlam","RockSlide","Superpower"},
{"Dewpider","38","40","Bubble","BugBite","Bite","Infestation"},
{"Araquanid","68","70","Liquidation","LeechLife","Crunch","MirrorCoat"},
{"Fomantis","40","55","RazorLeaf","Growth","FuryCutter","Synthesis"},
{"Lurantis","70","105","LeafBlade","XScissor","Synthesis","Superpower"},
{"Morelull","40","35","Absorb","StunSpore","SleepPowder","MegaDrain"},
{"Shiinotic","60","45","Moonblast","GigaDrain","Spore","DreamEater"},
{"Salandit","48","44","Ember","PoisonGas","DragonRage","Smokescreen"},
{"Salazzle","68","64","Flamethrower","SludgeBomb","NastyPlot","DragonPulse"},
{"Stufful","70","75","Tackle","BabyDollEyes","BrutalSwing","Payback"},
{"Bewear","120","125","HammerArm","DoubleEdge","Superpower","Payback"},
{"Bounsweet","42","30","Splash","PlayNice","RazorLeaf","RapidSpin"},
{"Steenee","52","40","RazorLeaf","RapidSpin","TeeterDance","MagicalLeaf"},
{"Tsareena","72","120","TropKick","HighJumpKick","RapidSpin","Uturn"},
{"Comfey","51","52","DrainingKiss","MagicalLeaf","LeechSeed","Aromatherapy"},
{"Oranguru","90","60","Psychic","Instruct","CalmMind","FoulPlay"},
{"Passimian","100","120","CloseCombat","Uturn","RockSlide","BulkUp"},
{"Wimpod","25","35","StruggleBug","SandAttack","DefenseCurl","WideGuard"},
{"Golisopod","75","125","FirstImpression","Liquidation","LeechLife","SuckerPunch"},
{"Sandygast","55","55","SandAttack","Astonish","Absorb","MegaDrain"},
{"Palossand","85","75","ShadowBall","EarthPower","GigaDrain","ShoreUp"},
{"Pyukumuku","55","60","Counter","MirrorCoat","Recover","Toxic"},
{"TypeNull","95","95","Tackle","Pursuit","IronHead","DoubleEdge"},
{"Silvally","95","95","MultiAttack","Crunch","Flamethrower","SwordsDance"},
{"Minior","60","60","RockThrow","Swift","SelfDestruct","CosmicPower"},
{"Komala","65","115","Yawn","Slam","WoodHammer","PlayRough"},
{"Turtonator","60","78","Flamethrower","DragonPulse","ShellTrap","FlashCannon"},
{"Togedemaru","65","98","ZingZap","IronHead","SpikyShield","Nuzzle"},
{"Mimikyu","55","90","PlayRough","ShadowClaw","SwordsDance","ShadowSneak"},
{"Bruxish","68","105","PsychicFangs","Crunch","AquaJet","IceFang"},
{"Drampa","78","60","DragonPulse","HyperVoice","Flamethrower","Roost"},
{"Dhelmise","70","131","AnchorShot","PowerWhip","ShadowClaw","SwordsDance"},
{"Jangmo-o","45","55","Tackle","DragonBreath","Protect","ScaryFace"},
{"Hakamo-o","55","75","DragonClaw","BrickBreak","Protect","DragonDance"},
{"Kommo-o","75","110","ClangingScales","CloseCombat","DragonDance","Flamethrower"},
{"TapuKoko","70","115","Thunderbolt","DazzlingGleam","VoltSwitch","BraveBird"},
{"TapuLele","70","85","Psychic","Moonblast","FocusBlast","ShadowBall"},
{"TapuBulu","70","130","HornLeech","WoodHammer","Superpower","StoneEdge"},
{"TapuFini","70","75","Surf","Moonblast","CalmMind","IceBeam"},
{"Cosmog","43","29","Splash","Teleport","Splash","Teleport"},
{"Cosmoem","43","29","Splash","Teleport","Splash","Teleport"},
{"Solgaleo","137","137","SunsteelStrike","PsychicFangs","FlareBlitz","Earthquake"},
{"Lunala","137","113","MoongeistBeam","Psychic","ShadowBall","CalmMind"},
{"Nihilego","109","53","PowerGem","SludgeWave","Thunderbolt","GrassKnot"},
{"Buzzwole","107","139","LeechLife","Superpower","IcePunch","BulkUp"},
{"Pheromosa","71","137","HighJumpKick","BugBuzz","IceBeam","Uturn"},
{"Xurkitree","83","89","Thunderbolt","EnergyBall","TailGlow","VoltSwitch"},
{"Celesteela","97","101","HeavySlam","AirSlash","LeechSeed","Flamethrower"},
{"Kartana","59","181","LeafBlade","SmartStrike","SacredSword","SwordsDance"},
{"Guzzlord","223","101","Crunch","DragonClaw","Earthquake","HeavySlam"},
{"Necrozma","97","107","PrismLaser","Psychic","PhotonGeyser","Moonlight"},
{"Magearna","80","95","FlashCannon","AuraSphere","CalmMind","FleurCannon"},
{"Marshadow","90","125","SpectralThief","CloseCombat","ShadowSneak","BulkUp"},
{"Grookey","50","65","Scratch","BranchPoke","Growl","KnockOff"},
{"Thwackey","70","85","RazorLeaf","KnockOff","Screech","Uturn"},
{"Rillaboom","100","125","DrumBeating","WoodHammer","KnockOff","Uturn"},
{"Scorbunny","50","71","Tackle","Ember","QuickAttack","DoubleKick"},
{"Raboot","65","86","FlameCharge","QuickAttack","DoubleKick","Agility"},
{"Cinderace","80","116","PyroBall","HighJumpKick","Uturn","SuckerPunch"},
{"Sobble","50","40","WaterGun","Pound","Bind","Growl"},
{"Drizzile","65","60","WaterPulse","SnipeShot","TearfulLook","Uturn"},
{"Inteleon","70","85","SnipeShot","IceBeam","DarkPulse","Uturn"},
{"Skwovet","70","55","Tackle","Bite","StuffCheeks","BulletSeed"},
{"Greedent","120","95","BodySlam","Crunch","StuffCheeks","BulletSeed"},
{"Rookidee","38","47","Peck","Leer","PowerTrip","HoneClaws"},
{"Corvisquire","68","67","Pluck","DrillPeck","Taunt","Roost"},
{"Corviknight","98","87","BraveBird","IronHead","Roost","BulkUp"},
{"Blipbug","25","20","StruggleBug","Infestation","Recover","StickyWeb"},
{"Dottler","50","35","Confusion","LightScreen","Reflect","Recover"},
{"Orbeetle","60","45","Psychic","BugBuzz","CalmMind","Recover"},
{"Nickit","40","28","QuickAttack","Snarl","BeatUp","HoneClaws"},
{"Thievul","70","58","NightSlash","Snarl","Psychic","NastyPlot"},
{"Gossifleur","40","40","Leafage","RapidSpin","LeechSeed","StunSpore"},
{"Eldegoss","60","50","LeafStorm","CottonGuard","LeechSeed","PollenPuff"},
{"Wooloo","42","40","Tackle","DefenseCurl","Copycat","TakeDown"},
{"Dubwool","72","80","BodySlam","CottonGuard","DoubleKick","ZenHeadbutt"},
{"Chewtle","50","64","WaterGun","Bite","Protect","Headbutt"},
{"Drednaw","90","115","Liquidation","Crunch","RockSlide","SwordsDance"},
{"Yamper","59","45","Spark","Nuzzle","Bite","Roar"},
{"Boltund","69","90","Thunderbolt","Crunch","PlayRough","VoltSwitch"},
{"Rolycoly","30","40","SmackDown","RapidSpin","HeatCrash","StealthRock"},
{"Carkol","80","60","FlameCharge","RockSlide","WillOWisp","StealthRock"},
{"Coalossal","110","80","HeatCrash","StoneEdge","StealthRock","WillOWisp"},
{"Applin","40","40","Astonish","Withdraw","Recycle","BulletSeed"},
{"Flapple","70","110","GravApple","DragonRush","SuckerPunch","DragonDance"},
{"Appletun","110","85","AppleAcid","DragonPulse","Recover","LeechSeed"},
{"Silicobra","52","57","SandAttack","MudSlap","Glare","Headbutt"},
{"Sandaconda","72","107","Earthquake","Glare","Coil","StoneEdge"},
{"Cramorant","70","85","Surf","AirSlash","Dive","Roost"},
{"Arrokuda","41","63","AquaJet","Bite","Agility","Crunch"},
{"Barraskewda","61","123","Liquidation","Crunch","CloseCombat","PsychicFangs"},
{"Toxel","40","38","Nuzzle","Acid","Flail","Growl"},
{"Toxtricity","75","98","Overdrive","SludgeBomb","Boomburst","ShiftGear"},
{"Sizzlipede","50","65","Ember","BugBite","Coil","FlameWheel"},
{"Centiskorch","100","115","FireLash","LeechLife","Coil","PowerWhip"},
{"Clobbopus","50","68","RockSmash","Bind","Detect","PowerUpPunch"},
{"Grapploct","80","118","Octolock","CloseCombat","IcePunch","SuckerPunch"},
{"Sinistea","40","45","Astonish","MegaDrain","Protect","ShadowBall"},
{"Polteageist","60","65","ShadowBall","GigaDrain","ShellSmash","StoredPower"},
{"Hatenna","42","30","Confusion","PlayNice","LifeDew","DisarmingVoice"},
{"Hattrem","57","40","Psybeam","DisarmingVoice","CalmMind","HealingWish"},
{"Hatterene","57","90","Psychic","DazzlingGleam","CalmMind","MysticalFire"},
{"Impidimp","45","45","Bite","PlayRough","Taunt","FoulPlay"},
{"Morgrem","65","60","FalseSurrender","PlayRough","Torment","FoulPlay"},
{"Grimmsnarl","95","120","SpiritBreak","DarkestLariat","BulkUp","ThunderWave"},
{"Obstagoon","93","90","Obstruct","KnockOff","Facade","CloseCombat"},
{"Perrserker","70","110","IronHead","PlayRough","SwordsDance","CloseCombat"},
{"Cursola","60","95","ShadowBall","EarthPower","WillOWisp","StrengthSap"},
{"Sirfetchd","62","135","MeteorAssault","CloseCombat","LeafBlade","BraveBird"},
{"MrRime","80","85","FreezeDry","Psychic","NastyPlot","IceBeam"},
{"Runerigus","58","95","ShadowClaw","Earthquake","WillOWisp","StealthRock"},
{"Milcery","45","40","SweetKiss","DrainingKiss","Aromatherapy","Decorate"},
{"Alcremie","65","60","DazzlingGleam","MysticalFire","Recover","CalmMind"},
{"Falinks","65","100","NoRetreat","CloseCombat","Megahorn","IronDefense"},
{"Pincurchin","48","101","Thunderbolt","Scald","Spikes","Recover"},
{"Snom","30","25","PowderSnow","StruggleBug","Mist","IceShard"},
{"Frosmoth","70","65","IceBeam","BugBuzz","QuiverDance","Hurricane"},
{"Stonjourner","100","125","StoneEdge","Earthquake","HeavySlam","RockSlide"},
{"Eiscue","75","80","IcicleCrash","ZenHeadbutt","BellyDrum","Substitute"},
{"Indeedee","60","65","Psychic","HyperVoice","CalmMind","HelpingHand"},
{"Morpeko","58","95","AuraWheel","Crunch","QuickAttack","PartingShot"},
{"Cufant","72","80","Tackle","Rollout","IronHead","Bulldoze"},
{"Copperajah","122","130","HeavySlam","Earthquake","PlayRough","StealthRock"},
{"Dracozolt","90","100","BoltBeak","DragonClaw","Earthquake","AerialAce"},
{"Arctozolt","90","100","BoltBeak","IcicleCrash","FreezeDry","Thunderbolt"},
{"Dracovish","90","90","FishiousRend","Crunch","PsychicFangs","IceFang"},
{"Arctovish","90","90","FishiousRend","IcicleCrash","Waterfall","FreezeDry"},
{"Duraludon","70","95","FlashCannon","DragonPulse","Thunderbolt","StealthRock"},
{"Dreepy","28","60","Astonish","Infestation","QuickAttack","Bite"},
{"Drakloak","68","80","DragonPulse","ShadowBall","Uturn","Bite"},
{"Dragapult","88","120","DragonDarts","ShadowBall","Flamethrower","Uturn"},
{"Zacian","92","120","BehemothBlade","PlayRough","CloseCombat","SwordsDance"},
{"Zamazenta","92","120","BehemothBash","CloseCombat","Crunch","IronDefense"},
{"Eternatus","140","85","DynamaxCannon","SludgeBomb","Flamethrower","Recover"},
{"Kubfu","60","90","AerialAce","BrickBreak","Detect","BulkUp"},
{"Urshifu","100","130","WickedBlow","CloseCombat","Uturn","AquaJet"},
{"Zarude","105","120","PowerWhip","DarkestLariat","Uturn","JungleHealing"},
{"Regieleki","80","100","Thunderbolt","VoltSwitch","Electroweb","RapidSpin"},
{"Regidrago","200","100","DragonEnergy","DragonClaw","Earthquake","FireFang"},
{"Glastrier","100","145","IcicleCrash","HighHorsepower","SwordsDance","CloseCombat"},
{"Spectrier","100","65","ShadowBall","NastyPlot","WillOWisp","Hex"},
{"Calyrex","100","80","Psychic","GigaDrain","NastyPlot","LeechSeed"},
{"Sprigatito","40","61","Leafage","Scratch","TailWhip","Bite"},
{"Floragato","61","80","MagicalLeaf","Bite","Uturn","HoneClaws"},
{"Meowscarada","76","110","FlowerTrick","NightSlash","Uturn","PlayRough"},
{"Fuecoco","67","45","Ember","Tackle","Leer","Round"},
{"Crocalor","81","55","Incinerate","Bite","Yawn","Round"},
{"Skeledirge","104","75","TorchSong","ShadowBall","SlackOff","WillOWisp"},
{"Quaxly","55","65","WaterGun","Pound","Growl","WingAttack"},
{"Quaxwell","70","85","AquaJet","WingAttack","WorkUp","Roost"},
{"Quaquaval","85","120","AquaStep","CloseCombat","BraveBird","SwordsDance"},
{"Lechonk","54","45","Tackle","TailWhip","DisarmingVoice","MudShot"},
{"Oinkologne","110","100","BodySlam","Dig","PlayRough","Yawn"},
{"Tarountula","35","41","StruggleBug","Infestation","BugBite","Assurance"},
{"Spidops","60","79","SkitterSmack","SuckerPunch","Spikes","StickyWeb"},
{"Nymble","33","46","BugBite","DoubleKick","Agility","AerialAce"},
{"Lokix","71","102","FirstImpression","AxeKick","SuckerPunch","Uturn"},
{"Pawmi","45","50","ThunderShock","QuickAttack","Spark","Nuzzle"},
{"Pawmo","60","75","Spark","LowKick","Charge","VoltSwitch"},
{"Pawmot","70","115","DoubleShock","CloseCombat","IcePunch","RevivalBlessing"},
{"Tandemaus","50","50","Tackle","BabyDollEyes","Bite","FollowMe"},
{"Maushold","74","75","PopulationBomb","Bite","BulletSeed","Encore"},
{"Fidough","37","55","PlayRough","Lick","Charm","Bite"},
{"Dachsbun","57","80","PlayRough","Crunch","BodyPress","Wish"},
{"Smoliv","41","35","Absorb","Tackle","SweetScent","MegaDrain"},
{"Dolliv","52","53","MagicalLeaf","Growth","LeechSeed","BulletSeed"},
{"Arboliva","78","69","EnergyBall","EarthPower","LeechSeed","Synthesis"},
{"Squawkabilly","82","96","BraveBird","Facade","Uturn","PartingShot"},
{"Nacli","55","55","RockThrow","Harden","SmackDown","Recover"},
{"Naclstack","60","60","RockSlide","Recover","IronDefense","SaltCure"},
{"Garganacl","100","100","SaltCure","Recover","BodyPress","Earthquake"},
{"Charcadet","40","50","Ember","ClearSmog","QuickAttack","FlameCharge"},
{"Armarouge","85","60","ArmorCannon","Psychic","AuraSphere","CalmMind"},
{"Ceruledge","75","125","BitterBlade","ShadowSneak","SwordsDance","CloseCombat"},
{"Tadbulb","61","31","ThunderShock","WaterGun","Charge","MudShot"},
{"Bellibolt","109","64","Thunderbolt","MuddyWater","ParabolicCharge","SlackOff"},
{"Wattrel","40","40","Peck","ThunderShock","QuickAttack","Charge"},
{"Kilowattrel","70","70","Thunderbolt","Hurricane","VoltSwitch","Roost"},
{"Maschiff","60","78","Bite","Snarl","ScaryFace","PlayRough"},
{"Mabosstiff","80","120","Crunch","PlayRough","PsychicFangs","JawLock"},
{"Shroodle","40","65","PoisonFang","Scratch","Taunt","Slash"},
{"Grafaiai","63","95","PoisonJab","KnockOff","Uturn","PartingShot"},
{"Bramblin","40","65","Rollout","ShadowSneak","LeechSeed","BulletSeed"},
{"Brambleghast","55","115","PowerWhip","ShadowSneak","Spikes","StrengthSap"},
{"Toedscool","40","35","Absorb","MudSlap","RapidSpin","Spore"},
{"Toedscruel","80","70","EarthPower","GigaDrain","Spore","RapidSpin"},
{"Klawf","70","100","RockSlide","Crabhammer","SwordsDance","XScissor"},
{"Capsakid","50","62","BulletSeed","Bite","Growth","Trailblaze"},
{"Scovillain","65","108","Flamethrower","SeedBomb","Growth","Crunch"},
{"Rellor","41","50","Rollout","StruggleBug","MudShot","Recover"},
{"Rabsca","75","50","Psychic","BugBuzz","Recover","TrickRoom"},
{"Flittle","30","35","Confusion","Psybeam","Agility","LightScreen"},
{"Espathra","95","60","LuminaCrash","Psychic","CalmMind","DazzlingGleam"},
{"Tinkatink","50","45","PlayRough","FakeOut","RockSmash","SkitterSmack"},
{"Tinkatuff","65","55","PlayRough","RockSlide","FakeOut","KnockOff"},
{"Tinkaton","85","75","GigatonHammer","PlayRough","KnockOff","SwordsDance"},
{"Wiglett","10","55","WaterGun","MudSlap","Dig","SuckerPunch"},
{"Wugtrio","35","100","TripleDive","SuckerPunch","AquaJet","SandAttack"},
{"Bombirdier","70","103","RockSlide","KnockOff","Uturn","Roost"},
{"Finizen","70","45","WaterGun","Charm","Acrobatics","AquaJet"},
{"Palafin","100","70","JetPunch","WaveCrash","CloseCombat","IcePunch"},
{"Varoom","45","70","PoisonGas","GyroBall","ToxicSpikes","Assurance"},
{"Revavroom","80","119","SpinOut","GunkShot","ShiftGear","IronHead"},
{"Cyclizar","70","95","DragonClaw","Uturn","RapidSpin","KnockOff"},
{"Orthworm","70","85","IronTail","BodyPress","Coil","Earthquake"},
{"Glimmet","48","35","PowerGem","Acid","RockThrow","ToxicSpikes"},
{"Glimmora","83","55","PowerGem","SludgeWave","EarthPower","StealthRock"},
{"Greavard","50","61","Bite","ShadowSneak","Roar","Dig"},
{"Houndstone","72","101","LastRespects","ShadowBall","PlayRough","WillOWisp"},
{"Flamigo","82","115","CloseCombat","BraveBird","Roost","BulkUp"},
{"Cetoddle","108","68","PowderSnow","BodySlam","Amnesia","IceShard"},
{"Cetitan","170","113","IceSpinner","Earthquake","BellyDrum","IceShard"},
{"Veluza","90","102","AquaCutter","PsychoCut","Crunch","Agility"},
{"Dondozo","150","100","WaveCrash","BodyPress","Rest","Curse"},
{"Tatsugiri","68","50","DragonPulse","Surf","NastyPlot","MuddyWater"},
{"Annihilape","110","115","RageFist","CloseCombat","Uturn","BulkUp"},
{"Clodsire","130","75","Earthquake","PoisonJab","Recover","Toxic"},
{"Farigiraf","120","90","TwinBeam","Psychic","Crunch","Agility"},
{"Dudunsparce","125","100","HyperDrill","BodySlam","Roost","Coil"},
{"Kingambit","100","135","KowtowCleave","IronHead","SwordsDance","SuckerPunch"},
{"GreatTusk","115","131","HeadlongRush","CloseCombat","IceSpinner","RapidSpin"},
{"ScreamTail","115","65","PlayRough","HyperVoice","Wish","Protect"},
{"BruteBonnet","111","127","SeedBomb","SuckerPunch","Spore","Crunch"},
{"FlutterMane","55","55","ShadowBall","Moonblast","MysticalFire","CalmMind"},
{"SlitherWing","85","135","FirstImpression","CloseCombat","LeechLife","FlareBlitz"},
{"SandyShocks","85","81","Thunderbolt","EarthPower","VoltSwitch","StealthRock"},
{"IronTreads","90","112","Earthquake","IronHead","RapidSpin","StealthRock"},
{"IronBundle","56","80","FreezeDry","HydroPump","FlipTurn","IceBeam"},
{"IronHands","154","140","DrainPunch","WildCharge","IcePunch","SwordsDance"},
{"IronJugulis","94","80","DarkPulse","AirSlash","Flamethrower","Uturn"},
{"IronMoth","80","70","FieryDance","SludgeWave","EnergyBall","MorningSun"},
{"IronThorns","100","134","StoneEdge","WildCharge","DragonDance","Earthquake"},
{"Frigibax","65","75","DragonBreath","IceFang","Bite","IcyWind"},
{"Arctibax","90","95","DragonClaw","IceFang","Crunch","DragonDance"},
{"Baxcalibur","115","145","GlaiveRush","IcicleCrash","Earthquake","DragonDance"},
{"Gimmighoul","45","30","Astonish","ConfuseRay","NightShade","Recover"},
{"Gholdengo","87","60","MakeItRain","ShadowBall","NastyPlot","Recover"},
{"WoChien","85","85","GigaDrain","FoulPlay","LeechSeed","Protect"},
{"ChienPao","80","120","IcicleCrash","Crunch","SuckerPunch","SacredSword"},
{"TingLu","155","110","Earthquake","Ruination","StoneEdge","Whirlwind"},
{"ChiYu","55","80","Overheat","DarkPulse","Flamethrower","NastyPlot"},
{"RoaringMoon","105","139","DragonClaw","Crunch","DragonDance","Acrobatics"},
{"IronValiant","74","130","Moonblast","CloseCombat","PsychoCut","SwordsDance"},
{"Koraidon","100","135","CollisionCourse","DragonClaw","FlareBlitz","SwordsDance"},
{"Miraidon","100","85","ElectroDrift","DragonPulse","CalmMind","ParabolicCharge"},
{"WalkingWake","99","83","HydroSteam","DragonPulse","Flamethrower","CalmMind"},
{"IronLeaves","90","130","LeafBlade","Psyblade","SwordsDance","SacredSword"},
{"Dipplin","80","80","SyrupBomb","DragonPulse","Recover","Growth"},
{"Poltchageist","40","45","ShadowBall","MegaDrain","CalmMind","Astonish"},
{"Sinistcha","71","60","MatchaGotcha","ShadowBall","CalmMind","StrengthSap"},
{"Okidogi","88","128","PoisonJab","CloseCombat","BulkUp","Crunch"},
{"Munkidori","88","75","Psychic","SludgeWave","NastyPlot","ShadowBall"},
{"Fezandipiti","88","91","PlayRough","BraveBird","Roost","Uturn"},
{"Ogerpon","80","120","IvyCudgel","HornLeech","Uturn","SwordsDance"},
{"Archaludon","90","105","ElectroShot","DragonPulse","FlashCannon","BodyPress"},
{"Hydrapple","106","80","FickleBeam","EnergyBall","Recover","EarthPower"},
{"GougingFire","105","115","FlareBlitz","DragonClaw","DragonDance","MorningSun"},
{"RagingBolt","125","73","Thunderbolt","DragonPulse","CalmMind","Thunderclap"},
{"IronBoulder","90","120","StoneEdge","Psyblade","SwordsDance","CloseCombat"},
{"IronCrown","90","72","FlashCannon","Psychic","CalmMind","VoltSwitch"},
{"Terapagos","90","65","TeraStarstorm","PowerGem","CalmMind","Recover"},
{"Pecharunt","88","88","MalignantChain","ShadowBall","NastyPlot","Recover"}
    };

	cout << "Welcome player one! Please choose your starter pokemon!" << endl;
    cout << "Enter the name of your pokemon: ";
	bat.p1(bat.getNameP1(), bat.getHpP1(), bat.getAttkP1(), bat.getLvlP1(), bat.getMove1P1(), bat.getMove2P1(), bat.getMove3P1(), bat.getMove4P1());
	bat.p2(bat.getNameP2(), bat.getHpP2(), bat.getAttkP2(), bat.getLvlP2() , bat.getMove1P2(), bat.getMove2P2(), bat.getMove3P2(), bat.getMove4P2());
    cin >> name;
    bat.setNameP1(name);
    if (name.empty())
    {
        cout << "Please enter a valid pokemon name." << endl;
    }
    else
    {
        string targetName = bat.getNameP1();

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
            bat.setHpP1(hp);
            bat.setAttkP1(attk);
            bat.setMove1P1(move1);
            bat.setMove2P1(move2);
            bat.setMove3P1(move3);
            bat.setMove4P1(move4);

            if (it != pokedex.end()) {
                int index = std::distance(pokedex.begin(), it);
                if ((*it)[0] == bat.getNameP1())
                {
                    cout << "You used " << bat.getNameP1() << "!" << endl;
                    cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                    int choice = 0;
                    while (choice < 1 || choice > 4)
                    {
                        cout << "Choose a move: " << endl;
                        cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                        cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << ":> ";
                        cin >> choice;

                        switch (choice)
                        {
                        case 1:
                            cout << "You used " << bat.getMove1P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= attk;
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;
                                cout << "Enter the name of your pokemon: ";
                                cin >> name;
                                bat.setNameP1(name);
                                if (name.empty())
                                {
                                    cout << "\nPlease enter a valid pokemon name." << endl;
                                    cin >> name;
									bat.setNameP1(name);
                                }
                                else
                                {
                                    string targetName = bat.getNameP1();

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
                                        bat.setHpP1(hp);
                                        bat.setAttkP1(attk);
                                        bat.setMove1P1(move1);
                                        bat.setMove2P1(move2);
                                        bat.setMove3P1(move3);
                                        bat.setMove4P1(move4);

                                        if (it != pokedex.end()) {
                                            int index = std::distance(pokedex.begin(), it);
                                            if ((*it)[0] == bat.getNameP1())
                                            {
                                                cout << "You used " << bat.getNameP1() << "!" << endl;
                                                cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                                                int choice = 0;
                                                while (choice < 1 || choice > 4)
                                                {
                                                    cout << "Choose a move: " << endl;
                                                    cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                    cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                                                    cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                    cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                    cout << ":> ";
                                                    cin >> choice;

                                                    switch (choice)
                                                    {
                                                    case 1:
                                                        cout << "You used " << bat.getMove1P1() << "!" << endl;
                                                        cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                        hp -= attk;
                                                        if (hp <= 0)
                                                        {
                                                            cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;
                                                            cout << "Enter the name of your pokemon: ";
                                                            cin >> name;
                                                            bat.setNameP1(name);
                                                            if (name.empty())
                                                            {
                                                                cout << "\nPlease enter a valid pokemon name." << endl;
                                                                cin >> name;
                                                                bat.setNameP1(name);
                                                            }
                                                            else
                                                            {
                                                                string targetName = bat.getNameP1();

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
                                                                    bat.setHpP1(hp);
                                                                    bat.setAttkP1(attk);
                                                                    bat.setMove1P1(move1);
                                                                    bat.setMove2P1(move2);
                                                                    bat.setMove3P1(move3);
                                                                    bat.setMove4P1(move4);

                                                                    if (it != pokedex.end()) {
                                                                        int index = std::distance(pokedex.begin(), it);
                                                                        if ((*it)[0] == bat.getNameP1())
                                                                        {
                                                                            cout << "You used " << bat.getNameP1() << "!" << endl;
																			cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                                                                            cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;
                                                                            cout << "Enter the name of your pokemon: ";
                                                                            cin >> name;
                                                                            bat.setNameP1(name);
                                                                            if (name.empty())
                                                                            {
                                                                                cout << "\nPlease enter a valid pokemon name." << endl;
                                                                                cin >> name;
                                                                                bat.setNameP1(name);
                                                                            }
                                                                            else
                                                                            {
                                                                                string targetName = bat.getNameP1();

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
                                                                                    bat.setHpP1(hp);
                                                                                    bat.setAttkP1(attk);
                                                                                    bat.setMove1P1(move1);
                                                                                    bat.setMove2P1(move2);
                                                                                    bat.setMove3P1(move3);
                                                                                    bat.setMove4P1(move4);

                                                                                    if (it != pokedex.end()) {
                                                                                        int index = std::distance(pokedex.begin(), it);
                                                                                        if ((*it)[0] == bat.getNameP1())
                                                                                        {
                                                                                            cout << "You used " << bat.getNameP1() << "!" << endl;
                                                                                            cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                                                                                            int choice = 0;
                                                                                            while (choice < 1 || choice > 4)
                                                                                            {
                                                                                                cout << "Choose a move: " << endl;
                                                                                                cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                                                                                                cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                cout << ":> ";
                                                                                                cin >> choice;

                                                                                                switch (choice)
                                                                                                {
                                                                                                case 1:
                                                                                                    cout << "You used " << bat.getMove1P1() << "!" << endl;
                                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                    hp -= attk;
                                                                                                    if (hp <= 0)
                                                                                                    {
                                                                                                        cout << "Your Pokemon fainted! Chose another Pokemon!" << endl;

                                                                                                    }
                                                                                                    else
                                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                                    break;
                                                                                                case 2:
                                                                                                    cout << "You used " << bat.getMove2P1() << "!" << endl;
                                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                    hp -= bat.getAttkP1();
                                                                                                    if (hp <= 0)
                                                                                                    {
                                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                                    }
                                                                                                    else
                                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                                    break;
                                                                                                case 3:
                                                                                                    cout << "You used " << bat.getMove3P1() << "!" << endl;
                                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                    hp -= bat.getAttkP1();
                                                                                                    if (hp <= 0)
                                                                                                    {
                                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                                    }
                                                                                                    else
                                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                                    break;
                                                                                                case 4:
                                                                                                    cout << "You used " << bat.getMove4P1() << "!" << endl;
                                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                    hp -= bat.getAttkP1();
                                                                                                    if (hp <= 0)
                                                                                                    {
                                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

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
                                                                                        cin >> name;
                                                                                        bat.setNameP1(name);
                                                                                    }
                                                                                }
                                                                            }
                                                                            int choice = 0;
                                                                            while (choice < 1 || choice > 4)
                                                                            {
                                                                                cout << "Choose a move: " << endl;
                                                                                cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                                                                                cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                cout << ":> ";
                                                                                cin >> choice;

                                                                                switch (choice)
                                                                                {
                                                                                case 1:
                                                                                    cout << "You used " << bat.getMove1P1() << "!" << endl;
                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                    hp -= attk;
                                                                                    if (hp <= 0)
                                                                                    {
                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;
                                                                                        cout << "Enter the name of your pokemon: ";
                                                                                        cin >> name;
                                                                                        bat.setNameP1(name);
                                                                                        if (name.empty())
                                                                                        {
                                                                                            cout << "\nPlease enter a valid pokemon name." << endl;
                                                                                            cin >> name;
                                                                                            bat.setNameP1(name);
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            string targetName = bat.getNameP1();

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
                                                                                                bat.setHpP1(hp);
                                                                                                bat.setAttkP1(attk);
                                                                                                bat.setMove1P1(move1);
                                                                                                bat.setMove2P1(move2);
                                                                                                bat.setMove3P1(move3);
                                                                                                bat.setMove4P1(move4);

                                                                                                if (it != pokedex.end()) {
                                                                                                    int index = std::distance(pokedex.begin(), it);
                                                                                                    if ((*it)[0] == bat.getNameP1())
                                                                                                    {
                                                                                                        cout << "You used " << bat.getNameP1() << "!" << endl;
                                                                                                        cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                                                                                                        int choice = 0;
                                                                                                        while (choice < 1 || choice > 4)
                                                                                                        {
                                                                                                            cout << "Choose a move: " << endl;
                                                                                                            cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                            cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                                                                                                            cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                            cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                                                                                                            cout << ":> ";
                                                                                                            cin >> choice;

                                                                                                            switch (choice)
                                                                                                            {
                                                                                                            case 1:
                                                                                                                cout << "You used " << bat.getMove1P1() << "!" << endl;
                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                hp -= attk;
                                                                                                                if (hp <= 0)
                                                                                                                {
                                                                                                                    cout << "Your last Pokemon has fainted! Chose another Pokemon!" << endl;

                                                                                                                }
                                                                                                                else
                                                                                                                    cout << "You now have " << hp << " HP left!" << endl;
                                                                                                                break;
                                                                                                            case 2:
                                                                                                                cout << "You used " << bat.getMove2P1() << "!" << endl;
                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                hp -= bat.getAttkP1();
                                                                                                                if (hp <= 0)
                                                                                                                {
                                                                                                                    cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                                                }
                                                                                                                else
                                                                                                                    cout << "You now have " << hp << " HP left!" << endl;
                                                                                                                break;
                                                                                                            case 3:
                                                                                                                cout << "You used " << bat.getMove3P1() << "!" << endl;
                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                hp -= bat.getAttkP1();
                                                                                                                if (hp <= 0)
                                                                                                                {
                                                                                                                    cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                                                }
                                                                                                                else
                                                                                                                    cout << "You now have " << hp << " HP left!" << endl;
                                                                                                                break;
                                                                                                            case 4:
                                                                                                                cout << "You used " << bat.getMove4P1() << "!" << endl;
                                                                                                                cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                                                hp -= bat.getAttkP1();
                                                                                                                if (hp <= 0)
                                                                                                                {
                                                                                                                    cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

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
                                                                                                    cin >> name;
                                                                                                    bat.setNameP1(name);
                                                                                                }
                                                                                            }
                                                                                        }

                                                                                    }
                                           
                                         else
                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                    break;
                                                                                case 2:
                                                                                    cout << "You used " << bat.getMove2P1() << "!" << endl;
                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                    hp -= bat.getAttkP1();
                                                                                    if (hp <= 0)
                                                                                    {
                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                    }
                                                                                    else
                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                    break;
                                                                                case 3:
                                                                                    cout << "You used " << bat.getMove3P1() << "!" << endl;
                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                    hp -= bat.getAttkP1();
                                                                                    if (hp <= 0)
                                                                                    {
                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                                                    }
                                                                                    else
                                                                                        cout << "You now have " << hp << " HP left!" << endl;
                                                                                    break;
                                                                                case 4:
                                                                                    cout << "You used " << bat.getMove4P1() << "!" << endl;
                                                                                    cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                                                    hp -= bat.getAttkP1();
                                                                                    if (hp <= 0)
                                                                                    {
                                                                                        cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

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
                                                                        cin >> name;
                                                                        bat.setNameP1(name);
                                                                    }
                                                                }
                                                            }

                                                        }
                                                        else
                                                            cout << "You now have " << hp << " HP left!" << endl;
                                                        break;
                                                    case 2:
                                                        cout << "You used " << bat.getMove2P1() << "!" << endl;
                                                        cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                        hp -= bat.getAttkP1();
                                                        if (hp <= 0)
                                                        {
                                                            cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                        }
                                                        else
                                                            cout << "You now have " << hp << " HP left!" << endl;
                                                        break;
                                                    case 3:
                                                        cout << "You used " << bat.getMove3P1() << "!" << endl;
                                                        cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                        hp -= bat.getAttkP1();
                                                        if (hp <= 0)
                                                        {
                                                            cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

                                                        }
                                                        else
                                                            cout << "You now have " << hp << " HP left!" << endl;
                                                        break;
                                                    case 4:
                                                        cout << "You used " << bat.getMove4P1() << "!" << endl;
                                                        cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                                                        hp -= bat.getAttkP1();
                                                        if (hp <= 0)
                                                        {
                                                            cout << "Your Pokemon fainted! Choose another Pokemon!" << endl;

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
											cin >> name;
											bat.setNameP1(name);
                                        }
                                    }
                                }
                            }
                            else
                            {
                                cout << "You now have " << hp << " HP left!" << endl;
                            }
                            break;
                        case 2:
                            cout << "You used " << bat.getMove2P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 3:
                            cout << "You used " << bat.getMove3P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 4:
                            cout << "You used " << bat.getMove4P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
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
    }
    cout << "Welcome player two! Please choose your starter pokemon!" << endl;
    cout << "Enter the name of your pokemon: ";
    cin >> name;
    bat.setNameP1(name);
    if (name.empty())
    {
        cout << "Please enter a valid pokemon name." << endl;
    }
    else
    {
        string targetName = bat.getNameP1();

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
            bat.setHpP1(hp);
            bat.setAttkP1(attk);
            bat.setMove1P1(move1);
            bat.setMove2P1(move2);
            bat.setMove3P1(move3);
            bat.setMove4P1(move4);

            if (it != pokedex.end()) {
                int index = std::distance(pokedex.begin(), it);
                if ((*it)[0] == bat.getNameP1())
                {
                    cout << "You used " << bat.getNameP1() << "!" << endl;
                    cout << "Your HP is " << bat.getHpP1() << ". Prepare for battle!" << endl;
                    int choice = 0;
                    while (choice < 1 || choice > 4)
                    {
                        cout << "Choose a move: " << endl;
                        cout << "1. " << bat.getMove1P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << "2. " << bat.getMove2P1() << "\t\tDamage: " << bat.getAttkP1() << endl;
                        cout << "3. " << bat.getMove3P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << "4. " << bat.getMove4P1() << "\tDamage: " << bat.getAttkP1() << endl;
                        cout << ":> ";
                        cin >> choice;

                        switch (choice)
                        {
                        case 1:
                            cout << "You used " << bat.getMove1P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= attk;
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Choose another one!" << endl;

                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 2:
                            cout << "You used " << bat.getMove2P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 3:
                            cout << "You used " << bat.getMove3P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
                            }
                            else
                                cout << "You now have " << hp << " HP left!" << endl;
                            break;
                        case 4:
                            cout << "You used " << bat.getMove4P1() << "!" << endl;
                            cout << "It dealt " << bat.getAttkP1() << " damage!" << endl;
                            hp -= bat.getAttkP1();
                            if (hp <= 0)
                            {
                                cout << "Your Pokemon fainted! Game Over!" << endl;
                                
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
}   }
        