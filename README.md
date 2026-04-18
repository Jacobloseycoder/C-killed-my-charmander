
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
flowchart TD
A[Start Game] --> B[Step 1: Choose Starter Pokemon]
 B --> C[Step 2: Battle Rival]
 C --> D[Step 3: Receive Random Second Pokemon]

D --> E4[Step 4: Gym1 / Encounter]
E4 --> E5[Step 5: Gym2 / Encounter]
E5 --> E6[Step 6: Gym3 / Encounter]
E6 --> E7[Step 7: Gym4 / Encounter]
E7 --> E8[Step 8: Gym5 / Encounter]
E8 --> E9[Step 9: Gym6 / Encounter]
E9 --> E10[Step 10: Gym7 / Encounter]
E10 --> E11[Step 11: Gym8 / Encounter]

E10 --> F[Step 12: Elite Four Gauntlet]
F --> G[Step 13: Rival Championship Battle]

G --> H{Win?}
H -- Yes --> I[Become Champion]
H -- No --> J[Retry / Game Over]

I --> K[Step 23: End Game or Post-Game Content]
J --> K

K --> L[Finish]
<img width="728" height="462" alt="image" src="https://github.com/user-attachments/assets/0205faa0-8c33-4cef-b4fd-6e3a7afc4f26" />

https://esp.mit.edu/download/1edacb14c3ec4b8bf875b3496b00cfb6/X5002_pokemon-notes.pdf
