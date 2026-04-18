
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

    D --> E4[Step 4: Gym / Encounter]
    E4 --> E5[Step 5: Gym / Encounter]
    E5 --> E6[Step 6: Gym / Encounter]
    E6 --> E7[Step 7: Gym / Encounter]
    E7 --> E8[Step 8: Gym / Encounter]
    E8 --> E9[Step 9: Gym / Encounter]
    E9 --> E10[Step 10: Gym / Encounter]
    E10 --> E11[Step 11: Gym / Encounter]
    E11 --> E12[Step 12: Gym / Encounter]
    E12 --> E13[Step 13: Gym / Encounter]
    E13 --> E14[Step 14: Gym / Encounter]
    E14 --> E15[Step 15: Gym / Encounter]
    E15 --> E16[Step 16: Gym / Encounter]
    E16 --> E17[Step 17: Gym / Encounter]
    E17 --> E18[Step 18: Gym / Encounter]
    E18 --> E19[Step 19: Gym / Encounter]
    E19 --> E20[Step 20: Gym / Encounter]

    E20 --> F[Step 21: Elite Four Gauntlet]
    F --> G[Step 22: Rival Championship Battle]

    G --> H{Win?}
    H -- Yes --> I[Become Champion]
    H -- No --> J[Retry / Game Over]

    I --> K[Step 23: End Game or Post-Game Content]
    J --> K

    K --> L[Finish]
<img width="728" height="462" alt="image" src="https://github.com/user-attachments/assets/0205faa0-8c33-4cef-b4fd-6e3a7afc4f26" />

https://esp.mit.edu/download/1edacb14c3ec4b8bf875b3496b00cfb6/X5002_pokemon-notes.pdf
