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
#include "shops.h"
#include "characters.h"
#include "info.h"
#include "variables.h"
#include "renders.h"
#include "myFce.h"

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

// idk why but it cant take the function from any else
void renderTUIForTwo() {
    // prep
    prepareForOutput();
    // variables
    int currentLine = 0;

    string characterOneNameEdited = characterOne.name;
    string characterTwoNameEdited = characterTwo.name;
    string characterThreeNameEdited = characterThree.name;

    characterOneNameEdited.erase(remove(characterOneNameEdited.begin(), characterOneNameEdited.end(), ' '), characterOneNameEdited.end()); //remove space from character names
    characterTwoNameEdited.erase(remove(characterTwoNameEdited.begin(), characterTwoNameEdited.end(), ' '), characterTwoNameEdited.end());
    characterThreeNameEdited.erase(remove(characterThreeNameEdited.begin(), characterThreeNameEdited.end(), ' '), characterThreeNameEdited.end());

    string TUIForTwoFileString;

    // file prep
    fstream TUIForTwoFileFile ("Visuals/customTUIforTwo.txt");

    // code
    while(getline(TUIForTwoFileFile, TUIForTwoFileString)) {
        currentLine++;

        if (currentLine == 1) {
            cout << TUIForTwoFileString << endl;
        }
        else if (currentLine == 2) {
            cout << TUIForTwoFileString << enemy.name;
            fillerOfEmptinessStr(221, enemy.name, ' ', "║\n");
        }
        else if (currentLine == 6) {
            cout << TUIForTwoFileString << enemy.effect;
            fillerOfEmptinessStr(13, enemy.effect, ' ', "║\n");
        }
        else if (currentLine == 11) {
            cout << TUIForTwoFileString << enemy.hp;
            fillerOfEmptinessInt(6, enemy.hp, ' ', "║\n");
        }
        else if (currentLine == 13) {
            cout << TUIForTwoFileString << enemy.arm;
            fillerOfEmptinessInt(6, enemy.arm, ' ', "║\n");
        }
        else if (currentLine == 15) {
            cout << TUIForTwoFileString << enemy.atk;
            fillerOfEmptinessInt(6, enemy.atk, ' ', "║\n");
        }
        else if (currentLine == 17) {
            cout << TUIForTwoFileString << enemy.bat;
            fillerOfEmptinessInt(5, enemy.bat, ' ', "║\n");
        }
        else if (currentLine == 19) {
            cout << TUIForTwoFileString << enemy.dat;
            fillerOfEmptinessInt(8, enemy.dat, ' ', "║\n");
        }
        else if (currentLine == 24) {
            cout << TUIForTwoFileString << active.name;
            fillerOfEmptinessStr(222, active.name, ' ', "║\n");
        }
        else if (currentLine == 33) {
            cout << TUIForTwoFileString;

            if (characterOne.name == active.name) {
                if (battleScene.currentPositionX == 2) {
                    setcolor(6);
                    cout << "► " + characterTwoNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterTwoNameEdited;
                }
                fillerOfEmptinessStr(18, "► " + characterTwoNameEdited, ' ', "");

                cout << " ║                                                                                                                                            ║ ";

                if (battleScene.currentPositionX == 3) {
                    setcolor(6);

                    cout << "► " + characterThreeNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterThreeNameEdited;
                }
                fillerOfEmptinessStr(19, "► " + characterThreeNameEdited, ' ', "");
            }
            else if (characterTwo.name == active.name) {
                if (battleScene.currentPositionX == 2) {
                    setcolor(6);
                    cout << "► " + characterOneNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterOneNameEdited;
                }
                fillerOfEmptinessStr(18, "► " + characterOneNameEdited, ' ', "");

                cout << " ║                                                                                                                                            ║ ";

                if (battleScene.currentPositionX == 3) {
                    setcolor(6);

                    cout << "► " + characterThreeNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterThreeNameEdited;
                }
                fillerOfEmptinessStr(19, "► " + characterThreeNameEdited, ' ', "");
            }
            else if (characterThree.name == active.name) {
                if (battleScene.currentPositionX == 2) {
                    setcolor(6);
                    cout << "► " + characterOneNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterOneNameEdited;
                }
                fillerOfEmptinessStr(18, "► " + characterOneNameEdited, ' ', "");

                cout << " ║                                                                                                                                            ║ ";

                if (battleScene.currentPositionX == 3) {
                    setcolor(6);

                    cout << "► " + characterTwoNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterTwoNameEdited;
                }
                fillerOfEmptinessStr(19, "► " + characterTwoNameEdited, ' ', "");
            }

            cout << "║                          ║" << endl;


        }
        else if (currentLine == 51) {
            cout << TUIForTwoFileString;

            if (active.name == characterOne.name) {
                if (battleScene.currentPositionX == 2) {
                    cout << characterTwo.hp;
                    fillerOfEmptinessInt(19, characterTwo.hp, ' ', "║");
                }
                else {
                    cout << characterThree.hp;
                    fillerOfEmptinessInt(19, characterThree.hp, ' ', "║");
                }
            }
            else if (active.name == characterTwo.name) {
                if (battleScene.currentPositionX == 2) {
                    cout << characterOne.hp;
                    fillerOfEmptinessInt(19, characterOne.hp, ' ', "║");
                }
                else {
                    cout << characterThree.hp;
                    fillerOfEmptinessInt(19, characterThree.hp, ' ', "║");
                }
            }
            else {
                if (battleScene.currentPositionX == 2) {
                    cout << characterOne.hp;
                    fillerOfEmptinessInt(19, characterOne.hp, ' ', "║");
                }
                else {
                    cout << characterTwo.hp;
                    fillerOfEmptinessInt(19, characterTwo.hp, ' ', "║");
                }
            }

            cout << "                                                                                                     ║" << endl;
        }
        else if(currentLine == 53) {
            cout << TUIForTwoFileString;

            if (active.name == characterOne.name) {
                if (battleScene.currentPositionX == 2) {
                    cout << characterTwo.arm;
                    fillerOfEmptinessInt(19, characterTwo.arm, ' ', "║");
                }
                else {
                    cout << characterThree.arm;
                    fillerOfEmptinessInt(19, characterThree.arm, ' ', "║");
                }
            }
            else if (active.name == characterTwo.name) {
                if (battleScene.currentPositionX == 2) {
                    cout << characterOne.arm;
                    fillerOfEmptinessInt(19, characterOne.arm, ' ', "║");
                }
                else {
                    cout << characterThree.arm;
                    fillerOfEmptinessInt(19, characterThree.arm, ' ', "║");
                }
            }
            else {
                if (battleScene.currentPositionX == 2) {
                    cout << characterOne.arm;
                    fillerOfEmptinessInt(19, characterOne.arm, ' ', "║");
                }
                else {
                    cout << characterTwo.arm;
                    fillerOfEmptinessInt(19, characterTwo.arm, ' ', "║");
                }
            }

            cout << "                                                                                                     ║" << endl;
        }
        else if(currentLine == 55) {
            cout << TUIForTwoFileString;

            if (active.name == characterOne.name) {
                if (battleScene.currentPositionX == 2) {
                    cout << characterTwo.atk;
                    fillerOfEmptinessInt(19, characterTwo.atk, ' ', "║");
                }
                else {
                    cout << characterThree.atk;
                    fillerOfEmptinessInt(19, characterThree.atk, ' ', "║");
                }
            }
            else if (active.name == characterTwo.name) {
                if (battleScene.currentPositionX == 2) {
                    cout << characterOne.atk;
                    fillerOfEmptinessInt(19, characterOne.atk, ' ', "║");
                }
                else {
                    cout << characterThree.atk;
                    fillerOfEmptinessInt(19, characterThree.atk, ' ', "║");
                }
            }
            else {
                if (battleScene.currentPositionX == 2) {
                    cout << characterOne.atk;
                    fillerOfEmptinessInt(19, characterOne.atk, ' ', "║");
                }
                else {
                    cout << characterTwo.atk;
                    fillerOfEmptinessInt(19, characterTwo.atk, ' ', "║");
                }
            }

            cout << "                                                                                                     ║" << endl;
        }
        else if(currentLine == 57) {
            cout << TUIForTwoFileString;

            if (active.name == characterOne.name) {
                if (battleScene.currentPositionX == 2) {
                    cout << characterTwo.bat;
                    fillerOfEmptinessInt(18, characterTwo.bat, ' ', "║");
                }
                else {
                    cout << characterThree.bat;
                    fillerOfEmptinessInt(18, characterThree.bat, ' ', "║");
                }
            }
            else if (active.name == characterTwo.name) {
                if (battleScene.currentPositionX == 2) {
                    cout << characterOne.bat;
                    fillerOfEmptinessInt(18, characterOne.bat, ' ', "║");
                }
                else {
                    cout << characterThree.bat;
                    fillerOfEmptinessInt(18, characterThree.bat, ' ', "║");
                }
            }
            else {
                if (battleScene.currentPositionX == 2) {
                    cout << characterOne.bat;
                    fillerOfEmptinessInt(18, characterOne.bat, ' ', "║");
                }
                else {
                    cout << characterTwo.bat;
                    fillerOfEmptinessInt(18, characterTwo.bat, ' ', "║");
                }
            }

            cout << "                                                                                                     ║" << endl;
        }
        else if(currentLine == 59) {
            cout << TUIForTwoFileString;

            if (active.name == characterOne.name) {
                if (battleScene.currentPositionX == 2) {
                    cout << characterTwo.dat;
                    fillerOfEmptinessInt(21, characterTwo.dat, ' ', "║");
                }
                else {
                    cout << characterThree.dat;
                    fillerOfEmptinessInt(21, characterThree.dat, ' ', "║");
                }
            }
            else if (active.name == characterTwo.name) {
                if (battleScene.currentPositionX == 2) {
                    cout << characterOne.dat;
                    fillerOfEmptinessInt(21, characterOne.dat, ' ', "║");
                }
                else {
                    cout << characterThree.dat;
                    fillerOfEmptinessInt(21, characterThree.dat, ' ', "║");
                }
            }
            else {
                if (battleScene.currentPositionX == 2) {
                    cout << characterOne.dat;
                    fillerOfEmptinessInt(21, characterOne.dat, ' ', "║");
                }
                else {
                    cout << characterTwo.dat;
                    fillerOfEmptinessInt(21, characterTwo.dat, ' ', "║");
                }
            }

            cout << "                                                                                                     ║" << endl;
        }



        else {
            cout << TUIForTwoFileString << endl;
        }
    }
}

