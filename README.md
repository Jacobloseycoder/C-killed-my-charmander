
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
    A[Start Game] --> B[Choose Starter Pokemon]
    B --> C[Battle Rival]
    C --> D[Receive Random Second Pokemon]

    D --> E[Gym & Encounter Loop]

    subgraph Loop[Steps 4–20: Gym Battles & Encounters]
        E --> F[Random Pokemon Encounter]
        F --> G[Catch / Add to Inventory]
        G --> H[Gym Battle]
        H --> I[Update Stats & Progress]
        I --> J{More Gyms Left?}
        J -- Yes --> F
        J -- No --> K[Exit Loop]
    end

    K --> L[Elite Four Gauntlet]
    L --> M[Rival Championship Battle]
    M --> N{Win?}
    N -- Yes --> O[Become Champion]
    N -- No --> P[Retry / Game Over]

    O --> Q[End Game or Post-Game Content]
    P --> Q

    Q --> R[Finish]
<img width="728" height="462" alt="image" src="https://github.com/user-attachments/assets/0205faa0-8c33-4cef-b4fd-6e3a7afc4f26" />

https://esp.mit.edu/download/1edacb14c3ec4b8bf875b3496b00cfb6/X5002_pokemon-notes.pdf
