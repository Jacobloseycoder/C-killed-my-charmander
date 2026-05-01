using namespace std;
#include <iostream>
#include <string>
#include <vector>
int gym_level = 0;
//reqirements
//At least 7 classes that represent different parts of the game(see suggestions below).
//A main game loop that lets the player explore, make decisions, and progress.
//Inventory or status tracking(e.g., player has a key, health is low, etc.).
//At least 15 rooms or scenes with unique interactions.
//Meaningful user input, such as commands("go north", "take sword", "open door").
//Win / lose conditions(e.g., escape the castle, find the treasure, survive the monster).
//Comments and clear, organized code.

//

//what i do 
//main
//riddles
//pokemon generation
//user input

//enter game is just a pokemon battle sim 
//game formst;
//1. choose your pokemon starter
//2. fight agenst rival
//3. randomly give second pokemon
//4. first gym
//5. rendon new pokemon
//6. second gym
//7. rendon new pokemon
//8. third gym
//9. ether new pokemon or rival battle
//10. forth gym
//11. rendon new pokemon
//12. fifth gym
//13. rendon new pokemon
//14. sixth gym
//15. rendon new pokemon
//16. seventh gym
//17. rival battle
//18. rendon new pokemon
//19. eighth gym
//20. rendon new pokemon
//21. elite four gauntlet
//22. rival battle for the championship
//23. end game or maybe a post game with legendaries and stuff idk

