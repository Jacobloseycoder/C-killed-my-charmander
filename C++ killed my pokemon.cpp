#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

struct Pokemon
{
    string name;
    int level;
    int hp;
    int maxHp;
    int attack;
    int defense;
    int specialAttack;
    int specialDefense;
    int speed;
    string type;
    vector<Move> moves;
};


// Stores ALL Pokémon the player owns
vector<Pokemon> playerCollection;

// Stores the 6 Pokémon currently used for battles
vector<Pokemon> battleTeam;

// Function to add Pokémon to the player's collection
void AddPokemonToCollection(const Pokemon& pokemon)
{
    playerCollection.push_back(pokemon);
}

// Function to add Pokémon to the battle team
bool AddPokemonToBattleTeam(const Pokemon& pokemon)
{
    // Team limit = 6
    if (battleTeam.size() >= 6)
    {
        cout << "Battle team is full!\n";
        return false;
    }

    battleTeam.push_back(pokemon);
    return true;
}

// Function to display a Pokémon list
void DisplayPokemon(const Pokemon& p) {
    // Header with stats
    cout << p.name << " | Level: " << p.level
        << " | HP: " << p.maxHp
        << " | ATK: " << p.attack
        << " | DEF: " << p.defense
        << " | SPA: " << p.specialAttack
        << " | SPD: " << p.specialDefense
        << " | SPE: " << p.speed
        << " | Type: " << p.type << endl;

    // Detailed Move List
    cout << "Moves List:" << endl;
    for (int i = 0; i < p.moves.size(); i++) {
        const Move& m = p.moves[i];
        cout << "  " << i + 1 << ". " << m.name
            << " | Type: " << m.type
            << " | Power: " << m.power
            << " | Acc: " << m.accuracy
            << " | PP: " << m.pp << "/" << m.maxPP << endl;
    }
    cout << "--------------" << endl;
}

void addpokemon()
{
    // Add to collection
    AddPokemonToCollection();
    // Add to battle team
    AddPokemonToBattleTeam();
};

void display() {
    cout << "\n=== Player Collection ===\n";
    for (const auto& p : playerCollection) {
        DisplayPokemon(p);
    }

    cout << "\n=== Battle Team ===\n";
    for (const auto& p : battleTeam) {
        DisplayPokemon(p);
    }
    // No return 0 here because the function is void
}

struct Move
{
    string name;       // Move name
    string type;       // Fire, Water, Grass, etc.
    int power;         // Damage amount
    bool special;      // true = special attack, false = physical
};


