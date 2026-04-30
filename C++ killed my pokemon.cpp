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
    { "Mew", 100, 100, 1 }
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