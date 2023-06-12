//
// Created by AP Studio on 19/05/2023.
//

#ifndef GAME_VARIABLES_H
#define GAME_VARIABLES_H

using namespace std;

//Variables
// made by chat gpt (or Atlas as i call him)
string filePath = "";

bool stopFlag = false; // Set this flag to true when you want to stop the music



// string
string whatScreenWeSee = "Choose Character";  // resets the whole game and checks what screen we should see (battle, shop, map, tutorial,...)
string chooseCharacterAbilityOrAttackString = " Attacks "; // these two will just help us with the attack or ability display
string characterSheetAbilityOrAttackString = "Attacks";
string chosenOptionInShop = "items"; // stores in what "layer" of the shop we are
string battleWhoHasTheirTurn = "Hero";
string battleSceneSideAction = "Main";
// int
int characterSlots = 0; // fills up at three and sends us later, more of a stop for character picking
int shopNumber = 0; // will store random variable that will decide what shop we will load

int lowestPointInChoosingHeroes = 1; // to stop displaying arrow when we are at one of the borders in character picking
int highestPointInChoosingHeroes = 8;

int chosenCharacter; // decides the chosen character

int currentLevel = 1; // for now, it should be 0

int damageDone = 0;
int shieldHpHero = 0;
int shieldHpEnemy = 0;

int activeCountdownHero = 0;
int activeCountdownEnemy = 0;

int effectDrainingCountdownHero = 0;
int effectDrainingCountdownEnemy = 0;

int heroImmuneBurning = 0;
int heroImmunePoison = 0;
int heroImmuneDraining = 0;
int enemyImmuneBurning = 0;
int enemyImmunePoison = 0;
int enemyImmuneDraining = 0;
// char
char pressedKey;
// bool
bool firstTime = true;

bool shieldActiveHero = false;
bool shieldActiveEnemy = false;

bool heroEffectBurningActive = false;
bool heroEffectPoisonActive = false;
bool heroEffectDrainingActive = false;

bool enemyEffectBurningActive = false;
bool enemyEffectPoisonActive = false;
bool enemyEffectDrainingActive = false;

bool battleEnded = false;
bool heroSkipsTheirTurn = false;
bool enemySkipsTheirTurn = false;

// files
ofstream file;

#endif //GAME_VARIABLES_H