pokemon Bulbasaur = { "Bulbasaur", 5,45,45,49,60,60,45, "grass",{VineWhip,Tackle,LeechSeed,Growl}};
pokemon Ivysaur = { "Ivysaur", 16,60,60,61,80,80,60, "grass",{RazorLeaf,SleepPowder,PoisonPowder}};
pokemon Venusaur = { "Venusaur", 32,80,80,81,100,100,80, "grass",{SolarBeam,RazorLeaf,SleepPowder,SludgeBomb}};
pokemon Charmander = { "Charmander", 5,39,39,51,45,45,39, "fire",{Ember,Scratch,Smokescreen,MetalClaw}};
pokemon Charmeleon = { "Charmeleon", 16,58,58,64,72,72,64, "fire",{Flamethrower,Ember Slash,Smokescreen}};
pokemon Charizard = { "Charizard", 36,78,78,84,109,109,85, "fire",{Flamethrower,Fly,DragonClaw,Slash}};
pokemon Squirtle = { "Squirtle", 44,48,44,48,50,50,45, "water",{WaterGun,Tackle,TailWhip,Bubble}};
pokemon Wartortle = { "Wartortle", 59,63,63,63,83,83,58, "water",{WaterGun,Bite,RapidSpin,Withdraw}};
pokemon Blastoise = { "Blastoise", 36,79,83,85,100,100,80, "water",{HydroPump,Surf,IceBeam,Bite}};
pokemon Caterpie = { "Caterpie", 45,30,35,20,20,20,45, "bug",{Tackle,StringShot,BugBite,Snore}};
pokemon Metapod = { "Metapod", 50,10,55,30,30,30,30, "bug",{Harden,Tackle,StringShot,BugBite}};
pokemon Butterfree = { "Butterfree", 60,45,55,90,90,75,70, "bug",{Confusion,SleepPowder,Gust,Psychic}};
pokemon Weedle = { "Weedle", 40,35,45,20,20,20,50, "bug",{PoisonSting,StringShot,BugBite,Tackle}};
pokemon Kakuna = { "Kakuna", 45,15,45,25,25,25,30, "bug",{Harden,PoisonSting,StringShot,BugBite}};
pokemon Beedrill = { "Beedrill", 65,90,80,90,90,75,70, "bug",{Twineedle,FuryAttack,PoisonJab,DrillRun}};
pokemon Pidgey = { "Pidgey", 40,45,40,45,40,40,45, "flying",{Gust,Tackle,SandAttack,QuickAttack}};
pokemon Pidgeotto = { "Pidgeotto", 63,60,63,60,63,63,58, "flying",{WingAttack,QuickAttack,Whirlwind,Gust}};
pokemon Pidgeot = { "Pidgeot", 83,80,83,80,83,83,79, "flying",{WingAttack,Fly,QuickAttack,Hurricane}};
pokemon Rattata = {"Rattata", 30,56,35,25,25, 35,72, "normal",{Tackle,QuickAttack,HyperFang,FocusEnergy}};
pokemon Raticate = {"Raticate", 55,81,60,50,50,70,97, "normal",{Crunch,HyperFang,QuickAttack,SwordsDance}};
pokemon Spearow = {"Spearow", 40,60,40,30,30,30,45, "flying",{Peck,Growl,FuryAttack,Leer}};
pokemon Fearow = {"Fearow", 65,90,65,65,90,65,79, "flying",{DrillPeck,FuryAttack,Agility,Leer}};
pokemon Ekans = { "Ekans", 35,60,44,40,40,40,55, "poison",{Wrap,Bite,PoisonSting,Glare}};
pokemon Arbok = {"Arbok", 60,85,69,70,85,79,82, "poison",{Crunch,PoisonFang,Glare,Screech}};
pokemon Pikachu = {"Pikachu", 35,55,40,50,50,50,90, "electric",{Thunderbolt,QuickAttack,ThunderWave,IronTail}};
pokemon Raichu = {"Raichu", 60,90,55,90,90,80,110, "electric",{Thunderbolt,QuickAttack,ThunderWave,IronTail}};
pokemon Sandshrew = {"Sandshrew", 50,75,85,20,20,20,40, "ground",{Dig,Slash,SandAttack,DefenseCurl}};
pokemon Sandslash = {"Sandslash", 75,100,120,45,45,45,65, "ground",{Earthquake,Slash,RockSlide,SwordsDance} };
pokemon NidoranF = {"NidoranF", 55,47,40,40,40,40,55, "poison",{PoisonSting,Scratch,TailWhip,DoubleKick} };
pokemon Nidorina = {"Nidorina", 70,61,61,61,61,61,79, "poison",{PoisonSting,Bite,DoubleKick.HelpingHand} };
pokemon NidoranM = {"NidoranM", 46, 57, 40, 40, 40, 50, 10, "poison", {Peck, DoubleKick, Leer, PoisonSting} };
pokemon Nidorino = { "Nidorino", 61, 71, 57, 55, 55, 65, 16, "poison", {PoisonJab, DoubleKick, hornAttack, furryattack} };
pokemon Nidoking = { "Nidoking", 81, 101, 77, 85, 75, 85, 36, "poison", {Earthquake, SludgeBomb, Megahorn, IceBeam}};
pokemon Clefairy = { "Clefairy", 70, 45, 48, 60, 65, 35, 10, "fairy", {Sing, DoubleSlap, Metronome, Moonlight}};
pokemon Clefable = { "Clefable", 95, 70, 73, 95, 90, 60, 36, "fairy", {Moonblast, Flamethrower, Thunderbolt, SoftBoiled}};
pokemon Vulpix = { "Vulpix", 38, 41, 40, 50, 65, 65, 10, "fire", {Ember, QuickAttack, ConfuseRay, WillOWisp} };
pokemon Ninetales = { "Ninetales", 73, 76, 75, 81, 100, 100, 36, "fire", {Flamethrower, FireBlast, ConfuseRay, NastyPlot} };
pokemon Jigglypuff = { "Jigglypuff", 115, 45, 20, 45, 25, 20, 10, "normal", {Sing, Pound, Rollout, DefenseCurl} };
pokemon Wigglytuff = { "Wigglytuff", 140, 70, 45, 85, 50, 45, 36, "normal", {BodySlam, PlayRough, ShadowBall, Thunderbolt} };
pokemon Zubat = { "Zubat", 40, 45, 35, 30, 40, 55, 10, "poison", {Bite, WingAttack, ConfuseRay, Supersonic} };
pokemon Golbat = { "Golbat", 75, 80, 70, 65, 75, 90, 22, "poison", {Bite, WingAttack, ConfuseRay, AirCutter} };
pokemon Oddish = { "Oddish", 45, 50, 55, 75, 65, 30, 10, "grass", {Absorb, SleepPowder, PoisonPowder, StunSpore} };
pokemon Gloom = { "Gloom", 60, 65, 70, 85, 75, 40, 21, "grass", {MegaDrain, SleepPowder, PoisonPowder, Acid} };
pokemon Vileplume = { "Vileplume", 75, 80, 85, 110, 90, 50, 36, "grass", {SolarBeam, GigaDrain, SleepPowder, SludgeBomb} };
pokemon Paras = { "Paras", 35, 70, 55, 45, 55, 25, 10, "bug", {Scratch, LeechLife, Spore, StunSpore} };
pokemon Parasect = { "Parasect", 60, 95, 80, 60, 80, 30, 24, "bug", {Slash, Spore, GigaDrain, XScissor} };
pokemon Venonat = { "Venonat", 60, 55, 50, 40, 55, 45, 10, "bug", {Confusion, Psybeam, StunSpore, Supersonic} };
pokemon Venomoth = { "Venomoth", 70, 65, 60, 90, 75, 90, 31, "bug", {Psychic, BugBuzz, SleepPowder, QuiverDance} };
pokemon Diglett = { "Diglett", 10, 55, 25, 35, 45, 95, 10, "ground", {Dig, Magnitude, SandAttack, RockTomb} };
pokemon Dugtrio = { "Dugtrio", 35, 100, 50, 50, 70, 120, 26, "ground", {Earthquake, RockSlide, Sandstorm, SuckerPunch} };
pokemon Meowth = { "Meowth", 40, 45, 35, 40, 40, 90, 10, "normal", {Scratch, Bite, PayDay, Screech} };
pokemon Persian = { "Persian", 65, 70, 60, 65, 65, 115, 28, "normal", {Slash, Bite, Swift, Screech} };
pokemon Psyduck = { "Psyduck", 50, 51, 48, 65, 50, 50, 10, "water", {WaterGun, Confusion, Disable, Screech} };
pokemon Golduck = { "Golduck", 80, 81, 78, 95, 80, 85, 33, "water", {Surf, Psychic, IceBeam, CalmMind} };
pokemon Mankey = { "Mankey", 40, 80, 35, 35, 45, 70, 10, "fighting", {KarateChop, LowKick, FocusEnergy, SeismicToss} };
pokemon Primeape = { "Primeape", 65, 105, 60, 60, 70, 95, 28, "fighting", {CloseCombat, RockSlide, UTurn, FocusEnergy} };
pokemon Growlithe = { "Growlithe", 55, 70, 45, 70, 50, 60, 10, "fire", {Ember, Bite, Roar, FlameWheel} };
pokemon Arcanine = { "Arcanine", 90, 110, 80, 100, 80, 95, 36, "fire", {Flamethrower, ExtremeSpeed, Crunch, FireBlast} };
pokemon Poliwag = { "Poliwag", 40, 50, 40, 40, 40, 90, 10, "water", {Bubble, WaterGun, Hypnosis, DoubleSlap} };
pokemon Poliwhirl = { "Poliwhirl", 65, 65, 65, 50, 50, 90, 25, "water", {WaterGun, Hypnosis, BodySlam, MudShot} };
pokemon Poliwrath = { "Poliwrath", 90, 95, 95, 70, 90, 70, 36, "water", {Surf, DynamicPunch, IcePunch, BulkUp} };
pokemon Abra = { "Abra", 15, 10, 15, 105, 55, 90, 10, "psychic", {Teleport, Confusion, Psychic， Reflect} };
pokemon Kadabra = { "Kadabra", 40, 35, 30, 120, 70, 105, 16, "psychic", {Psychic, Confusion, Recover, Disable} };
pokemon Alakazam = { "Alakazam", 55, 50, 45, 135, 95, 120, 36, "psychic", {Psychic, CalmMind, Recover, ShadowBall} };
pokemon Machop = { "Machop", 70, 80, 50, 35, 35, 35, 10, "fighting", {KarateChop, LowKick, FocusEnergy, BulkUp} };
pokemon Machoke = { "Machoke", 80, 100, 70, 50, 60, 45, 28, "fighting", {CrossChop, Submission, BulkUp, RockSlide} };
pokemon Machamp = { "Machamp", 90, 130, 80, 65, 85, 55, 36, "fighting", {DynamicPunch, CrossChop, BulkUp, StoneEdge} };
pokemon Bellsprout = { "Bellsprout", 50, 75, 35, 70, 30, 40, 10, "grass", {VineWhip, Growth, SleepPowder, Acid} };
pokemon Weepinbell = { "Weepinbell", 65, 90, 50, 85, 45, 55, 21, "grass", {RazorLeaf, SleepPowder, Acid, Slam} };
pokemon Victreebel = { "Victreebel", 80, 105, 65, 100, 70, 70, 36, "grass", {SolarBeam, SludgeBomb, SleepPowder, RazorLeaf} };
pokemon Tentacool = { "Tentacool", 40, 40, 35, 50, 100, 70, 10, "water", {PoisonSting, BubbleBeam, Supersonic, Acid} };
pokemon Tentacruel = { "Tentacruel", 80, 70, 65, 80, 120, 100, 30, "water", {Surf, SludgeBomb, IceBeam, Barrier} };
pokemon Geodude = { "Geodude", 40, 80, 100, 30, 30, 20, 10, "rock", {RockThrow, Magnitude, DefenseCurl, Rollout} };
pokemon Graveler = { "Graveler", 55, 95, 115, 45, 45, 35, 25, "rock", {RockSlide, Magnitude, SelfDestruct, Earthquake} };
pokemon Golem = { "Golem", 80, 110, 130, 55, 65, 45, 36, "rock", {Earthquake, StoneEdge, Explosion, RockBlast} };
pokemon Ponyta = { "Ponyta", 50, 85, 55, 65, 65, 90, 10, "fire", {Ember, Stomp, FireSpin, FlameWheel} };
pokemon Rapidash = { "Rapidash", 65, 100, 70, 80, 80, 105, 40，"fire"，{Flamethrower，Megahorn，Agility，FireSpin} };
pokemon Slowpoke = { "Slowpoke", 90, 65, 65, 40, 40, 15, 10, "water", {WaterGun, Confusion, Yawn, SlackOff} };
pokemon Slowbro = { "Slowbro",  95, 75, 110, 100, 80, 30, 37, "water", {Surf, Psychic, SlackOff, Amnesia} };
pokemon Magnemite = { "Magnemite",  15, 35, 70, 95, 55, 45, 10, "electric", {ThunderShock, SonicBoom, ThunderWave, Spark} };
pokemon Magneton = { "Magneton",  50, 60, 95, 120, 70, 70, 30, "electric", {Thunderbolt, ThunderWave, FlashCannon, TriAttack} };
pokemon Farfetchd = { "Farfetchd",  51, 65, 55, 58, 62, 60, 10, "normal", {Peck, Slash, FuryCutter, SwordsDance} };
pokemon Doduo = { "Doduo",  35, 85, 45, 35, 35, 75, 10, "normal", {Peck, FuryAttack, QuickAttack, TriAttack} };
pokemon Dodrio = { "Dodrio",  60, 110, 70, 60, 60, 110, 31, "normal", {DrillPeck, TriAttack, Agility, JumpKick} };
pokemon Seel = { "Seel",  65, 45, 55, 45, 70, 45, 10, "water", {Headbutt, IceShard, Rest, AuroraBeam} };
pokemon Dewgong = { "Dewgong",  90, 70, 80, 70, 95, 70, 34, "water", {IceBeam, Surf, AuroraBeam, Rest} };
pokemon Grimer = { "Grimer",  80, 80, 50, 40, 50, 25, 10, "poison", {Sludge, PoisonGas, Minimize, MudSlap} };
pokemon Muk = { "Muk",  105, 105, 75, 65, 100, 50, 38, "poison", {SludgeBomb, Minimize, Curse, Toxic} };
pokemon Shellder = { "Shellder",  30, 65, 100, 45, 25, 40, 10, "water", {Tackle, IceShard, Clamp, Supersonic} };
pokemon Cloyster = { "Cloyster",  50, 95, 180, 85, 45, 70, 36, "water", {IceBeam, Surf, Spikes, ShellSmash} };
pokemon Gastly = { "Gastly",  30, 35, 30, 100, 35, 80, 10, "ghost", {Lick, Hypnosis, NightShade, ConfuseRay} };
pokemon Haunter = { "Haunter",  45, 50, 45, 115, 55, 95, 25, "ghost", {ShadowBall, Hypnosis, Curse, ConfuseRay} };
pokemon Gengar = { "Gengar",  60, 65, 60, 130, 75, 110, 36, "ghost", {ShadowBall, SludgeBomb, Hypnosis, Thunderbolt} };
pokemon Onix = { "Onix",  35, 45, 160, 30, 45, 70, 10, "rock", {RockThrow, Bind, RockTomb, Sandstorm} };
pokemon Drowzee = { "Drowzee",  60, 48, 45, 43, 90, 42, 10, "psychic", {Confusion, Hypnosis, Headbutt, Psybeam} };
pokemon Hypno = { "Hypno",  85, 73, 70, 73, 115, 67, 26, "psychic", {Psychic, Hypnosis, DreamEater, CalmMind} };
pokemon Krabby = { "Krabby",  30, 105, 90, 25, 25, 50, 10, "water", {Bubble, Crabhammer, ViceGrip, Stomp} };
pokemon Kingler = { "Kingler",  55, 130, 115, 50, 50, 75, 28, "water", {Crabhammer, XScissor, SwordsDance, Stomp} };
pokemon Voltorb = { "Voltorb",  40, 30, 50, 55, 55, 100, 10, "electric", {Spark, SonicBoom, SelfDestruct, LightScreen} };
pokemon Electrode = { "Electrode",  60, 50, 70, 80, 80, 150, 30, "electric", {Thunderbolt, Explosion, LightScreen, Reflect} };
pokemon Exeggcute = { "Exeggcute",  60, 40, 80, 60, 45, 40, 10, "grass", {Confusion, SleepPowder, LeechSeed, Reflect} };
pokemon Exeggutor = { "Exeggutor",  95, 95, 85, 125, 75, 55, 36, "grass", {Psychic, SolarBeam, SleepPowder, Explosion} };
pokemon Cubone = { "Cubone",  50, 50, 95, 40, 50, 35, 10, "ground", {BoneClub, Headbutt, FocusEnergy, Bonemerang} };
pokemon Marowak = { "Marowak",  60, 80, 110, 50, 80, 45, 28, "ground", {Bonemerang, Earthquake, SwordsDance, RockSlide} };
pokemon Hitmonlee = { "Hitmonlee",  50, 110, 53, 35, 110, 87, 20, "fighting", {HighJumpKick, MegaKick, BlazeKick, FocusEnergy} };
pokemon Hitmonchan = { "Hitmonchan",  50, 105, 79, 35, 110, 76, 20, "fighting", {FirePunch, IcePunch, ThunderPunch, MachPunch} };
pokemon Lickitung = { "Lickitung",  90, 55, 75, 60, 75, 30, 10, "normal", {Lick, Slam, Disable, BodySlam} };
pokemon Koffing = { "Koffing",  40, 65, 95, 60, 45, 35, 10, "poison", {Smog, Sludge, SelfDestruct, Toxic} };
pokemon Weezing = { "Weezing",  65, 90, 120, 85, 70, 60, 35, "poison", {SludgeBomb, Explosion, Toxic, Flamethrower} };
pokemon Rhyhorn = { "Rhyhorn",  80, 85, 95, 30, 30, 25, 10, "ground", {HornAttack, Stomp, RockBlast, Bulldoze} };
pokemon Rhydon = { "Rhydon",  105, 130, 120, 45, 45, 40, 42, "ground", {Earthquake, Megahorn, StoneEdge, RockSlide} };
pokemon Chansey = { "Chansey",  150, 5, 5, 35, 105, 50, 10, "normal", {SoftBoiled, SeismicToss, ThunderWave, Toxic} };
pokemon Tangela = { "Tangela",  65, 55, 115, 100, 40, 60, 10, "grass", {VineWhip, SleepPowder, StunSpore, GigaDrain} };
pokemon Kangaskhan = { "Kangaskhan",  105, 95, 80, 40, 80, 90, 10, "normal", {MegaPunch, Crunch, Earthquake, FakeOut} };
pokemon Horsea = { "Horsea",  30, 40, 70, 70, 25, 60, 10, "water", {Bubble, Smokescreen, Twister, WaterPulse} };
pokemon Seadra = { "Seadra",  55, 65, 95, 95, 45, 85, 32, "water", {Surf, DragonBreath, Agility, IceBeam} };
pokemon Goldeen = { "Goldeen",  45, 67, 60, 35, 50, 63, 10, "water", {Peck, HornAttack, WaterPulse, Agility} };
pokemon Seaking = { "Seaking",  80, 91, 65, 65, 80, 68, 33, "water", {Waterfall, Megahorn, HornDrill, AquaTail} };
pokemon Staryu = { "Staryu",  30, 45, 55, 70, 55, 85, 10, "water", {WaterGun, RapidSpin, Recover, Swift} };
pokemon Starmie = { "Starmie",  60, 75, 85, 100, 85, 115, 36, "water", {Surf, Psychic, Thunderbolt, Recover} };
pokemon MrMime = { "MrMime",  40, 45, 65, 100, 120, 90, 10, "psychic", {Psychic, Barrier, Reflect, LightScreen} };
pokemon Scyther = { "Scyther",  70, 110, 80, 55, 80, 105, 10, "bug", {Slash, WingAttack, SwordsDance, XScissor} };
pokemon Jynx = { "Jynx",  65, 50, 35, 115, 95, 95, 10, "ice", {IceBeam, Psychic, LovelyKiss, Blizzard} };
pokemon Electabuzz = { "Electabuzz",  65, 83, 57, 95, 85, 105, 10, "electric", {ThunderPunch, Thunderbolt, LightScreen, Psychic} };
pokemon Magmar = { "Magmar",  65, 95, 57, 100, 85, 93, 10, "fire", {Flamethrower, FirePunch, ConfuseRay, SunnyDay} };
pokemon Pinsir = { "Pinsir",  65, 115, 100, 55, 70, 85, 10, "bug", {XScissor, SwordsDance, ViceGrip, RockSlide} };
pokemon Tauros = { "Tauros",  75, 100, 95, 40, 70, 110, 10, "normal", {BodySlam, Earthquake, Thrash, ZenHeadbutt} };
pokemon Magikarp = { "Magikarp",  10, 10, 55, 15, 20, 80, 5, "water", {Splash, Tackle, Flail, Bounce} };
pokemon Gyarados = { "Gyarados",  95, 115, 79, 60, 100, 81, 20, "water", {Waterfall, Crunch, DragonDance, IceFang} };
pokemon Lapras = { "Lapras",  130, 85, 80, 85, 95, 60, 10, "water", {Surf, IceBeam, Thunderbolt, ConfuseRay} };
pokemon Ditto = { "Ditto",  48, 48, 48, 48, 48, 48, 10, "normal", {Transform, Rest, SleepTalk, Substitute} };
pokemon Eevee = { "Eevee",  55, 55, 50, 45, 65, 55, 10, "normal", {QuickAttack, Bite, SandAttack, Swift} };
pokemon Vaporeon = { "Vaporeon",  130, 65, 60, 110, 95, 65, 36, "water", {Surf, IceBeam, AuroraBeam, Wish} };
pokemon Jolteon = { "Jolteon",  65, 65, 60, 110, 95, 130, 36, "electric", {Thunderbolt, ThunderWave, DoubleKick, Agility} };
pokemon Flareon = { "Flareon",  65, 130, 60, 95, 110, 65, 36, "fire", {Flamethrower, FireBlast, QuickAttack, Bite} };
pokemon Porygon = { "Porygon",  65, 60, 70, 85, 75, 40, 10, "normal", {TriAttack, Recover, Thunderbolt, IceBeam} };
pokemon Omanyte = { "Omanyte",  35, 40, 100, 90, 55, 35, 10, "rock", {WaterGun, RockThrow, AncientPower, Bite} };
pokemon Omastar = { "Omastar",  70, 60, 125, 115, 70, 55, 40, "rock", {Surf, RockSlide, AncientPower, IceBeam} };
pokemon Kabuto = { "Kabuto",  30, 80, 90, 55, 45, 55, 10, "rock", {Scratch, AquaJet, AncientPower, MudShot} };
pokemon Kabutops = { "Kabutops",  60, 115, 105, 65, 70, 80, 40, "rock", {Slash, Waterfall, AncientPower, SwordsDance} };
pokemon Aerodactyl = { "Aerodactyl",  80, 105, 65, 60, 75, 130, 10, "rock", {RockSlide, WingAttack, Crunch, Fly} };
pokemon Snorlax = { "Snorlax",  160, 110, 65, 65, 110, 30, 10, "normal", {BodySlam, Rest, SleepTalk, Earthquake} };
pokemon Articuno = { "Articuno",  90, 85, 100, 95, 125, 85, 50, "ice", {IceBeam, Fly, Reflect, Agility} };
pokemon Zapdos = { "Zapdos",  90, 90, 85, 125, 90, 100, 50, "electric", {Thunderbolt, DrillPeck, Agility, LightScreen} };
pokemon Moltres = { "Moltres",  90, 100, 90, 125, 85, 90, 50, "fire", {Flamethrower, Fly, SunnyDay, FireBlast} };
pokemon Dratini = { "Dratini",  41, 64, 45, 50, 50, 50, 10, "dragon", {DragonBreath, ThunderWave, Slam، Agility} };
pokemon Dragonair = { "Dragonair",  61, 84, 65,70,70,70,30,"dragon",{DragonBreath,Surf,ThunderWave,Agility} };
pokemon Dragonite = { "Dragonite",  91, 134, 95, 100, 100, 80, 55, "dragon", {DragonClaw, Fly, Thunderbolt, IceBeam} };
pokemon Mewtwo = { "Mewtwo",  106, 110, 90, 154, 90, 130, 70, "psychic", {Psychic, CalmMind, Recover, IceBeam} };
pokemon Mew = { "Mew",  100, 100, 100, 100, 100, 100, 50, "psychic", {Psychic, Transform, Metronome, SoftBoiled} };

