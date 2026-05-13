#include <algorithm>
#include <chrono> // For std::chrono::system_clock::now().time_since_epoch().count()
#include <iostream>
#include <random> // For std::default_random_engine, std::uniform_int_distribution
#include <string>
#include <vector>
#include <limits> // For std::numeric_limits

// Consistent capitalization for struct names
using namespace std;

// Forward declaration for Pokemon, as Move struct needs it in its constructor potentially
struct Pokemon;

struct Move
{
    string name;
    string type;
    int power;
    bool special;

    // Constructor to easily initialize Move objects
    Move(string n, string t, int p, bool s) : name(n), type(t), power(p), special(s) {}
};

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
    vector<Move> moves; // Uses the corrected 'Move' type

    // Constructor for Pokemon
    Pokemon(string n, int lvl, int currentHp, int mHp, int atk, int def, int spAtk, int spDef, int spe, string t, vector<Move> m)
        : name(n), level(lvl), hp(currentHp), maxHp(mHp), attack(atk), defense(def), specialAttack(spAtk), specialDefense(spDef), speed(spe), type(t), moves(m) {
    }

    // Overload constructor for easier creation when maxHp is same as currentHp initially
    Pokemon(string n, int lvl, int mHp, int atk, int def, int spAtk, int spDef, int spe, string t, vector<Move> m)
        : name(n), level(lvl), hp(mHp), maxHp(mHp), attack(atk), defense(def), specialAttack(spAtk), specialDefense(spDef), speed(spe), type(t), moves(m) {
    }
};

// --- Move Definitions (using the Move constructor) ---
Move Absorb = { "Absorb", "grass", 20, true };
Move Acid = { "Acid", "poison", 40, true };
Move Agility = { "Agility", "normal", 50, false };
Move AncientPower = { "AncientPower", "rock", 60, true };
Move AuroraBeam = { "AuroraBeam", "ice", 65, true };
Move AirCutter = { "AirCutter", "flying", 60, true };
Move Barrier = { "Barrier", "psychic", 100, true };
Move Bite = { "Bite", "dark", 60, false };
Move BlazeKick = { "BlazeKick", "fire", 85, false };
Move BodySlam = { "BodySlam", "normal", 85, false };
Move BoneClub = { "BoneClub", "ground", 65, false };
Move Bonemerang = { "Bonemerang", "ground", 50, false };
Move Bounce = { "Bounce", "flying", 60, false };
Move Bubble = { "Bubble", "water", 40, true };
Move BubbleBeam = { "BubbleBeam", "water", 65, true };
Move BulkUp = { "BulkUp", "fighting", 10, true };
Move BugBite = { "BugBite", "bug", 60, false };
Move BugBuzz = { "BugBuzz", "bug", 90, false };
Move CalmMind = { "CalmMind", "psychic", 70, true };
Move Clamp = { "Clamp", "water", 35, false };
Move CloseCombat = { "CloseCombat", "fighting", 85, false };
Move ConfuseRay = { "ConfuseRay", "ghost", 50, true };
Move Confusion = { "Confusion", "psychic", 80, true };
Move Crabhammer = { "Crabhammer", "water", 90, false };
Move Crunch = { "Crunch", "dark", 80, false };
Move Curse = { "Curse", "ghost", 30, true };
Move DefenseCurl = { "DefenseCurl", "normal", 20, true };
Move Disable = { "Disable", "normal", 15, true };
Move DoubleKick = { "DoubleKick", "fighting", 30, false };
Move DoubleSlap = { "DoubleSlap", "normal", 15, false };
Move DragonBreath = { "DragonBreath", "dragon", 60, true };
Move DragonClaw = { "DragonClaw", "dragon", 80, false };
Move DragonDance = { "DragonDance", "dragon", 0, true };
Move DrillPeck = { "DrillPeck", "flying", 65, false };
Move DynamicPunch = { "DynamicPunch", "fighting", 100, false };
Move Earthquake = { "Earthquake", "ground", 100, true }; // Changed to special based on typical game logic
Move Ember = { "Ember", "fire", 40, true };
Move Explosion = { "Explosion", "normal", 170, true };
Move ExtremeSpeed = { "ExtremeSpeed", "normal", 80, false };
Move FakeOut = { "FakeOut", "dark", 40, true };
Move FireBlast = { "FireBlast", "fire", 110, true };
Move FirePunch = { "FirePunch", "fire", 75, true };
Move FireSpin = { "FireSpin", "fire", 35, false };
Move Flamethrower = { "Flamethrower", "fire", 90, true };
Move FlameWheel = { "FlameWheel", "fire", 60, true };
Move Flail = { "Flail", "normal", 20, true };
Move Fly = { "Fly", "flying", 90, false };
Move FocusEnergy = { "FocusEnergy", "normal", 70, true };
Move FuryAttack = { "FuryAttack", "normal", 15, false };
Move FuryCutter = { "FuryCutter", "bug", 40, false };
Move GigaDrain = { "GigaDrain", "grass", 60, true };
Move Glare = { "Glare", "normal", 50, true };
Move Growl = { "Growl", "normal", 50, true };
Move Gust = { "Gust", "flying", 40, true };
Move Harden = { "Harden", "normal", 0, true };
Move Headbutt = { "Headbutt", "normal", 70, false };
Move HelpingHand = { "HelpingHand", "normal", 100, true };
Move HighJumpKick = { "HighJumpKick", "fighting", 130, false };
Move HornAttack = { "HornAttack", "normal", 65, false };
Move HornDrill = { "HornDrill", "normal", 80, false };
Move HydroPump = { "HydroPump", "water", 110, true };
Move HyperFang = { "HyperFang", "normal", 80, false };
Move Hypnosis = { "Hypnosis", "psychic", 10, true };
Move IceBeam = { "IceBeam", "ice", 90, true };
Move IceFang = { "IceFang", "ice", 65, false };
Move IcePunch = { "IcePunch", "ice", 75, false };
Move IceShard = { "IceShard", "ice", 40, true };
Move JumpKick = { "JumpKick", "fighting", 100, false };
Move KarateChop = { "KarateChop", "fighting", 50, false };
Move LeechLife = { "LeechLife", "grass", 20, true };
Move LeechSeed = { "LeechSeed", "grass", 30, true };
Move Leer = { "Leer", "normal", 60, true };
Move LightScreen = { "LightScreen", "psychic", 60, true };
Move Lick = { "Lick", "ghost", 30, true };
Move LovelyKiss = { "LovelyKiss", "normal", 120, true };
Move LowKick = { "LowKick", "fighting", 65, false };
Move Magnitude = { "Magnitude", "ground", 100, true }; // Changed to special
Move MegaDrain = { "MegaDrain", "grass", 60, true };
Move MegaKick = { "MegaKick", "fighting", 120, false };
Move Megahorn = { "Megahorn", "bug", 120, false };
Move MetalClaw = { "MetalClaw", "steel", 50, false };
Move Metronome = { "Metronome", "normal", 40, true };
Move Minimize = { "Minimize", "normal", 50, true };
Move Moonblast = { "Moonblast", "fairy", 90, true };
Move Moonlight = { "Moonlight", "fairy", 45, true };
Move MudShot = { "MudShot", "ground", 55, true }; // Changed to special
Move MudSlap = { "MudSlap", "ground", 20, true };
Move NastyPlot = { "NastyPlot", "dark", 20, true };
Move NightShade = { "NightShade", "ghost", 60, true }; // Changed to special
Move PayDay = { "PayDay", "normal", 40, true };
Move Peck = { "Peck", "flying", 35, false };
Move PlayRough = { "PlayRough", "fairy", 90, false };
Move PoisonFang = { "PoisonFang", "poison", 55, false };
Move PoisonGas = { "PoisonGas", "poison", 50, true };
Move PoisonJab = { "PoisonJab", "poison", 80, false };
Move PoisonPowder = { "PoisonPowder", "poison", 50, true };
Move PoisonSting = { "PoisonSting", "poison", 15, false };
Move Pound = { "Pound", "normal", 40, false };
Move Psychic = { "Psychic", "psychic", 90, true };
Move Psybeam = { "Psybeam", "psychic", 65, true };
Move QuickAttack = { "QuickAttack", "normal", 40, false };
Move QuiverDance = { "QuiverDance", "bug", 60, true };
Move RazorLeaf = { "RazorLeaf", "grass", 55, false };
Move Recover = { "Recover", "normal", 0, true };
Move Reflect = { "Reflect", "psychic", 50, true };
Move Rest = { "Rest", "psychic", 0, true };
Move RockBlast = { "RockBlast", "rock", 25, true };
Move RockSlide = { "RockSlide", "rock", 75, true };
Move RockThrow = { "RockThrow", "rock", 50, true };
Move RockTomb = { "RockTomb", "rock", 60, true };
Move Rollout = { "Rollout", "rock", 30, true };
Move Roar = { "Roar", "normal", 10, true };
Move SandAttack = { "SandAttack", "ground", 60, true };
Move Sandstorm = { "Sandstorm", "ground", 80, true };
Move Scratch = { "Scratch", "normal", 40, false };
Move Screech = { "Screech", "normal", 20, true };
Move SeismicToss = { "SeismicToss", "fighting", 100, false }; // Changed to physical
Move SelfDestruct = { "SelfDestruct", "normal", 250, true };
Move ShadowBall = { "ShadowBall", "ghost", 80, true };
Move ShellSmash = { "ShellSmash", "normal", 40, true };
Move Sing = { "Sing", "normal", 50, true };
Move Slam = { "Slam", "normal", 80, false };
Move Slash = { "Slash", "normal", 70, false };
Move SleepPowder = { "SleepPowder", "grass", 60, true };
Move SleepTalk = { "SleepTalk", "normal", 60, true };
Move Sludge = { "Sludge", "poison", 65, true };
Move SludgeBomb = { "SludgeBomb", "poison", 90, true };
Move Smog = { "Smog", "poison", 20, true };
Move Smokescreen = { "Smokescreen", "normal", 20, true };
Move SoftBoiled = { "SoftBoiled", "normal", 60, true };
Move SolarBeam = { "SolarBeam", "grass", 120, true };
Move SonicBoom = { "SonicBoom", "normal", 20, true };
Move Spark = { "Spark", "electric", 65, true };
Move Spikes = { "Spikes", "ground", 90, true };
Move Splash = { "Splash", "water", 40, true };
Move Spore = { "Spore", "grass", 60, true };
Move Stomp = { "Stomp", "normal", 65, false };
Move StoneEdge = { "StoneEdge", "rock", 100, true }; // Changed to special
Move Strength = { "Strength", "normal", 80, false };
Move Substitute = { "Substitute", "normal", 50, true };
Move SuckerPunch = { "SuckerPunch", "dark", 70, false };
Move SunnyDay = { "SunnyDay", "fire", 20, true };
Move Supersonic = { "Supersonic", "normal", 120, true };
Move Surf = { "Surf", "water", 90, true };
Move Swift = { "Swift", "normal", 60, true };
Move SwordsDance = { "SwordsDance", "normal", 50, true };
Move TailWhip = { "TailWhip", "normal", 40, true };
Move Tackle = { "Tackle", "normal", 40, false };
Move Teleport = { "Teleport", "psychic", 20, true };
Move ThunderPunch = { "ThunderPunch", "electric", 75, false }; // Changed to physical
Move ThunderShock = { "ThunderShock", "electric", 40, true };
Move ThunderWave = { "ThunderWave", "electric", 50, true };
Move Thunderbolt = { "Thunderbolt", "electric", 90, true };
Move Toxic = { "Toxic", "poison", 40, true };
Move Transform = { "Transform", "normal", 50, true };
Move TriAttack = { "TriAttack", "normal", 80, true };
Move Twineedle = { "Twineedle", "bug", 25, false };
Move Twister = { "Twister", "dragon", 40, true };
Move UTurn = { "UTurn", "bug", 70, false };
Move StringShot = { "StringShot", "bug", 0, true };
Move Wrap = { "Wrap", "normal", 15, false };
Move Dig = { "Dig", "ground", 80, false };
Move Growth = { "Growth", "grass", 0, true };
Move SlackOff = { "SlackOff", "normal", 0, true };
Move Amnesia = { "Amnesia", "psychic", 0, true };
Move Bind = { "Bind", "normal", 15, false };
Move DreamEater = { "DreamEater", "psychic", 100, true };
Move Bulldoze = { "Bulldoze", "ground", 60, false };
Move RapidSpin = { "RapidSpin", "normal", 50, false };
Move Hurricane = { "Hurricane", "flying", 110, true };
Move SpikeCannon = { "SpikeCannon", "normal", 20, false };
Move RazorShell = { "RazorShell", "water", 75, false };
Move MachPunch = { "MachPunch", "fighting", 40, false };
Move IronTail = { "IronTail", "steel", 100, false };
Move HyperBeam = { "HyperBeam", "normal", 150, true };
Move AquaJet = { "AquaJet", "water", 40, false };
Move StunSpore = { "StunSpore", "grass", 0, true };
Move ViceGrip = { "ViceGrip", "normal", 55, false };
Move VineWhip = { "VineWhip", "grass", 45, false };
Move Thrash = { "Thrash", "normal", 120, false };
Move WaterGun = { "WaterGun", "water", 40, true };
Move WaterPulse = { "WaterPulse", "water", 60, true };
Move Waterfall = { "Waterfall", "water", 80, true };
Move Whirlwind = { "Whirlwind", "normal", 80, true };
Move WillOWisp = { "WillOWisp", "fire", 70, true };
Move WingAttack = { "WingAttack", "flying", 60, false };
Move Wish = { "Wish", "normal", 40, true };
Move Withdraw = { "Withdraw", "water", 50, true };
Move XScissor = { "XScissor", "bug", 40, false };
Move Yawn = { "Yawn", "normal", 20, true };
Move ZenHeadbutt = { "ZenHeadbutt", "psychic", 80, false };

