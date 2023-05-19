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
void renderChooseYourHeroes(string battleClass = inferno.fighterClass, string name = inferno.name, int hp = inferno.hp, int arm = inferno.arm, int atk = inferno.atk, int bat = inferno.bat, int dat = inferno.dat) {
    //Prepare
    prepareForOutput();
    //local variables
    string chooseYourHeroesFileString;
    int currentLine = 0;

    // File prep
    ifstream chooseYourHeroesFileFile("Visuals/chooseCharacter.txt");

    // Code

    while (getline(chooseYourHeroesFileFile,chooseYourHeroesFileString)) {
        currentLine++;
        if(currentLine == 1) {
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 14) {
            if (chooseCharacter.currentPositionX == 1) {
                setcolor(0);
            }
            cout << chooseYourHeroesFileString;
            setcolor(15);
            cout << name;
        }
        else if (currentLine == 27) {
            cout << chooseYourHeroesFileString << chooseCharacterAbilityOrAttackString << endl;
        }
        else if (currentLine == 31) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 1);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 1);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 1);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 32) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 2);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 2);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 2);
            cout << chooseYourHeroesFileString << battleClass << endl;
        }
        else if (currentLine == 33) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 3);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 3);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 3);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 34) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 4);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 4);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 4);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 35) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 5);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 5);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 5);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 36) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 6);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 6);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 6);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 37) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 7);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 7);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 7);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 38) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 8);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 8);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 8);
            cout << chooseYourHeroesFileString << " " << hp << endl;
        }
        else if (currentLine == 39) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 9);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 9);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 9);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 40) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 10);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 10);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 10);
            cout << chooseYourHeroesFileString << " " << arm << endl;
        }
        else if (currentLine == 41) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 11);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 11);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 11);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 42) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 12);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 12);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 12);
            cout << chooseYourHeroesFileString << " " << atk << endl;
        }
        else if (currentLine == 43) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 13);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 13);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 13);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 44) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 14);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 14);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 14);
            cout << chooseYourHeroesFileString << " " << bat << endl;
        }
        else if (currentLine == 45) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 15);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 15);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 15);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 46) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 16);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 16);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 16);
            cout << chooseYourHeroesFileString << " " << dat << endl;
        }
        else if (currentLine == 47) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 17);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 17);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 17);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 48) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 18);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 18);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 18);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 49) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 19);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 19);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 19);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 50) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 20);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 20);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 20);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 51) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 21);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 21);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 21);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 52) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 22);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 22);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 22);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 53) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 23);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 23);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 23);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 54) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 24);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 24);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 24);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 55) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 25);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 25);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 25);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 56) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 26);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 26);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 26);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 57) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 27);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 27);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 27);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 58) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 28);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 28);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 28);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 59) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 29);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 29);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 29);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 60) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 30);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 30);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 30);
            cout << chooseYourHeroesFileString << endl;
        }
        else if (currentLine == 61) {
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackOne.txt", 31);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackTwo.txt", 31);
            cout << "║";
            loadLine("Visuals/chooseCharacterAttackThree.txt", 31);
            cout << chooseYourHeroesFileString << endl;
        }


        else {
            cout << chooseYourHeroesFileString << endl;
        }
    }
}

