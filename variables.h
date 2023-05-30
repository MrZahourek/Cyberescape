//
// Created by AP Studio on 19/05/2023.
//

#ifndef GAME_VARIABLES_H
#define GAME_VARIABLES_H

using namespace std;

//Variables
// string
string whatScreenWeSee = "Choose Character";
string chooseCharacterAbilityOrAttackString = " Attacks ";
string chosenOptionInShop = "items";
// int
int characterSlots = 0;
int shopNumber = 0;

int lowestPointInChoosingHeroes = 1;
int higestPointInChoosingHeroes = 8;

int lowestPointInChoosingHeroesCharacters;
int higestPointInCharacterSheetCharacters;
int lowestPointInChoosingHeroesAttacks;
int higestPointInCharacterSheetAttacks;
// char
char pressedKey;
// bool
bool firstTime = true;

// files
ofstream file;

#endif //GAME_VARIABLES_H