int main() {
	// Initialize game
	// Display welcome message and instructions
	cout << "welcom to pokemon but worst" << endl;
	cout << "do you want to play? (y/n)" << endl;
	if (cin.get() != 'y') {
		cout << "maybe next time!" << endl;
		return 0;
	else {
		cout << "let's get started!" << endl;
		//this start game
	}
	// Step 1: Choose your starter Pokemon
	// Display starter options and get user input
	// Step 2: Battle against rival
	// Initialize rival's Pokemon and start battle
	// Step 3: Randomly give second Pokemon
	// Generate random Pokemon and add to player's inventory
	// Step 4-20: Gym battles and random Pokemon encounters
	// Loop through gym battles and random encounters, updating player's inventory and stats
	// Step 21: Elite Four gauntlet
	// Initialize Elite Four members and start battles
	// Step 22: Rival battle for the championship
	// Initialize rival's final Pokemon and start battle
	// Step 23: End game or post-game content
	// Display end game message or post-game content
	return 0;
}

// Typed Pokémon entry: name, attack, hp, level
struct PokemonInfo {
    string name;
    int attack;
    int hp;
    int level;
};

vector<PokemonInfo> pokedex = {
    { "Bulbasaur", 45, 49, 1 },
    { "Ivysaur", 60, 61, 1 },
    { "Venusaur", 80, 81, 1 },
    { "Charmander", 39, 51, 1 },
    { "Charmeleon", 58, 64, 1 },
    { "Charizard", 78, 84, 1 },
    { "Squirtle", 44, 48, 1 },
    { "Wartortle", 59, 63, 1 },
    { "Blastoise", 79, 83, 1 },
    { "Caterpie", 45, 30, 1 },
    { "Metapod", 50, 10, 1 },
    { "Butterfree", 60, 45, 1 },
    { "Weedle", 40, 35, 1 },
    { "Kakuna", 45, 15, 1 },
    { "Beedrill", 65, 90, 1 },
    { "Pidgey", 40, 45, 1 },
    { "Pidgeotto", 63, 60, 1 },
    { "Pidgeot", 83, 80, 1 },
    { "Rattata", 30, 56, 1 },
    { "Raticate", 55, 81, 1 },
    { "Spearow", 40, 60, 1 },
    { "Fearow", 65, 90, 1 },
    { "Ekans", 35, 60, 1 },
    { "Arbok", 60, 85, 1 },
    { "Pikachu", 35, 55, 1 },
    { "Raichu", 60, 90, 1 },
    { "Sandshrew", 50, 75, 1 },
    { "Sandslash", 75, 100, 1 },
    { "NidoranF", 55, 47, 1 },
    { "Nidorina", 70, 61, 1 },
    { "Nidoqueen", 90, 91, 1 },
    { "NidoranM", 46, 57, 1 },
    { "Nidorino", 61, 71, 1 },
    { "Nidoking", 81, 101, 1 },
    { "Clefairy", 70, 45, 1 },
    { "Clefable", 95, 70, 1 },
    { "Vulpix", 38, 41, 1 },
    { "Ninetales", 73, 76, 1 },
    { "Jigglypuff", 115, 45, 1 },
    { "Wigglytuff", 140, 70, 1 },
    { "Zubat", 40, 45, 1 },
    { "Golbat", 75, 80, 1 },
    { "Oddish", 45, 50, 1 },
    { "Gloom", 60, 65, 1 },
    { "Vileplume", 75, 80, 1 },
    { "Paras", 35, 70, 1 },
    { "Parasect", 60, 95, 1 },
    { "Venonat", 60, 55, 1 },
    { "Venomoth", 70, 65, 1 },
    { "Diglett", 10, 55, 1 },
    { "Dugtrio", 35, 100, 1 },
    { "Meowth", 40, 45, 1 },
    { "Persian", 65, 70, 1 },
    { "Psyduck", 50, 51, 1 },
    { "Golduck", 80, 81, 1 },
    { "Mankey", 40, 80, 1 },
    { "Primeape", 65, 105, 1 },
    { "Growlithe", 55, 70, 1 },
    { "Arcanine", 90, 110, 1 },
    { "Poliwag", 40, 50, 1 },
    { "Poliwhirl", 65, 65, 1 },
    { "Poliwrath", 90, 95, 1 },
    { "Abra", 15, 10, 1 },
    { "Kadabra", 40, 35, 1 },
    { "Alakazam", 55, 50, 1 },
    { "Machop", 70, 80, 1 },
    { "Machoke", 80, 100, 1 },
    { "Machamp", 90, 130, 1 },
    { "Bellsprout", 50, 75, 1 },
    { "Weepinbell", 65, 90, 1 },
    { "Victreebel", 80, 105, 1 },
    { "Tentacool", 40, 40, 1 },
    { "Tentacruel", 80, 70, 1 },
    { "Geodude", 40, 80, 1 },
    { "Graveler", 55, 95, 1 },
    { "Golem", 80, 110, 1 },
    { "Ponyta", 50, 85, 1 },
    { "Rapidash", 65, 100, 1 },
    { "Slowpoke", 90, 65, 1 },
    { "Slowbro", 95, 75, 1 },
    { "Magnemite", 15, 35, 1 },
    { "Magneton", 50, 60, 1 },
    { "Farfetchd", 51, 65, 1 },
    { "Doduo", 35, 85, 1 },
    { "Dodrio", 60, 110, 1 },
    { "Seel", 65, 45, 1 },
    { "Dewgong", 90, 70, 1 },
    { "Grimer", 80, 80, 1 },
    { "Muk", 105, 105, 1 },
    { "Shellder", 30, 65, 1 },
    { "Cloyster", 50, 95, 1 },
    { "Gastly", 30, 35, 1 },
    { "Haunter", 45, 50, 1 },
    { "Gengar", 60, 65, 1 },
    { "Onix", 35, 45, 1 },
    { "Drowzee", 60, 48, 1 },
    { "Hypno", 85, 73, 1 },
    { "Krabby", 30, 105, 1 },
    { "Kingler", 55, 130, 1 },
    { "Voltorb", 40, 30, 1 },
    { "Electrode", 60, 50, 1 },
    { "Exeggcute", 60, 40, 1 },
    { "Exeggutor", 95, 95, 1 },
    { "Cubone", 50, 50, 1 },
    { "Marowak", 60, 80, 1 },
    { "Hitmonlee", 50, 110, 1 },
    { "Hitmonchan", 50, 105, 1 },
    { "Lickitung", 90, 55, 1 },
    { "Koffing", 40, 65, 1 },
    { "Weezing", 65, 90, 1 },
    { "Rhyhorn", 80, 85, 1 },
    { "Rhydon", 105, 130, 1 },
    { "Chansey", 150, 5, 1 },
    { "Tangela", 65, 55, 1 },
    { "Kangaskhan", 105, 95, 1 },
    { "Horsea", 30, 40, 1 },
    { "Seadra", 55, 65, 1 },
    { "Goldeen", 45, 67, 1 },
    { "Seaking", 80, 91, 1 },
    { "Staryu", 30, 45, 1 },
    { "Starmie", 60, 75, 1 },
    { "MrMime", 40, 45, 1 },
    { "Scyther", 70, 110, 1 },
    { "Jynx", 65, 50, 1 },
    { "Electabuzz", 65, 83, 1 },
    { "Magmar", 65, 95, 1 },
    { "Pinsir", 65, 115, 1 },
    { "Tauros", 75, 100, 1 },
    { "Magikarp", 10, 10, 1 },
    { "Gyarados", 95, 115, 1 },
    { "Lapras", 130, 85, 1 },
    { "Ditto", 48, 48, 1 },
    { "Eevee", 55, 55, 1 },
    { "Vaporeon", 130, 65, 1 },
    { "Jolteon", 65, 65, 1 },
    { "Flareon", 65, 130, 1 },
    { "Porygon", 65, 60, 1 },
    { "Omanyte", 35, 40, 1 },
    { "Omastar", 70, 60, 1 },
    { "Kabuto", 30, 80, 1 },
    { "Kabutops", 60, 115, 1 },
    { "Aerodactyl", 80, 105, 1 },
    { "Snorlax", 160, 110, 1 },
    { "Articuno", 90, 85, 1 },
    { "Zapdos", 90, 90, 1 },
    { "Moltres", 90, 100, 1 },
    { "Dratini", 41, 64, 1 },
    { "Dragonair", 61, 84, 1 },
    { "Dragonite", 91, 134, 1 },
    { "Mewtwo", 106, 110, 1 },
    { "Mew", 100, 100, 1 },
    { "Chikorita", 45, 49, 1 },
    { "Bayleef", 60, 61, 1 },
    { "Meganium", 80, 81, 1 },
    { "Cyndaquil", 39, 51, 1 },
    { "Quilava", 58, 64, 1 },
    { "Typhlosion", 78, 84, 1 },
    { "Totodile", 50, 65, 1 },
    { "Croconaw", 65, 80, 1 },
    { "Feraligatr", 85, 105, 1 },
    { "Sentret", 35, 46, 1 },
    { "Furret", 85, 76, 1 },
    { "Hoothoot", 60, 30, 1 },
    { "Noctowl", 100, 50, 1 },
    { "Ledyba", 40, 10, 1 },
    { "Ledian", 55, 35, 1 },
    { "Spinarak", 40, 60, 1 },
    { "Ariados", 70, 90, 1 },
    { "Crobat", 85, 90, 1 },
    { "Chinchou", 75, 38, 1 },
    { "Lanturn", 115, 58, 1 },
    { "Pichu", 10, 40, 1 },
    { "Cleffa", 50, 15, 1 },
    { "Igglybuff", 90, 30, 1 },
    { "Togepi", 35, 10, 1 },
    { "Togetic", 55, 40, 1 },
    { "Natu", 40, 50, 1 },
    { "Xatu", 65, 75, 1 },
    { "Mareep", 55, 40, 1 },
    { "Flaaffy", 70, 55, 1 },
    { "Ampharos", 90, 75, 1 },
    { "Bellossom", 75, 80, 1 },
    { "Marill", 70, 10, 1 },
    { "Azumarill", 100, 50, 1 },
    { "Sudowoodo", 70, 100, 1 },
    { "Politoed", 90, 75, 1 },
    { "Hoppip", 35, 35, 1 },
    { "Skiploom", 55, 45, 1 },
    { "Jumpluff", 75, 55, 1 },
    { "Aipom", 55, 70, 1 },
    { "Sunkern", 30, 30, 1 },
    { "Sunflora", 75, 75, 1 },
    { "Yanma", 65, 65, 1 },
    { "Wooper", 55, 45, 1 },
    { "Quagsire", 95, 85, 1 },
    { "Espeon", 65, 65, 1 },
    { "Umbreon", 95, 65, 1 },
    { "Murkrow", 60, 85, 1 },
    { "Slowking", 95, 75, 1 },
    { "Misdreavus", 60, 60, 1 },
    { "Unown", 48, 71, 1 },
    { "Wobbuffet", 190, 33, 1 },
    { "Girafarig", 70, 80, 1 },
    { "Pineco", 50, 65, 1 },
    { "Forretress", 75, 90, 1 },
    { "Dunsparce", 100, 70, 1 },
    { "Gligar", 65, 75, 1 },
    { "Steelix", 75, 85, 1 },
    { "Snubbull", 60, 80, 1 },
    { "Granbull", 90, 110, 1 },
    { "Qwilfish", 65, 95, 1 },
    { "Scizor", 70, 130, 1 },
    { "Shuckle", 10, 10, 1 },
    { "Heracross", 80, 115, 1 },
    { "Sneasel", 55, 95, 1 },
    { "Teddiursa", 60, 80, 1 },
    { "Ursaring", 90, 130, 1 },
    { "Slugma", 40, 40, 1 },
    { "Magcargo", 50, 50, 1 },
    { "Swinub", 50, 50, 1 },
    { "Piloswine", 100, 100, 1 },
    { "Corsola", 55, 55, 1 },
    { "Remoraid", 35, 65, 1 },
    { "Octillery", 75, 105, 1 },
    { "Delibird", 45, 55, 1 },
    { "Mantine", 85, 40, 1 },
    { "Skarmory", 65, 80, 1 },
    { "Houndour", 45, 60, 1 },
    { "Houndoom", 75, 90, 1 },
    { "Kingdra", 75, 95, 1 },
    { "Phanpy", 90, 60, 1 },
    { "Donphan", 90, 110, 1 },
    { "Porygon1", 85, 80, 1 },
    { "Stantler", 73, 95, 1 },
    { "Smeargle", 55, 10, 1 },
    { "Tyrogue", 35, 35, 1 },
    { "Hitmontop", 50, 95, 1 },
    { "Smoochum", 45, 30, 1 },
    { "Elekid", 45, 63, 1 },
    { "Magby", 45, 75, 1 },
    { "Miltank", 95, 80, 1 },
    { "Blissey", 155, 10, 1 },
    { "Raikou", 90, 85, 1 },
    { "Entei", 115, 115, 1 },
    { "Suicune", 100, 75, 1 },
    { "Larvitar", 50, 64, 1 },
    { "Pupitar", 70, 84, 1 },
    { "Tyranitar", 100, 134, 1 },
    { "Lugia", 106, 90, 1 },
    { "Ho-Oh", 106, 130, 1 },
    { "Celebi", 100, 100, 1 },
    { "Treecko", 40, 45, 3 },
    { "Grovyle", 50, 65, 3 },
    { "Sceptile", 70, 85, 3 },
    { "Torchic", 45, 60, 3 },
    { "Combusken", 60, 85, 3 },
    { "Blaziken", 80, 120, 3 },
    { "Mudkip", 50, 70, 3 },
    { "Marshtomp", 70, 85, 3 },
    { "Swampert", 100, 110, 3 },
    { "Poochyena", 35, 55, 3 },
    { "Mightyena", 70, 90, 3 },
    { "Zigzagoon", 38, 30, 3 },
    { "Linoone", 78, 70, 3 },
    { "Wurmple", 45, 45, 3 },
    { "Silcoon", 50, 35, 3 },
    { "Beautifly", 60, 70, 3 },
    { "Cascoon", 50, 35, 3 },
    { "Dustox", 60, 50, 3 },
    { "Lotad", 40, 30, 3 },
    { "Lombre", 60, 50, 3 },
    { "Ludicolo", 80, 70, 3 },
    { "Seedot", 40, 40, 3 },
    { "Nuzleaf", 70, 70, 3 },
    { "Shiftry", 90, 100, 3 },
    { "Taillow", 40, 55, 3 },
    { "Swellow", 60, 85, 3 },
    { "Wingull", 40, 30, 3 },
    { "Pelipper", 60, 50, 3 },
    { "Ralts", 28, 25, 3 },
    { "Kirlia", 38, 35, 3 },
    { "Gardevoir", 68, 65, 3 },
    { "Surskit", 40, 30, 3 },
    { "Masquerain", 70, 60, 3 },
    { "Shroomish", 60, 40, 3 },
    { "Breloom", 60, 130, 3 },
    { "Slakoth", 60, 60, 3 },
    { "Vigoroth", 80, 80, 3 },
    { "Slaking", 150, 160, 3 },
    { "Nincada", 31, 45, 3 },
    { "Ninjask", 61, 90, 3 },
    { "Shedinja", 1, 90, 3 },
    { "Whismur", 64, 51, 3 },
    { "Loudred", 84, 71, 3 },
    { "Exploud", 104, 91, 3 },
    { "Makuhita", 72, 60, 3 },
    { "Hariyama", 144, 120, 3 },
    { "Azurill", 50, 20, 3 },
    { "Nosepass", 30, 45, 3 },
    { "Skitty", 50, 45, 3 },
    { "Delcatty", 70, 65, 3 },
    { "Sableye", 50, 75, 3 },
    { "Mawile", 50, 85, 3 },
    { "Aron", 50, 70, 3 },
    { "Lairon", 60, 90, 3 },
    { "Aggron", 70, 110, 3 },
    { "Meditite", 30, 40, 3 },
    { "Medicham", 60, 60, 3 },
    { "Electrike", 40, 45, 3 },
    { "Manectric", 70, 75, 3 },
    { "Plusle", 60, 50, 3 },
    { "Minun", 60, 40, 3 },
    { "Volbeat", 65, 73, 3 },
    { "Illumise", 65, 47, 3 },
    { "Roselia", 50, 60, 3 },
    { "Gulpin", 70, 43, 3 },
    { "Swalot", 100, 73, 3 },
    { "Carvanha", 45, 90, 3 },
    { "Sharpedo", 70, 120, 3 },
    { "Wailmer", 130, 70, 3 },
    { "Wailord", 170, 90, 3 },
    { "Numel", 60, 60, 3 },
    { "Camerupt", 70, 100, 3 },
    { "Torkoal", 70, 85, 3 },
    { "Spoink", 60, 25, 3 },
    { "Grumpig", 80, 45, 3 },
    { "Spinda", 60, 60, 3 },
    { "Trapinch", 45, 100, 3 },
    { "Vibrava", 50, 70, 3 },
    { "Flygon", 80, 100, 3 },
    { "Cacnea", 50, 85, 3 },
    { "Cacturne", 70, 115, 3 },
    { "Swablu", 45, 40, 3 },
    { "Altaria", 75, 70, 3 },
    { "Zangoose", 73, 115, 3 },
    { "Seviper", 73, 100, 3 },
    { "Lunatone", 70, 55, 3 },
    { "Solrock", 70, 95, 3 },
    { "Barboach", 50, 48, 3 },
    { "Whiscash", 110, 78, 3 },
    { "Corphish", 43, 80, 3 },
    { "Crawdaunt", 63, 120, 3 },
    { "Baltoy", 40, 40, 3 },
    { "Claydol", 60, 70, 3 },
    { "Lileep", 66, 41, 3 },
    { "Cradily", 86, 81, 3 },
    { "Anorith", 45, 95, 3 },
    { "Armaldo", 75, 125, 3 },
    { "Feebas", 20, 15, 3 },
    { "Milotic", 95, 60, 3 },
    { "Castform", 70, 70, 3 },
    { "Kecleon", 60, 90, 3 },
    { "Shuppet", 44, 75, 3 },
    { "Banette", 64, 115, 3 },
    { "Duskull", 20, 40, 3 },
    { "Dusclops", 40, 70, 3 },
    { "Tropius", 99, 68, 3 },
    { "Chimecho", 65, 50, 3 },
    { "Absol", 65, 130, 3 },
    { "Wynaut", 95, 23, 3 },
    { "Snorunt", 50, 50, 3 },
    { "Glalie", 80, 80, 3 },
    { "Spheal", 70, 40, 3 },
    { "Sealeo", 90, 60, 3 },
    { "Walrein", 110, 80, 3 },
    { "Clamperl", 35, 64, 3 },
    { "Huntail", 55, 104, 3 },
    { "Gorebyss", 55, 84, 3 },
    { "Relicanth", 100, 90, 3 },
    { "Luvdisc", 43, 30, 3 },
    { "Bagon", 45, 75, 3 },
    { "Shelgon", 65, 95, 3 },
    { "Salamence", 95, 135, 3 },
    { "Beldum", 40, 55, 3 },
    { "Metang", 60, 75, 3 },
    { "Metagross", 80, 135, 3 },
    { "Regirock", 80, 100, 3 },
    { "Regice", 80, 50, 3 },
    { "Registeel", 80, 75, 3 },
    { "Latias", 80, 80, 3 },
    { "Latios", 80, 90, 3 },
    { "Kyogre", 100, 100, 3 },
    { "Groudon", 100, 150, 3 },
    { "Rayquaza", 105, 150, 3 },
    { "Jirachi", 100, 100, 3 },
    { "Deoxys", 50, 150, 3 },
    { "Turtwig", 55, 68, 4 },
    { "Grotle", 75, 89, 4 },
    { "Torterra", 95, 109, 4 },
    { "Chimchar", 44, 58, 4 },
    { "Monferno", 64, 78, 4 },
    { "Infernape", 76, 104, 4 },
    { "Piplup", 53, 51, 4 },
    { "Prinplup", 64, 66, 4 },
    { "Empoleon", 84, 86, 4 },
    { "Starly", 40, 55, 4 },
    { "Staravia", 55, 75, 4 },
    { "Staraptor", 85, 120, 4 },
    { "Bidoof", 59, 45, 4 },
    { "Bibarel", 79, 85, 4 },
    { "Kricketot", 37, 25, 4 },
    { "Kricketune", 77, 85, 4 },
    { "Shinx", 45, 65, 4 },
    { "Luxio", 60, 85, 4 },
    { "Luxray", 80, 120, 4 },
    { "Budew", 40, 30, 4 },
    { "Roserade", 60, 70, 4 },
    { "Cranidos", 67, 125, 4 },
    { "Rampardos", 97, 165, 4 },
    { "Shieldon", 30, 42, 4 },
    { "Bastiodon", 60, 52, 4 },
    { "Burmy", 40, 29, 4 },
    { "Wormadam", 60, 59, 4 },
    { "Mothim", 70, 94, 4 },
    { "Combee", 30, 30, 4 },
    { "Vespiquen", 70, 80, 4 },
    { "Pachirisu", 60, 45, 4 },
    { "Buizel", 55, 65, 4 },
    { "Floatzel", 85, 105, 4 },
    { "Cherubi", 45, 35, 4 },
    { "Cherrim", 70, 60, 4 },
    { "Shellos", 76, 48, 4 },
    { "Gastrodon", 111, 83, 4 },
    { "Ambipom", 75, 100, 4 },
    { "Drifloon", 90, 50, 4 },
    { "Drifblim", 150, 80, 4 },
    { "Buneary", 55, 66, 4 },
    { "Lopunny", 65, 76, 4 },
    { "Mismagius", 60, 60, 4 },
    { "Honchkrow", 100, 125, 4 },
    { "Glameow", 49, 55, 4 },
    { "Purugly", 71, 82, 4 },
    { "Chingling", 45, 30, 4 },
    { "Stunky", 63, 63, 4 },
    { "Skuntank", 103, 93, 4 },
    { "Bronzor", 57, 24, 4 },
    { "Bronzong", 67, 89, 4 },
    { "Bonsly", 50, 80, 4 },
    { "MimeJr", 20, 25, 4 },
    { "Happiny", 100, 5, 4 },
    { "Chatot", 76, 65, 4 },
    { "Spiritomb", 50, 92, 4 },
    { "Gible", 58, 70, 4 },
    { "Gabite", 68, 90, 4 },
    { "Garchomp", 108, 130, 4 },
    { "Munchlax", 135, 85, 4 },
    { "Riolu", 40, 70, 4 },
    { "Lucario", 70, 110, 4 },
    { "Hippopotas", 68, 72, 4 },
    { "Hippowdon", 108, 112, 4 },
    { "Skorupi", 40, 50, 4 },
    { "Drapion", 70, 90, 4 },
    { "Croagunk", 48, 61, 4 },
    { "Toxicroak", 83, 106, 4 },
    { "Carnivine", 74, 100, 4 },
    { "Finneon", 49, 49, 4 },
    { "Lumineon", 69, 69, 4 },
    { "Mantyke", 45, 20, 4 },
    { "Snover", 60, 62, 4 },
    { "Abomasnow", 90, 92, 4 },
    { "Weavile", 70, 120, 4 },
    { "Magnezone", 70, 70, 4 },
    { "Lickilicky", 110, 85, 4 },
    { "Rhyperior", 115, 140, 4 },
    { "Tangrowth", 100, 100, 4 },
    { "Electivire", 75, 123, 4 },
    { "Magmortar", 75, 95, 4 },
    { "Togekiss", 85, 50, 4 },
    { "Yanmega", 86, 76, 4 },
    { "Leafeon", 65, 110, 4 },
    { "Glaceon", 65, 60, 4 },
    { "Gliscor", 75, 95, 4 },
    { "Mamoswine", 110, 130, 4 },
    { "PorygonZ", 85, 80, 4 },
    { "Gallade", 68, 125, 4 },
    { "Probopass", 60, 55, 4 },
    { "Dusknoir", 45, 100, 4 },
    { "Froslass", 70, 80, 4 },
    { "Rotom", 50, 50, 4 },
    { "Uxie", 75, 75, 4 },
    { "Mesprit", 80, 105, 4 },
    { "Azelf", 75, 125, 4 },
    { "Dialga", 100, 120, 4 },
    { "Palkia", 90, 120, 4 },
    { "Heatran", 91, 90, 4 },
    { "Regigigas", 110, 160, 4 },
    { "Giratina", 150, 100, 4 },
    { "Cresselia", 120, 70, 4 },
    { "Phione", 80, 80, 4 },
    { "Manaphy", 100, 100, 4 },
    { "Darkrai", 70, 90, 4 },
    { "Shaymin", 100, 100, 4 },
    { "Arceus", 120, 120, 4 },
    { "Victini", 100, 100, 5 },
    { "Snivy", 45, 45, 5 },
    { "Servine", 60, 60, 5 },
    { "Serperior", 75, 75, 5 },
    { "Tepig", 65, 63, 5 },
    { "Pignite", 90, 93, 5 },
    { "Emboar", 110, 123, 5 },
    { "Oshawott", 55, 55, 5 },
    { "Dewott", 75, 75, 5 },
    { "Samurott", 95, 100, 5 },
    { "Patrat", 45, 55, 5 },
    { "Watchog", 60, 85, 5 },
    { "Lillipup", 45, 60, 5 },
    { "Herdier", 65, 80, 5 },
    { "Stoutland", 85, 110, 5 },
    { "Purrloin", 41, 50, 5 },
    { "Liepard", 64, 88, 5 },
    { "Pansage", 50, 53, 5 },
    { "Simisage", 75, 98, 5 },
    { "Pansear", 50, 53, 5 },
    { "Simisear", 75, 98, 5 },
    { "Panpour", 50, 53, 5 },
    { "Simipour", 75, 98, 5 },
    { "Munna", 76, 25, 5 },
    { "Musharna", 116, 55, 5 },
    { "Pidove", 50, 55, 5 },
    { "Tranquill", 62, 77, 5 },
    { "Unfezant", 80, 115, 5 },
    { "Blitzle", 45, 60, 5 },
    { "Zebstrika", 75, 100, 5 },
    { "Roggenrola", 55, 75, 5 },
    { "Boldore", 70, 105, 5 },
    { "Gigalith", 85, 135, 5 },
    { "Woobat", 55, 45, 5 },
    { "Swoobat", 67, 57, 5 },
    { "Drilbur", 60, 85, 5 },
    { "Excadrill", 110, 135, 5 },
    { "Audino", 103, 60, 5 },
    { "Timburr", 75, 80, 5 },
    { "Gurdurr", 85, 105, 5 },
    { "Conkeldurr", 105, 140, 5 },
    { "Tympole", 50, 50, 5 },
    { "Palpitoad", 75, 65, 5 },
    { "Seismitoad", 105, 95, 5 },
    { "Throh", 120, 100, 5 },
    { "Sawk", 75, 125, 5 },
    { "Sewaddle", 45, 53, 5 },
    { "Swadloon", 55, 63, 5 },
    { "Leavanny", 75, 103, 5 },
    { "Venipede", 30, 45, 5 },
    { "Whirlipede", 40, 55, 5 },
    { "Scolipede", 60, 100, 5 },
    { "Cottonee", 40, 27, 5 },
    { "Whimsicott", 60, 67, 5 },
    { "Petilil", 45, 35, 5 },
    { "Lilligant", 70, 60, 5 },
    { "Basculin", 70, 92, 5 },
    { "Sandile", 50, 72, 5 },
    { "Krokorok", 60, 82, 5 },
    { "Krookodile", 95, 117, 5 },
    { "Darumaka", 70, 90, 5 },
    { "Darmanitan", 105, 140, 5 },
    { "Maractus", 75, 86, 5 },
    { "Dwebble", 50, 65, 5 },
    { "Crustle", 70, 105, 5 },
    { "Scraggy", 50, 75, 5 },
    { "Scrafty", 65, 90, 5 },
    { "Sigilyph", 72, 58, 5 },
    { "Yamask", 38, 30, 5 },
    { "Cofagrigus", 58, 50, 5 },
    { "Tirtouga", 54, 78, 5 },
    { "Carracosta", 74, 108, 5 },
    { "Archen", 55, 112, 5 },
    { "Archeops", 75, 140, 5 },
    { "Trubbish", 50, 50, 5 },
    { "Garbodor", 80, 95, 5 },
    { "Zorua", 40, 65, 5 },
    { "Zoroark", 60, 105, 5 },
    { "Minccino", 55, 50, 5 },
    { "Cinccino", 75, 95, 5 },
    { "Gothita", 45, 30, 5 },
    { "Gothorita", 60, 45, 5 },
    { "Gothitelle", 70, 55, 5 },
    { "Solosis", 45, 30, 5 },
    { "Duosion", 65, 40, 5 },
    { "Reuniclus", 110, 65, 5 },
    { "Ducklett", 62, 44, 5 },
    { "Swanna", 75, 87, 5 },
    { "Vanillite", 36, 50, 5 },
    { "Vanillish", 51, 65, 5 },
    { "Vanilluxe", 71, 95, 5 },
    { "Deerling", 60, 60, 5 },
    { "Sawsbuck", 80, 100, 5 },
    { "Emolga", 55, 75, 5 },
    { "Karrablast", 50, 75, 5 },
    { "Escavalier", 70, 135, 5 },
    { "Foongus", 69, 55, 5 },
    { "Amoonguss", 114, 85, 5 },
    { "Frillish", 55, 40, 5 },
    { "Jellicent", 100, 60, 5 },
    { "Alomomola", 165, 75, 5 },
    { "Joltik", 50, 47, 5 },
    { "Galvantula", 70, 77, 5 },
    { "Ferroseed", 44, 50, 5 },
    { "Ferrothorn", 74, 94, 5 },
    { "Klink", 40, 55, 5 },
    { "Klang", 60, 80, 5 },
    { "Klinklang", 60, 100, 5 },
    { "Tynamo", 35, 55, 5 },
    { "Eelektrik", 65, 85, 5 },
    { "Eelektross", 85, 115, 5 },
    { "Elgyem", 55, 55, 5 },
    { "Beheeyem", 75, 75, 5 },
    { "Litwick", 50, 30, 5 },
    { "Lampent", 60, 40, 5 },
    { "Chandelure", 60, 55, 5 },
    { "Axew", 46, 87, 5 },
    { "Fraxure", 66, 117, 5 },
    { "Haxorus", 76, 147, 5 },
    { "Cubchoo", 55, 70, 5 },
    { "Beartic", 95, 130, 5 },
    { "Cryogonal", 70, 50, 5 },
    { "Shelmet", 50, 40, 5 },
    { "Accelgor", 80, 70, 5 },
    { "Stunfisk", 109, 66, 5 },
    { "Mienfoo", 45, 85, 5 },
    { "Mienshao", 65, 125, 5 },
    { "Druddigon", 77, 120, 5 },
    { "Golett", 59, 74, 5 },
    { "Golurk", 89, 124, 5 },
    { "Pawniard", 45, 85, 5 },
    { "Bisharp", 65, 125, 5 },
    { "Bouffalant", 95, 110, 5 },
    { "Rufflet", 70, 83, 5 },
    { "Braviary", 100, 123, 5 },
    { "Vullaby", 70, 55, 5 },
    { "Mandibuzz", 110, 65, 5 },
    { "Heatmor", 85, 97, 5 },
    { "Durant", 58, 109, 5 },
    { "Deino", 52, 65, 5 },
    { "Zweilous", 72, 85, 5 },
    { "Hydreigon", 92, 105, 5 },
    { "Larvesta", 55, 85, 5 },
    { "Volcarona", 85, 60, 5 },
    { "Cobalion", 91, 90, 5 },
    { "Terrakion", 91, 129, 5 },
    { "Virizion", 91, 90, 5 },
    { "Tornadus", 79, 115, 5 },
    { "Thundurus", 79, 115, 5 },
    { "Reshiram", 100, 120, 5 },
    { "Zekrom", 100, 150, 5 },
    { "Landorus", 89, 125, 5 },
    { "Kyurem", 125, 130, 5 },
    { "Keldeo", 91, 72, 5 },
    { "Meloetta", 100, 77, 5 },
    { "Genesect", 71, 120, 5 },
    { "Chespin", 56, 61, 6 },
    { "Quilladin", 61, 78, 6 },
    { "Chesnaught", 88, 107, 6 },
    { "Fennekin", 40, 45, 6 },
    { "Braixen", 59, 59, 6 },
    { "Delphox", 75, 69, 6 },
    { "Froakie", 41, 56, 6 },
    { "Frogadier", 54, 63, 6 },
    { "Greninja", 72, 95, 6 },
    { "Bunnelby", 38, 36, 6 },
    { "Diggersby", 85, 56, 6 },
    { "Fletchling", 45, 50, 6 },
    { "Fletchinder", 62, 73, 6 },
    { "Talonflame", 78, 81, 6 },
    { "Scatterbug", 38, 35, 6 },
    { "Spewpa", 45, 22, 6 },
    { "Vivillon", 80, 52, 6 },
    { "Litleo", 62, 50, 6 },
    { "Pyroar", 86, 68, 6 },
    { "Flabebe", 44, 38, 6 },
    { "Floette", 54, 45, 6 },
    { "Florges", 78, 65, 6 },
    { "Skiddo", 66, 65, 6 },
    { "Gogoat", 123, 100, 6 },
    { "Pancham", 67, 82, 6 },
    { "Pangoro", 95, 124, 6 },
    { "Furfrou", 75, 80, 6 },
    { "Espurr", 62, 48, 6 },
    { "Meowstic", 74, 48, 6 },
    { "Honedge", 45, 80, 6 },
    { "Doublade", 59, 110, 6 },
    { "Aegislash", 60, 50, 6 },
    { "Spritzee", 78, 52, 6 },
    { "Aromatisse", 101, 72, 6 },
    { "Swirlix", 62, 48, 6 },
    { "Slurpuff", 82, 80, 6 },
    { "Inkay", 53, 54, 6 },
    { "Malamar", 86, 92, 6 },
    { "Binacle", 42, 52, 6 },
    { "Barbaracle", 72, 105, 6 },
    { "Skrelp", 50, 60, 6 },
    { "Dragalge", 65, 75, 6 },
    { "Clauncher", 50, 53, 6 },
    { "Clawitzer", 71, 73, 6 },
    { "Helioptile", 44, 38, 6 },
    { "Heliolisk", 62, 55, 6 },
    { "Tyrunt", 58, 89, 6 },
    { "Tyrantrum", 82, 121, 6 },
    { "Amaura", 77, 59, 6 },
    { "Aurorus", 123, 77, 6 },
    { "Sylveon", 95, 65, 6 },
    { "Hawlucha", 78, 92, 6 },
    { "Dedenne", 67, 58, 6 },
    { "Carbink", 50, 50, 6 },
    { "Goomy", 45, 50, 6 },
    { "Sliggoo", 68, 75, 6 },
    { "Goodra", 90, 100, 6 },
    { "Klefki", 57, 80, 6 },
    { "Phantump", 43, 70, 6 },
    { "Trevenant", 85, 110, 6 },
    { "Pumpkaboo", 49, 66, 6 },
    { "Gourgeist", 65, 90, 6 },
    { "Bergmite", 55, 69, 6 },
    { "Avalugg", 95, 117, 6 },
    { "Noibat", 40, 30, 6 },
    { "Noivern", 85, 70, 6 },
    { "Xerneas", 126, 131, 6 },
    { "Yveltal", 126, 131, 6 },
    { "Zygarde", 108, 100, 6 },
    { "Diancie", 50, 100, 6 },
    { "Hoopa", 80, 110, 6 },
    { "Volcanion", 80, 110, 6 },
    { "Rowlet", 68, 55, 7 },
    { "Dartrix", 78, 75, 7 },
    { "Decidueye", 78, 107, 7 },
    { "Litten", 45, 65, 7 },
    { "Torracat", 65, 85, 7 },
    { "Incineroar", 95, 115, 7 },
    { "Popplio", 50, 54, 7 },
    { "Brionne", 60, 69, 7 },
    { "Primarina", 80, 74, 7 },
    { "Pikipek", 35, 75, 7 },
    { "Trumbeak", 55, 85, 7 },
    { "Toucannon", 80, 120, 7 },
    { "Yungoos", 48, 70, 7 },
    { "Gumshoos", 88, 110, 7 },
    { "Grubbin", 47, 62, 7 },
    { "Charjabug", 57, 82, 7 },
    { "Vikavolt", 77, 70, 7 },
    { "Crabrawler", 47, 82, 7 },
    { "Crabominable", 97, 132, 7 },
    { "Oricorio", 75, 70, 7 },
    { "Cutiefly", 40, 45, 7 },
    { "Ribombee", 60, 55, 7 },
    { "Rockruff", 45, 65, 7 },
    { "Lycanroc", 75, 115, 7 },
    { "Wishiwashi", 45, 20, 7 },
    { "Mareanie", 50, 53, 7 },
    { "Toxapex", 50, 63, 7 },
    { "Mudbray", 70, 100, 7 },
    { "Mudsdale", 100, 125, 7 },
    { "Dewpider", 38, 40, 7 },
    { "Araquanid", 68, 70, 7 },
    { "Fomantis", 40, 55, 7 },
    { "Lurantis", 70, 105, 7 },
    { "Morelull", 40, 35, 7 },
    { "Shiinotic", 60, 45, 7 },
    { "Salandit", 48, 44, 7 },
    { "Salazzle", 68, 64, 7 },
    { "Stufful", 70, 75, 7 },
    { "Bewear", 120, 125, 7 },
    { "Bounsweet", 42, 30, 7 },
    { "Steenee", 52, 40, 7 },
    { "Tsareena", 72, 120, 7 },
    { "Comfey", 51, 52, 7 },
    { "Oranguru", 90, 60, 7 },
    { "Passimian", 100, 120, 7 },
    { "Wimpod", 25, 35, 7 },
    { "Golisopod", 75, 125, 7 },
    { "Sandygast", 55, 55, 7 },
    { "Palossand", 85, 75, 7 },
    { "Pyukumuku", 55, 60, 7 },
    { "TypeNull", 95, 95, 7 },
    { "Silvally", 95, 95, 7 },
    { "Minior", 60, 60, 7 },
    { "Komala", 65, 115, 7 },
    { "Turtonator", 60, 78, 7 },
    { "Togedemaru", 65, 98, 7 },
    { "Mimikyu", 55, 90, 7 },
    { "Bruxish", 68, 105, 7 },
    { "Drampa", 78, 60, 7 },
    { "Dhelmise", 70, 131, 7 },
    { "Jangmo-o", 45, 55, 7 },
    { "Hakamo-o", 55, 75, 7 },
    { "Kommo-o", 75, 110, 7 },
    { "TapuKoko", 70, 115, 7 },
    { "TapuLele", 70, 85, 7 },
    { "TapuBulu", 70, 130, 7 },
    { "TapuFini", 70, 75, 7 },
    { "Cosmog", 43, 29, 7 },
    { "Cosmoem", 43, 29, 7 },
    { "Solgaleo", 137, 137, 7 },
    { "Lunala", 137, 113, 7 },
    { "Nihilego", 109, 53, 7 },
    { "Buzzwole", 107, 139, 7 },
    { "Pheromosa", 71, 137, 7 },
    { "Xurkitree", 83, 89, 7 },
    { "Celesteela", 97, 101, 7 },
    { "Kartana", 59, 181, 7 },
    { "Guzzlord", 223, 101, 7 },
    { "Necrozma", 97, 107, 7 },
    { "Magearna", 80, 95, 7 },
    { "Marshadow", 90, 125, 7 },
    { "Poipole", 67, 73, 7 },
    { "Naganadel", 73, 73, 7 },
    { "Stakataka", 61, 131, 7 },
    { "Blacephalon", 53, 127, 7 },
    { "Zeraora", 88, 112, 7 },
    { "Meltan", 46, 65, 7 },
    { "Melmetal", 135, 143, 7 },
    { "Grookey", 50, 65, 8 },
    { "Thwackey", 70, 85, 8 },
    { "Rillaboom", 100, 125, 8 },
    { "Scorbunny", 50, 71, 8 },
    { "Raboot", 65, 86, 8 },
    { "Cinderace", 80, 116, 8 },
    { "Sobble", 50, 40, 8 },
    { "Drizzile", 65, 60, 8 },
    { "Inteleon", 70, 85, 8 },
    { "Skwovet", 70, 55, 8 },
    { "Greedent", 120, 95, 8 },
    { "Rookidee", 38, 47, 8 },
    { "Corvisquire", 68, 67, 8 },
    { "Corviknight", 98, 87, 8 },
    { "Blipbug", 25, 20, 8 },
    { "Dottler", 50, 35, 8 },
    { "Orbeetle", 60, 45, 8 },
    { "Nickit", 40, 28, 8 },
    { "Thievul", 70, 58, 8 },
    { "Gossifleur", 40, 40, 8 },
    { "Eldegoss", 60, 50, 8 },
    { "Wooloo", 42, 40, 8 },
    { "Dubwool", 72, 80, 8 },
    { "Chewtle", 50, 64, 8 },
    { "Drednaw", 90, 115, 8 },
    { "Yamper", 59, 45, 8 },
    { "Boltund", 69, 90, 8 },
    { "Rolycoly", 30, 40, 8 },
    { "Carkol", 80, 60, 8 },
    { "Coalossal", 110, 80, 8 },
    { "Applin", 40, 40, 8 },
    { "Flapple", 70, 110, 8 },
    { "Appletun", 110, 85, 8 },
    { "Silicobra", 52, 57, 8 },
    { "Sandaconda", 72, 107, 8 },
    { "Cramorant", 70, 85, 8 },
    { "Arrokuda", 41, 63, 8 },
    { "Barraskewda", 61, 123, 8 },
    { "Toxel", 40, 38, 8 },
    { "Toxtricity", 75, 98, 8 },
    { "Sizzlipede", 50, 65, 8 },
    { "Centiskorch", 100, 115, 8 },
    { "Clobbopus", 50, 68, 8 },
    { "Grapploct", 80, 118, 8 },
    { "Sinistea", 40, 45, 8 },
    { "Polteageist", 60, 65, 8 },
    { "Hatenna", 42, 30, 8 },
    { "Hattrem", 57, 40, 8 },
    { "Hatterene", 57, 90, 8 },
    { "Impidimp", 45, 45, 8 },
    { "Morgrem", 65, 60, 8 },
    { "Grimmsnarl", 95, 120, 8 },
    { "Obstagoon", 93, 90, 8 },
    { "Perrserker", 70, 110, 8 },
    { "Cursola", 60, 95, 8 },
    { "Sirfetchd", 62, 135, 8 },
    { "MrRime", 80, 85, 8 },
    { "Runerigus", 58, 95, 8 },
    { "Milcery", 45, 40, 8 },
    { "Alcremie", 65, 60, 8 },
    { "Falinks", 65, 100, 8 },
    { "Pincurchin", 48, 101, 8 },
    { "Snom", 30, 25, 8 },
    { "Frosmoth", 70, 65, 8 },
    { "Stonjourner", 100, 125, 8 },
    { "Eiscue", 75, 80, 8 },
    { "Indeedee", 60, 65, 8 },
    { "Morpeko", 58, 95, 8 },
    { "Cufant", 72, 80, 8 },
    { "Copperajah", 122, 130, 8 },
    { "Dracozolt", 90, 100, 8 },
    { "Arctozolt", 90, 100, 8 },
    { "Dracovish", 90, 90, 8 },
    { "Arctovish", 90, 90, 8 },
    { "Duraludon", 70, 95, 8 },
    { "Dreepy", 28, 60, 8 },
    { "Drakloak", 68, 80, 8 },
    { "Dragapult", 88, 120, 8 },
    { "Zacian", 92, 120, 8 },
    { "Zamazenta", 92, 120, 8 },
    { "Eternatus", 140, 85, 8 },
    { "Kubfu", 60, 90, 8 },
    { "Urshifu", 100, 130, 8 },
    { "Zarude", 105, 120, 8 },
    { "Regieleki", 80, 100, 8 },
    { "Regidrago", 200, 100, 8 },
    { "Glastrier", 100, 145, 8 },
    { "Spectrier", 100, 65, 8 },
    { "Calyrex", 100, 80, 8 },
    { "Wyrdeer", 103, 105, 8 },
    { "Kleavor", 70, 135, 8 },
    { "Ursaluna", 130, 140, 8 },
    { "Basculegion", 120, 112, 8 },
    { "Sneasler", 80, 130, 8 },
    { "Overqwil", 85, 115, 8 },
    { "Enamorus", 74, 115, 8 },
    { "Sprigatito", 40, 61, 9 },
    { "Floragato", 61, 80, 9 },
    { "Meowscarada", 76, 110, 9 },
    { "Fuecoco", 67, 45, 9 },
    { "Crocalor", 81, 55, 9 },
    { "Skeledirge", 104, 75, 9 },
    { "Quaxly", 55, 65, 9 },
    { "Quaxwell", 70, 85, 9 },
    { "Quaquaval", 85, 120, 9 },
    { "Lechonk", 54, 45, 9 },
    { "Oinkologne", 110, 100, 9 },
    { "Tarountula", 35, 41, 9 },
    { "Spidops", 60, 79, 9 },
    { "Nymble", 33, 46, 9 },
    { "Lokix", 71, 102, 9 },
    { "Pawmi", 45, 50, 9 },
    { "Pawmo", 60, 75, 9 },
    { "Pawmot", 70, 115, 9 },
    { "Tandemaus", 50, 50, 9 },
    { "Maushold", 74, 75, 9 },
    { "Fidough", 37, 55, 9 },
    { "Dachsbun", 57, 80, 9 },
    { "Smoliv", 41, 35, 9 },
    { "Dolliv", 52, 53, 9 },
    { "Arboliva", 78, 69, 9 },
    { "Squawkabilly", 82, 96, 9 },
    { "Nacli", 55, 55, 9 },
    { "Naclstack", 60, 60, 9 },
    { "Garganacl", 100, 100, 9 },
    { "Charcadet", 40, 50, 9 },
    { "Armarouge", 85, 60, 9 },
    { "Ceruledge", 75, 125, 9 },
    { "Tadbulb", 61, 31, 9 },
    { "Bellibolt", 109, 64, 9 },
    { "Wattrel", 40, 40, 9 },
    { "Kilowattrel", 70, 70, 9 },
    { "Maschiff", 60, 78, 9 },
    { "Mabosstiff", 80, 120, 9 },
    { "Shroodle", 40, 65, 9 },
    { "Grafaiai", 63, 95, 9 },
    { "Bramblin", 40, 65, 9 },
    { "Brambleghast", 55, 115, 9 },
    { "Toedscool", 40, 40, 9 },
    { "Toedscruel", 80, 70, 9 },
    { "Klawf", 70, 100, 9 },
    { "Capsakid", 50, 62, 9 },
    { "Scovillain", 65, 108, 9 },
    { "Rellor", 41, 50, 9 },
    { "Rabsca", 75, 50, 9 },
    { "Flittle", 30, 35, 9 },
    { "Espathra", 95, 60, 9 },
    { "Tinkatink", 50, 45, 9 },
    { "Tinkatuff", 65, 55, 9 },
    { "Tinkaton", 85, 75, 9 },
    { "Wiglett", 10, 55, 9 },
    { "Wugtrio", 35, 100, 9 },
    { "Bombirdier", 70, 103, 9 },
    { "Finizen", 70, 45, 9 },
    { "Palafin", 100, 70, 9 },
    { "Varoom", 45, 70, 9 },
    { "Revavroom", 80, 119, 9 },
    { "Cyclizar", 70, 95, 9 },
    { "Orthworm", 70, 85, 9 },
    { "Glimmet", 48, 35, 9 },
    { "Glimmora", 83, 55, 9 },
    { "Greavard", 50, 61, 9 },
    { "Houndstone", 72, 101, 9 },
    { "Flamigo", 82, 115, 9 },
    { "Cetoddle", 108, 68, 9 },
    { "Cetitan", 170, 113, 9 },
    { "Veluza", 90, 102, 9 },
    { "Dondozo", 150, 100, 9 },
    { "Tatsugiri", 68, 50, 9 },
    { "Annihilape", 110, 115, 9 },
    { "Clodsire", 130, 75, 9 },
    { "Farigiraf", 120, 90, 9 },
    { "Dudunsparce", 125, 100, 9 },
    { "Kingambit", 100, 135, 9 },
    { "GreatTusk", 115, 131, 9 },
    { "ScreamTail", 115, 65, 9 },
    { "BruteBonnet", 111, 127, 9 },
    { "FlutterMane", 55, 55, 9 },
    { "SlitherWing", 85, 135, 9 },
    { "SandyShocks", 85, 81, 9 },
    { "IronTreads", 90, 112, 9 },
    { "IronBundle", 56, 80, 9 },
    { "IronHands", 154, 140, 9 },
    { "IronJugulis", 94, 80, 9 },
    { "IronMoth", 80, 70, 9 },
    { "IronThorns", 100, 134, 9 },
    { "Frigibax", 65, 75, 9 },
    { "Arctibax", 90, 95, 9 },
    { "Baxcalibur", 115, 145, 9 },
    { "Gimmighoul", 45, 30, 9 },
    { "Gholdengo", 87, 60, 9 },
    { "WoChien", 85, 85, 9 },
    { "ChienPao", 80, 120, 9 },
    { "TingLu", 155, 110, 9 },
    { "ChiYu", 55, 80, 9 },
    { "RoaringMoon", 105, 139, 9 },
    { "IronValiant", 74, 130, 9 },
    { "Koraidon", 100, 135, 9 },
    { "Miraidon", 100, 85, 9 },
    { "WalkingWake", 99, 83, 9 },
    { "IronLeaves", 90, 130, 9 },
    { "Dipplin", 80, 80, 9 },
    { "Poltchageist", 40, 45, 9 },
    { "Sinistcha", 71, 60, 9 },
    { "Okidogi", 88, 128, 9 },
    { "Munkidori", 88, 75, 9 },
    { "Fezandipiti", 88, 91, 9 },
    { "Ogerpon", 80, 120, 9 },
    { "Archaludon", 90, 105, 9 },
    { "Hydrapple", 106, 80, 9 },
    { "GougingFire", 105, 115, 9 },
    { "RagingBolt", 125, 73, 9 },
    { "IronBoulder", 90, 120, 9 },
    { "IronCrown", 90, 72, 9 },
    { "Terapagos", 90, 65, 9 },
    { "Pecharunt", 88, 88, 9 }
};

//this will generate a random pokemon depending on gyms beaten
//need a way to track gyms beaten and use that to determine which pokemon can be generated
//need to make sure not to generate evoved forms of pokemon
//need a list of pokemon that can be generated at each gym level
//need to make a list of pokemon that evolve from what pokemon
//need to make a list of pokemon that evolve at what gym level

vector <string> pool;

void generatePokemon() {
    //generate a random pokemon based on gyms beaten
    //use the pokemonlist array to randomly select a pokemon
    //need to make sure not to generate evoved forms of pokemon
    //need to make sure to only generate pokemon that can be found at the current gym level
    switch (gym_level) {
	case 0: // starter pokemon
        pool = { "Charmander", "Squirtle", "Bulbasaur" };
        break;
    case 1: // beginning wilds
        pool = { "Pidgey", "Rattata", "Magikarp" };
        break;
    case 2: // after Brock
        pool = { "Weedle", "Caterpie", "Pikachu", "Nidoran (F)", "Diglett" };
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
        pool = { "Abra", "Drowzee", "Krabby", "Cubone", "Ponyta" };
        break;
    case 10: // after rival battle 4
        pool = { "Geodude", "Graveler", "Onix", "Shellder", "Krabby" };
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
};

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
            //punishment
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
            //punishment
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
            //punishment
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
            //punishment
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
            //punishment
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
            //punishment
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
            //punishment
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
            //punishment
		}
};