//all moves that will use special attack is marked as true, and all moves that will use physical attack is marked as false
move Absorb = { "Absorb", "grass", 20, true };
move Acid = { "Acid", "poison", 40, true };
move Agility = { "Agility", "normal", 0, false };
move AncientPower = { "AncientPower", "rock", 60, true };
move AuroraBeam = { "AuroraBeam", "ice", 65, true };
move Barrier = { "Barrier", "psychic", 0, true };
move Bite = { "Bite", "dark", 60, false };
move BlazeKick = { "BlazeKick", "fire", 85, false };
move BodySlam = { "BodySlam", "normal", 85, false };
move BoneClub = { "BoneClub", "ground", 65, false };
move Bonemerang = { "Bonemerang", "ground", 50, false };
move Bounce = { "Bounce", "flying", 60, false };
move Bubble = { "Bubble", "water", 40, true };
move BubbleBeam = { "BubbleBeam", "water", 65, true };
move BulkUp = { "BulkUp", "fighting", 0, true };
move BugBite = { "BugBite", "bug", 60, false };
move BugBuzz = { "BugBuzz", "bug", 90, false };
move CalmMind = { "CalmMind", "psychic", 0, true };
move Clamp = { "Clamp", "water", 35, false };
move CloseCombat = { "CloseCombat", "fighting", 85, false };
move ConfuseRay = { "ConfuseRay", "ghost", 50, true };
move Confusion = { "Confusion", "psychic", 80, true };
move Crabhammer = { "Crabhammer", "water", 90, false };
move Crunch = { "Crunch", "dark", 80, false };
move Curse = { "Curse", "ghost", 30, true };
move DefenseCurl = { "DefenseCurl", "normal", 0, true };
move Disable = { "Disable", "normal", 15, true };
move DoubleKick = { "DoubleKick", "fighting", 30, false };
move DoubleSlap = { "DoubleSlap", "normal", 15, false };
move DragonBreath = { "DragonBreath", "dragon", 60, true };
move DragonClaw = { "DragonClaw", "dragon", 80, false };
move DragonDance = { "DragonDance", "dragon", 0, true };
move DrillPeck = { "DrillPeck", "flying", 65, false };
move DynamicPunch = { "DynamicPunch", "fighting", 100, false };
move Earthquake = { "Earthquake", "ground", 100, true };
move Ember = { "Ember", "fire", 40, true };
move Explosion = { "Explosion", "normal", 170, true };
move ExtremeSpeed = { "ExtremeSpeed", "normal", 80, false };
move FakeOut = { "FakeOut", "dark", 40, true };
move FireBlast = { "FireBlast", "fire", 110, true };
move FirePunch = { "FirePunch", "fire", 75, true };
move FireSpin = { "FireSpin", "fire", 35, false };
move Flamethrower = { "Flamethrower", "fire", 90, true };
move FlameWheel = { "FlameWheel", "fire", 60, true };
move Flail = { "Flail", "normal", 20, true };
move Fly = { "Fly", "flying", 90, false };
move FocusEnergy = { "FocusEnergy", "normal", 70, true };
move FuryAttack = { "FuryAttack", "normal", 15, false };
move FuryCutter = { "FuryCutter", "bug", 40, false };
move GigaDrain = { "GigaDrain", "grass", 60, true };
move Glare = { "Glare", "normal", 0, true };
move Growl = { "Growl", "normal", 0, true };
move Gust = { "Gust", "flying", 40, true };
move Harden = { "Harden", "normal", 0, true };
move Headbutt = { "Headbutt", "normal", 70, false };
move HelpingHand = { "HelpingHand", "normal", 100, true };
move HighJumpKick = { "HighJumpKick", "fighting", 130, false };
move HornAttack = { "HornAttack", "normal", 65, false };
move HornDrill = { "HornDrill", "normal", 80, false };
move HydroPump = { "HydroPump", "water", 110, true };
move HyperFang = { "HyperFang", "normal", 80, false };
move Hypnosis = { "Hypnosis", "psychic", 10, true };
move IceBeam = { "IceBeam", "ice", 90, true };
move IceFang = { "IceFang", "ice", 65, false };
move IcePunch = { "IcePunch", "ice", 75, false };
move IceShard = { "IceShard", "ice", 40, true };
move JumpKick = { "JumpKick", "fighting", 100, false };
move KarateChop = { "KarateChop", "fighting", 50, false };
move LeechLife = { "LeechLife", "grass", 20, true };
move LeechSeed = { "LeechSeed", "grass", 30, true };
move Leer = { "Leer", "normal", 0, true };
move LightScreen = { "LightScreen", "psychic", 0, true };
move Lick = { "Lick", "ghost", 30, true };
move LovelyKiss = { "LovelyKiss", "normal", 120, true };
move LowKick = { "LowKick", "fighting", 65, false };
move Magnitude = { "Magnitude", "ground", 100, true };
move MegaDrain = { "MegaDrain", "grass", 60, true };
move MegaKick = { "MegaKick", "fighting", 120, false };
move Megahorn = { "Megahorn", "bug", 120, false };
move MetalClaw = { "MetalClaw", "steel", 50, false };
move Metronome = { "Metronome", "normal", 40, true };
move Minimize = { "Minimize", "normal", 0, true };
move Moonblast = { "Moonblast", "fairy", 90, true };
move Moonlight = { "Moonlight", "fairy", 45, true };
move MudShot = { "MudShot", "ground", 55, true };
move MudSlap = { "MudSlap", "ground", 20, true };
move NastyPlot = { "NastyPlot", "dark", 20, true };
move NightShade = { "NightShade", "ghost", 60, true };
move PayDay = { "PayDay", "normal", 40, true };
move Peck = { "Peck", "flying", 35, false };
move PlayRough = { "PlayRough", "fairy", 90, false };
move PoisonFang = { "PoisonFang", "poison", 55, false };
move PoisonGas = { "PoisonGas", "poison", 50, true };
move PoisonJab = { "PoisonJab", "poison", 80, false };
move PoisonPowder = { "PoisonPowder", "poison", 50, true };
move PoisonSting = { "PoisonSting", "poison", 15, false };
move Pound = { "Pound", "normal", 40, false };
move Psychic = { "Psychic", "psychic", 90, true };
move Psybeam = { "Psybeam", "psychic", 65, true };
move QuickAttack = { "QuickAttack", "normal", 40, false };
move QuiverDance = { "QuiverDance", "bug", 0, true };
move RazorLeaf = { "RazorLeaf", "grass", 55, false };
move Recover = { "Recover", "normal", 0, true };
move Reflect = { "Reflect", "psychic", 50, true };
move Rest = { "Rest", "psychic", 0, true };
move RockBlast = { "RockBlast", "rock", 25, true };
move RockSlide = { "RockSlide", "rock", 75, true };
move RockThrow = { "RockThrow", "rock", 50, true };
move RockTomb = { "RockTomb", "rock", 60, true };
move Rollout = { "Rollout", "rock", 30, true };
move Roar = { "Roar", "normal", 0, true };
move SandAttack = { "SandAttack", "ground", 60, true };
move Sandstorm = { "Sandstorm", "ground", 80, true };
move Scratch = { "Scratch", "normal", 40, false };
move Screech = { "Screech", "normal", 20, true };
move SeismicToss = { "SeismicToss", "ground", 100, true };
move SelfDestruct = { "SelfDestruct", "normal", 250, true };
move ShadowBall = { "ShadowBall", "ghost", 80, true };
move ShellSmash = { "ShellSmash", "normal", 40, true };
move Sing = { "Sing", "normal", 50, true };
move Slam = { "Slam", "normal", 80, false };
move Slash = { "Slash", "normal", 70, false };
move SleepPowder = { "SleepPowder", "grass", 60, true };
move SleepTalk = { "SleepTalk", "normal", 60, true };
move Sludge = { "Sludge", "poison", 65, true };
move SludgeBomb = { "SludgeBomb", "poison", 90, true };
move Smog = { "Smog", "poison", 20, true };
move Smokescreen = { "Smokescreen", "normal", 20, true };
move SoftBoiled = { "SoftBoiled", "normal", 60, true };
move SolarBeam = { "SolarBeam", "grass", 120, true };
move SonicBoom = { "SonicBoom", "normal", 20, true };
move Spark = { "Spark", "electric", 65, true };
move Spikes = { "Spikes", "ground", 90, true };
move Splash = { "Splash", "water", 40, true };
move Spore = { "Spore", "grass", 60, true };
move Stomp = { "Stomp", "normal", 65, false };
move StoneEdge = { "StoneEdge", "rock", 100, true };
move Strength = { "Strength", "normal", 80, false };
move Substitute = { "Substitute", "normal", 50, true };
move SuckerPunch = { "SuckerPunch", "dark", 70, false };
move SunnyDay = { "SunnyDay", "fire", 0, true };
move Supersonic = { "Supersonic", "normal", 120, true };
move Surf = { "Surf", "water", 90, true };
move Swift = { "Swift", "normal", 60, true };
move SwordsDance = { "SwordsDance", "normal", 0, true };
move TailWhip = { "TailWhip", "normal", 40, true };
move Tackle = { "Tackle", "normal", 40, false };
move Teleport = { "Teleport", "psychic", 0, true };
move ThunderPunch = { "ThunderPunch", "electric", 75, false };
move ThunderShock = { "ThunderShock", "electric", 40, true };
move ThunderWave = { "ThunderWave", "electric", 50, true };
move Thunderbolt = { "Thunderbolt", "electric", 90, true };
move Toxic = { "Toxic", "poison", 40, true };
move Transform = { "Transform", "normal", 50, true };
move TriAttack = { "TriAttack", "normal", 80, true };
move Twineedle = { "Twineedle", "bug", 25, false };
move Twister = { "Twister", "dragon", 40, true };
move UTurn = { "UTurn", "bug", 70, false };
move ViceGrip = { "ViceGrip", "normal", 55, false };
move VineWhip = { "VineWhip", "grass", 45, false };
move WaterGun = { "WaterGun", "water", 40, true };
move WaterPulse = { "WaterPulse", "water", 60, true };
move Waterfall = { "Waterfall", "water", 80, true };
move Whirlwind = { "Whirlwind", "normal", 0, true };
move WillOWisp = { "WillOWisp", "fire", 0, true };
move WingAttack = { "WingAttack", "flying", 60, false };
move Wish = { "Wish", "normal", 40, true };
move Withdraw = { "Withdraw", "water", 50, true };
move XScissor = { "XScissor", "bug", 40, false };
move Yawn = { "Yawn", "normal", 20, true };
move ZenHeadbutt = { "ZenHeadbutt", "psychic", 80, false };

