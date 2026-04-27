using namespace std;
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