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
#include "variables.h"

using namespace std;







// Functions


// Render functions

int main() {
    prepareForOutput();

    //colorWheel();

    //renderMainBattleScene();
    //renderMainBattleScene();

    //system("cls");

    //loadFile("Visuals/shopTemplate.txt");

    //return 0;

    while (1) {
        while (whatScreenWeSee == "Tutorial") {}

        while (whatScreenWeSee == "Choose Character") {
            // first render
            if (firstTime == true) {
                system("cls");
                renderChooseYourHeroes(inferno.fighterClass, inferno.name, inferno.hp, inferno.arm, inferno.atk,
                                       inferno.bat, inferno.dat);
                firstTime = false;
            }
            // Choose Character loop
            if (_kbhit()) {
                system("cls");
                // First render for specific character
                if (chooseCharacter.currentPositionX == 1) { /* class, name, hp, arm, atk, bat, dat */
                    renderChooseYourHeroes(inferno.fighterClass, inferno.name, inferno.hp, inferno.arm, inferno.atk,
                                           inferno.bat, inferno.dat);
                } else if (chooseCharacter.currentPositionX == 2) {
                    renderChooseYourHeroes(atlas.fighterClass, atlas.name, atlas.hp, atlas.arm, atlas.atk, atlas.bat,
                                           atlas.dat);
                }

                // Get key
                pressedKey = getch();

                // Key check
                if (int(pressedKey) == 65 || int(pressedKey) == 97) { // A or a
                    chooseCharacter.currentPositionX--;
                } else if (int(pressedKey) == 68 || int(pressedKey) == 100) { // D or d
                    chooseCharacter.currentPositionX++;
                } else if (int(pressedKey) == 87 || int(pressedKey) == 119) { // W or w
                    chooseCharacterAbilityOrAttack.currentPositionX--;
                } else if (int(pressedKey) == 83 || int(pressedKey) == 115) { // S or s
                    chooseCharacterAbilityOrAttack.currentPositionX++;
                } else if (int(pressedKey) == 69 || int(pressedKey) == 101) { // E or e
                    if (chooseCharacter.currentPositionX == 1) {
                        inferno.picked = true;
                        characterSlots++;
                    } else if (chooseCharacter.currentPositionX == 2) {
                        atlas.picked = true;
                        characterSlots++;
                    } else if (chooseCharacter.currentPositionX == 3) {
                        // Static the III.
                    } else if (chooseCharacter.currentPositionX == 4) {
                        // Hanibal
                    } else if (chooseCharacter.currentPositionX == 5) {
                        // Mono I.
                    } else if (chooseCharacter.currentPositionX == 6) {
                        // Biohazard
                    } else if (chooseCharacter.currentPositionX == 7) {
                        // Zip
                    } else if (chooseCharacter.currentPositionX == 8) {
                        // Plagy
                    } else if (chooseCharacter.currentPositionX == 9) {
                        // Amper
                    } else if (chooseCharacter.currentPositionX == 10) {
                        // Raven
                    }
                }

                // clear
                Sleep(10);
                system("cls");

                //prepare re-renders
                //choose character change attacks and abilities
                if (chooseCharacter.currentPositionX == 1) {
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
                } else if (chooseCharacter.currentPositionX == 2) {
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
                //choose character attack or ability
                if (chooseCharacterAbilityOrAttack.currentPositionX == 1) {
                    chooseCharacterAbilityOrAttackString = " Attacks ";
                } else if (chooseCharacterAbilityOrAttack.currentPositionX == 2) {
                    chooseCharacterAbilityOrAttackString = "Abilities";
                }
                //change screen if all characters are chosen and that will stop the render
                if (characterSlots == 3) {
                    whatScreenWeSee = "Tutorial";
                    firstTime = true;
                }

                //Round up the numbers
                if (chooseCharacterAbilityOrAttack.currentPositionX >= 2) {
                    chooseCharacterAbilityOrAttack.currentPositionX = 2;
                } else if (chooseCharacterAbilityOrAttack.currentPositionX <= 1) {
                    chooseCharacterAbilityOrAttack.currentPositionX = 1;
                } else if (chooseCharacter.currentPositionX >= 10) {
                    chooseCharacter.currentPositionX = 10;
                } else if (chooseCharacter.currentPositionX <= 1) {
                    chooseCharacter.currentPositionX = 1;
                }

                // Re-render
                if (chooseCharacter.currentPositionX == 1) { /* class, name, hp, arm, atk, bat, dat */
                    renderChooseYourHeroes(inferno.fighterClass, inferno.name, inferno.hp, inferno.arm, inferno.atk,
                                           inferno.bat, inferno.dat);
                } else if (chooseCharacter.currentPositionX == 2) {
                    renderChooseYourHeroes(atlas.fighterClass, atlas.name, atlas.hp, atlas.arm, atlas.atk, atlas.bat,
                                           atlas.dat);
                }
            }
        }


        while (whatScreenWeSee == "Battle Scene") {
            // Battle Loop
            if (_kbhit()) {
                system("cls");
                //Generate enemy

                //Prep stats

                //Prep Hero and his fellas

                // Render

                // Key get
                pressedKey = getch();

                // Key check
            }
        }

        while (whatScreenWeSee == "Speaking") {}

        while (whatScreenWeSee == "Map") {}

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
                    }
                    else {
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

                        }
                        else {
                            if (playerInventory.money <= ShopInfo.selectedItemPrice) {
                                system("cls");
                                ShopInfo.selectedItem = "Not Enough Money";
                            }
                            else if (playerInventoryPositions > 35) {
                                system("cls");
                                ShopInfo.selectedItem = "Not Enough Space";
                            }
                        }
                    }
                }

                else if (int(pressedKey) == 73 || int(pressedKey) == 105) { // I or i
                    if(shopNumber == 1) {
                        if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == stupendousEmporiumUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(stupendousEmporiumUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }
                    }
                    else if (shopNumber == 2) {
                        if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(justMonstersItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(justMonstersArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(justMonstersWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == justMonstersUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(justMonstersUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }


                    }
                    else if (shopNumber == 3) {
                        if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == rosesFlowerShopUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(rosesFlowerShopUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }

                    }
                    else if (shopNumber == 4) {
                        if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(clydeHealeryItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(clydeHealeryArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(clydeHealeryWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == clydeHealeryUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(clydeHealeryUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }
                    }
                    else if (shopNumber == 5) {
                        if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(swordsAndMoreItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(swordsAndMoreArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(swordsAndMoreWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == swordsAndMoreUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(swordsAndMoreUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }


                    }
                    else if (shopNumber == 6) {
                        if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(violinViolenceItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(violinViolenceArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(violinViolenceWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == violinViolenceUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(violinViolenceUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }


                    }
                    else if (shopNumber == 7) {
                        if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(assisiAssistanceItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(assisiAssistanceArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(assisiAssistanceWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == assisiAssistanceUpgradeInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(assisiAssistanceUpgradeInventoryItemsDescriptions.item36);
                            getch();
                        }


                    }
                    else if (shopNumber == 8) {
                        if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonItemsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(snackVagonItemsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonArmourInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(snackVagonArmourInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonWeaponsInventoryItems.item36) {
                            system("cls");
                            renderShopInfo(snackVagonWeaponsInventoryItemsDescriptions.item36);
                            getch();
                        }

                        if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item1) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item1);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item2) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item2);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item3) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item3);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item4) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item4);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item5) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item5);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item6) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item6);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item7) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item7);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item8) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item8);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item9) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item9);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item10) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item10);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item11) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item11);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item12) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item12);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item13) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item13);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item14) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item14);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item15) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item15);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item16) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item16);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item17) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item17);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item18) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item18);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item19) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item19);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item20) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item20);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item21) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item21);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item22) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item22);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item23) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item23);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item24) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item24);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item25) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item25);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item26) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item26);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item27) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item27);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item28) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item28);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item29) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item29);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item30) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item30);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item31) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item31);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item32) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item32);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item33) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item33);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item34) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item34);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item35) {
                            system("cls");
                            renderShopInfo(snackVagonUpgradeInventoryItemsDescriptions.item35);
                            getch();
                        }
                        else if (ShopInfo.selectedItem == snackVagonUpgradeInventoryItems.item36) {
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
        }
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