// lets player pick a pokemon to add to their team depending on gym level (0..n)
void generatepokemon(int gym_level)
{
    vector<string> pool;
    switch (gym_level) {
    case 0: // starter pokemon
        pool = { "Charmander", "Squirtle", "Bulbasaur" };
        break;
    case 1: // beginning wilds
        pool = { "Pidgey", "Rattata", "Magikarp" };
        break;
    case 2: // after Brock
        pool = { "Weedle", "Caterpie", "Pikachu", "Diglett" };
        break;
    case 3: // after Misty
        pool = { "Spearow", "Psyduck", "Slowpoke", "Goldeen", "Mankey", "Sandshrew", "Poliwag", "Jigglypuff", "Zubat", "Geodude", "Onix", "Paras" };
        break;
    case 4: // after rival battle 2 (mix of earlier)
        pool = { "Pidgey", "Rattata", "Weedle", "Caterpie", "Pikachu", "Diglett", "Spearow", "Psyduck", "Zubat", "Geodude" };
        break;
    case 5: // after Lt. Surge
        pool = { "Voltorb", "Magnemite", "Electabuzz", "Muk" };
        break;
    case 6: // after Erika
        pool = { "Gastly", "Machop", "Cubone", "Hitmonlee", "Hitmonchan", "Oddish", "Bellsprout", "Krabby", "Horsea" };
        break;
    case 7: // after Koga (poison-themed)
        pool = { "Koffing", "Weezing", "Zubat", "Golbat", "Venonat", "Venomoth" };
        break;
    case 8: // after rival battle 3
        pool = { "Growlithe", "Abra", "Machop", "Bellsprout", "Ponyta", "Oddish" };
        break;
    case 9: // after Sabrina
        pool = { "Drowzee", "Krabby", "Cubone", "Ponyta" };
        break;
    case 10: // after rival battle 4
        pool = { "Geodude", "Graveler", "Shellder", "Krabby" };
        break;
    case 11: // after Blaine
        pool = { "Magmar", "Electabuzz", "Pinsir", "Tauros", "Scyther" };
        break;
    case 12: // after rival battle 5
        pool = { "Omanyte", "Kabuto", "Aerodactyl", "Dratini", "Horsea" };
        break;
    case 13: // after Giovanni
        pool = { "Rhydon", "Gyarados", "Lapras", "Snorlax", "Gengar" };
        break;
    default: // late game / fallback
        pool = { "Rattata", "Pidgey", "Zubat" };
        break;
    }
}