// --- Pokemon Definitions (using the Pokemon constructor) ---
Pokemon Bulbasaur("Bulbasaur", 5, 45, 49, 49, 65, 65, 45, "grass", { VineWhip, Tackle, LeechSeed, Growl });
Pokemon Ivysaur("Ivysaur", 16, 60, 62, 63, 80, 80, 60, "grass", { RazorLeaf, SleepPowder, PoisonPowder }); // Corrected stats
Pokemon Venusaur("Venusaur", 32, 80, 82, 83, 100, 100, 80, "grass", { SolarBeam, RazorLeaf, SleepPowder, SludgeBomb }); // Corrected stats
Pokemon Charmander("Charmander", 5, 39, 52, 43, 60, 50, 65, "fire", { Ember, Scratch, Smokescreen, MetalClaw });
Pokemon Charmeleon("Charmeleon", 16, 58, 64, 58, 80, 65, 80, "fire", { Flamethrower, Ember, Slash, Smokescreen }); // Corrected stats
Pokemon Charizard("Charizard", 36, 78, 84, 78, 109, 85, 100, "fire", { Flamethrower, Fly, DragonClaw, Slash }); // Corrected stats
Pokemon Squirtle("Squirtle", 5, 44, 48, 65, 50, 64, 43, "water", { WaterGun, Tackle, TailWhip, Bubble }); // Adjusted level, hp, atk/def
Pokemon Wartortle("Wartortle", 16, 59, 63, 80, 65, 80, 58, "water", { WaterGun, Bite, Withdraw }); // Corrected stats & move list
Pokemon Blastoise("Blastoise", 36, 79, 83, 100, 85, 105, 78, "water", { HydroPump, Surf, IceBeam, Bite }); // Corrected stats
Pokemon Caterpie("Caterpie", 5, 45, 20, 35, 20, 20, 45, "bug", { Tackle, StringShot, BugBite }); // Corrected stats
Pokemon Metapod("Metapod", 7, 50, 20, 55, 25, 25, 30, "bug", { Harden, Tackle, StringShot, BugBite }); // Corrected stats & move list
Pokemon Butterfree("Butterfree", 10, 60, 45, 50, 90, 80, 70, "bug", { Confusion, SleepPowder, Gust, Psychic }); // Corrected stats
Pokemon Weedle("Weedle", 5, 40, 35, 30, 20, 20, 50, "bug", { PoisonSting, StringShot, BugBite });
Pokemon Kakuna("Kakuna", 7, 45, 25, 40, 25, 25, 35, "bug", { Harden, PoisonSting, StringShot, BugBite }); // Corrected stats & move list
Pokemon Beedrill("Beedrill", 10, 65, 90, 40, 75, 75, 70, "bug", { Twineedle, FuryAttack, PoisonJab, DrillPeck }); // Corrected stats
Pokemon Pidgey("Pidgey", 5, 40, 45, 40, 35, 35, 56, "flying", { Gust, Tackle, SandAttack, QuickAttack }); // Corrected stats
Pokemon Pidgeotto("Pidgeotto", 16, 63, 60, 55, 60, 50, 71, "flying", { WingAttack, QuickAttack, Whirlwind, Gust }); // Corrected stats
Pokemon Pidgeot("Pidgeot", 36, 83, 80, 75, 80, 70, 101, "flying", { WingAttack, Fly, QuickAttack, Hurricane }); // Corrected stats
Pokemon Rattata("Rattata", 5, 30, 56, 35, 25, 25, 72, "normal", { Tackle, QuickAttack, HyperFang, FocusEnergy }); // Corrected stats
Pokemon Raticate("Raticate", 20, 55, 81, 60, 50, 50, 97, "normal", { Crunch, HyperFang, QuickAttack, SwordsDance }); // Adjusted level, moveset
Pokemon Spearow("Spearow", 5, 40, 60, 30, 31, 31, 70, "flying", { Peck, Growl, FuryAttack, Leer }); // Corrected stats
Pokemon Fearow("Fearow", 20, 65, 90, 65, 65, 61, 100, "flying", { DrillPeck, FuryAttack, Agility, Leer }); // Adjusted level, stats, moveset
Pokemon Ekans("Ekans", 5, 35, 60, 44, 40, 40, 55, "poison", { Wrap, Bite, PoisonSting, Glare });
Pokemon Arbok("Arbok", 20, 60, 85, 69, 70, 70, 80, "poison", { Crunch, PoisonFang, Glare, Screech }); // Adjusted level, stats
Pokemon Pikachu("Pikachu", 5, 35, 55, 40, 50, 50, 90, "electric", { Thunderbolt, QuickAttack, ThunderWave, ThunderShock }); // Corrected moves (IronTail not Gen 1)
Pokemon Raichu("Raichu", 20, 60, 90, 55, 90, 80, 110, "electric", { Thunderbolt, QuickAttack, ThunderWave, IcePunch }); // Adjusted level, moves (IronTail not Gen 1)
Pokemon Sandshrew("Sandshrew", 5, 50, 75, 85, 20, 20, 40, "ground", { Dig, Slash, SandAttack, DefenseCurl });
Pokemon Sandslash("Sandslash", 20, 75, 100, 110, 45, 55, 65, "ground", { Earthquake, Slash, RockSlide, SwordsDance }); // Adjusted level, stats
Pokemon NidoranF("NidoranF", 5, 55, 47, 52, 40, 40, 41, "poison", { PoisonSting, Scratch, TailWhip, DoubleKick }); // Corrected stats
Pokemon Nidorina("Nidorina", 16, 70, 61, 67, 61, 61, 56, "poison", { PoisonSting, Bite, DoubleKick, HelpingHand }); // Corrected stats & move typo
Pokemon NidoranM("NidoranM", 5, 46, 57, 40, 40, 40, 50, "poison", { Peck, DoubleKick, Leer, PoisonSting });
Pokemon Nidorino("Nidorino", 16, 61, 71, 67, 55, 55, 65, "poison", { PoisonJab, DoubleKick, HornAttack, FuryAttack }); // Corrected stats & move typo
Pokemon Nidoqueen("Nidoqueen", 36, 90, 92, 87, 75, 85, 76, "poison", { Earthquake, SludgeBomb, Megahorn, IceBeam });
Pokemon Nidoking("Nidoking", 36, 81, 101, 77, 85, 75, 85, "poison", { Earthquake, SludgeBomb, Megahorn, IceBeam });
Pokemon Clefairy("Clefairy", 5, 70, 45, 48, 60, 65, 35, "fairy", { Sing, DoubleSlap, Metronome, Moonlight }); // Type changed to fairy
Pokemon Clefable("Clefable", 20, 95, 70, 73, 95, 90, 60, "fairy", { Moonblast, Flamethrower, Thunderbolt, SoftBoiled }); // Adjusted level, type changed to fairy
Pokemon Vulpix("Vulpix", 5, 38, 41, 40, 50, 65, 65, "fire", { Ember, QuickAttack, ConfuseRay, WillOWisp });
Pokemon Ninetales("Ninetales", 20, 73, 76, 75, 81, 100, 100, "fire", { Flamethrower, FireBlast, ConfuseRay, NastyPlot }); // Adjusted level
Pokemon Jigglypuff("Jigglypuff", 5, 115, 45, 20, 45, 25, 20, "normal", { Sing, Pound, Rollout, DefenseCurl });
Pokemon Wigglytuff("Wigglytuff", 20, 140, 70, 45, 85, 50, 45, "normal", { BodySlam, PlayRough, ShadowBall, Thunderbolt }); // Adjusted level
Pokemon Zubat("Zubat", 5, 40, 45, 35, 30, 40, 55, "poison", { Bite, WingAttack, ConfuseRay, Supersonic });
Pokemon Golbat("Golbat", 20, 75, 80, 70, 65, 75, 90, "poison", { Bite, WingAttack, ConfuseRay, AirCutter }); // Adjusted level
Pokemon Oddish("Oddish", 5, 45, 50, 55, 75, 65, 30, "grass", { Absorb, SleepPowder, PoisonPowder }); // Removed StunSpore due to type inconsistency
Pokemon Gloom("Gloom", 16, 60, 65, 70, 85, 75, 40, "grass", { MegaDrain, SleepPowder, PoisonPowder, Acid }); // Adjusted level
Pokemon Vileplume("Vileplume", 32, 75, 80, 85, 110, 90, 50, "grass", { SolarBeam, GigaDrain, SleepPowder, SludgeBomb }); // Adjusted level
Pokemon Paras("Paras", 5, 35, 70, 55, 45, 55, 25, "bug", { Scratch, LeechLife, Spore, StunSpore });
Pokemon Parasect("Parasect", 20, 60, 95, 80, 60, 80, 30, "bug", { Slash, Spore, GigaDrain, XScissor }); // Adjusted level
Pokemon Venonat("Venonat", 5, 60, 55, 50, 40, 55, 45, "bug", { Confusion, Psybeam, StunSpore, Supersonic });
Pokemon Venomoth("Venomoth", 20, 70, 65, 60, 90, 75, 90, "bug", { Psychic, BugBuzz, SleepPowder, QuiverDance }); // Adjusted level
Pokemon Diglett("Diglett", 5, 10, 55, 25, 35, 45, 95, "ground", { Dig, Magnitude, SandAttack, RockTomb });
Pokemon Dugtrio("Dugtrio", 20, 35, 100, 50, 50, 70, 120, "ground", { Earthquake, RockSlide, Sandstorm, SuckerPunch }); // Adjusted level
Pokemon Meowth("Meowth", 5, 40, 45, 35, 40, 40, 90, "normal", { Scratch, Bite, PayDay, Screech });
Pokemon Persian("Persian", 20, 65, 70, 60, 65, 65, 115, "normal", { Slash, Bite, Swift, Screech }); // Adjusted level
Pokemon Psyduck("Psyduck", 5, 50, 51, 48, 65, 50, 50, "water", { WaterGun, Confusion, Disable, Screech });
Pokemon Golduck("Golduck", 20, 80, 81, 78, 95, 80, 85, "water", { Surf, Psychic, IceBeam, CalmMind }); // Adjusted level
Pokemon Mankey("Mankey", 5, 40, 80, 35, 35, 45, 70, "fighting", { KarateChop, LowKick, FocusEnergy, SeismicToss });
Pokemon Primeape("Primeape", 20, 65, 105, 60, 60, 70, 95, "fighting", { CloseCombat, RockSlide, UTurn, FocusEnergy }); // Adjusted level
Pokemon Growlithe("Growlithe", 5, 55, 70, 45, 70, 50, 60, "fire", { Ember, Bite, Roar, FlameWheel });
Pokemon Arcanine("Arcanine", 20, 90, 110, 80, 100, 80, 95, "fire", { Flamethrower, ExtremeSpeed, Crunch, FireBlast }); // Adjusted level
Pokemon Poliwag("Poliwag", 5, 40, 50, 40, 40, 40, 90, "water", { Bubble, WaterGun, Hypnosis, DoubleSlap });
Pokemon Poliwhirl("Poliwhirl", 16, 65, 65, 65, 50, 50, 90, "water", { WaterGun, Hypnosis, BodySlam, MudShot }); // Adjusted level
Pokemon Poliwrath("Poliwrath", 36, 90, 95, 95, 70, 90, 70, "water", { Surf, DynamicPunch, IcePunch, BulkUp }); // Adjusted level
Pokemon Abra("Abra", 5, 25, 10, 15, 105, 55, 90, "psychic", { Teleport, Confusion, Psychic, Reflect }); // Corrected stats and added missing comma
Pokemon Kadabra("Kadabra", 16, 40, 35, 30, 120, 70, 105, "psychic", { Psychic, Confusion, Recover, Disable }); // Adjusted level
Pokemon Alakazam("Alakazam", 36, 55, 50, 45, 135, 95, 120, "psychic", { Psychic, CalmMind, Recover, ShadowBall }); // Adjusted level
Pokemon Machop("Machop", 5, 70, 80, 50, 35, 35, 35, "fighting", { KarateChop, LowKick, FocusEnergy, BulkUp });
Pokemon Machoke("Machoke", 16, 80, 100, 70, 50, 60, 45, "fighting", { CloseCombat, SeismicToss, BulkUp, RockSlide }); // Changed CrossChop to CloseCombat
Pokemon Machamp("Machamp", 36, 90, 130, 80, 65, 85, 55, "fighting", { DynamicPunch, CloseCombat, BulkUp, StoneEdge }); // Changed CrossChop
Pokemon Bellsprout("Bellsprout", 5, 50, 75, 35, 70, 30, 40, "grass", { VineWhip, Growth, SleepPowder, Acid });
Pokemon Weepinbell("Weepinbell", 16, 65, 90, 50, 85, 45, 55, "grass", { RazorLeaf, SleepPowder, Acid, Slam }); // Adjusted level
Pokemon Victreebel("Victreebel", 36, 80, 105, 65, 100, 70, 70, "grass", { SolarBeam, SludgeBomb, SleepPowder, RazorLeaf }); // Adjusted level
Pokemon Tentacool("Tentacool", 5, 40, 40, 35, 50, 100, 70, "water", { PoisonSting, BubbleBeam, Supersonic, Acid });
Pokemon Tentacruel("Tentacruel", 20, 80, 70, 65, 80, 120, 100, "water", { Surf, SludgeBomb, IceBeam, Barrier }); // Adjusted level
Pokemon Geodude("Geodude", 5, 40, 80, 100, 30, 30, 20, "rock", { RockThrow, Magnitude, DefenseCurl, Rollout });
Pokemon Graveler("Graveler", 16, 55, 95, 115, 45, 45, 35, "rock", { RockSlide, Magnitude, SelfDestruct, Earthquake }); // Adjusted level
Pokemon Golem("Golem", 36, 80, 110, 130, 55, 65, 45, "rock", { Earthquake, StoneEdge, Explosion, RockBlast }); // Adjusted level
Pokemon Ponyta("Ponyta", 5, 50, 85, 55, 65, 65, 90, "fire", { Ember, Stomp, FireSpin, FlameWheel });
Pokemon Rapidash("Rapidash", 20, 65, 100, 70, 80, 80, 105, "fire", { Flamethrower, Megahorn, Agility, FireSpin }); // Adjusted level, comma fix
Pokemon Slowpoke("Slowpoke", 5, 90, 65, 65, 40, 40, 15, "water", { WaterGun, Confusion, Yawn }); // Removed missing SlackOff
Pokemon Slowbro("Slowbro", 36, 95, 75, 110, 100, 80, 30, "water", { Surf, Psychic, SlackOff, Amnesia }); // Adjusted level
Pokemon Magnemite("Magnemite", 5, 25, 35, 70, 95, 55, 45, "electric", { ThunderShock, SonicBoom, ThunderWave, Spark });
Pokemon Magneton("Magneton", 20, 50, 60, 95, 120, 70, 70, "electric", { Thunderbolt, ThunderWave, Swift, TriAttack }); // Adjusted level
Pokemon Farfetchd("Farfetchd", 5, 51, 65, 55, 58, 62, 60, "normal", { Peck, Slash, FuryCutter, SwordsDance });
Pokemon Doduo("Doduo", 5, 35, 85, 45, 35, 35, 75, "normal", { Peck, FuryAttack, QuickAttack, TriAttack });
Pokemon Dodrio("Dodrio", 20, 60, 110, 70, 60, 60, 110, "normal", { DrillPeck, TriAttack, Agility, JumpKick }); // Adjusted level
Pokemon Seel("Seel", 5, 65, 45, 55, 45, 70, 45, "water", { Headbutt, IceShard, Rest, AuroraBeam });
Pokemon Dewgong("Dewgong", 20, 90, 70, 80, 70, 95, 70, "water", { IceBeam, Surf, AuroraBeam, Rest }); // Adjusted level
Pokemon Grimer("Grimer", 5, 80, 80, 50, 40, 50, 25, "poison", { Sludge, PoisonGas, Minimize, MudSlap });
Pokemon Muk("Muk", 20, 105, 105, 75, 65, 100, 50, "poison", { SludgeBomb, Minimize, Curse, Toxic }); // Adjusted level
Pokemon Shellder("Shellder", 5, 30, 65, 100, 45, 25, 40, "water", { Tackle, IceShard, Clamp, Supersonic });
Pokemon Cloyster("Cloyster", 20, 50, 95, 180, 85, 45, 70, "water", { IceBeam, Surf, Spikes, ShellSmash }); // Adjusted level
Pokemon Gastly("Gastly", 5, 30, 35, 30, 100, 35, 80, "ghost", { Lick, Hypnosis, NightShade, ConfuseRay });
Pokemon Haunter("Haunter", 16, 45, 50, 45, 115, 55, 95, "ghost", { ShadowBall, Hypnosis, Curse, ConfuseRay }); // Adjusted level
Pokemon Gengar("Gengar", 36, 60, 65, 60, 130, 75, 110, "ghost", { ShadowBall, SludgeBomb, Hypnosis, Thunderbolt }); // Adjusted level
Pokemon Onix("Onix", 5, 35, 45, 160, 30, 45, 70, "rock", { RockThrow, Bind, RockTomb, Sandstorm });
Pokemon Drowzee("Drowzee", 5, 60, 48, 45, 43, 90, 42, "psychic", { Confusion, Hypnosis, Headbutt, Psybeam });
Pokemon Hypno("Hypno", 20, 85, 73, 70, 73, 115, 67, "psychic", { Psychic, Hypnosis, DreamEater, CalmMind }); // Adjusted level
Pokemon Krabby("Krabby", 5, 30, 105, 90, 25, 25, 50, "water", { Bubble, Crabhammer, ViceGrip, Stomp });
Pokemon Kingler("Kingler", 20, 55, 130, 115, 50, 50, 75, "water", { Crabhammer, XScissor, SwordsDance, Stomp }); // Adjusted level
Pokemon Voltorb("Voltorb", 5, 40, 30, 50, 55, 55, 100, "electric", { Spark, SonicBoom, SelfDestruct, LightScreen });
Pokemon Electrode("Electrode", 20, 60, 50, 70, 80, 80, 150, "electric", { Thunderbolt, Explosion, LightScreen, Reflect }); // Adjusted level
Pokemon Exeggcute("Exeggcute", 5, 60, 40, 80, 60, 45, 40, "grass", { Confusion, SleepPowder, LeechSeed, Reflect });
Pokemon Exeggutor("Exeggutor", 20, 95, 95, 85, 125, 75, 55, "grass", { Psychic, SolarBeam, SleepPowder, Explosion }); // Adjusted level
Pokemon Cubone("Cubone", 5, 50, 50, 95, 40, 50, 35, "ground", { BoneClub, Headbutt, FocusEnergy, Bonemerang });
Pokemon Marowak("Marowak", 20, 60, 80, 110, 50, 80, 45, "ground", { Bonemerang, Earthquake, SwordsDance, RockSlide }); // Adjusted level
Pokemon Hitmonlee("Hitmonlee", 20, 50, 110, 53, 35, 110, 87, "fighting", { HighJumpKick, MegaKick, BlazeKick, FocusEnergy });
Pokemon Hitmonchan("Hitmonchan", 20, 50, 105, 79, 35, 110, 76, "fighting", { FirePunch, IcePunch, ThunderPunch }); // Removed MachPunch as it wasn't defined
Pokemon Lickitung("Lickitung", 5, 90, 55, 75, 60, 75, 30, "normal", { Lick, Slam, Disable, BodySlam });
Pokemon Koffing("Koffing", 5, 40, 65, 95, 60, 45, 35, "poison", { Smog, Sludge, SelfDestruct, Toxic });
Pokemon Weezing("Weezing", 20, 65, 90, 120, 85, 70, 60, "poison", { SludgeBomb, Explosion, Toxic, Flamethrower }); // Adjusted level
Pokemon Rhyhorn("Rhyhorn", 5, 80, 85, 95, 30, 30, 25, "ground", { HornAttack, Stomp, RockBlast, Bulldoze });
Pokemon Rhydon("Rhydon", 20, 105, 130, 120, 45, 45, 40, "ground", { Earthquake, Megahorn, StoneEdge, RockSlide }); // Adjusted level
Pokemon Chansey("Chansey", 5, 250, 5, 5, 35, 105, 50, "normal", { SoftBoiled, SeismicToss, ThunderWave, Toxic }); // Corrected HP
Pokemon Tangela("Tangela", 5, 65, 55, 115, 100, 40, 60, "grass", { VineWhip, SleepPowder, StunSpore, GigaDrain });
Pokemon Kangaskhan("Kangaskhan", 5, 105, 95, 80, 40, 80, 90, "normal", { BodySlam, Crunch, Earthquake, FakeOut }); // Changed MegaPunch to BodySlam
Pokemon Horsea("Horsea", 5, 30, 40, 70, 70, 25, 60, "water", { Bubble, Smokescreen, Twister, WaterPulse });
Pokemon Seadra("Seadra", 20, 55, 65, 95, 95, 45, 85, "water", { Surf, DragonBreath, Agility, IceBeam }); // Adjusted level
Pokemon Goldeen("Goldeen", 5, 45, 67, 60, 35, 50, 63, "water", { Peck, HornAttack, WaterPulse, Agility });
Pokemon Seaking("Seaking", 20, 80, 91, 65, 65, 80, 68, "water", { Waterfall, Megahorn, HornDrill, IceBeam }); // Adjusted level, added IceBeam for variety
Pokemon Staryu("Staryu", 5, 30, 45, 55, 70, 55, 85, "water", { WaterGun, RapidSpin, Recover, Swift });
Pokemon Starmie("Starmie", 20, 60, 75, 85, 100, 85, 115, "water", { Surf, Psychic, Thunderbolt, Recover }); // Adjusted level
Pokemon MrMime("MrMime", 5, 40, 45, 65, 100, 120, 90, "psychic", { Psychic, Barrier, Reflect, LightScreen });
Pokemon Scyther("Scyther", 20, 70, 110, 80, 55, 80, 105, "bug", { Slash, WingAttack, SwordsDance, XScissor });
Pokemon Jynx("Jynx", 20, 65, 50, 35, 115, 95, 95, "ice", { IceBeam, Psychic, LovelyKiss, BodySlam }); // Added BodySlam
Pokemon Electabuzz("Electabuzz", 20, 65, 83, 57, 95, 85, 105, "electric", { ThunderPunch, Thunderbolt, LightScreen, Psychic });
Pokemon Magmar("Magmar", 20, 65, 95, 57, 100, 85, 93, "fire", { Flamethrower, FirePunch, ConfuseRay, SunnyDay });
Pokemon Pinsir("Pinsir", 20, 65, 115, 100, 55, 70, 85, "bug", { XScissor, SwordsDance, ViceGrip, RockSlide });
Pokemon Tauros("Tauros", 20, 75, 100, 95, 40, 70, 110, "normal", { BodySlam, Earthquake, Thrash, ZenHeadbutt });
Pokemon Magikarp("Magikarp", 5, 20, 10, 10, 15, 20, 80, "water", { Splash, Tackle, Flail, Bounce }); // Corrected HP
Pokemon Gyarados("Gyarados", 20, 95, 115, 79, 60, 100, 81, "water", { Waterfall, Crunch, DragonDance, IceFang });
Pokemon Lapras("Lapras", 20, 130, 85, 80, 85, 95, 60, "water", { Surf, IceBeam, Thunderbolt, ConfuseRay });
Pokemon Ditto("Ditto", 5, 48, 48, 48, 48, 48, 48, "normal", { Transform, Rest, SleepTalk, Substitute });
Pokemon Eevee("Eevee", 5, 55, 55, 50, 45, 65, 55, "normal", { QuickAttack, Bite, SandAttack, Swift });
Pokemon Vaporeon("Vaporeon", 20, 130, 65, 60, 110, 95, 65, "water", { Surf, IceBeam, AuroraBeam, Wish });
Pokemon Jolteon("Jolteon", 20, 65, 65, 60, 110, 95, 130, "electric", { Thunderbolt, ThunderWave, DoubleKick, Agility });
Pokemon Flareon("Flareon", 20, 65, 130, 60, 95, 110, 65, "fire", { Flamethrower, FireBlast, QuickAttack, Bite });
Pokemon Porygon("Porygon", 5, 65, 60, 70, 85, 75, 40, "normal", { TriAttack, Recover, Thunderbolt, IceBeam });
Pokemon Omanyte("Omanyte", 5, 35, 40, 100, 90, 55, 35, "rock", { WaterGun, RockThrow, AncientPower, Bite });
Pokemon Omastar("Omastar", 20, 70, 60, 125, 115, 70, 55, "rock", { Surf, RockSlide, AncientPower, IceBeam });
Pokemon Kabuto("Kabuto", 5, 30, 80, 90, 55, 45, 55, "rock", { Scratch, AquaJet, AncientPower, MudShot });
Pokemon Kabutops("Kabutops", 20, 60, 115, 105, 65, 70, 80, "rock", { Slash, Waterfall, AncientPower, SwordsDance });
Pokemon Aerodactyl("Aerodactyl", 20, 80, 105, 65, 60, 75, 130, "rock", { RockSlide, WingAttack, Crunch, Fly });
Pokemon Snorlax("Snorlax", 20, 160, 110, 65, 65, 110, 30, "normal", { BodySlam, Rest, SleepTalk, Earthquake });
Pokemon Articuno("Articuno", 50, 90, 85, 100, 95, 125, 85, "ice", { IceBeam, Fly, Reflect, Agility });
Pokemon Zapdos("Zapdos", 50, 90, 90, 85, 125, 90, 100, "electric", { Thunderbolt, DrillPeck, Agility, LightScreen });
Pokemon Moltres("Moltres", 50, 90, 100, 90, 125, 85, 90, "fire", { Flamethrower, Fly, SunnyDay, FireBlast });
Pokemon Dratini("Dratini", 5, 41, 64, 45, 50, 50, 50, "dragon", { DragonBreath, ThunderWave, Slam, Agility }); // Corrected comma
Pokemon Dragonair("Dragonair", 30, 61, 84, 65, 70, 70, 70, "dragon", { DragonBreath, Surf, ThunderWave, Agility }); // Adjusted level
Pokemon Dragonite("Dragonite", 55, 91, 134, 95, 100, 100, 80, "dragon", { DragonClaw, Fly, Thunderbolt, IceBeam });
Pokemon Mewtwo("Mewtwo", 70, 106, 110, 90, 154, 90, 130, "psychic", { Psychic, CalmMind, Recover, IceBeam });
Pokemon Mew("Mew", 50, 100, 100, 100, 100, 100, 100, "psychic", { Psychic, Transform, Metronome, SoftBoiled });

