
# C-killed-my-charmander

Team Members: Luke "deez nuts" Bishop, Jacob "carry the team" Losey, Max "makima is my queen" Barlow

| `Pokemon`    |               |    Luke   |
| ------------------ | ------------- | ------------ |
| `argument:type`    | records the stats, names, type of pokemon used in both enemys and players team  |              |
***
| `Battle`    |               |   Luke    |
| ------------------ | ------------- | ------------ |
| `argument:type`    | takes the list of pokemon from gym leaders and player to battle |              |
***
| `Inventory`    |               |   Luke    |
| ------------------ | ------------- | ------------ |
| `argument:type`    | holds all the cunsumables and players pokemon  |              |
***
| `Player`    |               |   Max    |
| ------------------ | ------------- | ------------ |
| `argument:type`    | probably just inventory and player pokemon if made its own thing  |              |
***
| `Enemy`    |               |   Max    |
| ------------------ | ------------- | ------------ |
| `argument:type`    | holds the list of pokemon and there stats for each enemy  |              |
***
| `Rooms/Gym leaders`    |               |   Max    |
| ------------------ | ------------- | ------------ |
| `argument:type`    | calls the enemy and ridlle gor each gym  |              |
***
| `Win loss conditions`    |               |   Max    |
| ------------------ | ------------- | ------------ |
| `argument:type`    | checks if you beat the champion or lost earlyer  |              |
***
| `main`    |               |   Jacob    |
| ------------------ | ------------- | ------------ |
| `argument:type`    | holds all the other things  |              |
***
| `riddle`    |               |   Jacob    |
| ------------------ | ------------- | ------------ |
| `argument:type`    | holds riddles or somthing with the answer  |              |
***
| `pokemon generator`    |               |   Jacob    |
| ------------------ | ------------- | ------------ |
| `argument:type`    | random giv player pokemon fitting the level they are at  |              |
***
| `user input`    |               |   Jacob    |
| ------------------ | ------------- | ------------ |
| `argument:type`    | IDK what to put for this  |              |
***
###  flowchart
```mermaid
start_game --> choose_starter
choose_starter --> battle_rivale1
battle_rivale1 --> new_pokemon1
new_pokemon1 --> gym1(brock)
gym1(brock) --> new_pokemon2
new_pokemon2 --> Gym2(missty)
Gym2(missty) --> new_pokemon3
new_pokemon3 --> battle_rivale2
battle_rivale2 --> Gym3(Lt surge)
Gym3(Lt surge) --> new_pokemon4
new_pokemon4 --> gym4(erika)
gym4(erika) --> new_pokemon5
new_pokemon4 --> gym5(koga)
gym5(koga) --> battle_rivale3
battle_rivale3 --> gym6(Sabrina)
gym6(Sabrina) --> new_pokemon6
new_pokemon6 --> gym7(blaine)
gym7(blaine) --> new_pokemon7
new_pokemon7 --> gym8(Giovanni)
gym8(Giovanni) --> new_pokemon8
new_pokemon8 --> battle_rivale3
battle_rivale3 --> elite_four_gauntlet
elite_four_gauntlet --> champion
```
<img width="728" height="462" alt="image" src="https://github.com/user-attachments/assets/0205faa0-8c33-4cef-b4fd-6e3a7afc4f26" />

https://esp.mit.edu/download/1edacb14c3ec4b8bf875b3496b00cfb6/X5002_pokemon-notes.pdf