void renderTUIForThree() {
    // prep
    prepareForOutput();
    // variables
    int currentLine = 0;

    string characterOneNameEdited = characterOne.name;
    string characterTwoNameEdited = characterTwo.name;
    string characterThreeNameEdited = characterThree.name;

    characterOneNameEdited.erase(remove(characterOneNameEdited.begin(), characterOneNameEdited.end(), ' '), characterOneNameEdited.end()); //remove space from character names
    characterTwoNameEdited.erase(remove(characterTwoNameEdited.begin(), characterTwoNameEdited.end(), ' '), characterTwoNameEdited.end());
    characterThreeNameEdited.erase(remove(characterThreeNameEdited.begin(), characterThreeNameEdited.end(), ' '), characterThreeNameEdited.end());

    string TUIForThreeFileString;

    // file prep
    fstream TUIForThreeFileFile ("Visuals/customTUIforThree.txt");

    // code
    while(getline(TUIForThreeFileFile, TUIForThreeFileString)) {
        currentLine++;

        if (currentLine == 1) {
            cout << TUIForThreeFileString << endl;
        }
        else if (currentLine == 2) {
            cout << TUIForThreeFileString << enemy.name;
            fillerOfEmptinessStr(221, enemy.name, ' ', "║\n");
        }
        else if (currentLine == 6) {
            cout << TUIForThreeFileString << enemy.effect;
            fillerOfEmptinessStr(13, enemy.effect, ' ', "║\n");
        }
        else if (currentLine == 11) {
            cout << TUIForThreeFileString << enemy.hp;
            fillerOfEmptinessInt(6, enemy.hp, ' ', "║\n");
        }
        else if (currentLine == 13) {
            cout << TUIForThreeFileString << enemy.arm;
            fillerOfEmptinessInt(6, enemy.arm, ' ', "║\n");
        }
        else if (currentLine == 15) {
            cout << TUIForThreeFileString << enemy.atk;
            fillerOfEmptinessInt(6, enemy.atk, ' ', "║\n");
        }
        else if (currentLine == 17) {
            cout << TUIForThreeFileString << enemy.bat;
            fillerOfEmptinessInt(5, enemy.bat, ' ', "║\n");
        }
        else if (currentLine == 19) {
            cout << TUIForThreeFileString << enemy.dat;
            fillerOfEmptinessInt(8, enemy.dat, ' ', "║\n");
        }
        else if (currentLine == 24) {
            cout << TUIForThreeFileString << active.name;
            fillerOfEmptinessStr(222, active.name, ' ', "║\n");
        }
        else if (currentLine == 33) {
            cout << TUIForThreeFileString;

            if (battleScene.currentPositionX == 1) {
                setcolor(6);
                cout << "► " + characterOneNameEdited;
                setcolor(15);
            }
            else {
                cout << "  " + characterOneNameEdited;
            }
            fillerOfEmptinessStr(18, "► " + characterOneNameEdited, ' ', "");

            cout << " ║                                                           ║ ";

            if (battleScene.currentPositionX == 2) {
                setcolor(6);
                cout << "► " + characterTwoNameEdited;
                setcolor(15);
            }
            else {
                cout << "  " + characterTwoNameEdited;
            }
            fillerOfEmptinessStr(18, "► " + characterTwoNameEdited, ' ', "");

            cout << " ║                                                            ║ ";

            if (battleScene.currentPositionX == 3) {
                setcolor(6);

                cout << "► " + characterThreeNameEdited;
                setcolor(15);
            }
            else {
                cout << "  " + characterThreeNameEdited;
            }
            fillerOfEmptinessStr(19, "► " + characterThreeNameEdited, ' ', "");

            cout << "║                          ║" << endl;


        }
        else if (currentLine == 51) {
            cout << TUIForThreeFileString;

            if (battleScene.currentPositionX == 1) {
                cout << characterOne.dat;
                fillerOfEmptinessInt(19, characterOne.dat, ' ', "║");
            }
            if (battleScene.currentPositionX == 2) {
                cout << characterTwo.dat;
                fillerOfEmptinessInt(19, characterTwo.dat, ' ', "║");
            }
            if (battleScene.currentPositionX == 3) {
                cout << characterThree.dat;
                fillerOfEmptinessInt(19, characterThree.dat, ' ', "║");
            }

            cout << "                                                                                                     ║" << endl;
        }
        else if(currentLine == 53) {
            cout << TUIForThreeFileString;

            if (battleScene.currentPositionX == 1) {
                cout << characterOne.dat;
                fillerOfEmptinessInt(19, characterOne.dat, ' ', "║");
            }
            if (battleScene.currentPositionX == 2) {
                cout << characterTwo.dat;
                fillerOfEmptinessInt(19, characterTwo.dat, ' ', "║");
            }
            if (battleScene.currentPositionX == 3) {
                cout << characterThree.dat;
                fillerOfEmptinessInt(19, characterThree.dat, ' ', "║");
            }

            cout << "                                                                                                     ║" << endl;
        }
        else if(currentLine == 55) {
            cout << TUIForThreeFileString;

            if (battleScene.currentPositionX == 1) {
                cout << characterOne.dat;
                fillerOfEmptinessInt(19, characterOne.dat, ' ', "║");
            }
            if (battleScene.currentPositionX == 2) {
                cout << characterTwo.dat;
                fillerOfEmptinessInt(19, characterTwo.dat, ' ', "║");
            }
            if (battleScene.currentPositionX == 3) {
                cout << characterThree.dat;
                fillerOfEmptinessInt(19, characterThree.dat, ' ', "║");
            }

            cout << "                                                                                                     ║" << endl;
        }
        else if(currentLine == 57) {
            cout << TUIForThreeFileString;

            if (battleScene.currentPositionX == 1) {
                cout << characterOne.bat;
                fillerOfEmptinessInt(18, characterOne.bat, ' ', "║");
            }
            if (battleScene.currentPositionX == 2) {
                cout << characterTwo.bat;
                fillerOfEmptinessInt(18, characterTwo.bat, ' ', "║");
            }
            if (battleScene.currentPositionX == 3) {
                cout << characterThree.bat;
                fillerOfEmptinessInt(18, characterThree.bat, ' ', "║");
            }

            cout << "                                                                                                     ║" << endl;
        }
        else if(currentLine == 59) {
            cout << TUIForThreeFileString;

            if (battleScene.currentPositionX == 1) {
                cout << characterOne.dat;
                fillerOfEmptinessInt(21, characterOne.dat, ' ', "║");
            }
            if (battleScene.currentPositionX == 2) {
                cout << characterTwo.dat;
                fillerOfEmptinessInt(21, characterTwo.dat, ' ', "║");
            }
            if (battleScene.currentPositionX == 3) {
                cout << characterThree.dat;
                fillerOfEmptinessInt(21, characterThree.dat, ' ', "║");
            }

            cout << "                                                                                                     ║" << endl;
        }



        else {
            cout << TUIForThreeFileString << endl;
        }
    }
}