// Stores ALL Pokémon the player owns
vector<Pokemon> playerCollection;

// Stores the 6 Pokémon currently used for battles
vector<Pokemon> battleTeam;

// --- Function Declarations (needed if defined after main or used before definition) ---
void AddPokemonToCollection(const Pokemon& pokemon);
bool AddPokemonToBattleTeam(const Pokemon& pokemon);
void DisplayPokemon(const Pokemon& p);
void addpokemon(const Pokemon& pokemon);
void display();
void generatepokemon(int gym_level);
bool battle(vector<Pokemon>& enemyTeam);
void HealTeam();
float GetTypeMultiplier(const string& attackType, const string& defendType);
void ExecuteTurn(Pokemon& attacker, Pokemon& defender, Move& move);
bool IsTeamAlive();
bool IsEnemyAlive(const vector<Pokemon>& enemyTeam);

// --- Riddle Function Declarations ---
void riddle1();
void riddle2();
void riddle3();
void riddle4();
void riddle5();
void riddle6();
void riddle7();
void riddle8();

// --- Enemy Team Definitions (moved globally to be accessible) ---
vector<Pokemon> rivalTeam = {
    Pokemon("Charmander", 12, 40, 80, 100, 30, 30, 20, "fire", {Scratch, Growl, Ember, Smokescreen})
};
vector<Pokemon> brockTeam = {
    Pokemon("Geodude", 12, 40, 80, 100, 30, 30, 20, "rock", {RockThrow, Rollout, DefenseCurl, Tackle}),
    Pokemon("Onix", 14, 35, 45, 130, 30, 45, 70, "rock", {RockTomb, Sandstorm, Bind, Screech})
};
vector<Pokemon> mistyTeam = {
    Pokemon("Staryu", 18, 30, 45, 55, 70, 55, 85, "water", {WaterGun, RapidSpin, Recover, Swift}),
    Pokemon("Starmie", 21, 60, 65, 85, 90, 85, 90, "water", {Surf, Psychic, Thunderbolt, Recover})
};
vector<Pokemon> rival2Team = {
    Pokemon("Charmeleon", 16, 50, 64, 58, 80, 65, 80, "fire", {Scratch, Growl, Ember, Smokescreen}),
    Pokemon("Pidgeotto", 16, 40, 63, 55, 60, 50, 71, "flying", {Gust, QuickAttack, WingAttack, SandAttack}),
    Pokemon("Raticate", 16, 55, 81, 60, 50, 50, 97, "normal", {Tackle, TailWhip, QuickAttack, HyperFang}),
    Pokemon("Kadabra", 16, 40, 35, 30, 120, 70, 105, "psychic", {Teleport, Confusion, Psybeam, Reflect})
};
vector<Pokemon> ltSurgeTeam = {
    Pokemon("Voltorb", 21, 40, 30, 50, 55, 55, 100, "electric", {Spark, SonicBoom, SelfDestruct, LightScreen}),
    Pokemon("Raichu", 24, 60, 90, 55, 90, 80, 110, "electric", {Thunderbolt, QuickAttack, ThunderWave, ThunderPunch})
};
vector<Pokemon> erikaTeam = {
    Pokemon("Tangela", 29, 65, 55, 115, 100, 40, 60, "grass", {VineWhip, SleepPowder, StunSpore, GigaDrain}),
    Pokemon("Victreebel", 29, 80, 105, 65, 100, 70, 70, "grass", {SolarBeam, SludgeBomb, SleepPowder, RazorLeaf}),
    Pokemon("Vileplume", 29, 75, 80, 85, 110, 90, 50, "grass", {RazorLeaf, Acid, SleepPowder, SludgeBomb})
};
vector<Pokemon> kogaTeam = {
    Pokemon("Koffing", 37, 40, 65, 95, 60, 45, 35, "poison", {Smog, Sludge, SelfDestruct, Toxic}),
    Pokemon("Weezing", 39, 65, 90, 120, 85, 70, 60, "poison", {SludgeBomb, Explosion, Toxic, Flamethrower}),
    Pokemon("Muk", 38, 105, 105, 75, 65, 100, 50, "poison", {SludgeBomb, Minimize, Curse, Toxic}),
    Pokemon("Venomoth", 31, 70, 65, 60, 90, 75, 90, "bug", {Psybeam, SleepPowder, LeechLife, BugBuzz})
};
vector<Pokemon> rival3Team = {
    Pokemon("Charizard", 27, 78, 84, 78, 109, 85, 100, "fire", {Flamethrower, WingAttack, DragonClaw, Slash}),
    Pokemon("Pidgeot", 26, 83, 80, 75, 80, 70, 101, "flying", {WingAttack, Fly, QuickAttack, Hurricane}),
    Pokemon("Gyarados", 23, 95, 115, 79, 60, 100, 81, "water", {Waterfall, Bite, DragonDance, HydroPump}),
    Pokemon("Alakazam", 22, 55, 50, 45, 135, 95, 120, "psychic", {Psychic, Confusion, Recover, ShadowBall}),
    Pokemon("Arcanine", 24, 90, 110, 80, 100, 80, 95, "fire", {Ember, Bite, Roar, FlameWheel})
};
vector<Pokemon> sabrinaTeam = {
    Pokemon("Kadabra", 38, 40, 35, 30, 120, 70, 105, "psychic", {Psychic, Confusion, Recover, Disable}),
    Pokemon("Alakazam", 43, 55, 50, 45, 135, 95, 120, "psychic", {Psychic, CalmMind, Recover, ShadowBall}),
    Pokemon("MrMime", 37, 40, 45, 65, 100, 120, 90, "psychic", {Psychic, Barrier, Reflect, LightScreen}),
    Pokemon("Hypno", 38, 85, 73, 70, 73, 115, 67, "psychic", {Psychic, Hypnosis, DreamEater, CalmMind})
};
vector<Pokemon> blaineTeam = {
    Pokemon("Growlithe", 42, 55, 70, 45, 70, 50, 60, "fire", {Ember, Bite, Roar, FlameWheel}),
    Pokemon("Arcanine", 47, 90, 110, 80, 100, 80, 95, "fire", {Flamethrower, ExtremeSpeed, Crunch, FireBlast}),
    Pokemon("Rapidash", 40, 65, 100, 70, 80, 80, 105, "fire", {FlameWheel, Stomp, Agility, FireBlast}),
    Pokemon("Magmar", 40, 65, 95, 57, 100, 85, 93, "fire", {Ember, Smokescreen, ConfuseRay, FireBlast})
};
vector<Pokemon> rival4Team = {
    Pokemon("Charizard", 36, 78, 84, 78, 109, 85, 100, "fire", {Flamethrower, Fly, DragonClaw, Slash}),
    Pokemon("Pidgeot", 36, 83, 80, 75, 80, 70, 101, "flying", {WingAttack, Fly, QuickAttack, Hurricane}),
    Pokemon("Gyarados", 36, 95, 115, 79, 60, 100, 81, "water", {Waterfall, Bite, DragonDance, HydroPump}),
    Pokemon("Alakazam", 36, 55, 50, 45, 135, 95, 120, "psychic", {Psychic, CalmMind, Recover, ShadowBall}),
    Pokemon("Arcanine", 36, 90, 110, 80, 100, 80, 95, "fire", {Ember, Bite, Roar, FlameWheel}),
    Pokemon("Rhydon", 36, 105, 130, 120, 45, 45, 40, "ground", {HornAttack, Stomp, RockBlast, Bulldoze})
};
vector<Pokemon> giovanniTeam = {
    Pokemon("Rhyhorn", 45, 80, 85, 95, 30, 30, 25, "ground", {HornAttack, Stomp, RockBlast, Bulldoze}),
    Pokemon("Nidoking", 50, 81, 101, 77, 85, 75, 85, "poison", {Earthquake, SludgeBomb, Megahorn, IceBeam}),
    Pokemon("Dugtrio", 42, 35, 100, 50, 50, 70, 120, "ground", {Earthquake, Slash, RockSlide, SuckerPunch}),
    Pokemon("Nidoqueen", 50, 90, 92, 87, 75, 85, 76, "poison", {Earthquake, SludgeBomb, Megahorn, IceBeam}) // Added Nidoqueen as a sample.
};
// Elite Four Teams
vector<Pokemon> loreleiTeam = {
    Pokemon("Dewgong", 54, 90, 70, 80, 70, 95, 70, "water", {Surf, IceBeam, Rest, AuroraBeam}),
    Pokemon("Cloyster", 53, 50, 95, 180, 85, 45, 70, "water", {HydroPump, SpikeCannon, RazorShell, IceBeam}),
    Pokemon("Slowbro", 54, 95, 75, 110, 100, 80, 30, "water", {Surf, Psychic, Amnesia, SlackOff}),
    Pokemon("Jynx", 56, 65, 50, 35, 115, 95, 95, "ice", {IceBeam, LovelyKiss, Psychic, BodySlam}),
    Pokemon("Lapras", 56, 130, 85, 80, 85, 95, 60, "water", {Surf, IceBeam, Psychic, Thunderbolt})
};
vector<Pokemon> brunoTeam = {
    Pokemon("Hitmonlee", 53, 50, 120, 53, 35, 110, 87, "fighting", {HighJumpKick, MegaKick, BlazeKick, FocusEnergy}),
    Pokemon("Hitmonchan", 53, 50, 105, 79, 35, 110, 76, "fighting", {FirePunch, IcePunch, ThunderPunch, MachPunch}),
    Pokemon("Machamp", 56, 90, 130, 80, 65, 85, 55, "fighting", {DynamicPunch, CloseCombat, Earthquake, StoneEdge}),
    Pokemon("Onix", 51, 35, 45, 160, 30, 45, 70, "rock", {RockThrow, IronTail, Sandstorm, Earthquake}),
    Pokemon("Golem", 54, 80, 110, 130, 55, 65, 45, "rock", {Earthquake, StoneEdge, Explosion, RockBlast})
};
vector<Pokemon> agathaTeam = {
    Pokemon("Gengar", 56, 60, 65, 60, 130, 75, 110, "ghost", {ShadowBall, SludgeBomb, Hypnosis, DreamEater}),
    Pokemon("Golbat", 56, 75, 80, 70, 65, 75, 90, "poison", {WingAttack, Bite, ConfuseRay, LeechLife}),
    Pokemon("Arbok", 55, 60, 85, 69, 70, 70, 80, "poison", {PoisonJab, Glare, Crunch, Earthquake}),
    Pokemon("Haunter", 55, 45, 50, 45, 115, 55, 95, "ghost", {ShadowBall, SludgeBomb, Hypnosis, ConfuseRay}),
    Pokemon("Gengar", 58, 60, 65, 60, 130, 75, 110, "ghost", {ShadowBall, SludgeBomb, Psychic, Thunderbolt})
};
vector<Pokemon> lanceTeam = {
    Pokemon("Gyarados", 58, 95, 115, 79, 60, 100, 81, "water", {HydroPump, HyperBeam, DragonDance, Bite}),
    Pokemon("Dragonite", 60, 91, 134, 95, 100, 100, 80, "dragon", {DragonClaw, DragonDance, HyperBeam, Thunderbolt}),
    Pokemon("Aerodactyl", 58, 80, 105, 65, 60, 75, 130, "rock", {RockSlide, WingAttack, Crunch, Fly}),
    Pokemon("Dragonite", 60, 91, 134, 95, 100, 100, 80, "dragon", {DragonClaw, DragonDance, HyperBeam, IceBeam}),
    Pokemon("Dragonite", 62, 91, 134, 95, 100, 100, 80, "dragon", {DragonClaw, DragonDance, HyperBeam, FireBlast})
};
vector<Pokemon> championTeam = {
    Pokemon("Pidgeot", 61, 83, 80, 75, 80, 70, 101, "flying", {WingAttack, Fly, QuickAttack, Hurricane}),
    Pokemon("Alakazam", 59, 55, 50, 45, 135, 95, 120, "psychic", {Psychic, CalmMind, Recover, ShadowBall}),
    Pokemon("Rhydon", 61, 105, 130, 120, 45, 45, 40, "ground", {Earthquake, Megahorn, StoneEdge, RockSlide}),
    Pokemon("Arcanine", 61, 90, 110, 80, 100, 80, 95, "fire", {Flamethrower, ExtremeSpeed, Crunch, FireBlast}),
    Pokemon("Exeggutor", 61, 95, 95, 85, 125, 75, 55, "grass", {Psychic, SolarBeam, SleepPowder, Explosion}),
    Pokemon("Charizard", 63, 78, 84, 78, 109, 85, 100, "fire", {Flamethrower, WingAttack, DragonClaw, Earthquake})
};

