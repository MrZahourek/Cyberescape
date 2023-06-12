#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <thread>
#include <algorithm>

#include "attacks.h"
#include "abilities.h"
#include "renders.h"
#include "shops.h"
#include "characters.h"
#include "info.h"
#include "myFce.h"
#include "variables.h"
#include "music.h"

using namespace std;


int main() {
    prepareForOutput(); // setup cmd for characters like ║

    string characterOneNameEdited = characterOne.name;
    string characterTwoNameEdited = characterTwo.name;
    string characterThreeNameEdited = characterThree.name;

    characterOneNameEdited.erase(remove(characterOneNameEdited.begin(), characterOneNameEdited.end(), ' '), characterOneNameEdited.end()); //remove space from character names
    characterTwoNameEdited.erase(remove(characterTwoNameEdited.begin(), characterTwoNameEdited.end(), ' '), characterTwoNameEdited.end());
    characterThreeNameEdited.erase(remove(characterThreeNameEdited.begin(), characterThreeNameEdited.end(), ' '), characterThreeNameEdited.end());

    //colorWheel();

    //renderMainBattleScene();
    //renderMainBattleScene();

    //system("cls");

    //loadFile("Visuals/shopTemplate.txt");

    //system("cls");
    //renderCharacterSheet();



    //music(filePath.c_str(), stopFlag);



    //return 0;

    while (true) {
        while (whatScreenWeSee == "Choose Character") {
            // first render
            if (firstTime == true) {
                system("cls");

                file.open("Visuals/chooseCharacterAttackOne.txt");
                clearFile("Visuals/chooseCharacterAttackOne.txt");
                file << infernoAttacks.attackOneDescriptionChooseYourCharacter;
                file.close();

                file.open("Visuals/chooseCharacterAttackTwo.txt");
                clearFile("Visuals/chooseCharacterAttackTwo.txt");
                file << infernoAttacks.attackTwoDescriptionChooseYourCharacter;
                file.close();

                file.open("Visuals/chooseCharacterAttackThree.txt");
                clearFile("Visuals/chooseCharacterAttackThree.txt");
                file << infernoAttacks.attackThreeDescriptionChooseYourCharacter;
                file.close();

                renderChooseYourHeroes(inferno.fighterClass, inferno.name, inferno.hp, inferno.arm, inferno.atk,inferno.bat, inferno.dat);
                firstTime = false;
            }
            // Choose Character loop
            if (_kbhit()) {
                system("cls");
                // First render for specific character
                if (chooseCharacter.currentPositionX == 1) {
                    renderChooseYourHeroes(inferno.fighterClass, inferno.name, inferno.hp, inferno.arm, inferno.atk,inferno.bat, inferno.dat);
                } else if (chooseCharacter.currentPositionX == 2) {
                    renderChooseYourHeroes(atlas.fighterClass, atlas.name, atlas.hp, atlas.arm, atlas.atk, atlas.bat,
                                           atlas.dat);
                } else if (chooseCharacter.currentPositionX == 3) {
                    renderChooseYourHeroes(hanibal.fighterClass, hanibal.name, hanibal.hp, hanibal.arm, hanibal.atk,
                                           hanibal.bat, hanibal.dat);
                } else if (chooseCharacter.currentPositionX == 4) {
                    renderChooseYourHeroes(monoI.fighterClass, monoI.name, monoI.hp, monoI.arm, monoI.atk, monoI.bat,
                                           monoI.dat);
                } else if (chooseCharacter.currentPositionX == 5) {
                    renderChooseYourHeroes(biohazard.fighterClass, biohazard.name, biohazard.hp, biohazard.arm,
                                           biohazard.atk, biohazard.bat, biohazard.dat);
                } else if (chooseCharacter.currentPositionX == 6) {
                    renderChooseYourHeroes(zip.fighterClass, zip.name, zip.hp, zip.arm, zip.atk, zip.bat, zip.dat);
                } else if (chooseCharacter.currentPositionX == 7) {
                    renderChooseYourHeroes(plagy.fighterClass, plagy.name, plagy.hp, plagy.arm, plagy.atk, plagy.bat,
                                           plagy.dat);
                } else if (chooseCharacter.currentPositionX == 8) {
                    renderChooseYourHeroes(amper.fighterClass, amper.name, amper.hp, amper.arm, amper.atk, amper.bat,
                                           amper.dat);
                }
                // Get key
                pressedKey = getch();

                // Key check
                if (int(pressedKey) == 65 || int(pressedKey) == 97) { // A or a
                    chooseCharacter.currentPositionX--;

                    switch (chooseCharacter.currentPositionX) {
                        case 1: {
                            if (inferno.picked == true) {
                                chooseCharacter.currentPositionX--;
                            }
                            break;
                        }

                        case 2: {
                            if (atlas.picked == true) {
                                chooseCharacter.currentPositionX--;
                            }
                            break;
                        }

                        case 3: {
                            if (hanibal.picked == true) {
                                chooseCharacter.currentPositionX--;
                            }
                            break;
                        }

                        case 4: {
                            if (monoI.picked == true) {
                                chooseCharacter.currentPositionX--;
                            }
                            break;
                        }

                        case 5: {
                            if (biohazard.picked == true) {
                                chooseCharacter.currentPositionX--;
                            }
                            break;
                        }

                        case 6: {
                            if (zip.picked == true) {
                                chooseCharacter.currentPositionX--;
                            }
                        }

                        case 7: {
                            if (plagy.picked == true) {
                                chooseCharacter.currentPositionX--;
                            }
                        }

                        case 8: {
                            if (amper.picked == true) {
                                chooseCharacter.currentPositionX--;
                            }
                        }
                    }
                } // A
                else if (int(pressedKey) == 68 || int(pressedKey) == 100) { // D or d
                    chooseCharacter.currentPositionX++;

                    switch (chooseCharacter.currentPositionX) {
                        case 1: {
                            if (inferno.picked == true) {
                                chooseCharacter.currentPositionX++;
                            }
                            break;
                        }

                        case 2: {
                            if (atlas.picked == true) {
                                chooseCharacter.currentPositionX++;
                            }
                            break;
                        }

                        case 3: {
                            if (hanibal.picked == true) {
                                chooseCharacter.currentPositionX++;
                            }
                            break;
                        }

                        case 4: {
                            if (monoI.picked == true) {
                                chooseCharacter.currentPositionX++;
                            }
                            break;
                        }

                        case 5: {
                            if (biohazard.picked == true) {
                                chooseCharacter.currentPositionX++;
                            }
                            break;
                        }

                        case 6: {
                            if (zip.picked == true) {
                                chooseCharacter.currentPositionX++;
                            }
                        }

                        case 7: {
                            if (plagy.picked == true) {
                                chooseCharacter.currentPositionX++;
                            }
                        }

                        case 8: {
                            if (amper.picked == true) {
                                chooseCharacter.currentPositionX++;
                            }
                        }
                    }
                } // D
                else if (int(pressedKey) == 87 || int(pressedKey) == 119) { // W or w
                    chooseCharacter.currentPositionY--;
                } // W
                else if (int(pressedKey) == 83 || int(pressedKey) == 115) { // S or s
                    chooseCharacter.currentPositionY++;
                } // S
                else if (int(pressedKey) == 69 || int(pressedKey) == 101) { // E or e
                    if (chooseCharacter.currentPositionX == 1) { // inferno
                        inferno.picked = true;
                        inferno.active = true;

                        active.name = inferno.name;
                        active.effect = inferno.effect;
                        active.fighterClass = inferno.fighterClass;
                        active.attackOne = inferno.attackOne;
                        active.abilityTwo = inferno.abilityTwo;
                        active.attackThree = inferno.attackThree;
                        active.abilityOne = inferno.abilityOne;
                        active.abilityTwo = inferno.abilityTwo;
                        active.abilityThree = inferno.abilityThree;
                        active.hp = inferno.hp;
                        active.arm = inferno.arm;
                        active.atk = inferno.atk;
                        active.bat = inferno.bat;
                        active.dat = inferno.dat;
                        active.active = inferno.active;
                        active.picked = inferno.picked;

                        if (characterOne.name == "") {
                            characterOne.name = inferno.name;
                            characterOne.effect = inferno.effect;
                            characterOne.fighterClass = inferno.fighterClass;
                            characterOne.attackOne = inferno.attackOne;
                            characterOne.abilityTwo = inferno.abilityTwo;
                            characterOne.attackThree = inferno.attackThree;
                            characterOne.abilityOne = inferno.abilityOne;
                            characterOne.abilityTwo = inferno.abilityTwo;
                            characterOne.abilityThree = inferno.abilityThree;
                            characterOne.hp = inferno.hp;
                            characterOne.arm = inferno.arm;
                            characterOne.atk = inferno.atk;
                            characterOne.bat = inferno.bat;
                            characterOne.dat = inferno.dat;
                            characterOne.active = inferno.active;
                            characterOne.picked = inferno.picked;

                            characterOneAttacksSmall.attackOneDescriptionChooseYourCharacter = infernoAttacksSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackTwoDescriptionChooseYourCharacter = infernoAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackThreeDescriptionChooseYourCharacter = infernoAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilitiesSmall.attackOneDescriptionChooseYourCharacter = infernoAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = infernoAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = infernoAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAttack.attackOneDescriptionChooseYourCharacter = infernoAttacks.attackOneDescriptionChooseYourCharacter;
                            characterOneAttack.attackTwoDescriptionChooseYourCharacter = infernoAttacks.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttack.attackThreeDescriptionChooseYourCharacter = infernoAttacks.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilities.attackOneDescriptionChooseYourCharacter = infernoAbilities.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilities.attackTwoDescriptionChooseYourCharacter = infernoAbilities.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilities.attackThreeDescriptionChooseYourCharacter = infernoAbilities.attackThreeDescriptionChooseYourCharacter;
                        }
                        else {
                            if (characterTwo.name == "") {
                                characterTwo.name = inferno.name;
                                characterTwo.effect = inferno.effect;
                                characterTwo.fighterClass = inferno.fighterClass;
                                characterTwo.attackOne = inferno.attackOne;
                                characterTwo.abilityTwo = inferno.abilityTwo;
                                characterTwo.attackThree = inferno.attackThree;
                                characterTwo.abilityOne = inferno.abilityOne;
                                characterTwo.abilityTwo = inferno.abilityTwo;
                                characterTwo.abilityThree = inferno.abilityThree;
                                characterTwo.hp = inferno.hp;
                                characterTwo.arm = inferno.arm;
                                characterTwo.atk = inferno.atk;
                                characterTwo.bat = inferno.bat;
                                characterTwo.dat = inferno.dat;
                                characterTwo.active = inferno.active;
                                characterTwo.picked = inferno.picked;

                                characterTwoAttacksSmall.attackOneDescriptionChooseYourCharacter = infernoAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackTwoDescriptionChooseYourCharacter = infernoAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackThreeDescriptionChooseYourCharacter = infernoAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilitiesSmall.attackOneDescriptionChooseYourCharacter = infernoAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = infernoAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = infernoAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAttack.attackOneDescriptionChooseYourCharacter = infernoAttacks.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttack.attackTwoDescriptionChooseYourCharacter = infernoAttacks.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttack.attackThreeDescriptionChooseYourCharacter = infernoAttacks.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilities.attackOneDescriptionChooseYourCharacter = infernoAbilities.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackTwoDescriptionChooseYourCharacter = infernoAbilities.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackThreeDescriptionChooseYourCharacter = infernoAbilities.attackThreeDescriptionChooseYourCharacter;
                            }
                            else {
                                if (characterThree.name == "") {
                                    characterThree.name = inferno.name;
                                    characterThree.effect = inferno.effect;
                                    characterThree.fighterClass = inferno.fighterClass;
                                    characterThree.attackOne = inferno.attackOne;
                                    characterThree.abilityTwo = inferno.abilityTwo;
                                    characterThree.attackThree = inferno.attackThree;
                                    characterThree.abilityOne = inferno.abilityOne;
                                    characterThree.abilityTwo = inferno.abilityTwo;
                                    characterThree.abilityThree = inferno.abilityThree;
                                    characterThree.hp = inferno.hp;
                                    characterThree.arm = inferno.arm;
                                    characterThree.atk = inferno.atk;
                                    characterThree.bat = inferno.bat;
                                    characterThree.dat = inferno.dat;
                                    characterThree.active = inferno.active;
                                    characterThree.picked = inferno.picked;

                                    characterThreeAttacksSmall.attackOneDescriptionChooseYourCharacter = infernoAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackTwoDescriptionChooseYourCharacter = infernoAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackThreeDescriptionChooseYourCharacter = infernoAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilitiesSmall.attackOneDescriptionChooseYourCharacter = infernoAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = infernoAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = infernoAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAttack.attackOneDescriptionChooseYourCharacter = infernoAttacks.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackTwoDescriptionChooseYourCharacter = infernoAttacks.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackThreeDescriptionChooseYourCharacter = infernoAttacks.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilities.attackOneDescriptionChooseYourCharacter = infernoAbilities.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackTwoDescriptionChooseYourCharacter = infernoAbilities.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackThreeDescriptionChooseYourCharacter = infernoAbilities.attackThreeDescriptionChooseYourCharacter;
                                }
                            }
                        }

                        characterSlots++;
                        chooseCharacter.currentPositionX++;
                    }
                    else if (chooseCharacter.currentPositionX == 2) {
                        atlas.picked = true;
                        atlas.active = true;

                        active.name = atlas.name;
                        active.effect = atlas.effect;
                        active.fighterClass = atlas.fighterClass;
                        active.attackOne = atlas.attackOne;
                        active.abilityTwo = atlas.abilityTwo;
                        active.attackThree = atlas.attackThree;
                        active.abilityOne = atlas.abilityOne;
                        active.abilityTwo = atlas.abilityTwo;
                        active.abilityThree = atlas.abilityThree;
                        active.hp = atlas.hp;
                        active.arm = atlas.arm;
                        active.atk = atlas.atk;
                        active.bat = atlas.bat;
                        active.dat = atlas.dat;
                        active.active = atlas.active;
                        active.picked = atlas.picked;

                        if (characterOne.name == "" ) {
                            characterOne.name = atlas.name;
                            characterOne.effect = atlas.effect;
                            characterOne.fighterClass = atlas.fighterClass;
                            characterOne.attackOne = atlas.attackOne;
                            characterOne.abilityTwo = atlas.abilityTwo;
                            characterOne.attackThree = atlas.attackThree;
                            characterOne.abilityOne = atlas.abilityOne;
                            characterOne.abilityTwo = atlas.abilityTwo;
                            characterOne.abilityThree = atlas.abilityThree;
                            characterOne.hp = atlas.hp;
                            characterOne.arm = atlas.arm;
                            characterOne.atk = atlas.atk;
                            characterOne.bat = atlas.bat;
                            characterOne.dat = atlas.dat;
                            characterOne.active = atlas.active;
                            characterOne.picked = atlas.picked;

                            characterOneAttacksSmall.attackOneDescriptionChooseYourCharacter = atlasAttacksSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackTwoDescriptionChooseYourCharacter = atlasAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackThreeDescriptionChooseYourCharacter = atlasAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilitiesSmall.attackOneDescriptionChooseYourCharacter = atlasAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = atlasAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = atlasAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAttack.attackOneDescriptionChooseYourCharacter = atlasAttacks.attackOneDescriptionChooseYourCharacter;
                            characterOneAttack.attackTwoDescriptionChooseYourCharacter = atlasAttacks.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttack.attackThreeDescriptionChooseYourCharacter = atlasAttacks.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilities.attackOneDescriptionChooseYourCharacter = atlasAbilities.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilities.attackTwoDescriptionChooseYourCharacter = atlasAbilities.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilities.attackThreeDescriptionChooseYourCharacter = atlasAbilities.attackThreeDescriptionChooseYourCharacter;

                        }
                        else {
                            if (characterTwo.name == "") {
                                characterTwo.name = atlas.name;
                                characterTwo.effect = atlas.effect;
                                characterTwo.fighterClass = atlas.fighterClass;
                                characterTwo.attackOne = atlas.attackOne;
                                characterTwo.abilityTwo = atlas.abilityTwo;
                                characterTwo.attackThree = atlas.attackThree;
                                characterTwo.abilityOne = atlas.abilityOne;
                                characterTwo.abilityTwo = atlas.abilityTwo;
                                characterTwo.abilityThree = atlas.abilityThree;
                                characterTwo.hp = atlas.hp;
                                characterTwo.arm = atlas.arm;
                                characterTwo.atk = atlas.atk;
                                characterTwo.bat = atlas.bat;
                                characterTwo.dat = atlas.dat;
                                characterTwo.active = atlas.active;
                                characterTwo.picked = atlas.picked;

                                characterTwoAttacksSmall.attackOneDescriptionChooseYourCharacter = atlasAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackTwoDescriptionChooseYourCharacter = atlasAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackThreeDescriptionChooseYourCharacter = atlasAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilitiesSmall.attackOneDescriptionChooseYourCharacter = atlasAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = atlasAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = atlasAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAttack.attackOneDescriptionChooseYourCharacter = atlasAttacks.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttack.attackTwoDescriptionChooseYourCharacter = atlasAttacks.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttack.attackThreeDescriptionChooseYourCharacter = atlasAttacks.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilities.attackOneDescriptionChooseYourCharacter = atlasAbilities.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackTwoDescriptionChooseYourCharacter = atlasAbilities.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackThreeDescriptionChooseYourCharacter = atlasAbilities.attackThreeDescriptionChooseYourCharacter;
                            }
                            else {
                                if (characterThree.name == "") {
                                    characterThree.name = atlas.name;
                                    characterThree.effect = atlas.effect;
                                    characterThree.fighterClass = atlas.fighterClass;
                                    characterThree.attackOne = atlas.attackOne;
                                    characterThree.abilityTwo = atlas.abilityTwo;
                                    characterThree.attackThree = atlas.attackThree;
                                    characterThree.abilityOne = atlas.abilityOne;
                                    characterThree.abilityTwo = atlas.abilityTwo;
                                    characterThree.abilityThree = atlas.abilityThree;
                                    characterThree.hp = atlas.hp;
                                    characterThree.arm = atlas.arm;
                                    characterThree.atk = atlas.atk;
                                    characterThree.bat = atlas.bat;
                                    characterThree.dat = atlas.dat;
                                    characterThree.active = atlas.active;
                                    characterThree.picked = atlas.picked;

                                    characterThreeAttacksSmall.attackOneDescriptionChooseYourCharacter = atlasAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackTwoDescriptionChooseYourCharacter = atlasAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackThreeDescriptionChooseYourCharacter = atlasAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilitiesSmall.attackOneDescriptionChooseYourCharacter = atlasAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = atlasAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = atlasAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAttack.attackOneDescriptionChooseYourCharacter = atlasAttacks.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackTwoDescriptionChooseYourCharacter = atlasAttacks.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackThreeDescriptionChooseYourCharacter = atlasAttacks.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilities.attackOneDescriptionChooseYourCharacter = atlasAbilities.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackTwoDescriptionChooseYourCharacter = atlasAbilities.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackThreeDescriptionChooseYourCharacter = atlasAbilities.attackThreeDescriptionChooseYourCharacter;
                                }
                            }
                        }

                        characterSlots++;
                        chooseCharacter.currentPositionX--;
                    }
                    else if (chooseCharacter.currentPositionX == 3) {
                        hanibal.picked = true;
                        hanibal.active = true;

                        active.name = hanibal.name;
                        active.effect = hanibal.effect;
                        active.fighterClass = hanibal.fighterClass;
                        active.attackOne = hanibal.attackOne;
                        active.abilityTwo = hanibal.abilityTwo;
                        active.attackThree = hanibal.attackThree;
                        active.abilityOne = hanibal.abilityOne;
                        active.abilityTwo = hanibal.abilityTwo;
                        active.abilityThree = hanibal.abilityThree;
                        active.hp = hanibal.hp;
                        active.arm = hanibal.arm;
                        active.atk = hanibal.atk;
                        active.bat = hanibal.bat;
                        active.dat = hanibal.dat;
                        active.active = hanibal.active;
                        active.picked = hanibal.picked;

                        if (characterOne.name == "" ) {
                            characterOne.name = hanibal.name;
                            characterOne.effect = hanibal.effect;
                            characterOne.fighterClass = hanibal.fighterClass;
                            characterOne.attackOne = hanibal.attackOne;
                            characterOne.abilityTwo = hanibal.abilityTwo;
                            characterOne.attackThree = hanibal.attackThree;
                            characterOne.abilityOne = hanibal.abilityOne;
                            characterOne.abilityTwo = hanibal.abilityTwo;
                            characterOne.abilityThree = hanibal.abilityThree;
                            characterOne.hp = hanibal.hp;
                            characterOne.arm = hanibal.arm;
                            characterOne.atk = hanibal.atk;
                            characterOne.bat = hanibal.bat;
                            characterOne.dat = hanibal.dat;
                            characterOne.active = hanibal.active;
                            characterOne.picked = hanibal.picked;

                            characterOneAttacksSmall.attackOneDescriptionChooseYourCharacter = hanibalAttacksSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackTwoDescriptionChooseYourCharacter = hanibalAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackThreeDescriptionChooseYourCharacter = hanibalAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilitiesSmall.attackOneDescriptionChooseYourCharacter = hanibalAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = hanibalAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = hanibalAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAttack.attackOneDescriptionChooseYourCharacter = hanibalAttacks.attackOneDescriptionChooseYourCharacter;
                            characterOneAttack.attackTwoDescriptionChooseYourCharacter = hanibalAttacks.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttack.attackThreeDescriptionChooseYourCharacter = hanibalAttacks.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilities.attackOneDescriptionChooseYourCharacter = hanibalAbilities.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilities.attackTwoDescriptionChooseYourCharacter = hanibalAbilities.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilities.attackThreeDescriptionChooseYourCharacter = hanibalAbilities.attackThreeDescriptionChooseYourCharacter;

                        }
                        else {
                            if (characterTwo.name == "") {
                                characterTwo.name = hanibal.name;
                                characterTwo.effect = hanibal.effect;
                                characterTwo.fighterClass = hanibal.fighterClass;
                                characterTwo.attackOne = hanibal.attackOne;
                                characterTwo.abilityTwo = hanibal.abilityTwo;
                                characterTwo.attackThree = hanibal.attackThree;
                                characterTwo.abilityOne = hanibal.abilityOne;
                                characterTwo.abilityTwo = hanibal.abilityTwo;
                                characterTwo.abilityThree = hanibal.abilityThree;
                                characterTwo.hp = hanibal.hp;
                                characterTwo.arm = hanibal.arm;
                                characterTwo.atk = hanibal.atk;
                                characterTwo.bat = hanibal.bat;
                                characterTwo.dat = hanibal.dat;
                                characterTwo.active = hanibal.active;
                                characterTwo.picked = hanibal.picked;

                                characterTwoAttacksSmall.attackOneDescriptionChooseYourCharacter = hanibalAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackTwoDescriptionChooseYourCharacter = hanibalAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackThreeDescriptionChooseYourCharacter = hanibalAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilitiesSmall.attackOneDescriptionChooseYourCharacter = hanibalAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = hanibalAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = hanibalAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAttack.attackOneDescriptionChooseYourCharacter = hanibalAttacks.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttack.attackTwoDescriptionChooseYourCharacter = hanibalAttacks.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttack.attackThreeDescriptionChooseYourCharacter = hanibalAttacks.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilities.attackOneDescriptionChooseYourCharacter = hanibalAbilities.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackTwoDescriptionChooseYourCharacter = hanibalAbilities.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackThreeDescriptionChooseYourCharacter = hanibalAbilities.attackThreeDescriptionChooseYourCharacter;

                            }
                            else {
                                if (characterThree.name == "") {
                                    characterThree.name = hanibal.name;
                                    characterThree.effect = hanibal.effect;
                                    characterThree.fighterClass = hanibal.fighterClass;
                                    characterThree.attackOne = hanibal.attackOne;
                                    characterThree.abilityTwo = hanibal.abilityTwo;
                                    characterThree.attackThree = hanibal.attackThree;
                                    characterThree.abilityOne = hanibal.abilityOne;
                                    characterThree.abilityTwo = hanibal.abilityTwo;
                                    characterThree.abilityThree = hanibal.abilityThree;
                                    characterThree.hp = hanibal.hp;
                                    characterThree.arm = hanibal.arm;
                                    characterThree.atk = hanibal.atk;
                                    characterThree.bat = hanibal.bat;
                                    characterThree.dat = hanibal.dat;
                                    characterThree.active = hanibal.active;
                                    characterThree.picked = hanibal.picked;

                                    characterThreeAttacksSmall.attackOneDescriptionChooseYourCharacter = hanibalAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackTwoDescriptionChooseYourCharacter = hanibalAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackThreeDescriptionChooseYourCharacter = hanibalAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilitiesSmall.attackOneDescriptionChooseYourCharacter = hanibalAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = hanibalAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = hanibalAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAttack.attackOneDescriptionChooseYourCharacter = hanibalAttacks.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackTwoDescriptionChooseYourCharacter = hanibalAttacks.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackThreeDescriptionChooseYourCharacter = hanibalAttacks.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilities.attackOneDescriptionChooseYourCharacter = hanibalAbilities.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackTwoDescriptionChooseYourCharacter = hanibalAbilities.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackThreeDescriptionChooseYourCharacter = hanibalAbilities.attackThreeDescriptionChooseYourCharacter;

                                }
                            }
                        }

                        characterSlots++;
                        chooseCharacter.currentPositionX--;
                    }
                    else if (chooseCharacter.currentPositionX == 4) {
                        monoI.picked = true;
                        monoI.active = true;

                        active.name = monoI.name;
                        active.effect = monoI.effect;
                        active.fighterClass = monoI.fighterClass;
                        active.attackOne = monoI.attackOne;
                        active.abilityTwo = monoI.abilityTwo;
                        active.attackThree = monoI.attackThree;
                        active.abilityOne = monoI.abilityOne;
                        active.abilityTwo = monoI.abilityTwo;
                        active.abilityThree = monoI.abilityThree;
                        active.hp = monoI.hp;
                        active.arm = monoI.arm;
                        active.atk = monoI.atk;
                        active.bat = monoI.bat;
                        active.dat = monoI.dat;
                        active.active = monoI.active;
                        active.picked = monoI.picked;

                        if (characterOne.name == "" ) {
                            characterOne.name = monoI.name;
                            characterOne.effect = monoI.effect;
                            characterOne.fighterClass = monoI.fighterClass;
                            characterOne.attackOne = monoI.attackOne;
                            characterOne.abilityTwo = monoI.abilityTwo;
                            characterOne.attackThree = monoI.attackThree;
                            characterOne.abilityOne = monoI.abilityOne;
                            characterOne.abilityTwo = monoI.abilityTwo;
                            characterOne.abilityThree = monoI.abilityThree;
                            characterOne.hp = monoI.hp;
                            characterOne.arm = monoI.arm;
                            characterOne.atk = monoI.atk;
                            characterOne.bat = monoI.bat;
                            characterOne.dat = monoI.dat;
                            characterOne.active = monoI.active;
                            characterOne.picked = monoI.picked;

                            characterOneAttacksSmall.attackOneDescriptionChooseYourCharacter = monoIAttacksSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackTwoDescriptionChooseYourCharacter = monoIAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackThreeDescriptionChooseYourCharacter = monoIAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilitiesSmall.attackOneDescriptionChooseYourCharacter = monoIAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = monoIAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = monoIAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAttack.attackOneDescriptionChooseYourCharacter = monoIAttacks.attackOneDescriptionChooseYourCharacter;
                            characterOneAttack.attackTwoDescriptionChooseYourCharacter = monoIAttacks.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttack.attackThreeDescriptionChooseYourCharacter = monoIAttacks.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilities.attackOneDescriptionChooseYourCharacter = monoIAbilities.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilities.attackTwoDescriptionChooseYourCharacter = monoIAbilities.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilities.attackThreeDescriptionChooseYourCharacter = monoIAbilities.attackThreeDescriptionChooseYourCharacter;

                        }
                        else {
                            if (characterTwo.name == "") {
                                characterTwo.name = monoI.name;
                                characterTwo.effect = monoI.effect;
                                characterTwo.fighterClass = monoI.fighterClass;
                                characterTwo.attackOne = monoI.attackOne;
                                characterTwo.abilityTwo = monoI.abilityTwo;
                                characterTwo.attackThree = monoI.attackThree;
                                characterTwo.abilityOne = monoI.abilityOne;
                                characterTwo.abilityTwo = monoI.abilityTwo;
                                characterTwo.abilityThree = monoI.abilityThree;
                                characterTwo.hp = monoI.hp;
                                characterTwo.arm = monoI.arm;
                                characterTwo.atk = monoI.atk;
                                characterTwo.bat = monoI.bat;
                                characterTwo.dat = monoI.dat;
                                characterTwo.active = monoI.active;
                                characterTwo.picked = monoI.picked;

                                characterTwoAttacksSmall.attackOneDescriptionChooseYourCharacter = monoIAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackTwoDescriptionChooseYourCharacter = monoIAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackThreeDescriptionChooseYourCharacter = monoIAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilitiesSmall.attackOneDescriptionChooseYourCharacter = monoIAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = monoIAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = monoIAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAttack.attackOneDescriptionChooseYourCharacter = monoIAttacks.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttack.attackTwoDescriptionChooseYourCharacter = monoIAttacks.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttack.attackThreeDescriptionChooseYourCharacter = monoIAttacks.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilities.attackOneDescriptionChooseYourCharacter = monoIAbilities.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackTwoDescriptionChooseYourCharacter = monoIAbilities.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackThreeDescriptionChooseYourCharacter = monoIAbilities.attackThreeDescriptionChooseYourCharacter;
                            }
                            else {
                                if (characterThree.name == "") {
                                    characterThree.name = monoI.name;
                                    characterThree.effect = monoI.effect;
                                    characterThree.fighterClass = monoI.fighterClass;
                                    characterThree.attackOne = monoI.attackOne;
                                    characterThree.abilityTwo = monoI.abilityTwo;
                                    characterThree.attackThree = monoI.attackThree;
                                    characterThree.abilityOne = monoI.abilityOne;
                                    characterThree.abilityTwo = monoI.abilityTwo;
                                    characterThree.abilityThree = monoI.abilityThree;
                                    characterThree.hp = monoI.hp;
                                    characterThree.arm = monoI.arm;
                                    characterThree.atk = monoI.atk;
                                    characterThree.bat = monoI.bat;
                                    characterThree.dat = monoI.dat;
                                    characterThree.active = monoI.active;
                                    characterThree.picked = monoI.picked;

                                    characterThreeAttacksSmall.attackOneDescriptionChooseYourCharacter = monoIAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackTwoDescriptionChooseYourCharacter = monoIAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackThreeDescriptionChooseYourCharacter = monoIAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilitiesSmall.attackOneDescriptionChooseYourCharacter = monoIAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = monoIAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = monoIAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAttack.attackOneDescriptionChooseYourCharacter = monoIAttacks.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackTwoDescriptionChooseYourCharacter = monoIAttacks.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackThreeDescriptionChooseYourCharacter = monoIAttacks.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilities.attackOneDescriptionChooseYourCharacter = monoIAbilities.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackTwoDescriptionChooseYourCharacter = monoIAbilities.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackThreeDescriptionChooseYourCharacter = monoIAbilities.attackThreeDescriptionChooseYourCharacter;

                                }
                            }
                        }

                        characterSlots++;
                        chooseCharacter.currentPositionX--;
                    }
                    else if (chooseCharacter.currentPositionX == 5) {
                        biohazard.picked = true;
                        biohazard.active = true;

                        active.name = biohazard.name;
                        active.effect = biohazard.effect;
                        active.fighterClass = biohazard.fighterClass;
                        active.attackOne = biohazard.attackOne;
                        active.abilityTwo = biohazard.abilityTwo;
                        active.attackThree = biohazard.attackThree;
                        active.abilityOne = biohazard.abilityOne;
                        active.abilityTwo = biohazard.abilityTwo;
                        active.abilityThree = biohazard.abilityThree;
                        active.hp = biohazard.hp;
                        active.arm = biohazard.arm;
                        active.atk = biohazard.atk;
                        active.bat = biohazard.bat;
                        active.dat = biohazard.dat;
                        active.active = biohazard.active;
                        active.picked = biohazard.picked;

                        if (characterOne.name == "" ) {
                            characterOne.name = biohazard.name;
                            characterOne.effect = biohazard.effect;
                            characterOne.fighterClass = biohazard.fighterClass;
                            characterOne.attackOne = biohazard.attackOne;
                            characterOne.abilityTwo = biohazard.abilityTwo;
                            characterOne.attackThree = biohazard.attackThree;
                            characterOne.abilityOne = biohazard.abilityOne;
                            characterOne.abilityTwo = biohazard.abilityTwo;
                            characterOne.abilityThree = biohazard.abilityThree;
                            characterOne.hp = biohazard.hp;
                            characterOne.arm = biohazard.arm;
                            characterOne.atk = biohazard.atk;
                            characterOne.bat = biohazard.bat;
                            characterOne.dat = biohazard.dat;
                            characterOne.active = biohazard.active;
                            characterOne.picked = biohazard.picked;

                            characterOneAttacksSmall.attackOneDescriptionChooseYourCharacter = biohazardAttacksSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackTwoDescriptionChooseYourCharacter = biohazardAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackThreeDescriptionChooseYourCharacter = biohazardAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilitiesSmall.attackOneDescriptionChooseYourCharacter = biohazardAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = biohazardAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = biohazardAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAttack.attackOneDescriptionChooseYourCharacter = biohazardAttacks.attackOneDescriptionChooseYourCharacter;
                            characterOneAttack.attackTwoDescriptionChooseYourCharacter = biohazardAttacks.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttack.attackThreeDescriptionChooseYourCharacter = biohazardAttacks.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilities.attackOneDescriptionChooseYourCharacter = biohazardAbilities.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilities.attackTwoDescriptionChooseYourCharacter = biohazardAbilities.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilities.attackThreeDescriptionChooseYourCharacter = biohazardAbilities.attackThreeDescriptionChooseYourCharacter;
                        }
                        else {
                            if (characterTwo.name == "") {
                                characterTwo.name = biohazard.name;
                                characterTwo.effect = biohazard.effect;
                                characterTwo.fighterClass = biohazard.fighterClass;
                                characterTwo.attackOne = biohazard.attackOne;
                                characterTwo.abilityTwo = biohazard.abilityTwo;
                                characterTwo.attackThree = biohazard.attackThree;
                                characterTwo.abilityOne = biohazard.abilityOne;
                                characterTwo.abilityTwo = biohazard.abilityTwo;
                                characterTwo.abilityThree = biohazard.abilityThree;
                                characterTwo.hp = biohazard.hp;
                                characterTwo.arm = biohazard.arm;
                                characterTwo.atk = biohazard.atk;
                                characterTwo.bat = biohazard.bat;
                                characterTwo.dat = biohazard.dat;
                                characterTwo.active = biohazard.active;
                                characterTwo.picked = biohazard.picked;

                                characterOneAttacksSmall.attackOneDescriptionChooseYourCharacter = biohazardAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                characterOneAttacksSmall.attackTwoDescriptionChooseYourCharacter = biohazardAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                characterOneAttacksSmall.attackThreeDescriptionChooseYourCharacter = biohazardAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                characterOneAbilitiesSmall.attackOneDescriptionChooseYourCharacter = biohazardAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                characterOneAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = biohazardAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                characterOneAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = biohazardAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAttack.attackOneDescriptionChooseYourCharacter = biohazardAttacks.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttack.attackTwoDescriptionChooseYourCharacter = biohazardAttacks.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttack.attackThreeDescriptionChooseYourCharacter = biohazardAttacks.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilities.attackOneDescriptionChooseYourCharacter = biohazardAbilities.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackTwoDescriptionChooseYourCharacter = biohazardAbilities.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackThreeDescriptionChooseYourCharacter = biohazardAbilities.attackThreeDescriptionChooseYourCharacter;
                            }
                            else {
                                if (characterThree.name == "") {
                                    characterThree.name = biohazard.name;
                                    characterThree.effect = biohazard.effect;
                                    characterThree.fighterClass = biohazard.fighterClass;
                                    characterThree.attackOne = biohazard.attackOne;
                                    characterThree.abilityTwo = biohazard.abilityTwo;
                                    characterThree.attackThree = biohazard.attackThree;
                                    characterThree.abilityOne = biohazard.abilityOne;
                                    characterThree.abilityTwo = biohazard.abilityTwo;
                                    characterThree.abilityThree = biohazard.abilityThree;
                                    characterThree.hp = biohazard.hp;
                                    characterThree.arm = biohazard.arm;
                                    characterThree.atk = biohazard.atk;
                                    characterThree.bat = biohazard.bat;
                                    characterThree.dat = biohazard.dat;
                                    characterThree.active = biohazard.active;
                                    characterThree.picked = biohazard.picked;

                                    characterOneAttacksSmall.attackOneDescriptionChooseYourCharacter = biohazardAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                    characterOneAttacksSmall.attackTwoDescriptionChooseYourCharacter = biohazardAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterOneAttacksSmall.attackThreeDescriptionChooseYourCharacter = biohazardAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterOneAbilitiesSmall.attackOneDescriptionChooseYourCharacter = biohazardAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                    characterOneAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = biohazardAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterOneAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = biohazardAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAttack.attackOneDescriptionChooseYourCharacter = biohazardAttacks.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackTwoDescriptionChooseYourCharacter = biohazardAttacks.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackThreeDescriptionChooseYourCharacter = biohazardAttacks.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilities.attackOneDescriptionChooseYourCharacter = biohazardAbilities.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackTwoDescriptionChooseYourCharacter = biohazardAbilities.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackThreeDescriptionChooseYourCharacter = biohazardAbilities.attackThreeDescriptionChooseYourCharacter;
                                }
                            }
                        }

                        characterSlots++;
                        chooseCharacter.currentPositionX--;
                    }
                    else if (chooseCharacter.currentPositionX == 6) {
                        zip.picked = true;
                        zip.active = true;

                        active.name = zip.name;
                        active.effect = zip.effect;
                        active.fighterClass = zip.fighterClass;
                        active.attackOne = zip.attackOne;
                        active.abilityTwo = zip.abilityTwo;
                        active.attackThree = zip.attackThree;
                        active.abilityOne = zip.abilityOne;
                        active.abilityTwo = zip.abilityTwo;
                        active.abilityThree = zip.abilityThree;
                        active.hp = zip.hp;
                        active.arm = zip.arm;
                        active.atk = zip.atk;
                        active.bat = zip.bat;
                        active.dat = zip.dat;
                        active.active = zip.active;
                        active.picked = zip.picked;

                        if (characterOne.name == "" ) {
                            characterOne.name = zip.name;
                            characterOne.effect = zip.effect;
                            characterOne.fighterClass = zip.fighterClass;
                            characterOne.attackOne = zip.attackOne;
                            characterOne.abilityTwo = zip.abilityTwo;
                            characterOne.attackThree = zip.attackThree;
                            characterOne.abilityOne = zip.abilityOne;
                            characterOne.abilityTwo = zip.abilityTwo;
                            characterOne.abilityThree = zip.abilityThree;
                            characterOne.hp = zip.hp;
                            characterOne.arm = zip.arm;
                            characterOne.atk = zip.atk;
                            characterOne.bat = zip.bat;
                            characterOne.dat = zip.dat;
                            characterOne.active = zip.active;
                            characterOne.picked = zip.picked;

                            characterOneAttacksSmall.attackOneDescriptionChooseYourCharacter = zipAttacksSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackTwoDescriptionChooseYourCharacter = zipAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackThreeDescriptionChooseYourCharacter = zipAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilitiesSmall.attackOneDescriptionChooseYourCharacter = zipAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = zipAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = zipAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAttack.attackOneDescriptionChooseYourCharacter = zipAttacks.attackOneDescriptionChooseYourCharacter;
                            characterOneAttack.attackTwoDescriptionChooseYourCharacter = zipAttacks.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttack.attackThreeDescriptionChooseYourCharacter = zipAttacks.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilities.attackOneDescriptionChooseYourCharacter = zipAbilities.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilities.attackTwoDescriptionChooseYourCharacter = zipAbilities.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilities.attackThreeDescriptionChooseYourCharacter = zipAbilities.attackThreeDescriptionChooseYourCharacter;
                        }
                        else {
                            if (characterTwo.name == "") {
                                characterTwo.name = zip.name;
                                characterTwo.effect = zip.effect;
                                characterTwo.fighterClass = zip.fighterClass;
                                characterTwo.attackOne = zip.attackOne;
                                characterTwo.abilityTwo = zip.abilityTwo;
                                characterTwo.attackThree = zip.attackThree;
                                characterTwo.abilityOne = zip.abilityOne;
                                characterTwo.abilityTwo = zip.abilityTwo;
                                characterTwo.abilityThree = zip.abilityThree;
                                characterTwo.hp = zip.hp;
                                characterTwo.arm = zip.arm;
                                characterTwo.atk = zip.atk;
                                characterTwo.bat = zip.bat;
                                characterTwo.dat = zip.dat;
                                characterTwo.active = zip.active;
                                characterTwo.picked = zip.picked;

                                characterTwoAttacksSmall.attackOneDescriptionChooseYourCharacter = zipAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackTwoDescriptionChooseYourCharacter = zipAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackThreeDescriptionChooseYourCharacter = zipAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilitiesSmall.attackOneDescriptionChooseYourCharacter = zipAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = zipAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = zipAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAttack.attackOneDescriptionChooseYourCharacter = zipAttacks.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttack.attackTwoDescriptionChooseYourCharacter = zipAttacks.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttack.attackThreeDescriptionChooseYourCharacter = zipAttacks.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilities.attackOneDescriptionChooseYourCharacter = zipAbilities.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackTwoDescriptionChooseYourCharacter = zipAbilities.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackThreeDescriptionChooseYourCharacter = zipAbilities.attackThreeDescriptionChooseYourCharacter;
                            }
                            else {
                                if (characterThree.name == "") {
                                    characterThree.name = zip.name;
                                    characterThree.effect = zip.effect;
                                    characterThree.fighterClass = zip.fighterClass;
                                    characterThree.attackOne = zip.attackOne;
                                    characterThree.abilityTwo = zip.abilityTwo;
                                    characterThree.attackThree = zip.attackThree;
                                    characterThree.abilityOne = zip.abilityOne;
                                    characterThree.abilityTwo = zip.abilityTwo;
                                    characterThree.abilityThree = zip.abilityThree;
                                    characterThree.hp = zip.hp;
                                    characterThree.arm = zip.arm;
                                    characterThree.atk = zip.atk;
                                    characterThree.bat = zip.bat;
                                    characterThree.dat = zip.dat;
                                    characterThree.active = zip.active;
                                    characterThree.picked = zip.picked;

                                    characterThreeAttacksSmall.attackOneDescriptionChooseYourCharacter = zipAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackTwoDescriptionChooseYourCharacter = zipAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackThreeDescriptionChooseYourCharacter = zipAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilitiesSmall.attackOneDescriptionChooseYourCharacter = zipAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = zipAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = zipAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAttack.attackOneDescriptionChooseYourCharacter = zipAttacks.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackTwoDescriptionChooseYourCharacter = zipAttacks.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackThreeDescriptionChooseYourCharacter = zipAttacks.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilities.attackOneDescriptionChooseYourCharacter = zipAbilities.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackTwoDescriptionChooseYourCharacter = zipAbilities.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackThreeDescriptionChooseYourCharacter = zipAbilities.attackThreeDescriptionChooseYourCharacter;
                                }
                            }
                        }

                        characterSlots++;
                        chooseCharacter.currentPositionX--;
                    }
                    else if (chooseCharacter.currentPositionX == 7) {
                        plagy.picked = true;
                        plagy.active = true;

                        active.name = plagy.name;
                        active.effect = plagy.effect;
                        active.fighterClass = plagy.fighterClass;
                        active.attackOne = plagy.attackOne;
                        active.abilityTwo = plagy.abilityTwo;
                        active.attackThree = plagy.attackThree;
                        active.abilityOne = plagy.abilityOne;
                        active.abilityTwo = plagy.abilityTwo;
                        active.abilityThree = plagy.abilityThree;
                        active.hp = plagy.hp;
                        active.arm = plagy.arm;
                        active.atk = plagy.atk;
                        active.bat = plagy.bat;
                        active.dat = plagy.dat;
                        active.active = plagy.active;
                        active.picked = plagy.picked;

                        if (characterOne.name == "" ) {
                            characterOne.name = plagy.name;
                            characterOne.effect = plagy.effect;
                            characterOne.fighterClass = plagy.fighterClass;
                            characterOne.attackOne = plagy.attackOne;
                            characterOne.abilityTwo = plagy.abilityTwo;
                            characterOne.attackThree = plagy.attackThree;
                            characterOne.abilityOne = plagy.abilityOne;
                            characterOne.abilityTwo = plagy.abilityTwo;
                            characterOne.abilityThree = plagy.abilityThree;
                            characterOne.hp = plagy.hp;
                            characterOne.arm = plagy.arm;
                            characterOne.atk = plagy.atk;
                            characterOne.bat = plagy.bat;
                            characterOne.dat = plagy.dat;
                            characterOne.active = plagy.active;
                            characterOne.picked = plagy.picked;

                            characterOneAttacksSmall.attackOneDescriptionChooseYourCharacter = plagyAttacksSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackTwoDescriptionChooseYourCharacter = plagyAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackThreeDescriptionChooseYourCharacter = plagyAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilitiesSmall.attackOneDescriptionChooseYourCharacter = plagyAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = plagyAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = plagyAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAttack.attackOneDescriptionChooseYourCharacter = plagyAttacks.attackOneDescriptionChooseYourCharacter;
                            characterOneAttack.attackTwoDescriptionChooseYourCharacter = plagyAttacks.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttack.attackThreeDescriptionChooseYourCharacter = plagyAttacks.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilities.attackOneDescriptionChooseYourCharacter = plagyAbilities.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilities.attackTwoDescriptionChooseYourCharacter = plagyAbilities.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilities.attackThreeDescriptionChooseYourCharacter = plagyAbilities.attackThreeDescriptionChooseYourCharacter;
                        }
                        else {
                            if (characterTwo.name == "") {
                                characterTwo.name = plagy.name;
                                characterTwo.effect = plagy.effect;
                                characterTwo.fighterClass = plagy.fighterClass;
                                characterTwo.attackOne = plagy.attackOne;
                                characterTwo.abilityTwo = plagy.abilityTwo;
                                characterTwo.attackThree = plagy.attackThree;
                                characterTwo.abilityOne = plagy.abilityOne;
                                characterTwo.abilityTwo = plagy.abilityTwo;
                                characterTwo.abilityThree = plagy.abilityThree;
                                characterTwo.hp = plagy.hp;
                                characterTwo.arm = plagy.arm;
                                characterTwo.atk = plagy.atk;
                                characterTwo.bat = plagy.bat;
                                characterTwo.dat = plagy.dat;
                                characterTwo.active = plagy.active;
                                characterTwo.picked = plagy.picked;

                                characterTwoAttacksSmall.attackOneDescriptionChooseYourCharacter = plagyAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackTwoDescriptionChooseYourCharacter = plagyAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackThreeDescriptionChooseYourCharacter = plagyAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilitiesSmall.attackOneDescriptionChooseYourCharacter = plagyAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = plagyAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = plagyAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAttack.attackOneDescriptionChooseYourCharacter = plagyAttacks.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttack.attackTwoDescriptionChooseYourCharacter = plagyAttacks.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttack.attackThreeDescriptionChooseYourCharacter = plagyAttacks.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilities.attackOneDescriptionChooseYourCharacter = plagyAbilities.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackTwoDescriptionChooseYourCharacter = plagyAbilities.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackThreeDescriptionChooseYourCharacter = plagyAbilities.attackThreeDescriptionChooseYourCharacter;
                            }
                            else {
                                if (characterThree.name == "") {
                                    characterThree.name = plagy.name;
                                    characterThree.effect = plagy.effect;
                                    characterThree.fighterClass = plagy.fighterClass;
                                    characterThree.attackOne = plagy.attackOne;
                                    characterThree.abilityTwo = plagy.abilityTwo;
                                    characterThree.attackThree = plagy.attackThree;
                                    characterThree.abilityOne = plagy.abilityOne;
                                    characterThree.abilityTwo = plagy.abilityTwo;
                                    characterThree.abilityThree = plagy.abilityThree;
                                    characterThree.hp = plagy.hp;
                                    characterThree.arm = plagy.arm;
                                    characterThree.atk = plagy.atk;
                                    characterThree.bat = plagy.bat;
                                    characterThree.dat = plagy.dat;
                                    characterThree.active = plagy.active;
                                    characterThree.picked = plagy.picked;

                                    characterThreeAttacksSmall.attackOneDescriptionChooseYourCharacter = plagyAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackTwoDescriptionChooseYourCharacter = plagyAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackThreeDescriptionChooseYourCharacter = plagyAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilitiesSmall.attackOneDescriptionChooseYourCharacter = plagyAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = plagyAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = plagyAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAttack.attackOneDescriptionChooseYourCharacter = plagyAttacks.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackTwoDescriptionChooseYourCharacter = plagyAttacks.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackThreeDescriptionChooseYourCharacter = plagyAttacks.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilities.attackOneDescriptionChooseYourCharacter = plagyAbilities.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackTwoDescriptionChooseYourCharacter = plagyAbilities.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackThreeDescriptionChooseYourCharacter = plagyAbilities.attackThreeDescriptionChooseYourCharacter;
                                }
                            }
                        }

                        characterSlots++;
                        chooseCharacter.currentPositionX--;
                    }
                    else if (chooseCharacter.currentPositionX == 8) {
                        amper.picked = true;
                        amper.active = true;

                        active.name = amper.name;
                        active.effect = amper.effect;
                        active.fighterClass = amper.fighterClass;
                        active.attackOne = amper.attackOne;
                        active.abilityTwo = amper.abilityTwo;
                        active.attackThree = amper.attackThree;
                        active.abilityOne = amper.abilityOne;
                        active.abilityTwo = amper.abilityTwo;
                        active.abilityThree = amper.abilityThree;
                        active.hp = amper.hp;
                        active.arm = amper.arm;
                        active.atk = amper.atk;
                        active.bat = amper.bat;
                        active.dat = amper.dat;
                        active.active = amper.active;
                        active.picked = amper.picked;

                        if (characterOne.name == "" ) {
                            characterOne.name = amper.name;
                            characterOne.effect = amper.effect;
                            characterOne.fighterClass = amper.fighterClass;
                            characterOne.attackOne = amper.attackOne;
                            characterOne.abilityTwo = amper.abilityTwo;
                            characterOne.attackThree = amper.attackThree;
                            characterOne.abilityOne = amper.abilityOne;
                            characterOne.abilityTwo = amper.abilityTwo;
                            characterOne.abilityThree = amper.abilityThree;
                            characterOne.hp = amper.hp;
                            characterOne.arm = amper.arm;
                            characterOne.atk = amper.atk;
                            characterOne.bat = amper.bat;
                            characterOne.dat = amper.dat;
                            characterOne.active = amper.active;
                            characterOne.picked = amper.picked;

                            characterOneAttacksSmall.attackOneDescriptionChooseYourCharacter = amperAttacksSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackTwoDescriptionChooseYourCharacter = amperAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttacksSmall.attackThreeDescriptionChooseYourCharacter = amperAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilitiesSmall.attackOneDescriptionChooseYourCharacter = amperAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = amperAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = amperAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                            characterOneAttack.attackOneDescriptionChooseYourCharacter = amperAttacks.attackOneDescriptionChooseYourCharacter;
                            characterOneAttack.attackTwoDescriptionChooseYourCharacter = amperAttacks.attackTwoDescriptionChooseYourCharacter;
                            characterOneAttack.attackThreeDescriptionChooseYourCharacter = amperAttacks.attackThreeDescriptionChooseYourCharacter;

                            characterOneAbilities.attackOneDescriptionChooseYourCharacter = amperAbilities.attackOneDescriptionChooseYourCharacter;
                            characterOneAbilities.attackTwoDescriptionChooseYourCharacter = amperAbilities.attackTwoDescriptionChooseYourCharacter;
                            characterOneAbilities.attackThreeDescriptionChooseYourCharacter = amperAbilities.attackThreeDescriptionChooseYourCharacter;
                        }
                        else {
                            if (characterTwo.name == "") {
                                characterTwo.name = amper.name;
                                characterTwo.effect = amper.effect;
                                characterTwo.fighterClass = amper.fighterClass;
                                characterTwo.attackOne = amper.attackOne;
                                characterTwo.abilityTwo = amper.abilityTwo;
                                characterTwo.attackThree = amper.attackThree;
                                characterTwo.abilityOne = amper.abilityOne;
                                characterTwo.abilityTwo = amper.abilityTwo;
                                characterTwo.abilityThree = amper.abilityThree;
                                characterTwo.hp = amper.hp;
                                characterTwo.arm = amper.arm;
                                characterTwo.atk = amper.atk;
                                characterTwo.bat = amper.bat;
                                characterTwo.dat = amper.dat;
                                characterTwo.active = amper.active;
                                characterTwo.picked = amper.picked;

                                characterTwoAttacksSmall.attackOneDescriptionChooseYourCharacter = amperAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackTwoDescriptionChooseYourCharacter = amperAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttacksSmall.attackThreeDescriptionChooseYourCharacter = amperAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilitiesSmall.attackOneDescriptionChooseYourCharacter = amperAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = amperAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = amperAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAttack.attackOneDescriptionChooseYourCharacter = amperAttacks.attackOneDescriptionChooseYourCharacter;
                                characterTwoAttack.attackTwoDescriptionChooseYourCharacter = amperAttacks.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAttack.attackThreeDescriptionChooseYourCharacter = amperAttacks.attackThreeDescriptionChooseYourCharacter;

                                characterTwoAbilities.attackOneDescriptionChooseYourCharacter = amperAbilities.attackOneDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackTwoDescriptionChooseYourCharacter = amperAbilities.attackTwoDescriptionChooseYourCharacter;
                                characterTwoAbilities.attackThreeDescriptionChooseYourCharacter = amperAbilities.attackThreeDescriptionChooseYourCharacter;
                            }
                            else {
                                if (characterThree.name == "") {
                                    characterThree.name = amper.name;
                                    characterThree.effect = amper.effect;
                                    characterThree.fighterClass = amper.fighterClass;
                                    characterThree.attackOne = amper.attackOne;
                                    characterThree.abilityTwo = amper.abilityTwo;
                                    characterThree.attackThree = amper.attackThree;
                                    characterThree.abilityOne = amper.abilityOne;
                                    characterThree.abilityTwo = amper.abilityTwo;
                                    characterThree.abilityThree = amper.abilityThree;
                                    characterThree.hp = amper.hp;
                                    characterThree.arm = amper.arm;
                                    characterThree.atk = amper.atk;
                                    characterThree.bat = amper.bat;
                                    characterThree.dat = amper.dat;
                                    characterThree.active = amper.active;
                                    characterThree.picked = amper.picked;

                                    characterThreeAttacksSmall.attackOneDescriptionChooseYourCharacter = amperAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackTwoDescriptionChooseYourCharacter = amperAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttacksSmall.attackThreeDescriptionChooseYourCharacter = amperAttacksSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilitiesSmall.attackOneDescriptionChooseYourCharacter = amperAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackTwoDescriptionChooseYourCharacter = amperAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilitiesSmall.attackThreeDescriptionChooseYourCharacter = amperAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAttack.attackOneDescriptionChooseYourCharacter = amperAttacks.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackTwoDescriptionChooseYourCharacter = amperAttacks.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAttack.attackThreeDescriptionChooseYourCharacter = amperAttacks.attackThreeDescriptionChooseYourCharacter;

                                    characterThreeAbilities.attackOneDescriptionChooseYourCharacter = amperAbilities.attackOneDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackTwoDescriptionChooseYourCharacter = amperAbilities.attackTwoDescriptionChooseYourCharacter;
                                    characterThreeAbilities.attackThreeDescriptionChooseYourCharacter = amperAbilities.attackThreeDescriptionChooseYourCharacter;
                                }
                            }
                        }

                        characterSlots++;
                        chooseCharacter.currentPositionX--;
                    }
                } // E

                // clear
                Sleep(10);
                system("cls");

                //prepare re-renders
                //choose character change attacks and abilities
                if (chooseCharacter.currentPositionX == 1 && chooseCharacter.currentPositionY == 1) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << infernoAttacks.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << infernoAttacks.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << infernoAttacks.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 2 && chooseCharacter.currentPositionY == 1) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << atlasAttacks.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << atlasAttacks.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << atlasAttacks.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 3 && chooseCharacter.currentPositionY == 1) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << hanibalAttacks.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << hanibalAttacks.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << hanibalAttacks.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 4 && chooseCharacter.currentPositionY == 1) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << monoIAttacks.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << monoIAttacks.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << monoIAttacks.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 5 && chooseCharacter.currentPositionY == 1) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << biohazardAttacks.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << biohazardAttacks.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << biohazardAttacks.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 6 && chooseCharacter.currentPositionY == 1) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << zipAttacks.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << zipAttacks.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << zipAttacks.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 7 && chooseCharacter.currentPositionY == 1) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << plagyAttacks.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << plagyAttacks.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << plagyAttacks.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 8 && chooseCharacter.currentPositionY == 1) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << amperAttacks.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << amperAttacks.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << amperAttacks.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }

                if (chooseCharacter.currentPositionX == 1 && chooseCharacter.currentPositionY == 2) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << infernoAbilities.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << infernoAbilities.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << infernoAbilities.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 2 && chooseCharacter.currentPositionY == 2) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << atlasAbilities.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << atlasAbilities.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << atlasAbilities.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 3 && chooseCharacter.currentPositionY == 2) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << hanibalAbilities.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << hanibalAbilities.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << hanibalAbilities.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 4 && chooseCharacter.currentPositionY == 2) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << monoIAbilities.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << monoIAbilities.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << monoIAbilities.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 5 && chooseCharacter.currentPositionY == 2) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << biohazardAbilities.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << biohazardAbilities.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << biohazardAbilities.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 6 && chooseCharacter.currentPositionY == 2) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << zipAbilities.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << zipAbilities.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << zipAbilities.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 7 && chooseCharacter.currentPositionY == 2) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << plagyAbilities.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << plagyAbilities.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << plagyAbilities.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }
                else if (chooseCharacter.currentPositionX == 8 && chooseCharacter.currentPositionY == 2) {
                    file.open("Visuals/chooseCharacterAttackOne.txt");
                    clearFile("Visuals/chooseCharacterAttackOne.txt");
                    file << amperAbilities.attackOneDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackTwo.txt");
                    clearFile("Visuals/chooseCharacterAttackTwo.txt");
                    file << amperAbilities.attackTwoDescriptionChooseYourCharacter;
                    file.close();

                    file.open("Visuals/chooseCharacterAttackThree.txt");
                    clearFile("Visuals/chooseCharacterAttackThree.txt");
                    file << amperAbilities.attackThreeDescriptionChooseYourCharacter;
                    file.close();
                }

                //choose character attack or ability
                if (chooseCharacter.currentPositionY == 1) {
                    chooseCharacterAbilityOrAttackString = " Attacks ";
                } else if (chooseCharacter.currentPositionY == 2) {
                    chooseCharacterAbilityOrAttackString = "Abilities";
                }


                //change screen if all characters are chosen and that will stop the render
                if (characterSlots == 3) {
                    whatScreenWeSee = "Map";
                    firstTime = true;
                }

                // arrow colour check
                if (inferno.picked == true) {
                    lowestPointInChoosingHeroes = 2;
                    if (atlas.picked == true) {
                        lowestPointInChoosingHeroes = 3;
                        if (hanibal.picked == true) {
                            lowestPointInChoosingHeroes = 4;
                        }
                    }
                }

                if (amper.picked == true) {
                    highestPointInChoosingHeroes = 7;
                    if (plagy.picked == true) {
                        highestPointInChoosingHeroes = 6;
                        if (zip.picked == true) {
                            highestPointInChoosingHeroes = 5;
                        }
                    }
                }

                //Round up the numbers
                if (chooseCharacter.currentPositionY >= 2) {
                    chooseCharacter.currentPositionY = 2;
                } else if (chooseCharacter.currentPositionY <= 1) {
                    chooseCharacter.currentPositionY = 1;
                }

                if (chooseCharacter.currentPositionX >= highestPointInChoosingHeroes) {
                    chooseCharacter.currentPositionX = highestPointInChoosingHeroes;
                } else if (chooseCharacter.currentPositionX <= lowestPointInChoosingHeroes) {
                    chooseCharacter.currentPositionX = lowestPointInChoosingHeroes;
                }

                // Re-render
                if (chooseCharacter.currentPositionX <= 1) { /* class, name, hp, arm, atk, bat, dat */
                    renderChooseYourHeroes(inferno.fighterClass, inferno.name, inferno.hp, inferno.arm, inferno.atk,
                                           inferno.bat, inferno.dat);
                } else if (chooseCharacter.currentPositionX == 2) {
                    renderChooseYourHeroes(atlas.fighterClass, atlas.name, atlas.hp, atlas.arm, atlas.atk, atlas.bat,
                                           atlas.dat);
                } else if (chooseCharacter.currentPositionX == 3) {
                    renderChooseYourHeroes(hanibal.fighterClass, hanibal.name, hanibal.hp, hanibal.arm, hanibal.atk,
                                           hanibal.bat, hanibal.dat);
                } else if (chooseCharacter.currentPositionX == 4) {
                    renderChooseYourHeroes(monoI.fighterClass, monoI.name, monoI.hp, monoI.arm, monoI.atk, monoI.bat,
                                           monoI.dat);
                } else if (chooseCharacter.currentPositionX == 5) {
                    renderChooseYourHeroes(biohazard.fighterClass, biohazard.name, biohazard.hp, biohazard.arm,
                                           biohazard.atk, biohazard.bat, biohazard.dat);
                } else if (chooseCharacter.currentPositionX == 6) {
                    renderChooseYourHeroes(zip.fighterClass, zip.name, zip.hp, zip.arm, zip.atk, zip.bat, zip.dat);
                } else if (chooseCharacter.currentPositionX == 7) {
                    renderChooseYourHeroes(plagy.fighterClass, plagy.name, plagy.hp, plagy.arm, plagy.atk, plagy.bat,
                                           plagy.dat);
                } else if (chooseCharacter.currentPositionX >= 8) {
                    renderChooseYourHeroes(amper.fighterClass, amper.name, amper.hp, amper.arm, amper.atk, amper.bat,
                                           amper.dat);
                }
            }
        } // done

        while (whatScreenWeSee == "Tutorial") {}

        while (whatScreenWeSee == "Battle Scene") {
            battleEnded = false;
                filePath = "Sounds/Escape the Subway.wav";
                thread musicThread(playMusic, filePath.c_str());
                system("cls");
    resetWhile:
            while (battleEnded != true) {
                if (firstTime == true) {
                    //Generate enemy
                    switch (currentLevel) {
                        case 2: {
                            enemy.name = subject079.name;
                            enemy.hp = subject079.hp;
                            enemy.arm = subject079.arm;
                            enemy.atk = subject079.atk;
                            enemy.bat = subject079.bat;
                            enemy.dat = subject079.dat;
                            enemy.attackOne = subject079.attackOne;
                            enemy.attackTwo = subject079.attackTwo;
                            enemy.attackThree = subject079.attackThree;
                            enemy.abilityOne = subject079.abilityOne;
                            enemy.abilityTwo = subject079.abilityTwo;
                            enemy.abilityThree = subject079.abilityThree;

                            break;
                        }

                        case 3: {
                            enemy.name = X001.name;
                            enemy.hp = X001.hp;
                            enemy.arm = X001.arm;
                            enemy.atk = X001.atk;
                            enemy.bat = X001.bat;
                            enemy.dat = X001.dat;
                            enemy.attackOne = X001.attackOne;
                            enemy.attackTwo = X001.attackTwo;
                            enemy.attackThree = X001.attackThree;
                            enemy.abilityOne = X001.abilityOne;
                            enemy.abilityTwo = X001.abilityTwo;
                            enemy.abilityThree = X001.abilityThree;

                            break;
                        }

                        case 5: {
                            enemy.name = BioMechSlasher.name;
                            enemy.hp = BioMechSlasher.hp;
                            enemy.arm = BioMechSlasher.arm;
                            enemy.atk = BioMechSlasher.atk;
                            enemy.bat = BioMechSlasher.bat;
                            enemy.dat = BioMechSlasher.dat;
                            enemy.attackOne = BioMechSlasher.attackOne;
                            enemy.attackTwo = BioMechSlasher.attackTwo;
                            enemy.attackThree = BioMechSlasher.attackThree;
                            enemy.abilityOne = BioMechSlasher.abilityOne;
                            enemy.abilityTwo = BioMechSlasher.abilityTwo;
                            enemy.abilityThree = BioMechSlasher.abilityThree;

                            break;
                        }

                        case 6: {
                            enemy.name = VortexDrone.name;
                            enemy.hp = VortexDrone.hp;
                            enemy.arm = VortexDrone.arm;
                            enemy.atk = VortexDrone.atk;
                            enemy.bat = VortexDrone.bat;
                            enemy.dat = VortexDrone.dat;
                            enemy.attackOne = VortexDrone.attackOne;
                            enemy.attackTwo = VortexDrone.attackTwo;
                            enemy.attackThree = VortexDrone.attackThree;
                            enemy.abilityOne = VortexDrone.abilityOne;
                            enemy.abilityTwo = VortexDrone.abilityTwo;
                            enemy.abilityThree = VortexDrone.abilityThree;

                            break;
                        }

                        case 9: {
                            enemy.name = Cyberviper.name;
                            enemy.hp = Cyberviper.hp;
                            enemy.arm = Cyberviper.arm;
                            enemy.atk = Cyberviper.atk;
                            enemy.bat = Cyberviper.bat;
                            enemy.dat = Cyberviper.dat;
                            enemy.attackOne = Cyberviper.attackOne;
                            enemy.attackTwo = Cyberviper.attackTwo;
                            enemy.attackThree = Cyberviper.attackThree;
                            enemy.abilityOne = Cyberviper.abilityOne;
                            enemy.abilityTwo = Cyberviper.abilityTwo;
                            enemy.abilityThree = Cyberviper.abilityThree;

                            break;
                        }

                        case 10: {
                            enemy.name = Techgeist.name;
                            enemy.hp = Techgeist.hp;
                            enemy.arm = Techgeist.arm;
                            enemy.atk = Techgeist.atk;
                            enemy.bat = Techgeist.bat;
                            enemy.dat = Techgeist.dat;
                            enemy.attackOne = Techgeist.attackOne;
                            enemy.attackTwo = Techgeist.attackTwo;
                            enemy.attackThree = Techgeist.attackThree;
                            enemy.abilityOne = Techgeist.abilityOne;
                            enemy.abilityTwo = Techgeist.abilityTwo;
                            enemy.abilityThree = Techgeist.abilityThree;

                            break;
                        }

                        case 11: {
                            enemy.name = Pyrofreak.name;
                            enemy.hp = Pyrofreak.hp;
                            enemy.arm = Pyrofreak.arm;
                            enemy.atk = Pyrofreak.atk;
                            enemy.bat = Pyrofreak.bat;
                            enemy.dat = Pyrofreak.dat;
                            enemy.attackOne = Pyrofreak.attackOne;
                            enemy.attackTwo = Pyrofreak.attackTwo;
                            enemy.attackThree = Pyrofreak.attackThree;
                            enemy.abilityOne = Pyrofreak.abilityOne;
                            enemy.abilityTwo = Pyrofreak.abilityTwo;
                            enemy.abilityThree = Pyrofreak.abilityThree;

                            break;
                        }

                        case 13: {
                            enemy.name = Shredder.name;
                            enemy.hp = Shredder.hp;
                            enemy.arm = Shredder.arm;
                            enemy.atk = Shredder.atk;
                            enemy.bat = Shredder.bat;
                            enemy.dat = Shredder.dat;
                            enemy.attackOne = Shredder.attackOne;
                            enemy.attackTwo = Shredder.attackTwo;
                            enemy.attackThree = Shredder.attackThree;
                            enemy.abilityOne = Shredder.abilityOne;
                            enemy.abilityTwo = Shredder.abilityTwo;
                            enemy.abilityThree = Shredder.abilityThree;

                            break;
                        }

                        case 14: {
                            enemy.name = SAM.name;
                            enemy.hp = SAM.hp;
                            enemy.arm = SAM.arm;
                            enemy.atk = SAM.atk;
                            enemy.bat = SAM.bat;
                            enemy.dat = SAM.dat;
                            enemy.attackOne = SAM.attackOne;
                            enemy.attackTwo = SAM.attackTwo;
                            enemy.attackThree = SAM.attackThree;
                            enemy.abilityOne = SAM.abilityOne;
                            enemy.abilityTwo = SAM.abilityTwo;
                            enemy.abilityThree = SAM.abilityThree;

                            break;
                        }

                        case 17: {
                            enemy.name = NanoZombie.name;
                            enemy.hp = NanoZombie.hp;
                            enemy.arm = NanoZombie.arm;
                            enemy.atk = NanoZombie.atk;
                            enemy.bat = NanoZombie.bat;
                            enemy.dat = NanoZombie.dat;
                            enemy.attackOne = NanoZombie.attackOne;
                            enemy.attackTwo = NanoZombie.attackTwo;
                            enemy.attackThree = NanoZombie.attackThree;
                            enemy.abilityOne = NanoZombie.abilityOne;
                            enemy.abilityTwo = NanoZombie.abilityTwo;
                            enemy.abilityThree = NanoZombie.abilityThree;

                            break;
                        }

                        case 18: {
                            enemy.name = PlasmaticEnforcer.name;
                            enemy.hp = PlasmaticEnforcer.hp;
                            enemy.arm = PlasmaticEnforcer.arm;
                            enemy.atk = PlasmaticEnforcer.atk;
                            enemy.bat = PlasmaticEnforcer.bat;
                            enemy.dat = PlasmaticEnforcer.dat;
                            enemy.attackOne = PlasmaticEnforcer.attackOne;
                            enemy.attackTwo = PlasmaticEnforcer.attackTwo;
                            enemy.attackThree = PlasmaticEnforcer.attackThree;
                            enemy.abilityOne = PlasmaticEnforcer.abilityOne;
                            enemy.abilityTwo = PlasmaticEnforcer.abilityTwo;
                            enemy.abilityThree = PlasmaticEnforcer.abilityThree;

                            break;
                        }

                        case 19: {
                            enemy.name = ShadowbladeBalerina.name;
                            enemy.hp = ShadowbladeBalerina.hp;
                            enemy.arm = ShadowbladeBalerina.arm;
                            enemy.atk = ShadowbladeBalerina.atk;
                            enemy.bat = ShadowbladeBalerina.bat;
                            enemy.dat = ShadowbladeBalerina.dat;
                            enemy.attackOne = ShadowbladeBalerina.attackOne;
                            enemy.attackTwo = ShadowbladeBalerina.attackTwo;
                            enemy.attackThree = ShadowbladeBalerina.attackThree;
                            enemy.abilityOne = ShadowbladeBalerina.abilityOne;
                            enemy.abilityTwo = ShadowbladeBalerina.abilityTwo;
                            enemy.abilityThree = ShadowbladeBalerina.abilityThree;

                            break;
                        }

                        case 20: {
                            enemy.name = ToxinWraith.name;
                            enemy.hp = ToxinWraith.hp;
                            enemy.arm = ToxinWraith.arm;
                            enemy.atk = ToxinWraith.atk;
                            enemy.bat = ToxinWraith.bat;
                            enemy.dat = ToxinWraith.dat;
                            enemy.attackOne = ToxinWraith.attackOne;
                            enemy.attackTwo = ToxinWraith.attackTwo;
                            enemy.attackThree = ToxinWraith.attackThree;
                            enemy.abilityOne = ToxinWraith.abilityOne;
                            enemy.abilityTwo = ToxinWraith.abilityTwo;
                            enemy.abilityThree = ToxinWraith.abilityThree;

                            break;
                        }

                        case 22: {
                            enemy.name = ScythebladeAugment.name;
                            enemy.hp = ScythebladeAugment.hp;
                            enemy.arm = ScythebladeAugment.arm;
                            enemy.atk = ScythebladeAugment.atk;
                            enemy.bat = ScythebladeAugment.bat;
                            enemy.dat = ScythebladeAugment.dat;
                            enemy.attackOne = ScythebladeAugment.attackOne;
                            enemy.attackTwo = ScythebladeAugment.attackTwo;
                            enemy.attackThree = ScythebladeAugment.attackThree;
                            enemy.abilityOne = ScythebladeAugment.abilityOne;
                            enemy.abilityTwo = ScythebladeAugment.abilityTwo;
                            enemy.abilityThree = ScythebladeAugment.abilityThree;

                            break;
                        }

                        case 23: {
                            enemy.name = MutagenicBrute.name;
                            enemy.hp = MutagenicBrute.hp;
                            enemy.arm = MutagenicBrute.arm;
                            enemy.atk = MutagenicBrute.atk;
                            enemy.bat = MutagenicBrute.bat;
                            enemy.dat = MutagenicBrute.dat;
                            enemy.attackOne = MutagenicBrute.attackOne;
                            enemy.attackTwo = MutagenicBrute.attackTwo;
                            enemy.attackThree = MutagenicBrute.attackThree;
                            enemy.abilityOne = MutagenicBrute.abilityOne;
                            enemy.abilityTwo = MutagenicBrute.abilityTwo;
                            enemy.abilityThree = MutagenicBrute.abilityThree;

                            break;
                        }

                        case 25: {
                            enemy.name = NeuralOverlord.name;
                            enemy.hp = NeuralOverlord.hp;
                            enemy.arm = NeuralOverlord.arm;
                            enemy.atk = NeuralOverlord.atk;
                            enemy.bat = NeuralOverlord.bat;
                            enemy.dat = NeuralOverlord.dat;
                            enemy.attackOne = NeuralOverlord.attackOne;
                            enemy.attackTwo = NeuralOverlord.attackTwo;
                            enemy.attackThree = NeuralOverlord.attackThree;
                            enemy.abilityOne = NeuralOverlord.abilityOne;
                            enemy.abilityTwo = NeuralOverlord.abilityTwo;
                            enemy.abilityThree = NeuralOverlord.abilityThree;

                            break;
                        }

                    }

                    // Generate the description
                    renderEnemyDescription("Visuals/Cutscenes/" + enemy.name + ".txt");
                    getch();

                    firstTime = false;
                }

                //round up numbers hero
                if (active.hp <= 0) {
                    active.hp = 0;
                }
                else if (active.arm <= 0) {
                    active.arm = 0;
                }
                else if (active.bat <= 0) {
                    active.bat = 0;
                }
                else if (active.dat <= 0) {
                    active.dat = 0;
                }

                //round up numbers enemy
                if (enemy.hp <= 0) {
                    enemy.hp = 0;
                }
                else if (enemy.arm <= 0) {
                    enemy.arm = 0;
                }
                else if (enemy.dat <= 0) {
                    enemy.dat = 0;
                }
                else if (enemy.bat <= 0) {
                    enemy.bat = 0;
                }


                // effects and shields
                if (shieldHpHero == 0) {
                    shieldActiveHero = false;
                }

                if (shieldActiveHero == false) {
                    shieldHpHero = 0;
                }

                if (shieldHpEnemy == 0) {
                    shieldActiveEnemy = false;
                }

                if (shieldActiveEnemy == false) {
                    shieldHpEnemy = 0;
                }

                if (activeCountdownHero > 0) {
                    activeCountdownHero--;
                } // add to countdown

                if (activeCountdownHero > 0) {  // activate effects
                    if (heroImmuneBurning > 0) {
                        active.effect = "Immune (Burning)";
                    }
                    else {
                        if (heroEffectBurningActive == true) {
                            damageDone = damageDone + 2;
                            active.effect = "Burning";
                        }
                    }


                    if (heroImmunePoison > 0) {
                        active.effect = "Immune (Poison)";
                    }
                    else {
                        if (heroEffectPoisonActive == true) {
                            damageDone++;
                            active.effect = "Poison";
                        }
                    }

                }
                if (heroImmuneDraining > 0) {
                    active.effect = "Immune (Drain)";
                }
                else {
                    if (heroEffectDrainingActive == true) {
                        effectDrainingCountdownHero++;
                        active.effect = "Draining";
                    }
                }
                if (active.effect == "Poison" || active.effect == "Immune (Poison)" || active.effect == "Burning" || active.effect == "Immune (Burning)" || active.effect == "Draining" || active.effect == "Immune (Drain)") {}
                else {
                    active.effect = "Clear";
                }


                // did hero fail
                system("cls");
                if (active.hp - damageDone <= 0 || active.hp <= 0) {

                }

                if (active.arm > 0) {
                    if (damageDone > active.arm) {
                        damageDone - active.arm;
                        active.hp = active.hp - damageDone;
                        active.arm = 0;
                        cout << "armour blocked a part     ";
                    }
                    else {
                        active.arm = active.arm - damageDone;
                        cout << "armour blocked all     ";
                    }
                }
                else  {
                    active.hp = active.hp - damageDone;
                    cout << "armour blocked none     ";
                }

                damageDone = 0;


                if (heroSkipsTheirTurn == false) {
                    while (battleWhoHasTheirTurn == "Hero") {
                        // clear
                        system("cls");
                        // First Render of hero
                        if (battleSceneSideAction == "Main") {
                            renderMainBattleScene();
                        } else if (battleSceneSideAction == "Attacks") {
                            renderAttacksBattleScene();
                        }
                        else if (battleSceneSideAction == "Items") {
                            renderItemsBattleScene();
                        } else if (battleSceneSideAction == "Ability") {
                            renderAbilitiesBattleScene();
                        }
                        else if (battleSceneSideAction == "Swap") {
                            renderSwapHeroBattleScene();
                        }

                        cout << "Y: " << battleScene.currentPositionY << "    X: " << battleScene.currentPositionX << "    Action:" << battleSceneSideAction << "   Pressed Key:" << pressedKey << "   Code: " << int(pressedKey) << "    Active: " << active.name << "    Name One: " << characterOne.name;

                        // Key get
                        pressedKey = getch();

                        // Key check
                        if (int(pressedKey) == 87 || int(pressedKey) == 119) { // W or w
                            battleScene.currentPositionX--;
                        } // W or w
                        else if (int(pressedKey) == 83 || int(pressedKey) == 115) { // S or s
                            battleScene.currentPositionX++;
                        } // S or s
                        else if (int(pressedKey) == 65 || int(pressedKey) == 97) { // A or a
                            battleScene.currentPositionY--;
                        } // A or a
                        else if (int(pressedKey) == 68 || int(pressedKey) == 100) { // D or d
                            battleScene.currentPositionY++;
                        } // D or d
                        else if (int(pressedKey) == 69 || int(pressedKey) == 101) { // E or e

                            if (battleSceneSideAction == "Main") {
                                if (battleScene.currentPositionY == 1 && battleScene.currentPositionX == 1) {
                                    battleSceneSideAction = "Attacks";
                                    battleScene.currentPositionY = 1;
                                    battleScene.currentPositionX = 1;
                                } else if (battleScene.currentPositionY == 1 && battleScene.currentPositionX == 2) {
                                    battleSceneSideAction = "Items";
                                    battleScene.currentPositionY = 1;
                                    battleScene.currentPositionX = 1;
                                } else if (battleScene.currentPositionY == 1 && battleScene.currentPositionX == 3) {
                                    battleSceneSideAction = "Ability";
                                    battleScene.currentPositionY = 1;
                                    battleScene.currentPositionX = 1;
                                } else if (battleScene.currentPositionY == 1 && battleScene.currentPositionX == 4) {
                                    battleSceneSideAction = "Swap";
                                    battleScene.currentPositionY = 1;
                                    battleScene.currentPositionX = 1;
                                }
                            }
                            else if (battleSceneSideAction == "Attacks") {
                                if (battleScene.currentPositionX == 1 && battleScene.currentPositionY == 1) {
                                    battleSceneSideAction = "Main";
                                } else {
                                    HeroCheckAttack();
                                    battleWhoHasTheirTurn = "Enemy";
                                }
                            }
                            else if (battleSceneSideAction == "Items") {
                                if (battleScene.currentPositionX == 1 && battleScene.currentPositionY == 1) {
                                    battleSceneSideAction = "Main";
                                }
                            }
                            else if (battleSceneSideAction == "Ability") {
                                if (battleScene.currentPositionX == 1 && battleScene.currentPositionY == 1) {
                                    battleSceneSideAction = "Main";
                                }
                            }
                            else if (battleSceneSideAction == "Swap") {
                                if (battleScene.currentPositionX == 1 && battleScene.currentPositionY == 1) {
                                    battleSceneSideAction = "Main";
                                }
                                if (battleScene.currentPositionY == 2) {
                                    if (active.name == characterOne.name) {
                                        characterOne.attackOne = active.attackOne;
                                        characterOne.abilityTwo = active.abilityTwo;
                                        characterOne.attackThree = active.attackThree;
                                        characterOne.abilityOne = active.abilityOne;
                                        characterOne.abilityTwo = active.abilityTwo;
                                        characterOne.abilityThree = active.abilityThree;
                                        characterOne.hp = active.hp;
                                        characterOne.arm = active.arm;
                                        characterOne.atk = active.atk;
                                        characterOne.bat = active.bat;
                                        characterOne.dat = active.dat;

                                        active.name =         characterTwo.name;
                                        active.effect =       characterTwo.effect;
                                        active.fighterClass = characterTwo.fighterClass;
                                        active.attackOne =    characterTwo.attackOne;
                                        active.abilityTwo =   characterTwo.abilityTwo;
                                        active.attackThree =  characterTwo.attackThree;
                                        active.abilityOne =   characterTwo.abilityOne;
                                        active.abilityTwo =   characterTwo.abilityTwo;
                                        active.abilityThree = characterTwo.abilityThree;
                                        active.hp =           characterTwo.hp;
                                        active.arm =          characterTwo.arm;
                                        active.atk =          characterTwo.atk;
                                        active.bat =          characterTwo.bat;
                                        active.dat =          characterTwo.dat;
                                        active.active =       characterTwo.active;
                                        active.picked =       characterTwo.picked;
                                    }
                                    else {
                                        characterOne.attackOne = active.attackOne;
                                        characterOne.abilityTwo = active.abilityTwo;
                                        characterOne.attackThree = active.attackThree;
                                        characterOne.abilityOne = active.abilityOne;
                                        characterOne.abilityTwo = active.abilityTwo;
                                        characterOne.abilityThree = active.abilityThree;
                                        characterOne.hp = active.hp;
                                        characterOne.arm = active.arm;
                                        characterOne.atk = active.atk;
                                        characterOne.bat = active.bat;
                                        characterOne.dat = active.dat;

                                        active.name =         characterOne.name;
                                        active.effect =       characterOne.effect;
                                        active.fighterClass = characterOne.fighterClass;
                                        active.attackOne =    characterOne.attackOne;
                                        active.abilityTwo =   characterOne.abilityTwo;
                                        active.attackThree =  characterOne.attackThree;
                                        active.abilityOne =   characterOne.abilityOne;
                                        active.abilityTwo =   characterOne.abilityTwo;
                                        active.abilityThree = characterOne.abilityThree;
                                        active.hp =           characterOne.hp;
                                        active.arm =          characterOne.arm;
                                        active.atk =          characterOne.atk;
                                        active.bat =          characterOne.bat;
                                        active.dat =          characterOne.dat;
                                        active.active =       characterOne.active;
                                        active.picked =       characterOne.picked;
                                    }

                                    battleWhoHasTheirTurn = "Enemy";
                                }
                                if (battleScene.currentPositionY == 3) {
                                    if (active.name == characterOne.name) {
                                        characterOne.attackOne = active.attackOne;
                                        characterOne.abilityTwo = active.abilityTwo;
                                        characterOne.attackThree = active.attackThree;
                                        characterOne.abilityOne = active.abilityOne;
                                        characterOne.abilityTwo = active.abilityTwo;
                                        characterOne.abilityThree = active.abilityThree;
                                        characterOne.hp = active.hp;
                                        characterOne.arm = active.arm;
                                        characterOne.atk = active.atk;
                                        characterOne.bat = active.bat;
                                        characterOne.dat = active.dat;

                                        active.name =         characterThree.name;
                                        active.effect =       characterThree.effect;
                                        active.fighterClass = characterThree.fighterClass;
                                        active.attackOne =    characterThree.attackOne;
                                        active.abilityTwo =   characterThree.abilityTwo;
                                        active.attackThree =  characterThree.attackThree;
                                        active.abilityOne =   characterThree.abilityOne;
                                        active.abilityTwo =   characterThree.abilityTwo;
                                        active.abilityThree = characterThree.abilityThree;
                                        active.hp =           characterThree.hp;
                                        active.arm =          characterThree.arm;
                                        active.atk =          characterThree.atk;
                                        active.bat =          characterThree.bat;
                                        active.dat =          characterThree.dat;
                                        active.active =       characterThree.active;
                                        active.picked =       characterThree.picked;
                                    }
                                    else if (active.name == characterTwo.name) {
                                        characterTwo.attackOne = active.attackOne;
                                        characterTwo.abilityTwo = active.abilityTwo;
                                        characterTwo.attackThree = active.attackThree;
                                        characterTwo.abilityOne = active.abilityOne;
                                        characterTwo.abilityTwo = active.abilityTwo;
                                        characterTwo.abilityThree = active.abilityThree;
                                        characterTwo.hp = active.hp;
                                        characterTwo.arm = active.arm;
                                        characterTwo.atk = active.atk;
                                        characterTwo.bat = active.bat;
                                        characterTwo.dat = active.dat;

                                        active.name =         characterThree.name;
                                        active.effect =       characterThree.effect;
                                        active.fighterClass = characterThree.fighterClass;
                                        active.attackOne =    characterThree.attackOne;
                                        active.abilityTwo =   characterThree.abilityTwo;
                                        active.attackThree =  characterThree.attackThree;
                                        active.abilityOne =   characterThree.abilityOne;
                                        active.abilityTwo =   characterThree.abilityTwo;
                                        active.abilityThree = characterThree.abilityThree;
                                        active.hp =           characterThree.hp;
                                        active.arm =          characterThree.arm;
                                        active.atk =          characterThree.atk;
                                        active.bat =          characterThree.bat;
                                        active.dat =          characterThree.dat;
                                        active.active =       characterThree.active;
                                        active.picked =       characterThree.picked;
                                    }
                                    else if (active.name == characterThree.name) {
                                        characterThree.attackOne = active.attackOne;
                                        characterThree.abilityTwo = active.abilityTwo;
                                        characterThree.attackThree = active.attackThree;
                                        characterThree.abilityOne = active.abilityOne;
                                        characterThree.abilityTwo = active.abilityTwo;
                                        characterThree.abilityThree = active.abilityThree;
                                        characterThree.hp = active.hp;
                                        characterThree.arm = active.arm;
                                        characterThree.atk = active.atk;
                                        characterThree.bat = active.bat;
                                        characterThree.dat = active.dat;

                                        active.name =         characterTwo.name;
                                        active.effect =       characterTwo.effect;
                                        active.fighterClass = characterTwo.fighterClass;
                                        active.attackOne =    characterTwo.attackOne;
                                        active.abilityTwo =   characterTwo.abilityTwo;
                                        active.attackThree =  characterTwo.attackThree;
                                        active.abilityOne =   characterTwo.abilityOne;
                                        active.abilityTwo =   characterTwo.abilityTwo;
                                        active.abilityThree = characterTwo.abilityThree;
                                        active.hp =           characterTwo.hp;
                                        active.arm =          characterTwo.arm;
                                        active.atk =          characterTwo.atk;
                                        active.bat =          characterTwo.bat;
                                        active.dat =          characterTwo.dat;
                                        active.active =       characterTwo.active;
                                        active.picked =       characterTwo.picked;
                                    }
                                    battleWhoHasTheirTurn = "Enemy";
                                }
                            }

                        } // E or e

                        //temporary
                        if (int(pressedKey) == 27) {
                            return 0;
                        }

                        // clear
                        Sleep(10);
                        system("cls");

                        // Calculations
                        //round up the numbers
                        if (battleScene.currentPositionY == 1 && battleScene.currentPositionX >= 4) {
                            battleScene.currentPositionX = 4;
                        }
                        else if (battleScene.currentPositionY == 1 && battleScene.currentPositionX <= 1) {
                            battleScene.currentPositionX = 1;
                        }

                        if (battleScene.currentPositionY <= 1) {
                            battleScene.currentPositionY = 1;
                        }
                        else if (battleScene.currentPositionY >= 3) {
                            battleScene.currentPositionY = 3;
                        }
                        if (battleSceneSideAction == "Main") {
                            if (battleScene.currentPositionY <= 1) {
                                battleScene.currentPositionY = 1;
                            }
                            else if (battleScene.currentPositionY >= 1) {
                                battleScene.currentPositionY = 1;
                            }
                        }
                        else if (battleSceneSideAction == "Items") {
                            if (battleScene.currentPositionX <= 1) {
                                battleScene.currentPositionX = 1;
                            }
                            else if (battleScene.currentPositionX >= 18) {
                                battleScene.currentPositionX = 18;
                            }

                            if (battleScene.currentPositionY == 1) {
                                battleScene.currentPositionX = 1;
                            }
                        }
                        else if (battleSceneSideAction == "Ability") {
                            if (battleScene.currentPositionY <= 1) {
                                battleScene.currentPositionY = 1;
                            }
                            else if (battleScene.currentPositionY >= 1) {
                                battleScene.currentPositionY = 1;
                            }
                        }
                        else if (battleSceneSideAction == "Swap") {
                            if (battleScene.currentPositionX <= 1) {
                                battleScene.currentPositionX = 1;
                            }
                            else if (battleScene.currentPositionX >= 1) {
                                battleScene.currentPositionX = 1;
                            }
                        }

                        // change attack and ability file to suit our requirements
                        if (battleSceneSideAction == "Attacks") {
                            if (active.name == characterOne.name) {
                                file.open("Visuals/chooseCharacterAttackOne.txt");
                                clearFile("Visuals/chooseCharacterAttackOne.txt");
                                file << characterOneAttack.attackOneDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackTwo.txt");
                                clearFile("Visuals/chooseCharacterAttackTwo.txt");
                                file << characterOneAttack.attackTwoDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackThree.txt");
                                clearFile("Visuals/chooseCharacterAttackThree.txt");
                                file << characterOneAttack.attackThreeDescriptionChooseYourCharacter;
                                file.close();
                            }
                            else if (active.name == characterTwo.name) {
                                file.open("Visuals/chooseCharacterAttackOne.txt");
                                clearFile("Visuals/chooseCharacterAttackOne.txt");
                                file << characterTwoAttack.attackOneDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackTwo.txt");
                                clearFile("Visuals/chooseCharacterAttackTwo.txt");
                                file << characterTwoAttack.attackTwoDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackThree.txt");
                                clearFile("Visuals/chooseCharacterAttackThree.txt");
                                file << characterTwoAttack.attackThreeDescriptionChooseYourCharacter;
                                file.close();
                            }
                            else if (active.name == characterThree.name) {
                                file.open("Visuals/chooseCharacterAttackOne.txt");
                                clearFile("Visuals/chooseCharacterAttackOne.txt");
                                file << characterThreeAttack.attackOneDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackTwo.txt");
                                clearFile("Visuals/chooseCharacterAttackTwo.txt");
                                file << characterThreeAttack.attackTwoDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackThree.txt");
                                clearFile("Visuals/chooseCharacterAttackThree.txt");
                                file << characterThreeAttack.attackThreeDescriptionChooseYourCharacter;
                                file.close();
                            }
                        }
                        else if (battleSceneSideAction == "Ability") {
                            if (active.name == characterOne.name) {
                                file.open("Visuals/chooseCharacterAttackOne.txt");
                                clearFile("Visuals/chooseCharacterAttackOne.txt");
                                file << characterOneAbilities.attackOneDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackTwo.txt");
                                clearFile("Visuals/chooseCharacterAttackTwo.txt");
                                file << characterOneAbilities.attackTwoDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackThree.txt");
                                clearFile("Visuals/chooseCharacterAttackThree.txt");
                                file << characterOneAbilities.attackThreeDescriptionChooseYourCharacter;
                                file.close();
                            }
                            else if (active.name == characterTwo.name) {
                                file.open("Visuals/chooseCharacterAttackOne.txt");
                                clearFile("Visuals/chooseCharacterAttackOne.txt");
                                file << characterTwoAbilities.attackOneDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackTwo.txt");
                                clearFile("Visuals/chooseCharacterAttackTwo.txt");
                                file << characterTwoAbilities.attackTwoDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackThree.txt");
                                clearFile("Visuals/chooseCharacterAttackThree.txt");
                                file << characterTwoAbilities.attackThreeDescriptionChooseYourCharacter;
                                file.close();
                            }
                            else if (active.name == characterThree.name) {
                                file.open("Visuals/chooseCharacterAttackOne.txt");
                                clearFile("Visuals/chooseCharacterAttackOne.txt");
                                file << characterThreeAbilities.attackOneDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackTwo.txt");
                                clearFile("Visuals/chooseCharacterAttackTwo.txt");
                                file << characterThreeAbilities.attackTwoDescriptionChooseYourCharacter;
                                file.close();

                                file.open("Visuals/chooseCharacterAttackThree.txt");
                                clearFile("Visuals/chooseCharacterAttackThree.txt");
                                file << characterThreeAbilities.attackThreeDescriptionChooseYourCharacter;
                                file.close();
                            }
                        }

                        // renders
                        if (battleSceneSideAction == "Main") {
                            renderMainBattleScene();
                        } else if (battleSceneSideAction == "Attacks") {
                            renderAttacksBattleScene();
                        }
                        else if (battleSceneSideAction == "Items") {
                            renderItemsBattleScene();
                        }
                        else if (battleSceneSideAction == "Ability") {
                            renderAbilitiesBattleScene();
                        }
                        else if (battleSceneSideAction == "Swap") {
                            renderSwapHeroBattleScene();
                        }

                        cout << "Y: " << battleScene.currentPositionY << "    X: " << battleScene.currentPositionX << "    Action:" << battleSceneSideAction << "   Pressed Key:" << pressedKey << "   Code: " << int(pressedKey) << "    Active: " << active.name << "    Name One: " << characterOne.name;
                    }
                }

                // effect
                if (activeCountdownEnemy > 0) {
                    activeCountdownEnemy++;
                }

                if (activeCountdownEnemy > 0) {
                    if (enemyImmuneBurning > 0) {
                        enemy.effect = "Immune (Burning)";
                    }
                    else {
                        if (enemyEffectBurningActive == true) {
                            damageDone = damageDone + 2;
                            enemy.effect = "Burning";
                        }
                    }
                    if (enemyImmunePoison > 0) {
                        enemy.effect = "Immune (Poison)";
                    }
                    else {
                        if (enemyEffectPoisonActive == true) {
                            damageDone++;
                            enemy.effect = "Poison";
                        }
                    }
                    if (enemyImmuneDraining > 0) {
                        enemy.effect = "Immune (Drain)";
                    }
                    else {
                        if (enemyEffectDrainingActive == true) {
                            effectDrainingCountdownEnemy++;
                            enemy.effect = "Draining";
                        }
                    }
                }

                if (enemy.effect == "Poison" || enemy.effect == "Immune (Poison)" || enemy.effect == "Burning" || enemy.effect == "Immune (Burning)" || enemy.effect == "Draining" || enemy.effect == "Immune (Drain)") {}
                else {
                    enemy.effect = "Clear";
                }


                // is it the end?
                // did enemy fail
                if (enemy.hp - damageDone <= 0 || 0 >= enemy.hp) {
                    battleEnded = true;
                    whatScreenWeSee = "Map";
                    system("cls");
                    playerInventory.money = playerInventory.money + 100 + ((rand() % 50) * 10);
                    loadFile("Visuals/battleSceneWin.txt");
                    goto resetWhile;
                }
                if (enemy.arm > 0) {
                    if (damageDone > enemy.arm) {
                        damageDone - enemy.arm;
                        enemy.hp = enemy.hp - damageDone;
                        enemy.arm = 0;
                    }
                    else {
                        enemy.arm = enemy.arm - damageDone;
                    }
                }
                else  {
                    enemy.hp = enemy.hp - damageDone;
                }

                damageDone = 0;

                // voiceline
                if (battleSceneSideAction == "Attacks") {
                    if (active.name == characterOne.name) {}
                    if (active.name == characterTwo.name) {}
                    if (active.name == characterThree.name) {
                        cout << characterThreeNameEdited + " used ";
                        if (battleScene.currentPositionX == 1) {
                            cout << characterThree.attackOne << endl;
                        }
                        if (battleScene.currentPositionX == 2) {}
                        if (battleScene.currentPositionX == 3) {}
                    }
                }

                if (enemySkipsTheirTurn == true) {
                    enemySkipsTheirTurn = false;
                }

                battleSceneSideAction = "Main";

                if (heroSkipsTheirTurn == true) {
                    heroSkipsTheirTurn = false;
                }


                // effects
                if (enemySkipsTheirTurn == false) {
                    while (battleWhoHasTheirTurn == "Enemy") {
                        // enemy turn
                        // clear
                        system("cls");
                        cout << "Enemy LoL";
                        Sleep(500);

                        // stats calculations

                        // first render

                        // decide action
                        damageDone = 10;


                        // clear

                        // second render

                        battleWhoHasTheirTurn = "Hero";
                        battleScene.currentPositionX = 1;
                        battleScene.currentPositionY = 1;
                    }
                }
                else {
                    damageDone = 0;
                }
            }
            musicThread.detach();
            resetEffectsOfEnemy();
            whatScreenWeSee = "Map";
            }

        while (whatScreenWeSee == "Boss") {
            whatScreenWeSee = "Map";
            currentLevel++;
        }

        while (whatScreenWeSee == "Final Boss") {
            return 0;
        }

        while (whatScreenWeSee == "Map") {
            pressedKey = ' ';
            if (firstTime == true) {
                system("cls");
                renderMap();
                firstTime = false;
            }
            if (_kbhit()){
startOfCycle:
                // clear
                system("cls");
                // first render
                renderMap();

                // get key
                pressedKey = getch();

                // key check
                if (int(pressedKey) == 67 || int(pressedKey) == 99) {
                    while (true) {
                        system("cls");
                        if (characterSheetPosition.currentPositionX == 1 && characterSheetPosition.currentPositionY == 1) {
                            chosenCharacter = 1;
                        }
                        if (characterSheetPosition.currentPositionX == 2 && characterSheetPosition.currentPositionY == 1) {
                            chooseCharacter = 2;
                        }
                        if (characterSheetPosition.currentPositionX == 3 && characterSheetPosition.currentPositionY == 1) {
                            chooseCharacter = 3;
                        }

                        if (chosenCharacter == 1) {
                            renderCharacterSheet(characterOne.name, characterOne.hp, characterOne.arm, characterOne.atk, characterOne.bat, characterOne.dat);
                        }
                        if (chosenCharacter == 2) {
                            renderCharacterSheet(characterTwo.name, characterTwo.hp, characterTwo.arm, characterTwo.atk, characterTwo.bat, characterTwo.dat);
                        }
                        if (chosenCharacter == 3) {
                            renderCharacterSheet(characterThree.name, characterThree.hp, characterThree.arm, characterThree.atk, characterThree.bat, characterThree.dat);
                        }

                        cout << "Press 'esc' to exit the character sheet" << endl;

                        pressedKey = getch();

                        if (int(pressedKey) == 65 || int(pressedKey) == 97) { // A or a
                            characterSheetPosition.currentPositionX--;
                        } // A
                        else if (int(pressedKey) == 68 || int(pressedKey) == 100) { // D or d
                            characterSheetPosition.currentPositionX++;

                        } // D or d
                        else if (int(pressedKey) == 87 || int(pressedKey) == 119) { // W or w
                            characterSheetPosition.currentPositionY--;
                            characterSheetPosition.currentPositionX = 1;

                        } // W
                        else if (int(pressedKey) == 83 || int(pressedKey) == 115) { // S or s
                            characterSheetPosition.currentPositionY++;
                            characterSheetPosition.currentPositionX = 1;
                        } // S
                        else if (int(pressedKey) == 27) { // E or e
                            system("cls");
                            goto startOfCycle;
                        } // Esc



                        system("cls");
                        Sleep(10);

                        if (characterSheetPosition.currentPositionY == 1) {
                            if (characterSheetPosition.currentPositionX <= 1) {
                                characterSheetPosition.currentPositionX = 1;
                                chosenCharacter = 1;
                            }
                            if (characterSheetPosition.currentPositionX == 2) {
                                chosenCharacter = 2;
                            }
                            if (characterSheetPosition.currentPositionX >= 3) {
                                characterSheetPosition.currentPositionX = 3;
                                chosenCharacter = 3;
                            }
                        }

                        if (characterSheetPosition.currentPositionY == 2) {
                            if (characterSheetPosition.currentPositionX <= 1) {
                                characterSheetPosition.currentPositionX = 1;
                            }
                            if (characterSheetPosition.currentPositionX >= 2) {
                                characterSheetPosition.currentPositionX = 2;
                            }
                        }

                        if (characterSheetPosition.currentPositionY == 3) {
                            if (characterSheetPosition.currentPositionX == 0) {
                                characterSheetPosition.currentPositionX = 1;
                            }
                            if (characterSheetPosition.currentPositionX <= 1) {
                                characterSheetPosition.currentPositionX = 1;
                            }
                            if (characterSheetPosition.currentPositionX >= 3) {
                                characterSheetPosition.currentPositionX = 3;
                            }
                        }

                        if (chosenCharacter == 1) {
                            if (characterSheetPosition.currentPositionY == 2) {
                                if (characterSheetPosition.currentPositionX == 2) {
                                    file.open("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    file << characterOneAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    file << characterOneAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    file
                                            << characterOneAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;
                                    file.close();
                                }
                                if (characterSheetPosition.currentPositionX == 1) {
                                    file.open("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    file << characterOneAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    file << characterOneAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    file << characterOneAttacksSmall.attackThreeDescriptionChooseYourCharacter;
                                    file.close();
                                }
                            }
                        }
                        if (chosenCharacter == 2) {
                            if (characterSheetPosition.currentPositionY == 2) {
                                if (characterSheetPosition.currentPositionX == 2) {
                                    file.open("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    file << characterTwoAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    file << characterTwoAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    file
                                            << characterTwoAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;
                                    file.close();
                                }
                                if (characterSheetPosition.currentPositionX == 1) {
                                    file.open("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    file << characterTwoAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    file << characterTwoAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    file << characterTwoAttacksSmall.attackThreeDescriptionChooseYourCharacter;
                                    file.close();
                                }
                            }
                        }
                        if (chosenCharacter == 3) {
                            if (characterSheetPosition.currentPositionY == 2) {
                                if (characterSheetPosition.currentPositionX == 2) {
                                    file.open("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    file
                                            << characterThreeAbilitiesSmall.attackOneDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    file
                                            << characterThreeAbilitiesSmall.attackTwoDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    file
                                            << characterThreeAbilitiesSmall.attackThreeDescriptionChooseYourCharacter;
                                    file.close();
                                }
                                if (characterSheetPosition.currentPositionX == 1) {
                                    file.open("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityOne.txt");
                                    file << characterThreeAttacksSmall.attackOneDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityTwo.txt");
                                    file << characterThreeAttacksSmall.attackTwoDescriptionChooseYourCharacter;
                                    file.close();

                                    file.open("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    clearFile("Visuals/characterSheetAttackOrAbilityThree.txt");
                                    file << characterThreeAttacksSmall.attackThreeDescriptionChooseYourCharacter;
                                    file.close();
                                }
                            }
                        }


                        if (chosenCharacter == 1) {
                            renderCharacterSheet(characterOne.name, characterOne.hp, characterOne.arm, characterOne.atk, characterOne.bat, characterOne.dat);
                        }
                        if (chosenCharacter == 2) {
                            renderCharacterSheet(characterTwo.name, characterTwo.hp, characterTwo.arm, characterTwo.atk, characterTwo.bat, characterTwo.dat);
                        }
                        if (chosenCharacter == 3) {
                            renderCharacterSheet(characterThree.name, characterThree.hp, characterThree.arm, characterThree.atk, characterThree.bat, characterThree.dat);
                        }

                        cout << "Press 'esc' to exit the character sheet" << endl;

                    }
                } // c or C
                else if (int(pressedKey) == 69 || int(pressedKey) == 101) {
                    currentLevel++;
                    firstTime = true;
                    if (currentLevel == 1) {
                        whatScreenWeSee = "Tutorial";
                    }
                    else if (currentLevel == 2 || currentLevel == 3 || currentLevel == 5 || currentLevel == 6 || currentLevel == 9 || currentLevel == 10 || currentLevel == 11 || currentLevel == 13 || currentLevel == 14 || currentLevel == 17 || currentLevel == 18 || currentLevel == 19 || currentLevel == 20 || currentLevel == 22 || currentLevel == 23 || currentLevel == 25) {
                        whatScreenWeSee = "Battle Scene";
                    }
                    else if (currentLevel == 4 || currentLevel == 8 || currentLevel == 12 || currentLevel == 15 || currentLevel == 21 || currentLevel == 24 || currentLevel == 26) {
                        whatScreenWeSee = "Shop";
                    }
                    else if (currentLevel == 7 || currentLevel == 16) {
                        whatScreenWeSee = "Boss";
                    }
                    else if (currentLevel == 27) {
                        whatScreenWeSee = "Final Boss";
                    }
                }

                // clear
                Sleep(10);
                system("cls");

                // second render
                renderMap();
            }
        } // done except character sheet bugs + equipment

        while (whatScreenWeSee == "Shop") {
            if (firstTime == true) {
                int chosenShop = prepareShopTitle();
                system("cls");
                renderShop();
                firstTime = false;
            }
            if (_kbhit()) {
                system("cls");
                //first render
                renderShop();

                // get key
                pressedKey = getch();

                // key control
                if (int(pressedKey) == 65 || int(pressedKey) == 97) { // A or a
                    shopPosition.currentPositionX--;
                } else if (int(pressedKey) == 68 || int(pressedKey) == 100) { // D or d
                    shopPosition.currentPositionX++;
                } else if (int(pressedKey) == 87 || int(pressedKey) == 119) { // W or w
                    shopPosition.currentPositionY--;
                } else if (int(pressedKey) == 83 || int(pressedKey) == 115) { // S or s
                    shopPosition.currentPositionY++;
                }

                    // case for E/e so this one will be long

                else if (int(pressedKey) == 69 || int(pressedKey) == 101) { // E or e
                    if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 1) {
                        chosenOptionInShop = "items";
                    } else if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 2) {
                        chosenOptionInShop = "weapons";
                    } else if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 3) {
                        chosenOptionInShop = "armours";
                    } else if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 4) {
                        chosenOptionInShop = "upgrade";
                    } else if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 5) {
                        chosenOptionInShop = "inventory";
                    } else if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 6) {
                        chosenOptionInShop = "leave";
                    } else {
                        if (chosenOptionInShop != "inventory") {
                            if (playerInventory.money >= ShopInfo.selectedItemPrice && playerInventoryPositions < 36) {
                                if (playerInventoryPositions == 1) {
                                    playerInventory.item1 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 2) {
                                    playerInventory.item2 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 3) {
                                    playerInventory.item3 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 4) {
                                    playerInventory.item4 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 5) {
                                    playerInventory.item5 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 6) {
                                    playerInventory.item6 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 7) {
                                    playerInventory.item7 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 8) {
                                    playerInventory.item8 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 9) {
                                    playerInventory.item9 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 10) {
                                    playerInventory.item10 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 11) {
                                    playerInventory.item11 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 12) {
                                    playerInventory.item12 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 13) {
                                    playerInventory.item13 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 14) {
                                    playerInventory.item14 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 15) {
                                    playerInventory.item15 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 16) {
                                    playerInventory.item16 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 17) {
                                    playerInventory.item17 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 18) {
                                    playerInventory.item18 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 19) {
                                    playerInventory.item19 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 20) {
                                    playerInventory.item20 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 21) {
                                    playerInventory.item21 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 22) {
                                    playerInventory.item22 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 23) {
                                    playerInventory.item23 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 24) {
                                    playerInventory.item24 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 25) {
                                    playerInventory.item25 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 26) {
                                    playerInventory.item26 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 27) {
                                    playerInventory.item27 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 28) {
                                    playerInventory.item28 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 29) {
                                    playerInventory.item29 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 30) {
                                    playerInventory.item30 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 31) {
                                    playerInventory.item31 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 32) {
                                    playerInventory.item32 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 33) {
                                    playerInventory.item33 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 34) {
                                    playerInventory.item34 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 35) {
                                    playerInventory.item35 = ShopInfo.selectedItem;
                                } else if (playerInventoryPositions == 36) {
                                    playerInventory.item36 = ShopInfo.selectedItem;
                                }

                                playerInventory.money = playerInventory.money - ShopInfo.selectedItemPrice;

                                playerInventoryPositions++;

                            } else {
                                if (playerInventory.money <= ShopInfo.selectedItemPrice) {
                                    system("cls");
                                    cout << ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
                                             "                                                        ███╗   ██╗ ██████╗ ████████╗    ███████╗███╗   ██╗ ██████╗ ██╗   ██╗ ██████╗ ██╗  ██╗    ███╗   ███╗ ██████╗ ███╗   ██╗███████╗██╗   ██╗██╗\n"
                                             "                                                        ████╗  ██║██╔═══██╗╚══██╔══╝    ██╔════╝████╗  ██║██╔═══██╗██║   ██║██╔════╝ ██║  ██║    ████╗ ████║██╔═══██╗████╗  ██║██╔════╝╚██╗ ██╔╝██║\n"
                                             "                                                        ██╔██╗ ██║██║   ██║   ██║       █████╗  ██╔██╗ ██║██║   ██║██║   ██║██║  ███╗███████║    ██╔████╔██║██║   ██║██╔██╗ ██║█████╗   ╚████╔╝ ██║\n"
                                             "                                                        ██║╚██╗██║██║   ██║   ██║       ██╔══╝  ██║╚██╗██║██║   ██║██║   ██║██║   ██║██╔══██║    ██║╚██╔╝██║██║   ██║██║╚██╗██║██╔══╝    ╚██╔╝  ╚═╝\n"
                                             "                                                        ██║ ╚████║╚██████╔╝   ██║       ███████╗██║ ╚████║╚██████╔╝╚██████╔╝╚██████╔╝██║  ██║    ██║ ╚═╝ ██║╚██████╔╝██║ ╚████║███████╗   ██║   ██╗\n"
                                             "                                                        ╚═╝  ╚═══╝ ╚═════╝    ╚═╝       ╚══════╝╚═╝  ╚═══╝ ╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝    ╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝   ╚═╝   ╚═╝\n"
                                             "                                                                                                                                           ");
                                    Sleep(700);
                                    system("cls");
                                } else if (playerInventoryPositions > 35) {
                                    system("cls");
                                    cout << ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
                                             "                                                        ███╗   ██╗ ██████╗ ████████╗    ███████╗███╗   ██╗ ██████╗ ██╗   ██╗ ██████╗ ██╗  ██╗    ███████╗██████╗  █████╗  ██████╗███████╗██╗\n"
                                             "                                                        ████╗  ██║██╔═══██╗╚══██╔══╝    ██╔════╝████╗  ██║██╔═══██╗██║   ██║██╔════╝ ██║  ██║    ██╔════╝██╔══██╗██╔══██╗██╔════╝██╔════╝██║\n"
                                             "                                                        ██╔██╗ ██║██║   ██║   ██║       █████╗  ██╔██╗ ██║██║   ██║██║   ██║██║  ███╗███████║    ███████╗██████╔╝███████║██║     █████╗  ██║\n"
                                             "                                                        ██║╚██╗██║██║   ██║   ██║       ██╔══╝  ██║╚██╗██║██║   ██║██║   ██║██║   ██║██╔══██║    ╚════██║██╔═══╝ ██╔══██║██║     ██╔══╝  ╚═╝\n"
                                             "                                                        ██║ ╚████║╚██████╔╝   ██║       ███████╗██║ ╚████║╚██████╔╝╚██████╔╝╚██████╔╝██║  ██║    ███████║██║     ██║  ██║╚██████╗███████╗██╗\n"
                                             "                                                        ╚═╝  ╚═══╝ ╚═════╝    ╚═╝       ╚══════╝╚═╝  ╚═══╝ ╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝    ╚══════╝╚═╝     ╚═╝  ╚═╝ ╚═════╝╚══════╝╚═╝\n"
                                             "                                                                                                                                    ");
                                }
                            }
                        }
                    }
                } else if (int(pressedKey) == 73 || int(pressedKey) == 105) { // I or i
                    if (shopNumber == 1) {
                        if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }
                    } else if (shopNumber == 2) {
                        if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }


                    } else if (shopNumber == 3) {
                        if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }

                    } else if (shopNumber == 4) {
                        if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }
                    } else if (shopNumber == 5) {
                        if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }


                    } else if (shopNumber == 6) {
                        if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }


                    } else if (shopNumber == 7) {
                        if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }


                    } else if (shopNumber == 8) {
                        if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        } else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }
                    }
                }

                Sleep(10);
                system("cls");


                // round up the numbers
                if (shopPosition.currentPositionY >= 6) {
                    shopPosition.currentPositionY = 6;
                } else if (shopPosition.currentPositionY < 1) {
                    shopPosition.currentPositionY = 1;
                } else if (shopPosition.currentPositionX >= 6) {
                    shopPosition.currentPositionX = 6;
                } else if (shopPosition.currentPositionX < 0) {
                    shopPosition.currentPositionX = 0;
                }



                // prepare second render - change items based on the shop and the option chosen by the player

                // most of it is done in the render function
                // inventory is separated for the reason it has only one real option and that is that it is visible or not since its note dependent on what shop we see

                // option to leave
                if (chosenOptionInShop == "leave") {
                    system("cls");
                    firstTime = true;

                    whatScreenWeSee = "Map";
                }

                // no item is visible if we are not selecting items
                if (shopPosition.currentPositionX == 0) {
                    ShopInfo.selectedItem = "";
                }

                // second render
                renderShop();
            }
        } // done just need more items (maybe will rework the whole item system because its stupid and will probably shit us later)
    }
}

/*
 * ╚ alt + 200 ╔ alt + 201 ╩ alt + 202 ╦ alt + 203 ╠  alt + 204 ═  alt + 205 ╬ alt + 206
 */

// arrays
/* just if i forgot string array [2][3] {
* {"string","string", "string"},
* {"string","string","string"}
* };
*/