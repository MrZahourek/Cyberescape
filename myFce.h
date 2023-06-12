//
// Created by AP Studio on 19/05/2023.
//

#ifndef GAME_MYFCE_H
#define GAME_MYFCE_H

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
#include "variables.h"

using namespace std;

// sets console to UTF - 8
void prepareForOutput() {
    SetConsoleOutputCP(CP_UTF8);
}

// fills up space after a word until the specified stop point
void fillerOfEmptinessStr(int stopPoint = 10, string startingFromWorld = "abc", char fillingChar = ' ', string lastChar = "") {
    for (int i = startingFromWorld.length(); i <= stopPoint; i++) {
        cout << fillingChar;
    }
    cout << lastChar;
}

// fills up space after a number until the specified stop point
void fillerOfEmptinessInt(int stopPoint = 10, int startingFromNum = 123, char fillingChar = ' ', string lastChar = "") {
    string startingFromWorld = to_string(startingFromNum);
    for (int i = startingFromWorld.length(); i <= stopPoint; i++) {
        cout << fillingChar;
    }
    cout << lastChar;
}

//Colourful fce for just giving color to text - practical
string setcolor(unsigned short color) {
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
    return "";
}


//displays all the variations of setcolor()
void colorWheel() {
    for (int i = 0; i<= 254; i++) {
        setcolor(i);
        cout <<i<<"\t"<<"hello world!"<<endl;
    }
    setcolor(7);
}

// File functions
// clearing file fce
void clearFile(string fileToClear = "") {
    ofstream file;
    file.open(fileToClear);
    long pos = file.tellp();
    for (int i = 1; i <= pos; i++) {
        file.seekp(pos - i);
        file.write("", 1);
        file.seekp(1);
    }
    file.close();
}
// load a specific line
void loadLine(string pathToFile = "", int lineToLoad = 1, bool doWeWantEnter = false) {
    ifstream file;
    file.open(pathToFile);

    string fileReadOut;

    for (int i=1; i <= lineToLoad; i++) {
        getline(file, fileReadOut);
    }

    cout << fileReadOut;

    if (doWeWantEnter == true) {
        cout << endl;
    }

    file.close();
}
// load whole file
void loadFile(string pathToFile = "") {
    string fileOutput;
    fstream fileInput (pathToFile);

    while (getline(fileInput, fileOutput)) {
        cout << fileOutput << endl;
    }
}



// functions for specific parts of game

// prepares the title of shop and makes preparations for loading in the items to the shop
int prepareShopTitle() {
    //prep
    prepareForOutput();

    // file prep
    ofstream title("Visuals/shopTitle.txt");

    // variables
    string whatShopWeGenerate;


    //code
    srand((unsigned) time(NULL));
    shopNumber = rand() % 7;
    shopNumber++;

    if (shopNumber == 1) {
        title << stupendousEmporium.shopTitle;
        title.close();
        return 1;
    } else if (shopNumber == 2) {
        title << justMonsters.shopTitle;
        title.close();
        return 2;
    } else if (shopNumber == 3) {
        title << rosesFlowerShop.shopTitle;
        title.close();
        return 3;
    } else if (shopNumber == 4) {
        title << clydeHealery.shopTitle;
        title.close();
        return 4;
    } else if (shopNumber == 5) {
        title << swordsAndMore.shopTitle;
        title.close();
        return 5;
    } else if (shopNumber == 6) {
        title << violinViolence.shopTitle;
        title.close();
        return 6;
    } else if (shopNumber == 7) {
        title << assisiAssistance.shopTitle;
        title.close();
        return 7;
    } else if (shopNumber == 8) {
        title << snackVagon.shopTitle;
        title.close();
        return 8;
    }

}

void outOfResources() {
    system("cls");
    cout << "Oh no not enough resources";
    Sleep(1000);
    battleSceneSideAction = "Main";
    battleScene.currentPositionX = 1;
    battleScene.currentPositionY = 1;
}

void resetEffectsOfEnemy() {
    enemyEffectBurningActive = false;
    enemyEffectPoisonActive = false;
    enemyEffectDrainingActive = false;


    activeCountdownEnemy = 0;
}

void resetEffectsOfHero() {
    heroEffectBurningActive = false;
    heroEffectPoisonActive = false;
    heroEffectDrainingActive = false;


    activeCountdownEnemy = 0;
}