void renderMainBattleScene (string enemyName = arian.name, string enemyEffect = arian.effect, int enemyHp = arian.hp, int enemyArm = arian.arm, int enemyAtk = arian.atk, int enemyBat = arian.bat, int enemyDat = arian.dat, string heroName = active.name, string heroEffect = active.effect, int heroHp = active.hp, int heroArm = active.arm, int heroAtk = active.atk, int heroBat = active.bat, int heroDat = active.dat) {
    //prep
    prepareForOutput();
    //variables
    int currentLine;
    string MainBattleSceneFileString;
    //File prep
    ifstream MainBattleSceneFileFile ("Visuals/battleSceneMain.txt");

    // code
    while (getline(MainBattleSceneFileFile, MainBattleSceneFileString)) {
        currentLine++;

        if(currentLine == 1 ){
            cout << MainBattleSceneFileString << endl;
        }
        else if(currentLine == 2){
            cout << MainBattleSceneFileString << enemyName << endl;
        }
        else if(currentLine == 6) {
            cout << MainBattleSceneFileString << enemyEffect << endl;
        }
        else if(currentLine == 11) {
            cout << MainBattleSceneFileString << enemyHp << endl;
        }
        else if(currentLine == 13) {
            cout << MainBattleSceneFileString << enemyArm << endl;
        }
        else if(currentLine == 15) {
            cout << MainBattleSceneFileString << enemyAtk << endl;
        }
        else if(currentLine == 17) {
            cout << MainBattleSceneFileString << enemyBat << endl;
        }
        else if(currentLine == 19) {
            cout << MainBattleSceneFileString << enemyDat << endl;
        }
        else if(currentLine == 24) {
            cout << MainBattleSceneFileString << heroName << endl;
        }
        else if(currentLine == 28) {
            cout << MainBattleSceneFileString << heroEffect << endl;
        }
        else if(currentLine == 33) {
            cout << MainBattleSceneFileString << heroHp << endl;
        }
        else if(currentLine == 35) {
            cout << MainBattleSceneFileString << heroArm << endl;
        }
        else if(currentLine == 37) {
            cout << MainBattleSceneFileString << heroAtk << endl;
        }
        else if(currentLine == 39) {
            cout << MainBattleSceneFileString << heroBat << endl;
        }
        else if(currentLine == 41) {
            cout << MainBattleSceneFileString << heroDat << endl;
        }

        else {
            cout << MainBattleSceneFileString << endl;
        }
    }

}

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

        while (whatScreenWeSee == "Battle Scene") {
            // Battle Loop
            if(_kbhit()) {
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
            if (_kbhit() ) {
                system("cls");
                //first render
                renderShop();

                // get key
                pressedKey = getch();

                // key control
                if (int(pressedKey) == 65 || int(pressedKey) == 97) { // A or a
                    shopPosition.currentPositionX--;
                }
                else if (int(pressedKey) == 68 || int(pressedKey) == 100) { // D or d
                    shopPosition.currentPositionX++;
                }
                else if (int(pressedKey) == 87 || int(pressedKey) == 119) { // W or w
                    shopPosition.currentPositionY--;
                }
                else if (int(pressedKey) == 83 || int(pressedKey) == 115) { // S or s
                    shopPosition.currentPositionY++;
                }

                    // case for E/e so this one will be long

                else if (int(pressedKey) == 69 || int(pressedKey) == 101) { // E or e
                    if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 1) {
                        chosenOptionInShop = "items";
                    }
                    else if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 2) {
                        chosenOptionInShop = "weapons";
                    }
                    else if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 3) {
                        chosenOptionInShop = "armours";
                    }
                    else if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 4) {
                        chosenOptionInShop = "upgrade";
                    }
                    else if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 5) {
                        chosenOptionInShop = "inventory";
                    }
                    else if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 6) {
                        chosenOptionInShop = "leave";
                    }
                    else {
                        if (playerInventory.money >= ShopInfo.selectedItemPrice && playerInventoryPositions < 36){
                            system("cls");
                            cout << "test prepared" << endl;
                            cout << playerInventoryPositions;
                            Sleep(500);



                            if (playerInventoryPositions == 1) {
                                playerInventory.item1 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 2) {
                                playerInventory.item2 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 3) {
                                playerInventory.item3 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 4) {
                                playerInventory.item4 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 5) {
                                playerInventory.item5 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 6) {
                                playerInventory.item6 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 7) {
                                playerInventory.item7 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 8) {
                                playerInventory.item8 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 9) {
                                playerInventory.item9 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 10) {
                                playerInventory.item10 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 11) {
                                playerInventory.item11 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 12) {
                                playerInventory.item12 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 13) {
                                playerInventory.item13 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 14) {
                                playerInventory.item14 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 15) {
                                playerInventory.item15 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 16) {
                                playerInventory.item16 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 17) {
                                playerInventory.item17 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 18) {
                                playerInventory.item18 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 19) {
                                playerInventory.item19 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 20) {
                                playerInventory.item20 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 21) {
                                playerInventory.item21 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 22) {
                                playerInventory.item22 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 23) {
                                playerInventory.item23 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 24) {
                                playerInventory.item24 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 25) {
                                playerInventory.item25 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 26) {
                                playerInventory.item26 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 27) {
                                playerInventory.item27 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 28) {
                                playerInventory.item28 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 29) {
                                playerInventory.item29 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 30) {
                                playerInventory.item30 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 31) {
                                playerInventory.item31 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 32) {
                                playerInventory.item32 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 33) {
                                playerInventory.item33 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 34) {
                                playerInventory.item34 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 35) {
                                playerInventory.item35 = ShopInfo.selectedItem;
                            }
                            else if (playerInventoryPositions == 36) {
                                playerInventory.item36 = ShopInfo.selectedItem;
                            }


                            playerInventory.money = playerInventory.money - ShopInfo.selectedItemPrice;

                            playerInventoryPositions++;



                            system("cls");
                            cout << "test done" << endl;
                            cout << playerInventoryPositions << endl;
                            Sleep(500);
                        }
                        else {
                            if (playerInventory.money <= ShopInfo.selectedItemPrice) {
                                system("cls");
                                ShopInfo.selectedItem = "Not Enough Money";
                                cout << ShopInfo.selectedItem;
                                Sleep(500);
                            }
                            else if (playerInventoryPositions > 35) {
                                system("cls");
                                ShopInfo.selectedItem = "Not Enough Space";
                                cout << ShopInfo.selectedItem;
                                Sleep(500);
                            }
                        }
                    }
                }

                Sleep(10);
                system("cls");
                

                // round up the numbers
                if (shopPosition.currentPositionY >= 6) {
                    shopPosition.currentPositionY = 6;
                }
                else if (shopPosition.currentPositionY < 1) {
                    shopPosition.currentPositionY = 1;
                }
                else if (shopPosition.currentPositionX >= 7) {
                    shopPosition.currentPositionX = 7;
                }
                else if (shopPosition.currentPositionX < 1) {
                    shopPosition.currentPositionX = 1;
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
                if (shopPosition.currentPositionX == 1) {
                    ShopInfo.selectedItem = "";
                }

                // second render
                renderShop();
            }
        }

        while(whatScreenWeSee == "Choose Character") {
            // first render
            if (firstTime == true) {
                system("cls");
                renderChooseYourHeroes(inferno.fighterClass, inferno.name, inferno.hp, inferno.arm, inferno.atk, inferno.bat, inferno.dat);
                firstTime = false;
            }
            // Choose Character loop
            if (_kbhit() ) {
                system("cls");
                // First render for specific character
                if (chooseCharacter.currentPositionX == 1) { /* class, name, hp, arm, atk, bat, dat */
                    renderChooseYourHeroes(inferno.fighterClass, inferno.name, inferno.hp, inferno.arm, inferno.atk, inferno.bat, inferno.dat);
                } else if (chooseCharacter.currentPositionX == 2) {
                    renderChooseYourHeroes(atlas.fighterClass, atlas.name, atlas.hp, atlas.arm, atlas.atk, atlas.bat,atlas.dat);
                }

                // Get key
                pressedKey = getch();

                // Key check
                if (int(pressedKey) == 65 || int(pressedKey) == 97) { // A or a
                    chooseCharacter.currentPositionX--;
                }
                else if (int(pressedKey) == 68 || int(pressedKey) == 100) { // D or d
                    chooseCharacter.currentPositionX++;
                }
                else if (int(pressedKey) == 87 || int(pressedKey) == 119) { // W or w
                    chooseCharacterAbilityOrAttack.currentPositionX--;
                }
                else if (int(pressedKey) == 83 || int(pressedKey) == 115) { // S or s
                    chooseCharacterAbilityOrAttack.currentPositionX++;
                }
                else if (int(pressedKey) == 69 || int(pressedKey) == 101) { // E or e
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