// Simple turn-based battle: player attacks first; returns true if player wins
bool Battle(Pokemon player, Pokemon enemy)
{
    cout << "Battle start: " << player.name << " (HP " << player.hp << ") vs "
         << enemy.name << " (HP " << enemy.hp << ")\n";

    while (player.hp > 0 && enemy.hp > 0) {
        // Player turn: pick a move (1..moves)
        cout << "\nYour turn. Choose a move:\n";
        for (size_t i = 0; i < player.moves.size(); ++i) {
            cout << (i + 1) << ". " << player.moves[i] << " (approx damage " << player.attack << ")\n";
        }
        cout << ":> ";
        int choice = 1;
        if (!(cin >> choice) || choice < 1 || choice > static_cast<int>(player.moves.size())) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, defaulting to move 1.\n";
            choice = 1;
        }

        cout << "You used " << player.moves[choice - 1] << "!\n";
        enemy.hp -= player.attack;
        if (enemy.hp <= 0) {
            cout << enemy.name << " fainted. You win the battle!\n";
            return true;
        }
        cout << enemy.name << " has " << enemy.hp << " HP remaining.\n";

        // Enemy turn: simple AI picks first move
        cout << enemy.name << " attacks with a move!\n";
        player.hp -= enemy.attack;
        if (player.hp <= 0) {
            cout << player.name << " fainted. You lost the battle.\n";
            return false;
        }
        cout << player.name << " has " << player.hp << " HP remaining.\n";
    }
    return player.hp > 0;
}