void HeroCheckAttack () {
    // variables
    int attackToCheck;

    if (battleSceneSideAction == "Attacks") {
        if (battleScene.currentPositionX == 2) {
            attackToCheck = 1;
        }
        else if (battleScene.currentPositionX == 3) {
            attackToCheck = 2;
        }
        else if (battleScene.currentPositionX == 4) {
            attackToCheck = 3;
        }
    }

    if (active.name == inferno.name) {
        switch (attackToCheck) {
            case 1:
            {
                if (active.bat < 40) {
                    outOfResources();
                }
                else {
                    if (shieldActiveEnemy == true) {
                        shieldHpEnemy = 0;
                        shieldActiveEnemy = false;
                    }
                    else {
                        if (enemy.arm <= 0) {
                            enemy.hp = enemy.hp - 2;
                        }
                        else {
                            enemy.arm = enemy.arm - 2;
                        }
                    }
                    damageDone = active.atk;

                    active.bat = active.bat - 40;
                }
                break;
            }

            case 2:
            {
                if (active.bat >= 20 && active.dat >= 20) {
                    damageDone = active.atk + 2;

                    resetEffectsOfEnemy();

                    enemyEffectBurningActive = true;
                    activeCountdownEnemy = 2;

                    active.bat = active.bat - 20;
                    active.dat = active.dat - 20;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.bat >= 30 && active.dat >= 15) {
                    damageDone = active.atk;

                    resetEffectsOfEnemy();

                    enemyEffectPoisonActive = true;
                    activeCountdownEnemy = 3;

                    active.bat = active.bat - 30;
                    active.dat = active.dat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
    else if (active.name == atlas.name) {
        switch (attackToCheck) {
            case 1:
            {
                if (active.bat >= 40) {
                    bool numIsReady = false;
                    while (numIsReady != true) {
                        if (enemy.dat % 4 == 0) {
                            numIsReady = true;
                        }
                        else {
                            enemy.dat++;
                        }
                    }

                    int midStageOfMovement = enemy.dat / 4;

                    enemy.dat = enemy.dat - midStageOfMovement;

                    active.dat = active.dat + midStageOfMovement;

                    damageDone = active.dat + midStageOfMovement;

                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                int midStageOfMovement = active.dat % 10;
                active.dat = active.dat - midStageOfMovement;
                damageDone = active.dat / 10;
                active.dat = 0;
                break;
            }

            case 3:
            {
                if (active.dat >= 40 && active.bat >= 15) {
                    damageDone = active.atk;
                    enemy.dat = enemy.dat - 20;
                    active.dat = active.dat - 40;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
    else if (active.name == hanibal.name) {
        cout << endl << endl << "Test test";
        switch (attackToCheck) {
            case 1:
            {
                if (active.bat >= 15) {
                    enemy.hp = enemy.hp - active.atk;
                    damageDone = 0;
                    active.dat = active.dat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.bat >= 40 ) {
                    enemy.atk--;
                    damageDone = active.atk - 2;
                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                cout << endl << endl << "Test test TesT";
                if (active.bat < 40 && active.dat < 15) {
                    outOfResources();
                }
                else {
                    damageDone = active.atk + 2;
                    enemySkipsTheirTurn = true;
                    active.bat = active.bat - 40;
                    active.dat = active.dat - 15;
                }
                break;
            }
        }
    }
    else if (active.name == monoI.name) {
        switch (attackToCheck) {
            case 1:
            {
                if (active.dat >= 40) {
                    shieldActiveEnemy = false;
                    shieldActiveHero = true;
                    shieldHpHero = enemy.atk + 2;
                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2: {
                if (active.dat >= 40 && active.bat >= 40) {
                    if (characterOne.atk > characterTwo.atk && characterOne.atk > characterThree.atk) {
                        damageDone = characterOne.atk + 2;
                    } else if (characterTwo.atk > characterOne.atk && characterTwo.atk > characterThree.atk) {
                        damageDone = characterTwo.atk + 2;
                    } else {
                        damageDone = characterThree.atk + 2;
                    }
                    damageDone = damageDone + active.atk;
                    heroSkipsTheirTurn = true;
                    active.dat = active.dat - 40;
                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.bat >= 15) {
                    damageDone = active.atk;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
    else if (active.name == biohazard.name) {
        switch (attackToCheck) {
            case 1:
            {
                if (active.bat >= 15 && active.dat >= 15) {
                    damageDone = active.atk - 2;
                    enemy.hp = enemy.hp - damageDone;
                    damageDone = 0;

                    active.bat = active.bat - 15;
                    active.dat = active.dat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.dat < 40) {
                    outOfResources();
                }
                else {
                    damageDone = active.atk + 2;
                    resetEffectsOfEnemy();
                    enemyEffectPoisonActive = true;
                    activeCountdownEnemy = 3;
                    active.dat = active.dat - 40;
                }
                break;
            }

            case 3:
            {
                if (active.bat < 40 ) {
                    outOfResources();
                }
                else {
                    damageDone = active.atk;
                    resetEffectsOfEnemy();
                    enemyEffectBurningActive = true;
                    activeCountdownEnemy = 2;
                    active.bat = active.bat - 40;
                }
                break;
            }
        }
    }
    else if (active.name == zip.name) {
        switch (attackToCheck) {
            case 1:
            {
                if (active.dat >= 15 && active.bat >= 15) {
                    damageDone = active.atk - 2;
                    enemy.atk--;
                    active.dat = active.dat - 15;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.bat >= 15) {
                    damageDone = active.atk + 2;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.bat >= 40) {
                    damageDone = active.atk - 2;
                    enemy.hp = enemy.hp - damageDone;
                    damageDone = 0;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
    else if (active.name == plagy.name) {
        switch (attackToCheck) {
            case 1:
            {
                if (active.dat >= 40) {
                    damageDone = active.atk;
                    enemy.hp = enemy.hp - damageDone;
                    damageDone = 0;

                    resetEffectsOfEnemy();

                    enemyEffectPoisonActive = true;
                    activeCountdownEnemy = 3;

                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.bat >= 25) {
                    damageDone = active.atk;

                    resetEffectsOfEnemy();

                    enemyEffectPoisonActive = true;
                    activeCountdownEnemy = 3;

                    active.bat = active.bat - 25;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.dat >= 40 && active.bat >= 15)
                {
                    resetEffectsOfEnemy();

                    enemyEffectDrainingActive = true;

                    damageDone = active.atk + 2;

                    active.dat = active.dat - 40;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
    else if (active.name == amper.name) {
        switch (attackToCheck) {
            case 1:
            {
                if (active.dat >= 40) {
                    damageDone = 2;
                    active.hp = active.hp + 2;
                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.dat >= 40) {
                    damageDone = active.atk + 2;
                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.bat >= 40) {
                    damageDone = active.atk;
                    enemy.hp = enemy.hp - damageDone;
                    damageDone = 0;

                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
}

void HeroCheckAbility() {
    // variables
    int abilityToCheck;

    if (battleSceneSideAction == "Attacks") {
        if (battleScene.currentPositionX == 2) {
            abilityToCheck = 1;
        }
        else if (battleScene.currentPositionX == 3) {
            abilityToCheck = 2;
        }
        else if (battleScene.currentPositionX == 4) {
            abilityToCheck = 3;
        }
    }

    if (active.name == inferno.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.dat < 15) {
                    outOfResources();
                }
                else {
                    shieldActiveHero = true;
                    shieldHpHero = 2 ;

                    active.bat = active.bat - 15;
                }
                break;
            }

            case 2:
            {
                if (active.bat >= 15) {
                    resetEffectsOfHero();

                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.bat >= 15 && active.dat >= 15) {
                    resetEffectsOfHero();



                    active.bat = active.bat - 15;
                    active.dat = active.dat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
    else if (active.name == atlas.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.bat >= 40) {
                    bool numIsReady = false;
                    while (numIsReady != true) {
                        if (enemy.dat % 4 == 0) {
                            numIsReady = true;
                        }
                        else {
                            enemy.dat++;
                        }
                    }

                    int midStageOfMovement = enemy.dat / 4;

                    enemy.dat = enemy.dat - midStageOfMovement;

                    active.dat = active.dat + midStageOfMovement;

                    damageDone = active.dat + midStageOfMovement;

                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                int midStageOfMovement = active.dat % 10;
                active.dat = active.dat - midStageOfMovement;
                damageDone = active.dat / 10;
                active.dat = 0;
                break;
            }

            case 3:
            {
                if (active.dat >= 40 && active.bat >= 15) {
                    damageDone = active.atk;
                    enemy.dat = enemy.dat - 20;
                    active.dat = active.dat - 40;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
    else if (active.name == hanibal.name) {
        cout << endl << endl << "Test test";
        switch (abilityToCheck) {
            case 1:
            {
                if (active.bat >= 15) {
                    enemy.hp = enemy.hp - active.atk;
                    damageDone = 0;
                    active.dat = active.dat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.bat >= 40 ) {
                    enemy.atk--;
                    damageDone = active.atk - 2;
                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                cout << endl << endl << "Test test TesT";
                if (active.bat < 40 && active.dat < 15) {
                    outOfResources();
                }
                else {
                    damageDone = active.atk + 2;
                    enemySkipsTheirTurn = true;
                    active.bat = active.bat - 40;
                    active.dat = active.dat - 15;
                }
                break;
            }
        }
    }
    else if (active.name == monoI.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.dat >= 40) {
                    shieldActiveEnemy = false;
                    shieldActiveHero = true;
                    shieldHpHero = enemy.atk + 2;
                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2: {
                if (active.dat >= 40 && active.bat >= 40) {
                    if (characterOne.atk > characterTwo.atk && characterOne.atk > characterThree.atk) {
                        damageDone = characterOne.atk + 2;
                    } else if (characterTwo.atk > characterOne.atk && characterTwo.atk > characterThree.atk) {
                        damageDone = characterTwo.atk + 2;
                    } else {
                        damageDone = characterThree.atk + 2;
                    }
                    damageDone = damageDone + active.atk;
                    heroSkipsTheirTurn = true;
                    active.dat = active.dat - 40;
                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.bat >= 15) {
                    damageDone = active.atk;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
    else if (active.name == biohazard.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.bat >= 15 && active.dat >= 15) {
                    damageDone = active.atk - 2;
                    enemy.hp = enemy.hp - damageDone;
                    damageDone = 0;

                    active.bat = active.bat - 15;
                    active.dat = active.dat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.dat < 40) {
                    outOfResources();
                }
                else {
                    damageDone = active.atk + 2;
                    resetEffectsOfEnemy();
                    enemyEffectPoisonActive = true;
                    activeCountdownEnemy = 3;
                    active.dat = active.dat - 40;
                }
                break;
            }

            case 3:
            {
                if (active.bat < 40 ) {
                    outOfResources();
                }
                else {
                    damageDone = active.atk;
                    resetEffectsOfEnemy();
                    enemyEffectBurningActive = true;
                    activeCountdownEnemy = 2;
                    active.bat = active.bat - 40;
                }
                break;
            }
        }
    }
    else if (active.name == zip.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.dat >= 15 && active.bat >= 15) {
                    damageDone = active.atk - 2;
                    enemy.atk--;
                    active.dat = active.dat - 15;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.bat >= 15) {
                    damageDone = active.atk + 2;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.bat >= 40) {
                    damageDone = active.atk - 2;
                    enemy.hp = enemy.hp - damageDone;
                    damageDone = 0;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
    else if (active.name == plagy.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.dat >= 40) {
                    damageDone = active.atk;
                    enemy.hp = enemy.hp - damageDone;
                    damageDone = 0;

                    resetEffectsOfEnemy();

                    enemyEffectPoisonActive = true;
                    activeCountdownEnemy = 3;

                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.bat >= 25) {
                    damageDone = active.atk;

                    resetEffectsOfEnemy();

                    enemyEffectPoisonActive = true;
                    activeCountdownEnemy = 3;

                    active.bat = active.bat - 25;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.dat >= 40 && active.bat >= 15)
                {
                    resetEffectsOfEnemy();

                    enemyEffectDrainingActive = true;

                    damageDone = active.atk + 2;

                    active.dat = active.dat - 40;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
    else if (active.name == amper.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.dat >= 40) {
                    damageDone = 2;
                    active.hp = active.hp + 2;
                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.dat >= 40) {
                    damageDone = active.atk + 2;
                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.bat >= 40) {
                    damageDone = active.atk;
                    enemy.hp = enemy.hp - damageDone;
                    damageDone = 0;

                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    }
}

void enemyBrain (int originalHp = subject079.hp) {
    // variables
    int decideAttackOrAbility;

    if (enemy.hp < originalHp) {
        decideAttackOrAbility = rand() % 1;
    }
    else {
        decideAttackOrAbility = 0;
    }
    // 0 = attack, 1 = ability

    switch (decideAttackOrAbility) {
        case 0: {

        }

        case 1: {

        }

    }


}

void startBattleMusic() {
    battleEnded = false;
    filePath = "Sounds/Escape the Subway.wav";
}

#endif //GAME_MYFCE_H
