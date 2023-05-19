//
// Created by AP Studio on 19/05/2023.
//

#ifndef GAME_VARIABLES_H
#define GAME_VARIABLES_H

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

#include "attacks.h"
#include "abilities.h"
#include "renders.h"
#include "shops.h"
#include "characters.h"
#include "info.h"
#include "myFce.h"

using namespace std;

//Variables
// string
string whatScreenWeSee = "Shop";
string chooseCharacterAbilityOrAttackString = " Attacks ";
string chosenOptionInShop = "items";
// int
int characterSlots = 0;
int shopNumber = 0;
// char
char pressedKey;
// bool
bool firstTime = true;

// files
ofstream file;

#endif //GAME_VARIABLES_H
