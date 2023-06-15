//
// Created by AP Studio on 19/05/2023.
//

#ifndef GAME_VARIABLES_H
#define GAME_VARIABLES_H

#include <vector>

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

string messageOne = "";
string messageTwo = "";
string messageThree = "";
string messageFour = "";
string messageFive = "";

string voiceline = "Mirror, mirror on the wall, who's the craziest of them all? Oh, it's me! How delightful!";
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

int bioShieldHpHero = 0;
int bioShieldHpEnemy = 0;

int activeCountdownHero = 0;
int activeCountdownEnemy = 0;
int refillCountdown = 3;

int swapDelay = 0;
int chosenCharacterSwap = 0;

int effectDrainingCountdownHero = 0;
int effectDrainingCountdownEnemy = 0;

int effectCrippledStrengthHero = 0;
int effectCrippledStrengthEnemy = 0;

int heroImmuneBurning = 0;
int heroImmunePoison = 0;
int heroImmuneDraining = 0;
int heroImmuneCrippled = 0;
int heroImmuneBleeding = 0;

int enemyImmuneBurning = 0;
int enemyImmunePoison = 0;
int enemyImmuneDraining = 0;
int enemyImmuneCrippled = 0;
int enemyImmuneBleeding = 0;

int heroTurnsSkip = 0;
int enemyTurnsSkip = 0;

vector<int> bioShieldSizesHero;
vector<int> bioShieldSizesEnemy;

// char
char pressedKey;
// bool
bool firstTime = true;

bool shieldActiveHero = false;
bool shieldActiveEnemy = false;

bool bioShieldActiveHero = false;
bool bioShieldActiveEnemy = false;

bool heroEffectBurningActive = false;
bool heroEffectPoisonActive = false;
bool heroEffectDrainingActive = false;
bool heroEffectCrippledActive = false;
bool heroEffectBleedingActive = false;

bool enemyEffectBurningActive = false;
bool enemyEffectPoisonActive = false;
bool enemyEffectDrainingActive = false;
bool enemyEffectCrippledActive = false;
bool enemyEffectBleedingActive = false;

bool swapDelayActive = false;

bool battleEnded = false;

// files
ofstream file;

#endif //GAME_VARIABLES_H