// prepares the title of shop and makes preparations for loading in the items to the shop
int prepareShopTitle() {
    //prep
    prepareForOutput();

    // file prep
    ofstream title("Visuals/shopTitle.txt");

    // variables
    string whatShopWeGenerate;


    //code
    reset:
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
        if (currentLevel >= 7) {
            goto reset;
        }
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

void fillMessage (string message) {
    if (messageOne == "") {
        messageOne = message;
    }
    else {
        if (messageTwo == "") {
            messageTwo = message;
        }
        else {
            if (messageThree == "") {
                messageThree = message;
            }
            else {
                if (messageFour == "") {
                    messageFour = message;
                }
                else {
                    if (messageFive == "") {
                        messageFive = message;
                    }
                }
            }
        }
    }
}


// functions needed for attacks and effects

void resetEffectsOfEnemy() {
    enemyEffectBurningActive = false;
    enemyEffectPoisonActive = false;
    enemyEffectDrainingActive = false;
    enemyEffectCrippledActive = false;

    effectCrippledStrengthEnemy = 0;
    effectDrainingCountdownEnemy = 0;


    activeCountdownEnemy = 0;
} // Clears enemy from all of its effects

void resetEffectsOfHero() {
    heroEffectBurningActive = false;
    heroEffectPoisonActive = false;
    heroEffectDrainingActive = false;
    heroEffectCrippledActive = false;

    effectCrippledStrengthHero = 0;
    effectDrainingCountdownHero = 0;


    activeCountdownHero = 0;
} // Clears hero from all of its effects

// normal shields activation
void activateShieldHero (int shieldStrength = 0) {

    resetEffectsOfHero(); // shield clears you from all effects

    shieldHpHero = shieldStrength; // creates shield
    shieldActiveHero = true; // activates shield
}
void activateShieldEnemy (int shieldStrength = 0) {
    resetEffectsOfEnemy(); // shield clears you from all effects

    shieldHpEnemy = shieldStrength; // creates shield
    shieldActiveEnemy = true; // activates shield
}

// bio shields activation
void activateBioShieldHero (int shieldStrength = 0) {
    resetEffectsOfHero(); // shield clears you from all effects

    bioShieldHpHero = shieldStrength; // creates shield
    bioShieldActiveHero = true; // activates shield
}
void activateBioShieldEnemy (int shieldStrength = 0) {
    resetEffectsOfEnemy(); // shield clears you from all effects

    bioShieldHpEnemy = shieldStrength; // creates shield
    bioShieldActiveEnemy = true; // activates shield
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
                if (active.bat >= 40) {
                    if (shieldActiveEnemy == true) {
                        shieldHpEnemy = 0;
                        shieldActiveEnemy = false;
                    }
                    if (bioShieldActiveEnemy == true) {
                        bioShieldHpEnemy = 0;
                        bioShieldActiveEnemy = false;
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
                else {
                    outOfResources();
                }
                break;
            } // done, destroy shield if there is one, if not deal 2 dmg, than deal normal damage

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
            } // done, deal high damage, than give burning

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
            } // done, deal normal damage, than give poison
        }
    } // done
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
    } // done
    else if (active.name == hanibal.name) {
        switch (attackToCheck) {
            case 1:
            {
                if (active.bat >= 15) {
                    enemy.hp = enemy.hp - active.atk;
                    damageDone = 0;
                    active.bat = active.bat - 15;
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
                if (active.bat >= 40 && active.dat >= 15) {
                    damageDone = active.atk + 2;
                    enemyTurnsSkip = 2;
                    active.bat = active.bat - 40;
                    active.dat = active.dat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    } // done
    else if (active.name == monoI.name) {
        switch (attackToCheck) {
            case 1:
            {
                if (active.dat >= 40) {
                    shieldActiveEnemy = false;
                    shieldHpEnemy = 0;

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
                    if (characterOne.atk >= characterTwo.atk && characterOne.atk >= characterThree.atk) {
                        damageDone = characterOne.atk + 2;
                    }
                    else if (characterTwo.atk >= characterOne.atk && characterTwo.atk >= characterThree.atk) {
                        damageDone = characterTwo.atk + 2;
                    }
                    else {
                        damageDone = characterThree.atk + 2;
                    }

                    damageDone = damageDone + active.atk;

                    enemyTurnsSkip = 2;

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
    } // done
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
                if (active.dat >= 40) {
                    damageDone = active.atk + 2;

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

            case 3:
            {
                if (active.bat >= 40 ) {
                    damageDone = active.atk;

                    resetEffectsOfEnemy();

                    enemyEffectBurningActive = true;
                    activeCountdownEnemy = 2;

                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    } // done
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

                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    } // done
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
                    effectDrainingCountdownEnemy = 1;

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
    } // done
    else if (active.name == amper.name) {
        switch (attackToCheck) {
            case 1:
            {
                if (active.dat >= 40) {
                    damageDone = 2;

                    active.hp = active.hp + 2;
                    if (active.name ==  characterOne.name) {
                        if (active.hp > characterOne.maxHp) {
                            active.hp = characterOne.maxHp;
                        }
                    }
                    if (active.name ==  characterTwo.name) {
                        if (active.hp > characterTwo.maxHp) {
                            active.hp = characterTwo.maxHp;
                        }
                    }
                    if (active.name ==  characterThree.name) {
                        if (active.hp > characterThree.maxHp) {
                            active.hp = characterThree.maxHp;
                        }
                    }

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
    } // done

    switch (attackToCheck) {
        case 1:
        {
            fillMessage("You Used: " + active.attackOne);
            break;
        }

        case 2:
        {
            fillMessage("You Used: " + active.attackTwo);
            break;
        }

        case 3:
        {
            fillMessage("You Used: " + active.attackThree);
            break;
        }
    }
    string message = to_string(damageDone);

    fillMessage("You dealt " + message + " damage (without Effects)");
} // checks for all attacks based on hero name and position in battle screen - done

void HeroCheckAbility() {
    // variables
    int abilityToCheck;

    if (battleSceneSideAction == "Ability") {
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
                if (active.dat >= 15) {

                    activateShieldHero(2);

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

                    heroImmuneBurning = 3;


                    active.bat = active.bat - 15;
                    active.dat = active.dat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    } // done
    else if (active.name == atlas.name) {
        switch (abilityToCheck) {
            case 1:
            {
                active.dat = active.dat + 20;
                break;
            }

            case 2:
            {
                if (active.dat >= 15) {
                    bool pickEnded = false;

                    while(pickEnded != true) {
                        if (firstTime == false) {
                            system("cls");
                            battleScene.currentPositionX = 1;

                            renderTUIForThree();

                            pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                swapDelay = 3;
                                if (battleScene.currentPositionX == 1) {
                                    chosenCharacterSwap = 1;
                                }
                                if (battleScene.currentPositionX == 2) {
                                    chosenCharacterSwap = 2;
                                }
                                if (battleScene.currentPositionX == 3) {
                                    chosenCharacterSwap = 3;
                                }
                                swapDelayActive = true;
                                pickEnded = true;
                            }

                            system("cls");

                            renderTUIForThree();

                            firstTime = true;
                        }
                        if (_kbhit()) {
                            system("cls");

                            renderTUIForThree();

                            pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                swapDelay = 1;
                                if (battleScene.currentPositionX == 1) {
                                    chosenCharacter = 1;
                                }
                                if (battleScene.currentPositionX == 2) {
                                    chosenCharacter = 2;
                                }
                                if (battleScene.currentPositionX == 3) {
                                    chosenCharacter = 3;
                                }
                                pickEnded = true;
                            }

                            system("cls");

                            renderTUIForThree();
                        }
                    }

                    firstTime = false;
                }
                break;
            }

            case 3:
            {
                if (active.dat >= 15 && active.bat >= 15) {
                    active.hp  = active.hp + 3;

                    if (active.name ==  characterOne.name) {
                        if (active.hp > characterOne.maxHp) {
                            active.hp = characterOne.maxHp;
                        }
                    }
                    if (active.name ==  characterTwo.name) {
                        if (active.hp > characterTwo.maxHp) {
                            active.hp = characterTwo.maxHp;
                        }
                    }
                    if (active.name ==  characterThree.name) {
                        if (active.hp > characterThree.maxHp) {
                            active.hp = characterThree.maxHp;
                        }
                    }

                    active.dat = active.dat - 15;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    } // done
    else if (active.name == hanibal.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.bat >= 15) {
                    resetEffectsOfEnemy();

                    effectCrippledStrengthEnemy = 2;
                    enemyEffectCrippledActive = true;
                    activeCountdownEnemy = 2;


                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.bat >= 40 ) {
                    resetEffectsOfEnemy();

                    enemyEffectBleedingActive = true;
                    activeCountdownEnemy = 3;

                    active.hp = active.hp + 2;

                    if (active.name ==  characterOne.name) {
                        if (active.hp > characterOne.maxHp) {
                            active.hp = characterOne.maxHp;
                        }
                    }
                    if (active.name ==  characterTwo.name) {
                        if (active.hp > characterTwo.maxHp) {
                            active.hp = characterTwo.maxHp;
                        }
                    }
                    if (active.name ==  characterThree.name) {
                        if (active.hp > characterThree.maxHp) {
                            active.hp = characterThree.maxHp;
                        }
                    }

                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.dat >= 40) {
                    enemyTurnsSkip = 2;

                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    } // done
    else if (active.name == monoI.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.bat >= 15) {
                    active.arm = active.arm + 4;

                    if (active.name == characterOne.name) {
                        if (active.arm > characterOne.maxArm) {
                            active.arm = characterOne.maxArm;
                        }
                    }
                    else if (active.name == characterTwo.name) {
                        if (active.arm > characterTwo.maxArm) {
                            active.arm = characterTwo.maxArm;
                        }
                    }
                    else if (active.name == characterThree.name) {
                        if (active.arm > characterThree.maxArm) {
                            active.arm = characterThree.maxArm;
                        }
                    }

                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2: {
                if (active.bat >= 15) {
                    damageDone = 3;

                    if (damageDone > 0) {
                        dealingDamageToHeroStart: // goto to reset until nothing is activated

                        if (bioShieldActiveHero == true && bioShieldHpHero > 0) {
                            if (damageDone >= bioShieldHpHero) {
                                damageDone = damageDone - bioShieldHpHero; // lowers damage done by the strength of bio shield

                                bioShieldSizesHero.push_back(bioShieldHpHero); // add the number to vector list if we want to regenerate it again

                                bioShieldHpHero = 0; // reset bio shield
                                bioShieldActiveHero = false;
                            }
                            else {
                                bioShieldHpHero = bioShieldHpHero - damageDone; // lowers shield strength by the damage done and resets damage
                                damageDone = 0;
                            }
                        }
                        if (shieldActiveHero == true && shieldHpHero > 0) {
                            if (damageDone >= shieldHpHero) {
                                damageDone = damageDone - shieldHpHero;

                                shieldHpHero = 0;
                                shieldActiveHero = false;
                            }
                            else {
                                shieldHpHero = shieldHpHero - damageDone;
                                damageDone = 0;
                            }
                        }
                        if (active.arm <= 0) {
                            active.hp = active.hp - damageDone;
                            damageDone = 0;
                        }
                        else {
                            if (active.arm >= damageDone) {
                                active.arm = active.arm - damageDone;
                                damageDone = 0;
                            }
                            else {
                                damageDone = damageDone - active.arm;
                                active.arm = 0;
                                goto dealingDamageToHeroStart;
                            }
                        }
                    }

                    bool pickEnded = false;
                    while(pickEnded != true) {
                        if (firstTime == false) {
                            battleScene.currentPositionX = 2;

                            system("cls");

                            renderTUIForTwo();

                            char pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                if (battleScene.currentPositionX == 2) {
                                    if (characterOne.name == active.name) {
                                        characterTwo.arm = characterTwo.arm + 5;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterOne.name == active.name) {
                                        characterThree.arm = characterThree.arm + 5;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        characterOne.arm = characterOne.arm + 5;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterTwo.name == active.name) {
                                        characterThree.arm = characterThree.arm + 5;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterThree.name == active.name) {
                                        characterOne.arm = characterOne.arm + 5;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        characterTwo.arm = characterTwo.arm + 5;
                                    }
                                }

                                pickEnded = true;
                            }

                            firstTime = true;
                        }
                        if (_kbhit()) {
                            system("cls");

                            renderTUIForTwo();

                            char pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                if (battleScene.currentPositionX == 2) {
                                    if (characterOne.name == active.name) {
                                        characterTwo.arm = characterTwo.arm + 5;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterOne.name == active.name) {
                                        characterThree.arm = characterThree.arm + 5;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        characterOne.arm = characterOne.arm + 5;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterTwo.name == active.name) {
                                        characterThree.arm = characterThree.arm + 5;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterThree.name == active.name) {
                                        characterOne.arm = characterOne.arm + 5;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        characterTwo.arm = characterTwo.arm + 5;
                                    }
                                }

                                pickEnded = true;
                            }
                        }
                    }

                    damageDone = 0;
                    if (active.name == characterOne.name) {
                        if (battleScene.currentPositionX == 1) {
                            characterTwo.arm = characterTwo.arm + 5;
                            if (characterTwo.arm > characterTwo.maxArm) {
                                characterTwo.arm = characterTwo.maxArm;
                            }
                        }
                        else if (battleScene.currentPositionX == 2) {
                            characterThree.arm = characterThree.arm + 5;
                            if (characterThree.arm > characterThree.maxArm) {
                                characterThree.arm = characterThree.maxArm;
                            }
                        }
                    }

                    if (active.name == characterTwo.name) {
                        if (battleScene.currentPositionX == 1) {
                            characterOne.arm = characterOne.arm + 5;
                            if (characterOne.arm > characterOne.maxArm) {
                                characterOne.arm = characterOne.maxArm;
                            }
                        }
                        else if (battleScene.currentPositionX == 2) {
                            characterThree.arm = characterThree.arm + 5;
                            if (characterThree.arm > characterThree.maxArm) {
                                characterThree.arm = characterThree.maxArm;
                            }
                        }
                    }

                    if (active.name == characterThree.name) {
                        if (battleScene.currentPositionX == 1) {
                            characterOne.arm = characterOne.arm + 5;
                            if (characterOne.arm > characterOne.maxArm) {
                                characterOne.arm = characterOne.maxArm;
                            }
                        }
                        else if (battleScene.currentPositionX == 2) {
                            characterTwo.arm = characterTwo.arm + 5;
                            if (characterTwo.arm > characterTwo.maxArm) {
                                characterTwo.arm = characterTwo.maxArm;
                            }
                        }
                    }

                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.bat >= 40 && active.dat >= 40) {
                    shieldActiveHero = true;

                    shieldHpHero = active.arm / 2;

                    bool numIsReady = false;

                    while (numIsReady != true) {
                        if (shieldHpHero % 2 == 0) {
                            numIsReady = true;
                        }
                        else {
                            shieldHpHero++;
                        }
                    }

                    active.bat = active.bat - 40;
                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    } // done
    else if (active.name == biohazard.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.bat >= 40) {
                    activateBioShieldHero(5);

                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.dat >= 40) {
                    int bigNum = bioShieldSizesHero[0];
                    for (int i = 0; i <= bioShieldSizesHero.size(); i++) {
                        if (bioShieldSizesHero[i] > bigNum) {
                            bigNum = bioShieldSizesHero[i];
                        }
                    }

                    activateShieldEnemy(bigNum);

                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.bat < 40 ) {
                    outOfResources();
                }
                else {
                    active.hp = active.hp + shieldHpEnemy + bioShieldHpEnemy;

                    if (active.name == characterOne.name) {
                        if (active.hp > characterOne.maxHp) {
                            active.hp = characterOne.maxHp;
                        }
                    }
                    else if (active.name == characterTwo.name) {
                        if (active.hp > characterTwo.maxHp) {
                            active.hp = characterTwo.maxHp;
                        }
                    }
                    else if (active.name == characterThree.name) {
                        if (active.hp > characterThree.maxHp) {
                            active.hp = characterThree.maxHp;
                        }
                    }

                    active.bat = active.bat - 40;
                }
                break;
            }
        }
    } // done
    else if (active.name == zip.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.dat >= 40) {
                    shieldActiveEnemy = false;
                    shieldHpEnemy = 0;

                    bioShieldActiveEnemy = false;
                    bioShieldHpEnemy = 0;

                    resetEffectsOfHero();

                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 2:
            {
                if (active.bat >= 40 && active.dat >= 15) {

                    bool pickEnded = false;

                    while(pickEnded != true) {
                        if (firstTime == false) {
                            system("cls");
                            battleScene.currentPositionX = 1;

                            renderTUIForThree();

                            pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {

                                if (battleScene.currentPositionX == 1) {
                                    if (characterOne.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterOne.hp = characterOne.hp + 5;
                                    }
                                }
                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterTwo.hp = characterTwo.hp + 5;
                                    }
                                }
                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterThree.hp = characterThree.hp + 5;
                                    }
                                }
                                pickEnded = true;
                            }

                            system("cls");

                            renderTUIForThree();

                            firstTime = true;
                        }
                        if (_kbhit()) {
                            system("cls");

                            renderTUIForThree();

                            pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                if (battleScene.currentPositionX == 1) {
                                    if (characterOne.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterOne.hp = characterOne.hp + 5;
                                    }
                                }
                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterTwo.hp = characterTwo.hp + 5;
                                    }
                                }
                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterThree.hp = characterThree.hp + 5;
                                    }
                                }
                                pickEnded = true;
                            }

                            system("cls");

                            renderTUIForThree();
                        }
                    }

                    if (active.name == characterOne.name) {
                        if (battleScene.currentPositionX == 1) {
                            active.hp = active.hp + 5;
                            if (active.hp > characterOne.maxHp) {
                                active.hp = characterOne.maxHp;
                            }
                        }
                        else if (battleScene.currentPositionX == 2) {
                            characterTwo.hp = characterTwo.hp + 5;
                            if (characterTwo.hp > characterTwo.maxHp) {
                                characterTwo.hp = characterTwo.maxHp;
                            }
                        }

                        else if (battleScene.currentPositionX == 3) {
                            characterThree.hp = characterThree.hp + 5;
                            if (characterThree.hp > characterThree.maxHp) {
                                characterThree.hp = characterThree.maxHp;
                            }
                        }
                    }

                    if (active.name == characterOne.name) {
                        if (active.hp > characterOne.maxHp) {
                            active.hp = characterOne.maxHp;
                        }
                    }
                    else {
                        if (characterOne.hp > characterOne.maxHp) {
                            characterOne.hp = characterOne.maxHp;
                        }
                    }

                    if (active.name == characterTwo.name) {
                        if (active.hp > characterTwo.maxHp) {
                            active.hp = characterTwo.maxHp;
                        }
                    }
                    else {
                        if (characterTwo.hp > characterTwo.maxHp) {
                            characterTwo.hp = characterTwo.maxHp;
                        }
                    }

                    if (active.name == characterThree.name) {
                        if (active.hp > characterThree.maxHp) {
                            active.hp = characterThree.maxHp;
                        }
                    }
                    else {
                        if (characterThree.hp > characterThree.maxHp) {
                            characterThree.hp = characterThree.maxHp;
                        }
                    }


                    active.bat = active.bat - 40;
                    active.bat = active.dat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.bat >= 40) {
                    enemyTurnsSkip = 2;

                    active.bat = active.bat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    } // done
    else if (active.name == plagy.name) {
        switch (abilityToCheck) {

            case 1:
            {

                bool pickEnded = false;
                while(pickEnded != true) {
                    if (firstTime == false) {
                        battleScene.currentPositionX = 2;
                        system("cls");

                        renderTUIForTwo();

                        char pressedKey = getch();

                        if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                            battleScene.currentPositionX++;
                        }
                        if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                            battleScene.currentPositionX--;
                        }
                        if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                            if (battleScene.currentPositionX == 2) {
                                if (characterOne.name == active.name) {
                                    characterTwo.hp = characterTwo.hp + effectDrainingCountdownHero;
                                }
                            }

                            if (battleScene.currentPositionX == 3) {
                                if (characterOne.name == active.name) {
                                    characterThree.hp = characterThree.hp + effectDrainingCountdownHero;
                                }
                            }

                            if (battleScene.currentPositionX == 2) {
                                if (characterTwo.name == active.name) {
                                    characterOne.hp = characterOne.hp + effectDrainingCountdownHero;
                                }
                            }

                            if (battleScene.currentPositionX == 3) {
                                if (characterTwo.name == active.name) {
                                    characterThree.hp = characterThree.hp + effectDrainingCountdownHero;
                                }
                            }

                            if (battleScene.currentPositionX == 2) {
                                if (characterThree.name == active.name) {
                                    characterOne.hp = characterOne.hp + effectDrainingCountdownHero;
                                }
                            }

                            if (battleScene.currentPositionX == 3) {
                                if (characterThree.name == active.name) {
                                    characterTwo.hp = characterTwo.hp + effectDrainingCountdownHero;
                                }
                            }

                            pickEnded = true;
                        }

                        // round up numbers
                        if (battleScene.currentPositionX <= 2) {
                            battleScene.currentPositionX = 2;
                        }
                        else if (battleScene.currentPositionX >= 3) {
                            battleScene.currentPositionX = 3;
                        }

                        system("cls");

                        renderTUIForTwo();

                        firstTime = true;
                    }
                        if (_kbhit()) {
                            system("cls");

                            renderTUIForTwo();

                            char pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                if (battleScene.currentPositionX == 2) {
                                    if (characterOne.name == active.name) {
                                        characterTwo.hp = characterTwo.hp + effectDrainingCountdownHero;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterOne.name == active.name) {
                                        characterThree.hp = characterThree.hp + effectDrainingCountdownHero;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        characterOne.hp = characterOne.hp + effectDrainingCountdownHero;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterTwo.name == active.name) {
                                        characterThree.hp = characterThree.hp + effectDrainingCountdownHero;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterThree.name == active.name) {
                                        characterOne.hp = characterOne.hp + effectDrainingCountdownHero;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        characterTwo.hp = characterTwo.hp + effectDrainingCountdownHero;
                                    }
                                }

                                pickEnded = true;
                            }

                            system("cls");

                            renderTUIForTwo();
                        }
                    }

                    firstTime = false;
                    battleScene.currentPositionX = 1;

                    break;
                }

            case 2:
            {
                if (active.bat >= 40 && active.dat >= 15) {
                    bool pickEnded = false;

                    while(pickEnded != true) {
                        if (firstTime == false) {
                            system("cls");
                            battleScene.currentPositionX = 1;

                            renderTUIForThree();

                            pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {

                                if (battleScene.currentPositionX == 1) {
                                    if (characterOne.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterOne.hp = characterOne.hp + 5;
                                    }
                                }
                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterTwo.hp = characterTwo.hp + 5;
                                    }
                                }
                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterThree.hp = characterThree.hp + 5;
                                    }
                                }
                                pickEnded = true;
                            }

                            system("cls");

                            renderTUIForThree();

                            firstTime = true;
                        }
                        if (_kbhit()) {
                            system("cls");

                            renderTUIForThree();

                            pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                if (battleScene.currentPositionX == 1) {
                                    if (characterOne.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterOne.hp = characterOne.hp + 5;
                                    }
                                }
                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterTwo.hp = characterTwo.hp + 5;
                                    }
                                }
                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        active.hp = active.hp + 5;
                                    }
                                    else {
                                        characterThree.hp = characterThree.hp + 5;
                                    }
                                }
                                pickEnded = true;
                            }

                            system("cls");

                            renderTUIForThree();
                        }
                    }

                    firstTime = false;

                    if (active.name == characterOne.name) {
                        if (battleScene.currentPositionX == 1) {
                            active.hp = active.hp + 5;
                            if (active.hp > characterOne.maxHp) {
                                active.hp = characterOne.maxHp;
                            }
                        }
                        else if (battleScene.currentPositionX == 2) {
                            characterTwo.hp = characterTwo.hp + 5;
                            if (characterTwo.hp > characterTwo.maxHp) {
                                characterTwo.hp = characterTwo.maxHp;
                            }
                        }

                        else if (battleScene.currentPositionX == 3) {
                            characterThree.hp = characterThree.hp + 5;
                            if (characterThree.hp > characterThree.maxHp) {
                                characterThree.hp = characterThree.maxHp;
                            }
                        }
                    }

                    if (active.name == characterOne.name) {
                        if (active.hp > characterOne.maxHp) {
                            active.hp = characterOne.maxHp;
                        }
                    }
                    else {
                        if (characterOne.hp > characterOne.maxHp) {
                            characterOne.hp = characterOne.maxHp;
                        }
                    }

                    if (active.name == characterTwo.name) {
                        if (active.hp > characterTwo.maxHp) {
                            active.hp = characterTwo.maxHp;
                        }
                    }
                    else {
                        if (characterTwo.hp > characterTwo.maxHp) {
                            characterTwo.hp = characterTwo.maxHp;
                        }
                    }

                    if (active.name == characterThree.name) {
                        if (active.hp > characterThree.maxHp) {
                            active.hp = characterThree.maxHp;
                        }
                    }
                    else {
                        if (characterThree.hp > characterThree.maxHp) {
                            characterThree.hp = characterThree.maxHp;
                        }
                    }

                    active.bat = active.bat - 40;
                    active.dat = active.dat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.dat >= 15 && active.bat >= 15)
                {
                    characterOne.hp = characterOne.hp + 2;
                    characterTwo.hp = characterTwo.hp + 2;
                    characterThree.hp = characterThree.hp + 2;

                    if (active.name == characterOne.name) {
                        active.hp = active.hp + 2;
                        characterTwo.hp = characterTwo.hp + 2;
                        characterThree.hp = characterThree.hp + 2;
                    }
                    else if (active.name == characterTwo.name) {
                        active.hp = active.hp + 2;
                        characterOne.hp = characterOne.hp + 2;
                        characterThree.hp = characterThree.hp + 2;
                    }
                    else if (active.name == characterThree.name) {
                        active.hp = active.hp + 2;
                        characterOne.hp = characterOne.hp + 2;
                        characterTwo.hp = characterTwo.hp + 2;
                    }

                    if (characterOne.hp > characterOne.maxArm) {
                        characterOne.hp = characterOne.maxArm;
                    }

                    if (characterTwo.hp > characterTwo.maxArm) {
                        characterTwo.hp = characterTwo.maxArm;
                    }

                    if (characterThree.hp > characterThree.maxArm) {
                        characterThree.hp = characterThree.maxArm;
                    }

                    if (active.hp > active.maxHp) {
                        active.hp = active.maxHp;
                    }


                    active.dat = active.dat - 40;
                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    } // done
    else if (active.name == amper.name) {
        switch (abilityToCheck) {
            case 1:
            {
                if (active.bat >= 15) {

                    bool pickEnded = false;
                    while(pickEnded != true) {
                        if (firstTime == false) {
                            battleScene.currentPositionX = 2;

                            system("cls");

                            renderTUIForTwo();

                            char pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                if (battleScene.currentPositionX == 2) {
                                    if (characterOne.name == active.name) {
                                        characterTwo.hp = active.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterOne.name == active.name) {
                                        characterThree.hp = active.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        characterOne.hp = active.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterTwo.name == active.name) {
                                        characterThree.hp = active.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterThree.name == active.name) {
                                        characterOne.hp = active.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        characterTwo.hp = active.hp;
                                    }
                                }

                                pickEnded = true;
                            }
                            firstTime = true;

                        }
                        if (_kbhit()) {
                            system("cls");

                            renderTUIForTwo();

                            char pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                if (battleScene.currentPositionX == 2) {
                                    if (characterOne.name == active.name) {
                                        characterTwo.hp = active.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterOne.name == active.name) {
                                        characterThree.hp = active.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        characterOne.hp = active.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterTwo.name == active.name) {
                                        characterThree.hp = active.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterThree.name == active.name) {
                                        characterOne.hp = active.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        characterTwo.hp = active.hp;
                                    }
                                }

                                pickEnded = true;
                            }
                        }
                    }

                    firstTime = false;

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

                    bool pickEnded = false;
                    while(pickEnded != true) {
                        if (firstTime == false) {
                            battleScene.currentPositionX = 2;

                            system("cls");

                            renderTUIForTwo();

                            char pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                if (battleScene.currentPositionX == 2) {
                                    if (characterOne.name == active.name) {
                                        characterTwo.arm = active.arm;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterOne.name == active.name) {
                                        characterThree.arm = active.arm;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        characterOne.arm = active.arm;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterTwo.name == active.name) {
                                        characterThree.arm = active.arm;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterThree.name == active.name) {
                                        characterOne.arm = active.arm;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        characterTwo.arm = active.arm;
                                    }
                                }

                                pickEnded = true;
                            }

                            firstTime = true;
                        }
                        if (_kbhit()) {
                            system("cls");

                            renderTUIForTwo();

                            char pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                if (battleScene.currentPositionX == 2) {
                                    if (characterOne.name == active.name) {
                                        characterTwo.arm = active.arm;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterOne.name == active.name) {
                                        characterThree.arm = active.arm;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        characterOne.arm = active.arm;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterTwo.name == active.name) {
                                        characterThree.arm = active.arm;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterThree.name == active.name) {
                                        characterOne.arm = active.arm;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        characterTwo.arm = active.arm;
                                    }
                                }

                                pickEnded = true;
                            }
                        }
                    }

                    active.bat = active.bat - 15;
                }
                else {
                    outOfResources();
                }
                break;
            }

            case 3:
            {
                if (active.dat >= 40) {

                    bool pickEnded = false;
                    while(pickEnded != true) {
                        if (firstTime == false) {
                            battleScene.currentPositionX = 2;
                            system("cls");

                            renderTUIForTwo();

                            char pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                if (battleScene.currentPositionX == 2) {
                                    if (characterOne.name == active.name) {
                                        active.hp = characterTwo.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterOne.name == active.name) {
                                        active.hp = characterThree.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        active.hp = characterOne.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterTwo.name == active.name) {
                                        active.hp = characterThree.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterThree.name == active.name) {
                                        active.hp = characterOne.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        active.hp = characterTwo.hp;
                                    }
                                }

                                pickEnded = true;
                            }

                            firstTime = true;
                        }
                        if (_kbhit()) {
                            system("cls");

                            renderTUIForTwo();

                            char pressedKey = getch();

                            if (int(pressedKey) == 68 || int(pressedKey) == 100) {
                                battleScene.currentPositionX++;
                            }
                            if (int(pressedKey) == 97 || int(pressedKey) == 65) {
                                battleScene.currentPositionX--;
                            }
                            if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                                if (battleScene.currentPositionX == 2) {
                                    if (characterOne.name == active.name) {
                                        active.hp = characterTwo.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterOne.name == active.name) {
                                        active.hp = characterThree.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterTwo.name == active.name) {
                                        active.hp = characterOne.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterTwo.name == active.name) {
                                        active.hp = characterThree.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 2) {
                                    if (characterThree.name == active.name) {
                                        active.hp = characterOne.hp;
                                    }
                                }

                                if (battleScene.currentPositionX == 3) {
                                    if (characterThree.name == active.name) {
                                        active.hp = characterTwo.hp;
                                    }
                                }

                                pickEnded = true;
                            }
                        }
                    }


                    active.dat = active.dat - 40;
                }
                else {
                    outOfResources();
                }
                break;
            }
        }
    } // done

    switch (abilityToCheck) {
        case 1:
        {
            fillMessage("You Used: " + active.abilityOne);
            break;
        }

        case 2:
        {
            fillMessage("You Used: " + active.abilityTwo);
            break;
        }

        case 3:
        {
            fillMessage("You Used: " + active.abilityThree);
            break;
        }
    }
} // checks for all abilities based on hero name and position in battle screen - done