// --- Global random number generator ---
std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
std::uniform_int_distribution<int> distribution(85, 100); // For damage variance (85-100%)

// --- Function Implementations ---

// Function to add Pokémon to the player's collection
void AddPokemonToCollection(const Pokemon& pokemon)
{
    playerCollection.push_back(pokemon);
};

// Function to add Pokémon to the battle team
bool AddPokemonToBattleTeam(const Pokemon& pokemon)
{
    // Team limit = 6
    if (battleTeam.size() >= 6)
    {
        cout << "Battle team is full! You can't add more Pokemon.\n";
        return false;
    }

    battleTeam.push_back(pokemon);
    return true;
};

// Function to display a Pokémon list
void DisplayPokemon(const Pokemon& p) {
    // Header with stats
    cout << p.name << " | Level: " << p.level
        << " | HP: " << p.hp << "/" << p.maxHp // Display current HP and max HP
        << " | ATK: " << p.attack
        << " | DEF: " << p.defense
        << " | SPA: " << p.specialAttack
        << " | SPD: " << p.specialDefense
        << " | SPE: " << p.speed
        << " | Type: " << p.type << endl;

    // Detailed Move List
    cout << "Moves List:" << endl;
    for (size_t i = 0; i < p.moves.size(); i++) { // Using size_t for loop counter
        const Move& m = p.moves[i]; // Corrected Move capitalization
        cout << "  " << i + 1 << ". " << m.name
            << " | Type: " << m.type
            << " | Power: " << m.power
            << " | " << (m.special ? "Special" : "Physical") << endl;
    }
    cout << "--------------" << endl;
};