int main()
{
    cout << "Welcome to 'pokemon but worst'\n";
    cout << "Do you want to play? (y/n): ";
    char start;
    if (!(cin >> start) || start != 'y') {
        cout << "Maybe next time!\n";
        return 0;
    }

    // Starter selection
    cout << "\nChoose your starter:  Bulbasaur, Charmander, or Squirtle\n:> ";
    int starterChoice = 0;
    cin >> starterChoice;
    string starterName;
    switch (starterChoice) {
    case 1: starterName = "bulbasaur"; break;
    case 2: starterName = "charmander"; break;
    case 3: starterName = "squirtle"; break;
    default:
        cout << "Invalid choice — defaulting to Bulbasaur.\n";
        starterName = "Bulbasaur";
        break;
    }

    Pokemon playerPokemon;
    if (!findPokemonByName(starterName, playerPokemon)) {
        cout << "Starter not found in pokedex — exiting.\n";
        return 1;
    }
    cout << "You chose " << playerPokemon.name << "! HP: " << playerPokemon.hp << ", Attack: " << playerPokemon.attack << "\n";

    // Rival battle rival always picks charmander
    Pokemon rivalPokemon = pokedex[4]; // Charmander

    cout << "\nRival challenges you to a battle with " << rivalPokemon.name << "!\n";
    bool won = simpleBattle(playerPokemon, rivalPokemon);
    if (!won) {
        cout << "You lost to the rival. Game over for now.\n";
        return 0;
    }

    int gyms_beaten = 0;
void riddle1() {
    //first gym leader riddle
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
    cout << "how many pokemon are there?" << endl;
    cout << "a. 151" << endl;
    cout << "b. like 5" << endl;
    cout << "c. 1 billion lions" << endl;
    cout << "d. 1025" << endl;
    if (cin.get() == 'a') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'a') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            if (!battleTeam.empty())
            {
                battleTeam[0].hp -= 10;
                cout << battleTeam[0].name
                    << " lost 10 HP!\n";
            }
        }
};