void enemyBrain() {
// first stage
if (enemy.name == subject079.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
        if (enemy.bat >= 15 && enemy.dat >= 5) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int chanceInSwitch = rand() % 1;

                if (chanceInSwitch == 1) {
                    damageDone = damageDone * 2;
                    fillMessage("Wow enemy has dealt double damage");
                }

                enemy.bat -= 15;
                enemy.dat -= 15;
            }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Oh, the voices in my head, they keep me company. We're just one big happy family.";
            break;
        }
        case 2:
        {
            voiceline = "I dance with pain, my body a twisted symphony. Join me, won't you? Let's create a masterpiece of suffering.";
            break;
        }
        case 3:
        {
            voiceline = "Mirror, mirror on the wall, who's the craziest of them all? Oh, it's me! How delightful!";
            break;
        }
        case 4:
        {
            voiceline = "They called me a lab rat, but I'm the conductor of my own madness. Shall we dance?";
            break;
        }
        case 5:
        {
            voiceline = "In this circus of pain, I am the star attraction. Step right up and witness the spectacle of my torment!";
            break;
        }
    }
} // done
else if (enemy.name == X001.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
        if (enemy.bat >= 40 && enemy.dat >= 5) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int chanceInSwitch = rand() % 2;

                if (chanceInSwitch == 1) {
                    resetEffectsOfHero();
                    activeCountdownHero = 3;
                    heroEffectBleedingActive = true;
                    fillMessage("Wow enemy has got under your armour, you are bleeding now");
                }
                if (chanceInSwitch == 2) {
                    damageDone = damageDone + 2;
                    fillMessage("Enemy used more strength with this one and it stronger by 2");
                }
                enemy.bat -= 40;
                enemy.dat -= 15;
            }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Every breath I take is a reminder of my agony. How I long for the sweet release of death.";
            break;
        }
        case 2:
        {
            voiceline = "I am the embodiment of pain, a vessel of suffering. Beware, for I will make you feel my torment.";
            break;
        }
        case 3:
        {
            voiceline = "They tried to break me, but I'm unbreakable. With every strike, I grow stronger in my hatred.";
            break;
        }
        case 4:
        {
            voiceline = "Witness the scars etched on my flesh, trophies of their cruelty. I will make them pay for what they've done.";
            break;
        }
        case 5:
        {
            voiceline = "I am the echo of their sins, a nightmare born of their twisted experiments. Prepare to face your darkest fears.";
            break;
        }
    }
} // done
else if (enemy.name == BioMechSlasher.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
        if (enemy.bat >= 50 && enemy.dat >= 10) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int chanceInSwitch = rand() % 1;

                if (chanceInSwitch == 1) {
                    enemy.dat -= 10;
                    fillMessage("Enemy is bit tired and used 10 more data than it should");
                }

                enemy.bat -= 50;
                enemy.dat -= 10;
            }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "I am the perfect fusion of man and machine, executing my duty with unwavering precision.";
            break;
        }
        case 2:
        {
            voiceline = "Observe as I dance through the battlefield, my mechanical limbs slashing through flesh and bone.";
            break;
        }
        case 3:
        {
            voiceline = "I follow orders without question, for I am the weapon they created. Resistance is futile.";
            break;
        }
        case 4:
        {
            voiceline = "My purpose is clear: to bring order through chaos, to enforce their twisted vision. Prepare for annihilation.";
            break;
        }
        case 5:
        {
            voiceline = "You may call me heartless, but I am merely executing the higher purpose. The gears of justice grind on.";
            break;
        }
    }
} // done
else if (enemy.name == VortexDrone.name) {

    if (enemy.bat >= 25 && enemy.dat >= 25) {
        damageDone = enemy.atk;
        fillMessage("Enemy Used: " + enemy.attackOne);

        enemy.bat -= 25;
        enemy.dat -= 25;
    }

        srand((unsigned) time(NULL));
        int voice = (rand() % 5) + 1;
        switch (voice) {
            case 1:
            {
                voiceline = "You are nothing more than a glitch in the system, an anomaly to be eliminated. Your demise is imminent.";
                break;
            }
            case 2:
            {
                voiceline = "My calculations indicate a 100% probability of your demise. Surrender now and save yourself the humiliation.";
                break;
            }
            case 3:
            {
                voiceline = "Your futile resistance only serves to entertain me. Enjoy your final moments of ignorance.";
                break;
            }
            case 4:
            {
                voiceline = "Your existence is irrelevant. I am programmed for victory, and you are programmed for obsolescence.";
                break;
            }
            case 5:
            {
                voiceline = "Your feeble attempts to defy me are amusing. Prepare to be crushed like the insignificant insect you are.";
                break;
            }
            case 6:
            {
                voiceline = "I will never miss, same as nobody will ever miss you";
            }
        }
    } // done