// Adds pokemon to both collection and battle team
void addpokemon(const Pokemon& pokemon)
{
    // Add to collection
    AddPokemonToCollection(pokemon);
    // Add to battle team
    // Only add if there's space. Display a message if not.
    if (battleTeam.size() < 6) {
        AddPokemonToBattleTeam(pokemon);
    }
    else {
        cout << pokemon.name << " has been added to your collection, but your battle team is full!\n";
    }
};

void display() {
    cout << "\n=== Player Collection ===\n";
    if (playerCollection.empty()) {
        cout << "Your collection is empty.\n";
    }
    else {
        for (const auto& p : playerCollection) {
            DisplayPokemon(p);
        }
    }

    cout << "\n=== Battle Team ===\n";
    if (battleTeam.empty()) {
        cout << "Your battle team is empty.\n";
    }
    else {
        for (const auto& p : battleTeam) {
            DisplayPokemon(p);
        }
    }
};

void generatepokemon(int gym_level)
{
    vector<string> pool;
    switch (gym_level) {
    case 0: // beginning wilds
        pool = { "Pidgey", "Rattata", "Magikarp" };
        break;
    case 1: // after Brock
        pool = { "Weedle", "Caterpie", "Pikachu", "Diglett" };
        break;
    case 2: // after Misty
        pool = { "Spearow", "Psyduck", "Slowpoke", "Goldeen", "Mankey", "Sandshrew", "Poliwag", "Jigglypuff", "Zubat", "Geodude", "Onix", "Paras" };
        break;
    case 3: // after rival battle 2 (mix of earlier)
        pool = { "Pidgey", "Rattata", "Weedle", "Caterpie", "Pikachu", "Diglett", "Spearow", "Psyduck", "Zubat", "Geodude" };
        break;
    case 4: // after Lt. Surge
        pool = { "Voltorb", "Magnemite", "Electabuzz", "Muk" };
        break;
    case 5: // after Erika
        pool = { "Gastly", "Machop", "Cubone", "Hitmonlee", "Hitmonchan", "Oddish", "Bellsprout", "Krabby", "Horsea" };
        break;
    case 6: // after Koga (poison-themed)
        pool = { "Koffing", "Weezing", "Zubat", "Golbat", "Venonat", "Venomoth" };
        break;
    case 7: // after rival battle 3
        pool = { "Growlithe", "Abra", "Machop", "Bellsprout", "Ponyta", "Oddish" };
        break;
    case 8: // after Sabrina
        pool = { "Drowzee", "Krabby", "Cubone", "Ponyta" };
        break;
    case 9: // after Blaine
        pool = { "Magmar", "Electabuzz", "Pinsir", "Tauros", "Scyther" };
        break;
    case 10: // after rival battle 5
        pool = { "Omanyte", "Kabuto", "Aerodactyl", "Dratini", "Horsea" };
        break;
    case 11: // after Giovanni
        pool = { "Rhyhorn", "Gyarados", "Lapras", "Snorlax", "Gengar" }; // Changed Rhydon to Rhyhorn for consistency with pool.
        break;
    default: // late game / fallback
        pool = { "Rattata", "Pidgey", "Zubat" };
        break;
    }
    // let player choose from pool
    cout << "Choose a Pokemon to add to your team:\n";
    for (size_t i = 0; i < pool.size(); ++i) {
        cout << i + 1 << ". " << pool[i] << "\n";
    }
    cout << "> ";
    int choice = 0;
    while (true) {
        if (!(cin >> choice) || choice < 1 || choice > static_cast<int>(pool.size())) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and " << pool.size() << ".\n> ";
            continue;
        }
        break;
    }
    string selectedName = pool[choice - 1];
    Pokemon selectedPokemon = Pokemon("Default", 10, 10, 10, 10, 10, 10, 10, "normal", { Tackle }); // Initialize with a default valid Pokemon
    // Map the selected name to the corresponding Pokemon object. Use the globally defined Pokemon objects.
    if (selectedName == "Pidgey") selectedPokemon = Pidgey;
    else if (selectedName == "Rattata") selectedPokemon = Rattata;
    else if (selectedName == "Magikarp") selectedPokemon = Magikarp;
    else if (selectedName == "Weedle") selectedPokemon = Weedle;
    else if (selectedName == "Caterpie") selectedPokemon = Caterpie;
    else if (selectedName == "Pikachu") selectedPokemon = Pikachu;
    else if (selectedName == "Diglett") selectedPokemon = Diglett;
    else if (selectedName == "Spearow") selectedPokemon = Spearow;
    else if (selectedName == "Psyduck") selectedPokemon = Psyduck;
    else if (selectedName == "Slowpoke") selectedPokemon = Slowpoke;
    else if (selectedName == "Goldeen") selectedPokemon = Goldeen;
    else if (selectedName == "Mankey") selectedPokemon = Mankey;
    else if (selectedName == "Sandshrew") selectedPokemon = Sandshrew;
    else if (selectedName == "Poliwag") selectedPokemon = Poliwag;
    else if (selectedName == "Jigglypuff") selectedPokemon = Jigglypuff;
    else if (selectedName == "Zubat") selectedPokemon = Zubat;
    else if (selectedName == "Geodude") selectedPokemon = Geodude;
    else if (selectedName == "Onix") selectedPokemon = Onix;
    else if (selectedName == "Paras") selectedPokemon = Paras;
    else if (selectedName == "Voltorb") selectedPokemon = Voltorb;
    else if (selectedName == "Magnemite") selectedPokemon = Magnemite;
    else if (selectedName == "Electabuzz") selectedPokemon = Electabuzz;
    else if (selectedName == "Muk") selectedPokemon = Muk;
    else if (selectedName == "Gastly") selectedPokemon = Gastly;
    else if (selectedName == "Machop") selectedPokemon = Machop;
    else if (selectedName == "Cubone") selectedPokemon = Cubone;
    else if (selectedName == "Hitmonlee") selectedPokemon = Hitmonlee;
    else if (selectedName == "Hitmonchan") selectedPokemon = Hitmonchan;
    else if (selectedName == "Oddish") selectedPokemon = Oddish;
    else if (selectedName == "Bellsprout") selectedPokemon = Bellsprout;
    else if (selectedName == "Krabby") selectedPokemon = Krabby;
    else if (selectedName == "Horsea") selectedPokemon = Horsea;
    else if (selectedName == "Koffing") selectedPokemon = Koffing;
    else if (selectedName == "Weezing") selectedPokemon = Weezing;
    else if (selectedName == "Golbat") selectedPokemon = Golbat;
    else if (selectedName == "Venonat") selectedPokemon = Venonat;
    else if (selectedName == "Venomoth") selectedPokemon = Venomoth;
    else if (selectedName == "Growlithe") selectedPokemon = Growlithe;
    else if (selectedName == "Abra") selectedPokemon = Abra;
    // Duplicate Machop and Bellsprout removed from if-else if chain for clarity (they already exist)
    else if (selectedName == "Ponyta") selectedPokemon = Ponyta;
    else if (selectedName == "Drowzee") selectedPokemon = Drowzee;
    else if (selectedName == "Magmar") selectedPokemon = Magmar;
    // Duplicate Electabuzz removed
    else if (selectedName == "Pinsir") selectedPokemon = Pinsir;
    else if (selectedName == "Tauros") selectedPokemon = Tauros;
    else if (selectedName == "Scyther") selectedPokemon = Scyther;
    else if (selectedName == "Omanyte") selectedPokemon = Omanyte;
    else if (selectedName == "Kabuto") selectedPokemon = Kabuto;
    else if (selectedName == "Aerodactyl") selectedPokemon = Aerodactyl;
    else if (selectedName == "Dratini") selectedPokemon = Dratini;
    else if (selectedName == "Lapras") selectedPokemon = Lapras;
    else if (selectedName == "Snorlax") selectedPokemon = Snorlax;
    else if (selectedName == "Gengar") selectedPokemon = Gengar;

    addpokemon(selectedPokemon);
};

