using namespace std;
//reqirements
//At least 7 classes that represent different parts of the game(see suggestions below).
//A main game loop that lets the player explore, make decisions, and progress.
//Inventory or status tracking(e.g., player has a key, health is low, etc.).
//At least 15 rooms or scenes with unique interactions.
//Meaningful user input, such as commands("go north", "take sword", "open door").
//Win / lose conditions(e.g., escape the castle, find the treasure, survive the monster).
//Comments and clear, organized code.

//

//classes
//pokemon class - holds the pokemons type, stats, and moves
//player class - holds the inventory
//battle class - handles the battle mechanics
//enemy class - holds the enemy pokemons type, stats, and moves
//riddle class - holds the riddle and answer for the gym leaders
//pokemon generator class - generates random pokemon for the player to catch and battle

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

string pokemonlist[] = {
    "Bulbasaur",
    "Ivysaur",
    "Venusaur",
    "Charmander",
    "Charmeleon",
    "Charizard",
    "Squirtle",
    "Wartortle",
    "Blastoise",
    "Caterpie",
    "Metapod",
    "Butterfree",
    "Weedle",
    "Kakuna",
    "Beedrill",
    "Pidgey",
    "Pidgeotto",
    "Pidgeot",
    "Rattata",
    "Raticate",
    "Spearow",
    "Fearow",
    "Ekans",
    "Arbok",
    "Pikachu",
    "Raichu",
    "Sandshrew",
    "Sandslash",
    "Nidoran (F)",
    "Nidorina",
    "Nidoqueen",
    "Nidoran (M)",
    "Nidorino",
    "Nidoking",
    "Clefairy",
    "Clefable",
    "Vulpix",
    "Ninetales",
    "Jigglypuff",
    "Wigglytuff",
    "Zubat",
    "Golbat",
    "Oddish",
    "Gloom",
    "Vileplume",
    "Paras",
    "Parasect",
    "Venonat",
    "Venomoth",
    "Diglett",
    "Dugtrio",
    "Meowth",
    "Persian",
    "Psyduck",
    "Golduck",
    "Mankey",
    "Primeape",
    "Growlithe",
    "Arcanine",
    "Poliwag",
    "Poliwhirl",
    "Poliwrath",
    "Abra",
    "Kadabra",
    "Alakazam",
    "Machop",
    "Machoke",
    "Machamp",
    "Bellsprout",
    "Weepinbell",
    "Victreebel",
    "Tentacool",
    "Tentacruel",
    "Geodude",
    "Graveler",
    "Golem",
    "Ponyta",
    "Rapidash",
    "Slowpoke",
    "Slowbro",
    "Magnemite",
    "Magneton",
    "Farfetch'd",
    "Doduo",
    "Dodrio",
    "Seel",
    "Dewgong",
    "Grimer",
    "Muk",
    "Shellder",
    "Cloyster",
    "Gastly",
    "Haunter",
    "Gengar",
    "Onix",
    "Drowzee",
    "Hypno",
    "Krabby",
    "Kingler",
    "Voltorb",
    "Electrode",
    "Exeggcute",
    "Exeggutor",
    "Cubone",
    "Marowak",
    "Hitmonlee",
    "Hitmonchan",
    "Lickitung",
    "Koffing",
    "Weezing",
    "Rhyhorn",
    "Rhydon",
    "Chansey",
    "Tangela",
    "Kangaskhan",
    "Horsea",
    "Seadra",
    "Goldeen",
    "Seaking",
    "Staryu",
    "Starmie",
    "Mr. Mime",
    "Scyther",
    "Jynx",
    "Electabuzz",
    "Magmar",
    "Pinsir",
    "Tauros",
    "Magikarp",
    "Gyarados",
    "Lapras",
    "Ditto",
    "Eevee",
    "Vaporeon",
    "Jolteon",
    "Flareon",
    "Porygon",
    "Omanyte",
    "Omastar",
    "Kabuto",
    "Kabutops",
    "Aerodactyl",
    "Snorlax",
    "Articuno",
    "Zapdos",
    "Moltres",
    "Dratini",
    "Dragonair",
    "Dragonite",
    "Mewtwo",
    "Mew"
};

//this will generate a random pokemon depending on gyms beaten
//need a way to track gyms beaten and use that to determine which pokemon can be generated
//need to make sure not to generate evoved forms of pokemon
//need a list of pokemon that can be generated at each gym level
//need to make a list of pokemon that evolve from what pokemon
//need to make a list of pokemon that evolve at what gym level

class pokemon_generator {
};