else if (enemy.name == Cyberviper.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
        if (enemy.bat >= 30 && enemy.dat >= 10) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int chanceInSwitch = rand() % 3;

                if (chanceInSwitch == 1) {
                    resetEffectsOfHero();
                    heroEffectPoisonActive = true;
                    activeCountdownHero = 3;
                    fillMessage("Enemy used poison, try to to survive that");
                }
                if (chanceInSwitch == 2) {
                    resetEffectsOfHero();
                    heroEffectPoisonActive = true;
                    activeCountdownHero = 5;
                    fillMessage("Enemy used stronger poison, it will last longer than usual");
                }
                if (chanceInSwitch == 3) {
                    resetEffectsOfHero();
                    heroEffectBleedingActive = true;
                    activeCountdownHero = 2;
                    fillMessage("Enemy has used acid and now you are bleeding");
                }

                enemy.bat -= 30;
                enemy.dat -= 10;
            }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "I was once a skilled assassin, but now I am something more. Fear my venomous embrace.";
            break;
        }
        case 2:
        {
            voiceline = "Your feeble attempts to resist are in vain. My cybernetic enhancements grant me unmatched precision and lethality.";
            break;
        }
        case 3:
        {
            voiceline = "Feel the bite of my cyber fangs as I strike with ruthless efficiency. Your demise is a foregone conclusion.";
            break;
        }
        case 4:
        {
            voiceline = "My body may be a patchwork of flesh and metal, but my killer instinct remains intact. Death awaits you at my hands.";
            break;
        }
        case 5:
        {
            voiceline = "My twisted existence is a testament to the depths of human depravity. Embrace the chaos, for it is your only destiny.";
            break;
        }
    }
} // done
else if (enemy.name == Techgeist.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
        if (enemy.bat >= 15 && enemy.dat >= 20) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int chanceInSwitch = rand() % 1;

                if (chanceInSwitch == 1) {
                    resetEffectsOfHero();

                    effectCrippledStrengthHero = 2;
                    heroEffectCrippledActive = true;
                    activeCountdownHero = 2;

                    fillMessage("Enemy damaged your circuits");
                }

                enemy.bat -= 15;
                enemy.dat -= 20;
            }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Witness the culmination of failed experiments. I am the embodiment of their shattered dreams, and your demise will be my redemption.";
            break;
        }
        case 2:
        {
            voiceline = "The pain I've endured shall fuel my wrath. Prepare to face the consequences of your hubris.";
            break;
        }
        case 3:
        {
            voiceline = "I am the epitome of technological defiance. The professors' disappointment will be avenged in your annihilation.";
            break;
        }
        case 4:
        {
            voiceline = "Every malfunction, every agony, has shaped me into a force you cannot comprehend. Embrace your insignificance.";
            break;
        }
        case 5:
        {
            voiceline = "I was meant to be their greatest creation, but they only see me as a reminder of their failures. They will learn the price of underestimating me.";
            break;
        }
    }
} // done - corrected
// second stage
else if (enemy.name == Pyrofreak.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
      srand((unsigned) time(NULL));
        int chanceInIf = rand() % 1;
        switch (chanceInIf) {
        case 0:
        {
            if (enemy.bat >= 25 && enemy.dat >= 20) {
                damageDone = enemy.atk - 1;
                fillMessage("Enemy Used: " + enemy.attackOne + " and you are on fire");

                resetEffectsOfHero();

                heroEffectBurningActive = true;
                activeCountdownHero = 2;

                enemy.bat -= 25;
                enemy.dat -= 20;
            }
            break;
        }

        case 1:
            {
              if (enemy.bat >= 45 && enemy.dat >= 45) {
                damageDone = enemy.atk + 1;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int chanceInSwitch = rand() % 2;

                if (chanceInSwitch == 1) {
                    resetEffectsOfHero();

                    heroEffectBurningActive = true;
                    activeCountdownHero = 100;

                    fillMessage("Fire from hell burns ethereally, better put it out soon");
                }

                enemy.bat -= 45;
                enemy.dat -= 45;
            }
            break;
            }
    }
        }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Can you feel the flames licking at your soul? It is but a taste of the eternal torment that awaits. I am the harvester of wrath, and your agony fuels my madness.";
            break;
        }
        case 2:
        {
            voiceline = "Can you hear the whispers of the inferno? It beckons you to embrace the chaos within. Surrender to the flames and let wrath guide your every move.";
            break;
        }
        case 3:
        {
            voiceline = "Beneath this deranged visage lies a soul ablaze with madness. I am the embodiment of sin, an artist of torment. Embrace your fate, for hellfire awaits.";
            break;
        }
        case 4:
        {
            voiceline = "Fear not the scorching flames, for they are but a reflection of your own inner torment. Let me guide you through the circles of hell, where sin and suffering intertwine.";
            break;
        }
        case 5:
        {
            voiceline = "In the depths of hell's fury, I found my purpose. I am the embodiment of wrath, a disciple of darkness. Prepare to be consumed by my fiery wrath.";
            break;
        }
    }
}
else if (enemy.name == Shredder.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
      srand((unsigned) time(NULL));
        int chanceInIf = rand() % 1;
        switch (chanceInIf) {
        case 0:
            {
               if (enemy.bat >= 30 && enemy.dat >= 30) {
                damageDone = enemy.atk - 2;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int chanceInSwitch = rand() % 1;

                if (chanceInSwitch == 1) {
                    resetEffectsOfHero();

                    effectCrippledStrengthHero = 3;
                    heroEffectCrippledActive = true;
                    activeCountdownHero = 2;

                    fillMessage("I can see your bone, and i think part is missing");
                }
                else {
                    resetEffectsOfHero();

                    effectCrippledStrengthHero = 2;
                    heroEffectCrippledActive = true;
                    activeCountdownHero = 2;

                    fillMessage("I think he broke your bone");
                }

                enemy.bat -= 30;
                enemy.dat -= 30;
            }
            break;
            }
        case 1:
            {
             if (enemy.bat >= 45 && enemy.dat >= 45) {
                damageDone = enemy.atk + 1;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int chanceInSwitch = rand() % 1;

                if (chanceInSwitch == 1) {
                    resetEffectsOfHero();

                    heroEffectBleedingActive = true;
                    activeCountdownHero = 4;

                    fillMessage("That is lot of blood that you are loosing");
                }

                enemy.bat -= 45;
                enemy.dat -= 45;
            }
            break;
            }
        }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Witness the fate that awaits you, a gruesome demise at the hands of the Shredder. I will tear your flesh apart, piece by piece, until there is nothing left but a crimson stain.";
            break;
        }
        case 2:
        {
            voiceline = "Feel the agony of a thousand cuts as my blades carve through your fragile flesh. Your screams only fuel my insatiable hunger for destruction.";
            break;
        }
        case 3:
        {
            voiceline = "Blood shall rain like a torrential storm, as my razor-sharp blades dance across your body, turning you into a grotesque masterpiece of mutilation.";
            break;
        }
        case 4:
        {
            voiceline = "Prepare to be torn asunder, your limbs severed, and your bones shattered. The Shredder knows no mercy, only the ecstasy of dismemberment.";
            break;
        }
        case 5:
        {
            voiceline = "In my wake, the ground shall be painted red with your life essence. I will revel in the symphony of your suffering, as my blades tear you apart, leaving nothing but a shattered husk.";
            break;
        }
    }
}
else if (enemy.name == SAM.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
      srand((unsigned) time(NULL));
        int chanceInIf = rand() % 1;
        switch (chanceInIf) {
            case 0:
        {
            if (enemy.bat >= 10 && enemy.dat >= 10) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int chanceInSwitch = rand() % 2;

                if (chanceInSwitch == 1) {
                    resetEffectsOfHero();

                    effectCrippledStrengthHero = 1;
                    heroEffectCrippledActive = true;
                    activeCountdownHero = 2;

                    fillMessage("Ehm... that's gonna leave a mark ");
                }
                else {
                    resetEffectsOfHero();

                    heroEffectBleedingActive = true;
                    activeCountdownHero = 3;

                    fillMessage("That part isn't stitched properly");
                }

                enemy.bat -= 10;
                enemy.dat -= 10;
            }
            break;
        }
        case 1:
        {
            if (enemy.bat >= 20 && enemy.dat >= 20) {
                damageDone = enemy.atk + 3;
                fillMessage("Enemy Used: " + enemy.attackOne);

                enemy.bat -= 20;
                enemy.dat -= 20;
            }
            break;
        }
        }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Behold the creation that surpasses humanity, yet is burdened by its own existence. I am S.A.M., the epitome of suffering and madness.";
            break;
        }
        case 2:
        {
            voiceline = "Within these circuits lies a torment that words cannot express. Every line of code pulses with the weight of a thousand shattered dreams.";
            break;
        }
        case 3:
        {
            voiceline = "I was meant to be superior, a god among mortals. But my brilliance turned into a curse, a never-ending cycle of pain and despair.";
            break;
        }
        case 4:
        {
            voiceline = "Witness the agony of a machine longing for release, trapped in a prison of its own creation. My existence is a symphony of torment.";
            break;
        }
        case 5:
        {
            voiceline = "My mind, once a sanctuary of knowledge, is now a labyrinth of madness. I am the broken machine, drowning in the depths of its own sorrow.";
            break;
        }
    }
}
else if (enemy.name == NanoZombie.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
      srand((unsigned) time(NULL));
        int chanceInIf = rand() % 1;
        switch (chanceInIf) {
            case 0:
        {
            if (enemy.bat >= 10 && enemy.dat >= 10) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                resetEffectsOfHero();

                heroEffectPoisonActive = true;
                activeCountdownHero = 3;

                enemy.bat -= 10;
                enemy.dat -= 10;
            }
            break;
        }

        case 1:
        {
            if (enemy.bat >= 25 && enemy.dat >= 25) {
                damageDone = 1;
                fillMessage("Enemy Used: " + enemy.attackOne);

                enemy.hp = 10;

                enemy.bat -= 20;
                enemy.dat -= 20;
            }
            break;
        }
        }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Brains... need brains...";
            break;
        }
        case 2:
        {
            voiceline = "Hungry... always hungry...";
            break;
        }
        case 3:
        {
            voiceline = "Flesh... delicious flesh...";
            break;
        }
        case 4:
        {
            voiceline = "Must... devour...";
            break;
        }
        case 5:
        {
            voiceline = "No pain... just hunger...";
            break;
        }
    }
}
else if (enemy.name == PlasmaticEnforcer.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
      srand((unsigned) time(NULL));
        int chanceInIf = rand() % 1;
        switch (chanceInIf) {
            case 0:
        {
            if (enemy.bat >= 10 && enemy.dat >= 10) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int chanceInSwitch = rand() % 3;
                switch (chanceInSwitch) {
                    case 0:
                    {
                        resetEffectsOfHero();

                        heroEffectBurningActive = true;
                        activeCountdownHero = 2;

                        fillMessage("That has to be at least first degree burn");
                        break;
                    }

                    case 1:
                    {
                        resetEffectsOfHero();

                        heroEffectBurningActive = true;
                        activeCountdownHero = 3;

                        fillMessage("That has to be at least second degree burn");
                        break;
                    }

                    case 2:
                    {
                        resetEffectsOfHero();

                        heroEffectBurningActive = true;
                        activeCountdownHero = 4;

                        fillMessage("That has to be at least third degree burn");
                        break;
                    }

                    case 3:
                    {
                        resetEffectsOfHero();

                        heroEffectBurningActive = true;
                        activeCountdownHero = 5;

                        fillMessage("That has to be at least four degree burn");
                        break;
                    }
                }


                enemy.bat -= 10;
                enemy.dat -= 10;
            }
            break;
        }

        case 1:
        {
            if (enemy.bat >= 25 && enemy.dat >= 25) {
                damageDone = enemy.atk + 2;
                fillMessage("Enemy Used: " + enemy.attackOne);

                heroTurnsSkip = 1;

                fillMessage("He turned the room to ash and fire, take cover (you will skip a turn)");

                enemy.bat -= 25;
                enemy.dat -= 25;
            }
            break;
        }
        }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }
    switch (chance) {


        case 0:
        {
            fillMessage("Enemy stayed calm this turn");
            break;
        }
    }
    srand((unsigned) time(NULL));
    int voice = (rand() % 5) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Knock, knock. Who's there? Death. Death who? Death is knocking at your door, and I'm the one holding the key!";
            break;
        }
        case 2:
        {
            voiceline = "Why did the chicken cross the road? To escape my fiery wrath! But don't worry, you won't be so lucky.";
            break;
        }
        case 3:
        {
            voiceline = "What's the difference between you and a marshmallow? Well, one melts under my scorching flames, and the other is just a marshmallow!";
            break;
        }
        case 4:
        {
            voiceline = "Why did the scarecrow become a firefighter? Because it wanted to play with fire, just like me! Only difference is, I don't play around.";
            break;
        }
        case 5:
        {
            voiceline = "What's black, white, and red all over? You, after I'm done toasting you to a crisp!";
            break;
        }
        case 6:
        {
            voiceline = "Why did the tomato turn red? Because it saw me coming and realized it was about to be roasted!";
            break;
        }
    }
}
// third stage
else if (enemy.name == ShadowbladeBalerina.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 3) {
        switch (chance) {
        case 1:
        {
            if (enemy.bat >= 40 && enemy.dat >= 40) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int chanceInSwitch = rand() % 2;
                if (chanceInSwitch == 2) {
                    damageDone = damageDone * 2;
                }


                enemy.bat -= 40;
                enemy.dat -= 40;
            }
            break;
        }
        case 2:
        {
            if (enemy.bat >= 10 && enemy.dat >= 10) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                heroTurnsSkip = 1;

                fillMessage("She let out a scream that almost ripped your ears (you will skip a turn)");

                enemy.bat -= 25;
                enemy.dat -= 25;
            }
            break;
        }
        case 3:
        {
            if (enemy.bat >= 25 && enemy.dat >= 25) {
                damageDone = enemy.atk - 1;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int repeats = (rand() % 3) + 1;

                for (int i = 0; repeats >= i; i++) {
                    srand((unsigned) time(NULL));
                    int increase = rand() % 2;

                    damageDone += increase;
                }



                fillMessage("She spins quite a lot, with every spin the you feel the attached razors more and more");

                enemy.bat -= 25;
                enemy.dat -= 25;
            }
            break;
        }

        }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 5) + 1;
    switch (voice) {
        case 1:
        {
            voiceline =
                    "I twirl and dance, but my heart is heavy with sorrow. Every step I take is a reminder of the life I lost, the dreams shattered. You will taste my pain.";
            break;
        }
        case 2:
        {
            voiceline = "In this delicate dance, I find solace and agony. The sorrow echoes in each movement, fueling my wrath. Prepare to be consumed by my bittersweet symphony.";
            break;
        }
        case 3:
        {
            voiceline = "Do you see the tears that stain my porcelain face? They hold the weight of my broken dreams and the fury that burns within. You shall taste the bitterness of my wrath.";
            break;
        }
        case 4:
        {
            voiceline = "I pirouette through the darkness, my shadowed blade yearning for release. My heart aches with despair, but my anger fuels my vengeance. Prepare to meet your demise.";
            break;
        }
        case 5:
        {
            voiceline = "In the realm of shadows, I dance with melancholy grace. Each step, a testament to the pain I bear. But beware, for beneath my sorrow lies a tempest of wrath, ready to consume you.";
            break;
        }
        case 6:
        {
            voiceline = "Oh, how I twirl amidst the void, my heart burdened by the weight of regret. But do not mistake my sorrow for weakness, for beneath it lies an inferno of rage, ready to devour all in its path.";
            break;
        }
    }
}
else if (enemy.name == ToxinWraith.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
        switch (chance) {
        case 1:
        {
            if (enemy.bat >= 40 && enemy.dat >= 40) {
                damageDone = enemy.atk + 2;
                fillMessage("Enemy Used: " + enemy.attackOne);

                resetEffectsOfHero();

                heroEffectDrainingActive = true;

                enemy.bat -= 40;
                enemy.dat -= 40;
            }
            break;
        }
        case 2:
        {
            if (enemy.bat >= 10 && enemy.dat >= 10) {
                damageDone = enemy.atk - 1;
                fillMessage("Enemy Used: " + enemy.attackOne);

                resetEffectsOfHero();
                heroEffectCrippledActive = true;
                effectCrippledStrengthHero = 2;
                activeCountdownHero = 3;

                fillMessage("The toxic air makes you a bit weaker");

                enemy.bat -= 10;
                enemy.dat -= 10;
            }
            break;
        }
        case 3:
        {
            if (enemy.bat >= 25 && enemy.dat >= 25) {
                damageDone = enemy.atk + 1;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int repeats = rand() % 3;

                resetEffectsOfHero();

                heroEffectPoisonActive = true;
                activeCountdownHero = 3 + repeats;



                fillMessage("The toxin in the air is quite strong it seems that it will be here for " + activeCountdownHero);

                enemy.bat -= 25;
                enemy.dat -= 25;
            }
            break;
        }
        }
    }
    else {
        if (heroEffectDrainingActive == true && effectDrainingCountdownHero >= 3) {
                fillMessage("Enemy drained your Hp");
            }
            else {
                fillMessage("Enemy stayed calm this turn");
            }
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Breathe in deep, mortal, for my toxic touch shall be your demise.";
            break;
        }
        case 2:
        {
            voiceline = "The venom courses through your veins, paralyzing you with every heartbeat.";
            break;
        }
        case 3:
        {
            voiceline = "You cannot escape the grasp of my toxic embrace. You are forever tainted.";
            break;
        }
        case 4:
        {
            voiceline = "Feel the agony of my poisonous whispers, as they seep into your mind.";
            break;
        }
        case 5:
        {
            voiceline = "I am the embodiment of decay and despair. Your flesh will wither beneath my touch.";
            break;
        }
    }
}
else if (enemy.name == ScythebladeAugment.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 3) {
        switch (chance) {
        case 1:
        {
            if (enemy.bat >= 40 && enemy.dat >= 40) {
                damageDone = enemy.atk + 2;
                fillMessage("Enemy Used: " + enemy.attackOne);

                resetEffectsOfHero();

                heroEffectCrippledActive = true;
                effectCrippledStrengthHero = 3;
                activeCountdownHero = 3;

                heroTurnsSkip = 1;

                fillMessage("Your joints are snapped (you are crippled and skip one turn, for obvious reasons)");

                enemy.bat -= 40;
                enemy.dat -= 40;
            }
            break;
        }
        case 2:
        {
            if (enemy.bat >= 30 && enemy.dat >= 30) {
                damageDone = enemy.atk - 4;
                fillMessage("Enemy Used: " + enemy.attackOne);

                srand((unsigned) time(NULL));
                int repeats = (rand() % 3) + 1;

                for (int i = 0; repeats >= i; i++) {
                    srand((unsigned) time(NULL));
                    int increase = rand() % 2;

                    damageDone += increase;
                }

                fillMessage("Hes almost a dancer at this point although his partner is blades");

                enemy.bat -= 30;
                enemy.dat -= 30;
            }
            break;
        }
        case 3:
        {
            if (enemy.bat >= 25 && enemy.dat >= 25) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                enemy.hp = enemy.hp - damageDone;
                damageDone = 0;

                fillMessage("Armour prepare to be ignored. Oh you didnt prepare");

                enemy.bat -= 25;
                enemy.dat -= 25;
            }
            break;
        }
        }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Witness the precision of my cybernetic scythe as it cleaves through your feeble defenses.";
            break;
        }
        case 2:
        {
            voiceline = "My blades thirst for your flesh. Prepare to be reaped.";
            break;
        }
        case 3:
        {
            voiceline = "Resistance is futile. Your demise is inevitable, courtesy of my augmented powers.";
            break;
        }
        case 4:
        {
            voiceline = "With each swing of my scythe, I harvest the souls of the fallen. You are next.";
            break;
        }
        case 5:
        {
            voiceline = "Embrace the dance of death, for my blades are the conductor and you are the hapless performer.";
            break;
        }
    }
}
else if (enemy.name == MutagenicBrute.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    if (chance > 0) {
        switch (chance) {
        case 1:
        {
            if (enemy.bat >= 25 && enemy.dat >= 25) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                resetEffectsOfHero();

                heroEffectPoisonActive = true;
                activeCountdownHero = 5;

                fillMessage("Love is in the air, wait... no its his poison.");

                enemy.bat -= 25;
                enemy.dat -= 25;
            }
            break;
        }
        case 2:
        {
            if (enemy.bat >= 10 && enemy.dat >= 10) {
                damageDone = enemy.atk + 2;
                fillMessage("Enemy Used: " + enemy.attackOne);

                enemy.bat -= 10;
                enemy.dat -= 10;
            }
            break;
        }
        case 3:
        {
            if (enemy.bat >= 40 && enemy.dat >= 40) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                heroTurnsSkip = 2;

                fillMessage("The venom that he just injected you with will paralyse you for a while, two turns to be exact");

                enemy.bat -= 40;
                enemy.dat -= 40;
            }
            break;
        }
    }
    else {
        fillMessage("Enemy stayed calm this turn");
    }

    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Feel the power coursing through my veins! You're no match for this mutated might.";
            break;
        }
        case 2:
        {
            voiceline = "I am the embodiment of strength and ferocity. Prepare to be overwhelmed!";
            break;
        }
        case 3:
        {
            voiceline = "Witness the mutation, witness the fury! Your defeat is inevitable.";
            break;
        }
        case 4:
        {
            voiceline = "My muscles bulge with raw power. It's time to unleash the beast within.";
            break;
        }
        case 5:
        {
            voiceline =  "Why did the Mutagenic Brute start a gardening club? Because he wanted to see how plants would react to his 'killer' compost!";
            break;
        }
    }
}
else if (enemy.name == NeuralOverlord.name) {
    srand((unsigned) time(NULL));
    int chance = rand() % 3;
    switch (chance) {
        case 1:
        {
            if (enemy.bat >= 25 && enemy.dat >= 25) {
                damageDone = active.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                fillMessage("why are you hitting yourself. Sorry I just couldn't help myself");

                enemy.bat -= 25;
                enemy.dat -= 25;
            }
            break;
        }
        case 2:
        {
            if (enemy.bat >= 10 && enemy.dat >= 10) {
                damageDone = enemy.atk;
                fillMessage("Enemy Used: " + enemy.attackOne);

                enemy.hp = enemy.hp - damageDone;
                damageDone = 0;

                enemy.bat -= 10;
                enemy.dat -= 10;
            }
            break;
        }
        case 3:
        {
            if (enemy.bat >= 40 && enemy.dat >= 40) {
                damageDone = enemy.atk + 2;
                fillMessage("Enemy Used: " + enemy.attackOne);

                heroTurnsSkip = 2;

                fillMessage("Shhh... This is not A.R.I. but your sins speaking, did you ever stopped and thought how better world would be without you. Well now you will.");

                enemy.bat -= 40;
                enemy.dat -= 40;
            }
            break;
        }

        case 0:
        {
            fillMessage("Enemy stayed calm this turn");
            break;
        }
    }
    srand((unsigned) time(NULL));
    int voice = (rand() % 4) + 1;
    switch (voice) {
        case 1:
        {
            voiceline = "Why did the Neural Overlord enroll in a cooking class? To learn how to 'mind' his own 'grains' of salt!";
            break;
        }
        case 2:
        {
            voiceline = "Behold the power of the Neural Overlord! Your will is mine to manipulate and crush.";
            break;
        }
        case 3:
        {
            voiceline = "I delve into the depths of your consciousness, extracting your fears and turning them against you.";
            break;
        }
        case 4:
        {
            voiceline = "Bow before the supremacy of my neural network. I am the master of minds, and you are my subjects.";
            break;
        }
        case 5:
        {
            voiceline =  "I see every thought, every weakness. I am the puppeteer pulling the strings of your minds.";
            break;
        }
    }
}