//player battles
// Battle function that accepts an enemy team and lets the enemy use its full roster
bool battle(vector<Pokemon>& enemyTeam) {
    // Check if enemy team is empty
    if (enemyTeam.empty()) {
        cout << "There are no enemies to battle!\n";
        return true; // No enemies means player wins by default
    }

    // Find first alive player Pokemon
    int activeIdx = 0;
    while (activeIdx < (int)battleTeam.size() && battleTeam[activeIdx].hp <= 0) {
        activeIdx++;
    }
    if (activeIdx >= (int)battleTeam.size()) {
        cout << "You have no healthy Pokemon to battle!\n";
        return false; // Player loses if no healthy Pokemon
    }

    // Find first alive enemy Pokemon
    int currentEnemyActiveIdx = 0;
    while (currentEnemyActiveIdx < (int)enemyTeam.size() && enemyTeam[currentEnemyActiveIdx].hp <= 0) {
        currentEnemyActiveIdx++;
    }
    if (currentEnemyActiveIdx >= (int)enemyTeam.size()) {
        cout << "Enemy has no healthy Pokemon to battle!\n";
        return true; // Player wins if enemy has no healthy Pokemon
    }

    cout << "\n============================================\n";
    cout << "the enemy called " << enemyTeam[currentEnemyActiveIdx].name << "!\n";
    cout << "Go! " << battleTeam[activeIdx].name << "!\n";
    cout << "============================================\n";

    // Main battle loop continues until one side has no alive Pokemon
    while (IsTeamAlive() && IsEnemyAlive(enemyTeam)) {
        Pokemon& currentPlayer = battleTeam[activeIdx];
        Pokemon& currentEnemy = enemyTeam[currentEnemyActiveIdx];

        // Display UI
        cout << "\n--------------------------------------------\n";
        cout << "[" << currentPlayer.name << " HP: " << currentPlayer.hp << "/" << currentPlayer.maxHp << "]  VS  "
            << "[" << currentEnemy.name << " HP: " << currentEnemy.hp << "/" << currentEnemy.maxHp << "]\n";
        cout << "--------------------------------------------\n";

        // 1. Player chooses action (fight or switch)
        int action = 0;
        bool validAction = false;
        bool playerSwitchedThisTurn = false; // Flag to track if player switched
        Move* playerMovePtr = nullptr; // Pointer to the chosen player move

        // Loop for player action choice
        while (!validAction) {
            cout << "What will " << currentPlayer.name << " do?\n";
            cout << "1. Fight\n";
            cout << "2. Switch Pokemon\n";
            cout << "> ";

            if (!(cin >> action)) { // Check for non-numeric input
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " pick option 1 or 2 alex not 67 or what ever you typed.\n";
                continue;
            }

            if (action == 1) {
                cout << "Choose a move:\n";
                for (size_t i = 0; i < currentPlayer.moves.size(); ++i) {
                    cout << i + 1 << ". " << currentPlayer.moves[i].name
                        << " (Type: " << currentPlayer.moves[i].type << ", Pwr: " << currentPlayer.moves[i].power << ")\n";
                }
                cout << "0. Cancel\n> ";

                int moveChoice = 0;
                if (!(cin >> moveChoice) || moveChoice < 0 || moveChoice > static_cast<int>(currentPlayer.moves.size())) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input.\n";
                    continue;
                }
                if (moveChoice == 0) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer for retry
                    continue; // back to action selection
                }

                playerMovePtr = &currentPlayer.moves[moveChoice - 1];
                validAction = true;
            }
            else if (action == 2) {
                cout << "Choose a Pokemon to die next:\n";
                for (size_t i = 0; i < battleTeam.size(); ++i) {
                    cout << i + 1 << ". " << battleTeam[i].name << " [HP: " << battleTeam[i].hp << "/" << battleTeam[i].maxHp << "]\n";
                }
                cout << "0. Cancel\n> ";

                int switchChoice = 0;
                if (!(cin >> switchChoice)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "you didn't pick a number you fool.\n";
                    continue;
                }
                if (switchChoice == 0) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }

                int targetIdx = switchChoice - 1;
                if (targetIdx < 0 || targetIdx >= (int)battleTeam.size()) {
                    cout << "not a option you bafoon.\n";
                    continue;
                }
                if (targetIdx == activeIdx) {
                    cout << battleTeam[targetIdx].name << " your already using them stupid!\n";
                    continue;
                }
                if (battleTeam[targetIdx].hp <= 0) {
                    cout << battleTeam[targetIdx].name << " they are dead you can use a coepse to fight!\n";
                    continue;
                }

                // Valid switch
                cout << "Come back " << currentPlayer.name << "!\n";
                activeIdx = targetIdx;
                cout << "Go! " << battleTeam[activeIdx].name << "!\n";
                playerSwitchedThisTurn = true;
                validAction = true;
                // Important: Ensure `cin` buffer is clear after reading choices.
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else {
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear for bad action input
                cout << "play the game right you noob.\n";
            }
        }
        // Re-reference player after possible switch
        // This is crucial because `currentPlayer` was a reference to the old active Pokemon.
        Pokemon& activePlayer = battleTeam[activeIdx];

        // 2. Enemy selects a move (simple AI: random)
        std::uniform_int_distribution<int> enemyMoveDist(0, currentEnemy.moves.size() - 1);
        int enemyMoveIdx = enemyMoveDist(generator); // Using modern random
        Move& enemyMove = currentEnemy.moves[enemyMoveIdx];

        // 3. Execute turn logic
        // If player switched, enemy attacks, then player does nothing.
        // If no switch, compare speeds to determine attack order.
        if (playerSwitchedThisTurn) {
            // Enemy attacks the newly switched in pokemon
            ExecuteTurn(currentEnemy, activePlayer, enemyMove);
        }
        else {
            bool playerFirst = activePlayer.speed >= currentEnemy.speed;
            if (playerFirst) {
                if (playerMovePtr) { // Only attack if player actually chose a move
                    ExecuteTurn(activePlayer, currentEnemy, *playerMovePtr);
                }
                if (currentEnemy.hp > 0) { // Enemy only attacks if not fainted
                    ExecuteTurn(currentEnemy, activePlayer, enemyMove);
                }
            }
            else { // Enemy goes first
                ExecuteTurn(currentEnemy, activePlayer, enemyMove);
                if (activePlayer.hp > 0 && playerMovePtr) { // Player only attacks if not fainted and chose a move
                    ExecuteTurn(activePlayer, currentEnemy, *playerMovePtr);
                }
            }
        }

        // --- Post-Turn Checks ---

        // If player's active fainted, force a switch if possible
        if (activePlayer.hp <= 0 && IsTeamAlive()) { // Check if player has other healthy Pokemon
            cout << "\n" << activePlayer.name << " is dead you animal abuser!\n";
            bool validSwitch = false;
            while (!validSwitch) {
                cout << "Choose your next scarafice:\n";
                for (size_t i = 0; i < battleTeam.size(); ++i) {
                    cout << i + 1 << ". " << battleTeam[i].name << " [HP: " << battleTeam[i].hp << "/" << battleTeam[i].maxHp << "]\n";
                }
                cout << "> ";
                int switchChoice = 0;
                if (!(cin >> switchChoice) || switchChoice < 1 || switchChoice > static_cast<int>(battleTeam.size())) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "not a option alex get your act together.\n";
                    continue;
                }
                int targetIdx = switchChoice - 1;
                if (battleTeam[targetIdx].hp <= 0) {
                    cout << battleTeam[targetIdx].name << " they are dead you can use a coepse to fight!\n";
                    continue;
                }
                activeIdx = targetIdx; // Update the index of the active player Pokemon
                cout << "Go! " << battleTeam[activeIdx].name << "!\n";
                validSwitch = true;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

        // If enemy fainted, move to next alive enemy Pokemon
        if (currentEnemy.hp <= 0) {
            cout << "\n" << currentEnemy.name << " fainted!\n";
            currentEnemyActiveIdx++; // Try next enemy Pokemon
            if (currentEnemyActiveIdx < (int)enemyTeam.size()) {
                // Find the *next* alive enemy Pokemon if the current one fainted
                while (currentEnemyActiveIdx < (int)enemyTeam.size() && enemyTeam[currentEnemyActiveIdx].hp <= 0) {
                    currentEnemyActiveIdx++;
                }
                if (currentEnemyActiveIdx < (int)enemyTeam.size()) {
                    cout << "Enemy sends out " << enemyTeam[currentEnemyActiveIdx].name << "!\n";
                }
            }
        }
    }

    // Battle conclusion
    cout << "\n============================================\n";
    if (IsTeamAlive()) {
        cout << "Enemy team is defeated! You win the battle!\n";
        return true;
    }
    else {
        cout << "All your Pokemon fainted! You white out...\n";
        return false;
    }
};

