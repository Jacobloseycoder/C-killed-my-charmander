
# C-killed-my-charmander

Team Members: Luke "deez nuts" Bishop, Jacob "carry the team" Losey, Max "makima is my queen" Barlow

###  flowchart
```mermaid
graph TD
start_game --> choose_starter
choose_starter --> battle_rival1
battle_rival1 --> new_pokemon1

new_pokemon1 --> gym1["Gym 1: Brock"]
gym1 --> new_pokemon2

new_pokemon2 --> gym2["Gym 2: Misty"]
gym2 --> new_pokemon3

new_pokemon3 --> battle_rival2
battle_rival2 --> gym3["Gym 3: Lt. Surge"]

gym3 --> new_pokemon4
new_pokemon4 --> gym4["Gym 4: Erika"]

gym4 --> new_pokemon5
new_pokemon5 --> gym5["Gym 5: Koga"]

gym5 --> battle_rival3
battle_rival3 --> gym6["Gym 6: Sabrina"]

gym6 --> new_pokemon6
new_pokemon6 --> gym7["Gym 7: Blaine"]

gym7 --> new_pokemon7
new_pokemon7 --> gym8["Gym 8: Giovanni"]

gym8 --> new_pokemon8
new_pokemon8 --> battle_rival4

battle_rival4 --> elite_four_gauntlet
elite_four_gauntlet --> champion
```

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
<img width="728" height="462" alt="image" src="https://github.com/user-attachments/assets/0205faa0-8c33-4cef-b4fd-6e3a7afc4f26" />

https://esp.mit.edu/download/1edacb14c3ec4b8bf875b3496b00cfb6/X5002_pokemon-notes.pdf
