# Rarity Roller C++ Edition

**Rarity Roller C++ Edition** is a console-based rarity rolling game originally developed in Python and now fully rewritten in C++. It features a multi-tiered random rarity system, where each roll can unlock increasingly rare items, from *Basic* up to the ultra-rare *Final Rarity*.

The program uses direct keypress input (`_getch()`) for interactive rolling and simulates halving probabilities at each tier to create a challenging and engaging experience.

---

## Background

This project started as a Python script designed to simulate a rarity roll mechanic commonly seen in games. The C++ edition was created to explore low-level console input handling, random number generation, and complex nested logic in a compiled language.

---

## Usage

- Compile the program using Visual Studio or any C++ compiler with C++11 support or higher.
- Run the executable in a console window.
- Press any key to start the game.
- Press any key to roll and see which rarity you get.
- The rarity tiers progress with halving chances, making the highest rarities extremely rare.
- The game continues until you choose to close the console or reach the final rarity.

---