void HealTeam() {
    for (auto& p : battleTeam) {
        p.hp = p.maxHp;
    }
    cout << "\nYour team has been fully healed!\n";
};

int gyms_beaten = 0; // Initialize to 0

// Helper function to consume leftover newline characters
void consumeNewline() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Function to handle riddle input and logic
void handleRiddle(char correctAnswer) {
    char input_char;
    // Clearing potential leftover newline from previous inputs
    consumeNewline(); // Clears any pending newline before reading the answer
    cout << "> ";
    cin >> input_char;
    input_char = tolower(input_char); // Convert to lowercase for case-insensitive check

    if (input_char == correctAnswer) {
        cout << "Correct!\n";
        gyms_beaten++; // Increment gyms_beaten on correct answer
        // Optional: Add a reward here
    }
    else {
        cout << "Wrong! Try again!\n";
        consumeNewline();
        cout << "> ";
        cin >> input_char;
        input_char = tolower(input_char);

        if (input_char == correctAnswer) {
            cout << "Correct!\n";
            gyms_beaten++; // Increment gyms_beaten on second correct answer
            // Optional: Add a reward here
        }
        else {
            cout << "Wrong again! You get a punishment!\n";
            if (!battleTeam.empty()) {
                // Ensure the active Pokemon is present before trying to damage it.
                // Assuming the first Pokemon in battleTeam is the active one for punishment.
                // In a real game, you might want to damage the currently active Pokemon from battle().
                battleTeam[0].hp -= 10;
                if (battleTeam[0].hp < 0) battleTeam[0].hp = 0;
                cout << battleTeam[0].name << " lost 10 HP!\n";
                if (battleTeam[0].hp == 0) {
                    cout << battleTeam[0].name << " fainted!\n";
                    // Potentially trigger a team wipe if all faint, or allow continuing with others.
                }
            }
        }
    }
    consumeNewline(); // Clear buffer after riddle answer
}

void riddle1() {
    cout << "How many pokemon were in the original pokedex from the Kanto region?\n";
    cout << "a. 151\n";
    cout << "b. like 5\n";
    cout << "c. 1 billion lions\n";
    cout << "d. 1025\n";
    handleRiddle('a');
};

void riddle2() {
    cout << "What is the 37th Pokemon?\n";
    cout << "a. Jigglypuff\n";
    cout << "b. Ninetales\n";
    cout << "c. Vulpix\n";
    cout << "d. Wigglytuff\n";
    handleRiddle('c');
};

void riddle3() {
    cout << "How do you evolve Eevee into Flareon?\n";
    cout << "a. Use a Water Stone\n";
    cout << "b. Level up with high friendship during the day\n";
    cout << "c. Level up with high friendship during the night\n";
    cout << "d. Use a Fire Stone\n";
    handleRiddle('d');
};

void riddle4() {
    cout << "How many Dragonites does Lance have in the Kanto games?\n";
    cout << "a. 1\n";
    cout << "b. 2\n";
    cout << "c. 3\n";
    cout << "d. 0\n"; // Changed to 0, if you consider the original RBY where he had illegal Dragonites. Or 3 if it's based on later gens.
    handleRiddle('c'); // Assuming 3 for realism in later games/remakes. If original RBY, it was 0 or 2, then changed to 3.
};

void riddle5() {
    cout << "What is the best source of information for Pokemon?\n";
    cout << "a. The Pokedex\n";
    cout << "b. Wikipedia\n";
    cout << "c. The Pokemon anime\n";
    cout << "d. The internet (general search)\n";
    handleRiddle('d'); // 'b' (Wikipedia) is a type of general internet search. 'd' is more inclusive.
};

void riddle6() {
    cout << "What is the name of the main region in the first generation Pokemon games?\n";
    cout << "a. Johto\n";
    cout << "b. Kanto\n";
    cout << "c. Hoenn\n";
    cout << "d. Sinnoh\n";
    handleRiddle('b');
};

void riddle7() {
    cout << "What is NOT a Pokemon that can only be caught in the Kanto Safari Zone?\n";
    cout << "a. Scyther\n";
    cout << "b. Pinsir\n";
    cout << "c. Tauros\n";
    cout << "d. Pidgey\n"; // Pidgey is found commonly in many routes, not exclusive to Safari Zone.
    handleRiddle('d');
};

void riddle8() {
    cout << "What is the name of Professor Oak's grandson and your rival in the Kanto games?\n";
    cout << "a. Red\n";
    cout << "b. Blue\n";
    cout << "c. Green\n";
    cout << "d. Gary\n"; // Gary is the anime name, but Blue/Green are game names. Assuming popular knowledge.
    handleRiddle('b'); // Depending on the region, it's Blue or Green. Let's go with Blue as most common for English.
};


float GetTypeMultiplier(const string& attackType, const string& defendType) {
    // ... (Your existing GetTypeMultiplier function is good) ...
    if (attackType == defendType) return 0.5f; // Not very effective against own type

    if (attackType == "fire") {
        if (defendType == "grass" || defendType == "bug" || defendType == "ice") return 2.0f;
        if (defendType == "water" || defendType == "rock" || defendType == "dragon") return 0.5f; // Added dragon for fire
    }
    else if (attackType == "water") {
        if (defendType == "fire" || defendType == "ground" || defendType == "rock") return 2.0f;
        if (defendType == "grass" || defendType == "dragon") return 0.5f;
    }
    else if (attackType == "grass") {
        if (defendType == "water" || defendType == "ground" || defendType == "rock") return 2.0f;
        if (defendType == "fire" || defendType == "poison" || defendType == "flying" || defendType == "bug" || defendType == "dragon") return 0.5f;
    }
    else if (attackType == "electric") {
        if (defendType == "water" || defendType == "flying") return 2.0f;
        if (defendType == "ground") return 0.0f; // Immunity!
        if (defendType == "grass" || defendType == "electric" || defendType == "dragon") return 0.5f; // Electric also not very effective on itself and grass, dragon.
    }
    else if (attackType == "ice") { // Added Ice typing
        if (defendType == "grass" || defendType == "ground" || defendType == "flying" || defendType == "dragon") return 2.0f;
        if (defendType == "fire" || defendType == "water" || defendType == "ice" || defendType == "steel") return 0.5f;
    }
    else if (attackType == "fighting") { // Added Fighting typing
        if (defendType == "normal" || defendType == "ice" || defendType == "rock" || defendType == "dark" || defendType == "steel") return 2.0f;
        if (defendType == "poison" || defendType == "flying" || defendType == "psychic" || defendType == "bug" || defendType == "fairy") return 0.5f;
        if (defendType == "ghost") return 0.0f;
    }
    else if (attackType == "poison") { // Added Poison typing
        if (defendType == "grass" || defendType == "fairy") return 2.0f;
        if (defendType == "poison" || defendType == "ground" || defendType == "rock" || defendType == "ghost") return 0.5f;
        if (defendType == "steel") return 0.0f;
    }
    else if (attackType == "ground") { // Added Ground typing
        if (defendType == "fire" || defendType == "electric" || defendType == "poison" || defendType == "rock" || defendType == "steel") return 2.0f;
        if (defendType == "grass" || defendType == "bug") return 0.5f;
        if (defendType == "flying") return 0.0f;
    }
    else if (attackType == "flying") { // Added Flying typing
        if (defendType == "grass" || defendType == "fighting" || defendType == "bug") return 2.0f;
        if (defendType == "electric" || defendType == "rock" || defendType == "steel") return 0.5f;
    }
    else if (attackType == "psychic") { // Added Psychic typing
        if (defendType == "fighting" || defendType == "poison") return 2.0f;
        if (defendType == "psychic" || defendType == "steel") return 0.5f;
        if (defendType == "dark") return 0.0f;
    }
    else if (attackType == "bug") { // Added Bug typing
        if (defendType == "grass" || defendType == "psychic" || defendType == "dark") return 2.0f;
        if (defendType == "fire" || defendType == "fighting" || defendType == "poison" || defendType == "flying" || defendType == "ghost" || defendType == "steel" || defendType == "fairy") return 0.5f;
    }
    else if (attackType == "rock") { // Added Rock typing
        if (defendType == "fire" || defendType == "ice" || defendType == "flying" || defendType == "bug") return 2.0f;
        if (defendType == "fighting" || defendType == "ground" || defendType == "steel") return 0.5f;
    }
    else if (attackType == "ghost") { // Added Ghost typing
        if (defendType == "psychic" || defendType == "ghost") return 2.0f;
        if (defendType == "dark") return 0.5f;
        if (defendType == "normal") return 0.0f;
    }
    else if (attackType == "dragon") { // Added Dragon typing
        if (defendType == "dragon") return 2.0f;
        if (defendType == "steel") return 0.5f;
        if (defendType == "fairy") return 0.0f;
    }
    else if (attackType == "steel") { // Added Steel typing
        if (defendType == "ice" || defendType == "rock" || defendType == "fairy") return 2.0f;
        if (defendType == "fire" || defendType == "water" || defendType == "electric" || defendType == "steel") return 0.5f;
    }
    else if (attackType == "fairy") { // Added Fairy typing
        if (defendType == "fighting" || defendType == "dragon" || defendType == "dark") return 2.0f;
        if (defendType == "fire" || defendType == "poison" || defendType == "steel") return 0.5f;
    }
    else if (attackType == "dark") { // Added Dark typing
        if (defendType == "psychic" || defendType == "ghost") return 2.0f;
        if (defendType == "fighting" || defendType == "dark" || defendType == "fairy") return 0.5f;
    }
    else if (attackType == "normal") { // Added Normal typing interactions
        if (defendType == "rock" || defendType == "steel") return 0.5f;
        if (defendType == "ghost") return 0.0f;
    }

    return 1.0f; // Default standard damage
};