void riddle2() {
    //this is the riddle for the second gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
    cout << "what is the 37th pokemon?" << endl;
    cout << "a. Jigglypuff" << endl;
    cout << "b. Ninetales" << endl;
    cout << "c. Vulpix" << endl;
    cout << "d. Wigglytuff" << endl;
    if (cin.get() == 'c') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'c') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            if (!battleTeam.empty())
            {
                battleTeam[0].hp -= 10;
                cout << battleTeam[0].name
                    << " lost 10 HP!\n";
            }
        }
    };
void riddle3() {
    //this is the riddle for the third gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
    cout << "how do you evolve eevee into flareon?" << endl;
    cout << "a. use a water stone" << endl;
    cout << "b. level up with high friendship during the day" << endl;
    cout << "c. level up with high friendship during the night" << endl;
    cout << "d. use a fire stone " << endl;
    if (cin.get() == 'd') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'd') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            if (!battleTeam.empty())
            {
                battleTeam[0].hp -= 10;
                cout << battleTeam[0].name
                    << " lost 10 HP!\n";
            }
        }
    };

void riddle4() {
    //this is the riddle for the fourth gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
    cout << "how many dragonites does lance have?" << endl;
    cout << "a. 1" << endl;
    cout << "b. 2" << endl;
    cout << "c. 3" << endl;
    cout << "d. 4" << endl;
    if (cin.get() == 'c') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'c') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            if (!battleTeam.empty())
            {
                battleTeam[0].hp -= 10;
                cout << battleTeam[0].name
                    << " lost 10 HP!\n";
            }
        }
    };

void riddle5() {
    //this is the riddle for the fifth gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
    cout << "what is the best sorce of information for pokemon?" << endl;
    cout << "a. the pokedex" << endl;
    cout << "b. wikipedia" << endl;
    cout << "c. the pokemon anime" << endl;
    cout << "d. the internet" << endl;
    if (cin.get() == 'b') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'b') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            if (!battleTeam.empty())
            {
                battleTeam[0].hp -= 10;
                cout << battleTeam[0].name
                    << " lost 10 HP!\n";
            }
        }
    };

void riddle6() {
    //this is the riddle for the sixth gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
    cout << "what is the capital of the pokemon world?" << endl;
    cout << "a. pallet town" << endl;
    cout << "b. cerulean city" << endl;
    cout << "c. indigo plateau" << endl;
    cout << "d. lavender town" << endl;
    if (cin.get() == 'c') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'c') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            if (!battleTeam.empty())
            {
                battleTeam[0].hp -= 10;
                cout << battleTeam[0].name
                    << " lost 10 HP!\n";
            }
        }
    };

void riddle7() {
    //this is the riddle for the seventh gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //need to make sure to give the player a reward if they get it right
    cout << "what is the name of the pokemon that can only be caught in the safari zone?" << endl;
    cout << "a. scyther" << endl;
    cout << "b. pinsir" << endl;
    cout << "c. tauros" << endl;
    cout << "d. magikarp" << endl;
    if (cin.get() == 'c') {
        cout << "correct!" << endl;
        //reward
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'c') {
            cout << "correct!" << endl;
            //reward
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            if (!battleTeam.empty())
            {
                battleTeam[0].hp -= 10;
                cout << battleTeam[0].name
                    << " lost 10 HP!\n";
            }
        }
    };