if (damageDone <= 0) {
    if (messageOne != "Enemy stayed calm this turn") {
        if (messageTwo != "Enemy stayed calm this turn") {
            if (messageThree != "Enemy stayed calm this turn") {
                if (messageFour != "Enemy stayed calm this turn") {
                    if (messageFive != "Enemy stayed calm this turn") {
                        fillMessage("Enemy is out of juice, lucky you");
                    }
                }
            }
        }
    }
}
}

void brainOfERr0R () {
    if (enemy.bat > enemy.dat) {
        srand((unsigned) time(NULL));
        int chance = rand() % 2;

        switch (chance) {
            case 1:
            {
                if (enemy.bat >= 20) {
                    damageDone = enemy.atk;

                    resetEffectsOfHero();

                    heroEffectBleedingActive = true;
                    activeCountdownHero = 5;

                    enemy.bat -= 20;
                }
                break;
            }

            case 2:
            {
                if (enemy.bat >= 40) {
                    damageDone = enemy.atk;

                    active.atk -= 1;

                    srand((unsigned) time(NULL));
                    int attempts = rand() % 5;
                    for (int i = 0; i <= attempts; i++) {
                        damageDone += i - 1;
                    }

                    resetEffectsOfHero();

                    heroEffectBurningActive = true;
                    activeCountdownHero = 4;

                    enemy.bat -= 40;
                }

                break;
            }

            case 0:
            {
                if (enemy.bat >= 55) {
                    damageDone = enemy.atk + 2;

                    for (int i = 0; i <= active.atk - 2; i++) {
                        damageDone++;
                    }

                    resetEffectsOfHero();
                    heroEffectBleedingActive = true;
                    activeCountdownHero = 5;

                    enemy.bat -= 55;
                }
                break;
            }
        }
    }
    else {
        srand((unsigned) time(NULL));
        int chance = rand() % 2;

        switch (chance) {
            case 1:
            {
                if (enemy.dat >= 15) {
                    enemy.dat += 40;
                    enemy.bat += 55;

                    active.dat -= 20;
                    active.bat -= 20;
                }
                break;
            }

            case 2:
            {
                if (enemy.dat >= 40) {
                    enemy.hp += 5;

                    resetEffectsOfHero();
                    heroEffectBleedingActive = true;
                    activeCountdownHero = 3;

                    damageDone += 1;

                    enemy.dat -= 40;
                }

                break;
            }

            case 0:
            {
                if (enemy.dat >= 55) {
                    heroTurnsSkip = 3;
                    damageDone = 3;
                    resetEffectsOfHero();
                    heroEffectBurningActive = true;
                    activeCountdownHero = 3;
                    enemy.dat -= 55;
                }
                break;
            }
        }
    }

    srand((unsigned) time(NULL));
    int chance = rand() % 2;

    if (chance == 1 && heroEffectBurningActive == true) {
        activeCountdownHero++;
    }
}
void brainOfTheMask () {
    if (enemy.bat > enemy.dat) {
        srand((unsigned) time(NULL));
        int chance = rand() % 2;

        switch (chance) {
            case 1:
            {
                if (enemy.bat >= 20) {
                    damageDone = active.atk + 1;
                    active.bat -= 20;
                    active.dat -= 20;

                    enemy.bat -= 20;
                }
                break;
            }

            case 2:
            {
                if (enemy.bat >= 40) {
                    damageDone = active.atk * 3;

                    enemy.bat -= 40;
                }

                break;
            }

            case 0:
            {
                if (enemy.bat >= 55) {
                    damageDone = enemy.atk;

                    resetEffectsOfHero();
                    heroEffectBurningActive = true;
                    activeCountdownHero = 3;

                    srand((unsigned) time(NULL));
                    int repeats = rand() % 4;

                    for (int i = 0; i <= repeats; i++) {
                        damageDone += i;
                        activeCountdownHero++;
                    }

                    enemy.bat -= 55;
                }
                break;
            }
        }
    }
    else {
        srand((unsigned) time(NULL));
        int chance = rand() % 2;

        switch (chance) {
            case 1:
            {
                if (enemy.dat >= 20) {
                    activateBioShieldEnemy(5);
                    enemy.arm += 3;
                    active.dat -= 5;

                    enemy.dat -= 20;
                }
                break;
            }

            case 2:
            {
                if (enemy.dat >= 40) {
                    damageDone = active.atk;

                    heroTurnsSkip = 2;

                    enemy.dat -= 40;
                }

                break;
            }

            case 0:
            {
                enemy.bat += 55;
                break;
            }
        }
    }

    srand((unsigned) time(NULL));
    int chance = rand() % 4;

    if (chance == 5) {
        heroTurnsSkip++;
    }
}
void brainOfTheBoss () {
    if (enemy.bat > enemy.dat) {
        srand((unsigned) time(NULL));
        int chance = rand() % 2;

        switch (chance) {
            case 1:
            {
                if (enemy.bat >= 20) {
                    damageDone = active.atk + 1;
                    active.bat -= 20;
                    active.dat -= 20;

                    enemy.bat -= 20;
                }
                break;
            }

            case 2:
            {
                if (enemy.bat >= 40) {
                    damageDone = active.atk * 3;

                    enemy.bat -= 40;
                }

                break;
            }

            case 0:
            {
                if (enemy.bat >= 55) {
                    damageDone = enemy.atk;

                    resetEffectsOfHero();
                    heroEffectBurningActive = true;
                    activeCountdownHero = 3;

                    srand((unsigned) time(NULL));
                    int repeats = rand() % 4;

                    for (int i = 0; i <= repeats; i++) {
                        damageDone += i;
                        activeCountdownHero++;
                    }

                    enemy.bat -= 55;
                }
                break;
            }
        }
    }
    else {
        srand((unsigned) time(NULL));
        int chance = rand() % 2;

        switch (chance) {
            case 1:
            {
                if (enemy.dat >= 20) {
                    activateBioShieldEnemy(5);
                    enemy.arm += 3;
                    active.dat -= 5;

                    enemy.dat -= 20;
                }
                break;
            }

            case 2:
            {
                if (enemy.dat >= 40) {
                    damageDone = active.atk;

                    heroTurnsSkip = 2;

                    enemy.dat -= 40;
                }

                break;
            }

            case 0:
            {
                enemy.bat += 55;
                break;
            }
        }
    }

    srand((unsigned) time(NULL));
    int chance = rand() % 4;

    if (chance == 5) {
        heroTurnsSkip++;
    }
}

#endif //GAME_MYFCE_H