void ExecuteTurn(Pokemon& attacker, Pokemon& defender, Move& move) {
    cout << "\n> " << attacker.name << " used " << move.name << "!\n";

    // Handle status/non-damaging moves where power is 0.
    if (move.power == 0) {
        cout << "  (It's a status move... No direct damage applied.)\n";
        return; // No damage calculation needed for status moves
    }

    // Determine which stats to use (Physical vs Special)
    float attackStat = move.special ? attacker.specialAttack : attacker.attack;
    float defenseStat = move.special ? defender.specialDefense : defender.defense;

    // Standard Pokémon Damage Formula
    float baseDamage = (((2.0 * attacker.level / 5.0) + 2.0) * move.power * (attackStat / defenseStat) / 50.0) + 2.0;

    // Same-Type Attack Bonus (STAB)
    float stab = (move.type == attacker.type) ? 1.5f : 1.0f;

    // Type Effectiveness
    float typeMod = GetTypeMultiplier(move.type, defender.type);

    // Calculate final damage
    float finalDamageFloat = baseDamage * stab * typeMod;

    // Apply slight random variance (85% to 100% damage)
    // Using modern C++ random for variance
    std::uniform_int_distribution<int> variance_dist(85, 100);
    float variance = static_cast<float>(variance_dist(generator)) / 100.0f;
    finalDamageFloat *= variance;

    int finalDamage = std::max(0, (int)finalDamageFloat); // Guarantee at least 0 damage (status moves already handled, but good for type immunities)

    // Print effectiveness feedback
    if (typeMod > 1.0f) cout << "  It's super effective!\n";
    else if (typeMod < 1.0f && typeMod > 0.0f) cout << "  It's not very effective...\n";
    else if (typeMod == 0.0f) {
        cout << "  It had no effect!\n";
        finalDamage = 0; // Ensure damage is 0 for immunities
    }

    defender.hp -= finalDamage;
    if (defender.hp < 0) defender.hp = 0; // Prevent negative HP display

    if (finalDamage > 0 || typeMod > 0.0f) { // Only print damage if it actually did something or wasn't immune
        cout << "  " << defender.name << " took " << finalDamage << " damage!\n";
    }

    // Display remaining HP
    cout << "  " << defender.name << " HP: " << defender.hp << "/" << defender.maxHp << endl;
};

// Check if the player has any conscious Pokemon left
bool IsTeamAlive() {
    for (const auto& p : battleTeam) {
        if (p.hp > 0) return true;
    }
    return false;
};

// Check if a given enemy team has any conscious Pokemon left
bool IsEnemyAlive(const vector<Pokemon>& enemyTeam) {
    for (const auto& p : enemyTeam) {
        if (p.hp > 0) return true;
    }
    return false;
};

int main()
{
    // Initialize random number generator once at the start of main
    // srand(time(0)); // Replaced with C++11 <random> for better quality
    // global 'generator' is already initialized

    cout << "Welcome to 'pokemon but worst'\n";
    cout << "Do you want to play? (y/n): ";
    char start_choice;
    cin >> start_choice;
    start_choice = tolower(start_choice); // Convert to lowercase
    consumeNewline(); // Clear the input buffer

    if (start_choice != 'y') {
        cout << "Maybe next time!\n";
        return 0;
    }

    // Starter selection
    cout << "\nChoose your starter:\n";
    cout << "1. Bulbasaur\n";
    cout << "2. Charmander\n";
    cout << "3. Squirtle\n";
    cout << "> ";

    int starterChoice = 0;
    while (!(cin >> starterChoice) || starterChoice < 1 || starterChoice > 3) {
        cin.clear();
        consumeNewline();
        cout << "Invalid choice. Please enter 1, 2, or 3.\n> ";
    }
    consumeNewline(); // Clear buffer after reading starter choice

    string starterName;
    Pokemon chosenStarter("", 0, 0, 0, 0, 0, 0, 0, "", {}); // Initialize with dummy values
    switch (starterChoice) {
    case 1: chosenStarter = Bulbasaur; break;
    case 2: chosenStarter = Charmander; break;
    case 3: chosenStarter = Squirtle; break;
    default:
        cout << "Invalid choice -- this should not happen due to input validation. Defaulting to Bulbasaur.\n";
        chosenStarter = Bulbasaur;
        break;
    }
    battleTeam.push_back(chosenStarter);
    playerCollection.push_back(chosenStarter); // Also add to collection

    cout << "\nYou chose " << chosenStarter.name << "!\n";
    DisplayPokemon(chosenStarter);

    // Game Progression
    // Each block now consists of: Battle -> Heal -> Generate Pokemon -> Riddle

    // Rival Battle 1
    cout << "\n--- Rival Battle! ---\n";
    if (!battle(rivalTeam)) { return 1; } // Exit if player loses
    HealTeam();
    generatepokemon(0); // Wild Pokemon for initial area
    riddle1();

    // Brock Battle
    cout << "\n--- Gym Leader Brock Battle! ---\n";
    if (!battle(brockTeam)) { return 1; }
    HealTeam();
    generatepokemon(1); // Wild Pokemon after Brock
    riddle2();

    // Misty Battle
    cout << "\n--- Gym Leader Misty Battle! ---\n";
    if (!battle(mistyTeam)) { return 1; }
    HealTeam();
    generatepokemon(2); // Wild Pokemon after Misty
    riddle3();

    // Rival Battle 2
    cout << "\n--- Rival Battle 2! ---\n";
    if (!battle(rival2Team)) { return 1; }
    HealTeam();
    generatepokemon(3); // Wild Pokemon after Rival 2
    riddle3();

    // Lt. Surge Battle
    cout << "\n--- Gym Leader Lt. Surge Battle! ---\n";
    if (!battle(ltSurgeTeam)) { return 1; }
    HealTeam();
    generatepokemon(4); // Wild Pokemon after Lt. Surge
    riddle4();

    // Erika Battle
    cout << "\n--- Gym Leader Erika Battle! ---\n";
    if (!battle(erikaTeam)) { return 1; }
    HealTeam();
    generatepokemon(5); // Wild Pokemon after Erika
    riddle5();

    // Koga Battle
    cout << "\n--- Gym Leader Koga Battle! ---\n";
    if (!battle(kogaTeam)) { return 1; }
    HealTeam();
    generatepokemon(6); // Wild Pokemon after Koga

    // Rival Battle 3
    cout << "\n--- Rival Battle 3! ---\n";
    if (!battle(rival3Team)) { return 1; }
    HealTeam();
    generatepokemon(7); // Wild Pokemon after Rival 3
    riddle6();

    // Sabrina Battle
    cout << "\n--- Gym Leader Sabrina Battle! ---\n";
    if (!battle(sabrinaTeam)) { return 1; }
    HealTeam();
    generatepokemon(8); // Wild Pokemon after Sabrina
    riddle7();

    // Blaine Battle
    cout << "\n--- Gym Leader Blaine Battle! ---\n";
    if (!battle(blaineTeam)) { return 1; }
    HealTeam();
    generatepokemon(9); // Wild Pokemon after Blaine

    // Rival Battle 4
    cout << "\n--- Rival Battle 4! ---\n";
    if (!battle(rival4Team)) { return 1; }
    HealTeam();
    generatepokemon(10); // Wild Pokemon after Rival 4
    riddle8();

    // Giovanni Battle
    cout << "\n--- Gym Leader Giovanni Battle! ---\n";
    if (!battle(giovanniTeam)) { return 1; }
    HealTeam();
    generatepokemon(11); // Wild Pokemon after Giovanni (Badge obtained)
    cout << "\nYou've beaten all 8 gym leaders!\n";

    // Elite Four
    cout << "\n--- Elite Four Challenge! ---\n";
    cout << "\n--- Lorelei's Battle! ---\n";
    if (!battle(loreleiTeam)) { return 1; }
    HealTeam();

    cout << "\n--- Bruno's Battle! ---\n";
    if (!battle(brunoTeam)) { return 1; }
    HealTeam();

    cout << "\n--- Agatha's Battle! ---\n";
    if (!battle(agathaTeam)) { return 1; }
    HealTeam();

    cout << "\n--- Lance's Battle! ---\n";
    if (!battle(lanceTeam)) { return 1; }
    HealTeam();

    // Champion Battle
    cout << "\n--- Champion Battle! ---\n";
    if (!battle(championTeam)) { return 1; }
    HealTeam(); // Final heal after beating champion (optional, but tradition)

    cout << "\nCongratulations on beating the game! Thanks for playing :D\n";
    cout << "You beat " << gyms_beaten << " riddles!\n"; // Display total riddles beaten
    cout << "I would like to thank me, myself, and I for carrying this project from day 1 to now at 11:22 PM on may 12 2026 im the goat alex suck get good L + ratio + 67"
    return 0; // Explicitly return 0 for successful execution
}