void riddle8() {
    //this is the riddle for the eighth gym leader
    //mulitple choice question with 4 options
    //if wrong they get a second chance
    //if wrong agion they get a punishment
    cout << "how many pokemon are in the original 151?" << endl;
    cout << "a. 150" << endl;
    cout << "b. 151" << endl;
    cout << "c. 152" << endl;
    cout << "d. 153" << endl;
    if (cin.get() == 'b') {
        cout << "correct!" << endl;
    }
    else {
        cout << "wrong! try again!" << endl;
        if (cin.get() == 'b') {
            cout << "correct!" << endl;
        }
        else {
            cout << "wrong again! you get a punishment!" << endl;
            if (!battleTeam.empty())
            {
                battleTeam[0].hp -= 10;
                cout << battleTeam[0].name
                    << " lost 10 HP!\n";
            }
        }
    };

    vector<Pokemon> brockTeam = {
        { "Geodude", 12, 40, 40, 80, 100, 30, 30, 20, "rock", {RockThrow, Rollout, DefenseCurl, Tackle} },
        { "Onix", 14, 35, 35, 45, 160, 30, 45, 70, "rock", {RockTomb, Sandstorm, Bind, Screech} }
    };
    vector<Pokemon> mistyTeam = {
        { "Staryu", 18, 30, 30, 45, 55, 70, 55, 85, "water", {WaterGun, RapidSpin, Recover, Swift} },
        { "Starmie", 21, 60, 60, 75, 85, 100, 85, 115, "water", {Surf, Psychic, Thunderbolt, Recover} }
    };
    vector<Pokemon> ltSurgeTeam = {
        { "Voltorb", 21, 40, 40, 30, 50, 55, 55, 100, "electric", {Spark, SonicBoom, SelfDestruct, LightScreen} },
        { "Raichu", 24, 60, 60, 90, 55, 90, 80, 110, "electric", {Thunderbolt, QuickAttack, ThunderWave, IronTail} }
    };
    vector<Pokemon> erikaTeam = {
        { "Tangela", 29, 65, 65, 55, 115, 100, 40, 60, "grass", {VineWhip, SleepPowder, StunSpore, GigaDrain} },
        { "Victreebel", 29, 80, 80, 105, 65, 100, 70, 70, "grass", {SolarBeam, SludgeBomb, SleepPowder, RazorLeaf} },
        {"Vileplume", 29, 75, 75, 100, 65, 110, 50, 50, "grass", {PetalDance, Acid, SleepPowder, RazorLeaf} }
    };
    vector<Pokemon> kogaTeam = {
        { "Koffing", 37, 40, 40, 65, 95, 60, 45, 35, "poison", {Smog, Sludge, SelfDestruct, Toxic} },
        { "Weezing", 39, 65, 65, 90, 120, 85, 70, 60, "poison", {SludgeBomb, Explosion, Toxic, Flamethrower} },
		{ "Muk", 38, 105, 105, 65, 100, 50, 50, 75, "poison", {SludgeBomb, AcidArmor, Minimize, Rest} },
		{ "Venonat", 31, 60, 60, 55, 50, 40, 40, 45, "bug", {Tackle, Supersonic, PoisonPowder, LeechLife} }
    };
    vector<Pokemon> sabrinaTeam = {
        { "Kadabra", 38, 40, 40, 35, 30, 120, 70, 105, "psychic", {Psychic, Confusion, Recover, Disable} },
        { "Alakazam", 43, 55, 55, 50, 45, 135, 95, 120, "psychic", {Psychic, CalmMind, Recover, ShadowBall} },
		{ "Mr. Mime", 37, 40, 40, 45, 65, 100, 120, 90, "psychic", {Psychic, Barrier, Reflect, LightScreen} },
		{ "Venomoth", 38, 65, 65, 60, 90, 50, 90, 90, "bug", {Psybeam, SleepPowder, LeechLife, GigaDrain} }
    };
    vector<Pokemon> blaineTeam = {
        { "Growlithe", 42, 55, 55, 70, 45, 70, 50, 60, "fire", {Ember, Bite, Roar, FlameWheel} },
        { "Arcanine", 47, 90, 90, 110, 80, 100, 80, 95, "fire", {Flamethrower, ExtremeSpeed, Crunch, FireBlast} },
		{ "Rapidash", 40, 65, 65, 100, 70, 80, 60, 105, "fire", {FlameWheel, Stomp, Agility, FireBlast} },
		{ "Magmar", 40, 65, 65, 95, 57, 95, 93, 109, "fire", {Ember, Smokescreen, ConfuseRay, FireBlast} }
    };
    vector<Pokemon> giovanniTeam = {
        { "Rhyhorn", 45, 80, 80, 85, 95, 30, 30, 25, "ground", {HornAttack, Stomp, RockBlast, Bulldoze} },
        { "Nidoking", 50, 81, 81, 101, 77, 85, 75, 85, "poison", {Earthquake, SludgeBomb, Megahorn, IceBeam} },
		{"dugtrio", 42, 35, 35, 50, 70, 120, 60, 110, "ground", {Earthquake, Slash, RockSlide, SuckerPunch} },
		{"nidoqueen", 50, 90, 90, 75, 85, 85, 70, 75, "poison", {Earthquake, SludgeBomb, Megahorn, IceBeam} }
    };
	vector<Pokemon> loreleiTeam = {
		{ "Dewgong", 33, 60, 60, 70, 50, 70, 45, 70, "water", {Surf, IceBeam, Rest, SleepTalk} },
		{ "Cloyster", 32, 30, 30, 50, 100, 95, 45, 85, "water", {HydroPump, SpikeCannon, RazorShell, Protect} },
		{ "Slowbro", 36, 95, 95, 110, 80, 65, 30, 30, "water", {Surf, Psychic, Amnesia, SlackOff} },
		{ "Jynx", 31, 65, 65, 50, 35, 115, 95, 95, "ice", {IceBeam, LovelyKiss, BodySlam, Psychic} }
	};
	vector<Pokemon> brunoTeam = {
		{ "Hitmonlee", 40, 50, 50, 35, 110, 50, 35, 110, "fighting", {HighJumpKick, JumpKick, Counter, BrickBreak} },
		{ "Hitmonchan", 40, 50, 50, 35, 110, 35, 35, 110, "fighting", {FirePunch, IcePunch, ThunderPunch, MachPunch} },
		{ "Machamp", 40, 90, 90, 130, 80, 65, 55, 85, "fighting", {CrossChop, DynamicPunch, Earthquake, RockSlide} },
		{ "Onix", 40, 35, 35, 45, 160, 30, 45, 70, "rock", {RockTomb, Sandstorm, Bind, Screech} }
	};
	vector<Pokemon> agathaTeam = {
		{ "Gengar", 43, 60, 60, 65, 60, 110, 75, 130, "ghost", {ShadowBall, SludgeBomb, Hypnosis, DreamEater} },
		{ "Haunter", 40, 45, 45, 50, 45, 95, 55, 115, "ghost", {ShadowBall, SludgeBomb, Hypnosis, DreamEater} },
		{ "Arbok", 38, 60, 60, 85, 69, 65, 80, 80, "poison", {PoisonJab, Glare, Earthquake, GigaDrain} },
		{ "Golbat", 38, 75, 75, 80, 70, 75, 80, 90, "poison", {WingAttack, Bite, Supersonic, LeechLife} }
	};
	vector<Pokemon> lanceTeam = {
		{ "Gyarados", 58, 95, 95, 125, 79, 60, 100, 81, "water", {HydroPump, HyperBeam, DragonDance, Bite} },
		{ "Dragonite", 55, 91, 91, 134, 95, 80, 100, 80, "dragon", {DragonClaw, DragonDance, HyperBeam, ThunderPunch} },
        { "Dragonite", 55, 91, 91, 134, 95, 80, 100, 80, "dragon", {DragonClaw, DragonDance, HyperBeam, ThunderPunch} },
        { "Dragonite", 55, 91, 91, 134, 95, 80, 100, 80, "dragon", {DragonClaw, DragonDance, HyperBeam, ThunderPunch} },
        { "Aerodactyl", 55, 90, 90, 130, 85, 65, 60, 130, "flying", {WingAttack, HyperBeam, RockThrow, Agility} }
	};
	vector<Pokemon> championTeam = {
		{ "Pidgeot", 50, 80, 80, 70, 70, 70, 70, 70, "flying", {Gust, QuickAttack, WingAttack, FeatherDance} },
		{ "Alakazam", 50, 55, 55, 50, 45, 135, 95, 120, "psychic", {Psychic, CalmMind, Recover, ShadowBall} },
		{ "Rhydon", 50, 80, 80, 85, 95, 30, 30, 25, "ground", {HornAttack, Stomp, RockBlast, Bulldoze} },
		{ "Charizard", 50, 78, 78, 84, 78, 109, 85, 100, "fire", {Flamethrower, Fly, DragonClaw, Slash} },
		{ "Arcanine", 50, 90, 90, 110, 80, 100, 80, 95, "fire", {Flamethrower, ExtremeSpeed, Crunch， FireBlast} },
		{ "Exeggutor", 50, 95, 95, 95, 85, 55, 45, 55, "grass", {Psychic, GigaDrain, SleepPowder, SolarBeam} }

	};

    void ShowMoves(const Pokemon & p)
    {
        cout << "\n" << p.name << "'s Moves:\n";

        for (int i = 0; i < p.moves.size(); i++)
        {
            const Move& m = p.moves[i];

            cout << i + 1 << ". "
                << m.name
                << " | Type: " << m.type
                << " | Power: " << m.power
                << " | Accuracy: " << m.accuracy
                << " | PP: " << m.pp << "/" << m.maxPP
                << endl;
        }
    }

void UseMove(Pokemon& attacker,
    Pokemon& defender,
    int moveIndex)
{
    if (moveIndex < 0 ||
        moveIndex >= attacker.moves.size())
    {
        cout << "Invalid move!\n";
        return;
    }

    Move& move = attacker.moves[moveIndex];

    // Check PP
    if (move.pp <= 0)
    {
        cout << move.name << " has no PP left!\n";
        return;
    }

    move.pp--;

    cout << attacker.name
        << " used "
        << move.name
        << "!\n";

    // Very simple damage formula
    int damage =
        (attacker.attack + move.power)
        - defender.defense / 2;

    if (damage < 1)
    {
        damage = 1;
    }

    defender.hp -= damage;

    if (defender.hp < 0)
    {
        defender.hp = 0;
    }

    cout << defender.name
        << " took "
        << damage
        << " damage!\n";

    cout << defender.name
        << " HP: "
        << defender.hp
        << "/"
        << defender.maxHp
        << endl;

    // Status effects
    if (move.effect != "none")
    {
        cout << defender.name
            << " may be affected by "
            << move.effect
            << "!\n";
    }
}