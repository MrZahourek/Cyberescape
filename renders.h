//
// Created by AP Studio on 19/05/2023.
//

#ifndef GAME_RENDERS_H
#define GAME_RENDERS_H

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <algorithm>

#include "attacks.h"
#include "abilities.h"
#include "renders.h"
#include "shops.h"
#include "characters.h"
#include "info.h"
#include "myFce.h"
#include "variables.h"

using namespace std;

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
            if (chooseCharacter.currentPositionX == lowestPointInChoosingHeroes) {
                setcolor(0);
            }
            cout << chooseYourHeroesFileString;
            setcolor(15);
            cout << name;
        }
        else if (currentLine == 15) {
            if (chooseCharacter.currentPositionX == highestPointInChoosingHeroes) {
                setcolor(0);
            }
            cout << chooseYourHeroesFileString;
            setcolor(15);
        }
        else if (currentLine == 27) {
            cout << chooseYourHeroesFileString << chooseCharacterAbilityOrAttackString << endl;
        }
        else if (currentLine == 29) {
            if (chooseCharacterAbilityOrAttackString == " Attacks ") {
                cout << chooseYourHeroesFileString << " Attack 1                          ║                          Attack 2                          ║                          Attack 3                          ║\t\t\tClass" << endl;
            }
            else if (chooseCharacterAbilityOrAttackString == "Abilities") {
                cout << chooseYourHeroesFileString << "Ability  1                         ║                         Ability  2                         ║                        Ability  3                          ║\t\t\tClass" << endl;
            }
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



void renderShop() {
    //prep
    prepareForOutput();

    // variables
    string shopFileString;
    int currentLine = 0;

    //prep files
    fstream shopFileFile("Visuals/shopTemplate.txt");

    // code

    // prepare second render - change items based on the shop and the option chosen by the player

    if (shopNumber == 1){
        if (chosenOptionInShop == "items"){
            activeItemsOnDisplayItems.item1 = stupendousEmporiumItemsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = stupendousEmporiumItemsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = stupendousEmporiumItemsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = stupendousEmporiumItemsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = stupendousEmporiumItemsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = stupendousEmporiumItemsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = stupendousEmporiumItemsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = stupendousEmporiumItemsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = stupendousEmporiumItemsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = stupendousEmporiumItemsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = stupendousEmporiumItemsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = stupendousEmporiumItemsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = stupendousEmporiumItemsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = stupendousEmporiumItemsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = stupendousEmporiumItemsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = stupendousEmporiumItemsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = stupendousEmporiumItemsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = stupendousEmporiumItemsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = stupendousEmporiumItemsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = stupendousEmporiumItemsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = stupendousEmporiumItemsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = stupendousEmporiumItemsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = stupendousEmporiumItemsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = stupendousEmporiumItemsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = stupendousEmporiumItemsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = stupendousEmporiumItemsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = stupendousEmporiumItemsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = stupendousEmporiumItemsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = stupendousEmporiumItemsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = stupendousEmporiumItemsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = stupendousEmporiumItemsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = stupendousEmporiumItemsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = stupendousEmporiumItemsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = stupendousEmporiumItemsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = stupendousEmporiumItemsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = stupendousEmporiumItemsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = stupendousEmporiumItemsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = stupendousEmporiumItemsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = stupendousEmporiumItemsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = stupendousEmporiumItemsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = stupendousEmporiumItemsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = stupendousEmporiumItemsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = stupendousEmporiumItemsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = stupendousEmporiumItemsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = stupendousEmporiumItemsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = stupendousEmporiumItemsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = stupendousEmporiumItemsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = stupendousEmporiumItemsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = stupendousEmporiumItemsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = stupendousEmporiumItemsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = stupendousEmporiumItemsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = stupendousEmporiumItemsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = stupendousEmporiumItemsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = stupendousEmporiumItemsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = stupendousEmporiumItemsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = stupendousEmporiumItemsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = stupendousEmporiumItemsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = stupendousEmporiumItemsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = stupendousEmporiumItemsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = stupendousEmporiumItemsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = stupendousEmporiumItemsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = stupendousEmporiumItemsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = stupendousEmporiumItemsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = stupendousEmporiumItemsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = stupendousEmporiumItemsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = stupendousEmporiumItemsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = stupendousEmporiumItemsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = stupendousEmporiumItemsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = stupendousEmporiumItemsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = stupendousEmporiumItemsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = stupendousEmporiumItemsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = stupendousEmporiumItemsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "weapons") {
            activeItemsOnDisplayItems.item1 = stupendousEmporiumWeaponsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = stupendousEmporiumWeaponsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = stupendousEmporiumWeaponsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = stupendousEmporiumWeaponsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = stupendousEmporiumWeaponsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = stupendousEmporiumWeaponsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = stupendousEmporiumWeaponsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = stupendousEmporiumWeaponsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = stupendousEmporiumWeaponsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = stupendousEmporiumWeaponsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = stupendousEmporiumWeaponsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = stupendousEmporiumWeaponsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = stupendousEmporiumWeaponsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = stupendousEmporiumWeaponsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = stupendousEmporiumWeaponsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = stupendousEmporiumWeaponsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = stupendousEmporiumWeaponsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = stupendousEmporiumWeaponsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = stupendousEmporiumWeaponsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = stupendousEmporiumWeaponsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = stupendousEmporiumWeaponsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = stupendousEmporiumWeaponsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = stupendousEmporiumWeaponsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = stupendousEmporiumWeaponsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = stupendousEmporiumWeaponsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = stupendousEmporiumWeaponsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = stupendousEmporiumWeaponsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = stupendousEmporiumWeaponsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = stupendousEmporiumWeaponsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = stupendousEmporiumWeaponsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = stupendousEmporiumWeaponsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = stupendousEmporiumWeaponsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = stupendousEmporiumWeaponsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = stupendousEmporiumWeaponsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = stupendousEmporiumWeaponsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = stupendousEmporiumWeaponsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = stupendousEmporiumWeaponsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = stupendousEmporiumWeaponsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = stupendousEmporiumWeaponsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = stupendousEmporiumWeaponsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = stupendousEmporiumWeaponsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = stupendousEmporiumWeaponsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = stupendousEmporiumWeaponsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = stupendousEmporiumWeaponsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = stupendousEmporiumWeaponsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = stupendousEmporiumWeaponsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = stupendousEmporiumWeaponsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = stupendousEmporiumWeaponsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = stupendousEmporiumWeaponsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = stupendousEmporiumWeaponsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = stupendousEmporiumWeaponsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = stupendousEmporiumWeaponsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = stupendousEmporiumWeaponsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = stupendousEmporiumWeaponsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = stupendousEmporiumWeaponsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = stupendousEmporiumWeaponsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = stupendousEmporiumWeaponsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = stupendousEmporiumWeaponsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = stupendousEmporiumWeaponsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = stupendousEmporiumWeaponsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = stupendousEmporiumWeaponsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = stupendousEmporiumWeaponsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = stupendousEmporiumWeaponsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = stupendousEmporiumWeaponsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = stupendousEmporiumWeaponsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = stupendousEmporiumWeaponsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = stupendousEmporiumWeaponsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = stupendousEmporiumWeaponsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = stupendousEmporiumWeaponsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = stupendousEmporiumWeaponsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = stupendousEmporiumWeaponsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = stupendousEmporiumWeaponsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "armours") {
            activeItemsOnDisplayItems.item1 = stupendousEmporiumArmourInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = stupendousEmporiumArmourInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = stupendousEmporiumArmourInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = stupendousEmporiumArmourInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = stupendousEmporiumArmourInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = stupendousEmporiumArmourInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = stupendousEmporiumArmourInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = stupendousEmporiumArmourInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = stupendousEmporiumArmourInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = stupendousEmporiumArmourInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = stupendousEmporiumArmourInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = stupendousEmporiumArmourInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = stupendousEmporiumArmourInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = stupendousEmporiumArmourInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = stupendousEmporiumArmourInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = stupendousEmporiumArmourInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = stupendousEmporiumArmourInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = stupendousEmporiumArmourInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = stupendousEmporiumArmourInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = stupendousEmporiumArmourInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = stupendousEmporiumArmourInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = stupendousEmporiumArmourInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = stupendousEmporiumArmourInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = stupendousEmporiumArmourInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = stupendousEmporiumArmourInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = stupendousEmporiumArmourInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = stupendousEmporiumArmourInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = stupendousEmporiumArmourInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = stupendousEmporiumArmourInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = stupendousEmporiumArmourInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = stupendousEmporiumArmourInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = stupendousEmporiumArmourInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = stupendousEmporiumArmourInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = stupendousEmporiumArmourInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = stupendousEmporiumArmourInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = stupendousEmporiumArmourInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = stupendousEmporiumArmourInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = stupendousEmporiumArmourInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = stupendousEmporiumArmourInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = stupendousEmporiumArmourInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = stupendousEmporiumArmourInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = stupendousEmporiumArmourInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = stupendousEmporiumArmourInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = stupendousEmporiumArmourInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = stupendousEmporiumArmourInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = stupendousEmporiumArmourInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = stupendousEmporiumArmourInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = stupendousEmporiumArmourInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = stupendousEmporiumArmourInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = stupendousEmporiumArmourInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = stupendousEmporiumArmourInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = stupendousEmporiumArmourInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = stupendousEmporiumArmourInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = stupendousEmporiumArmourInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = stupendousEmporiumArmourInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = stupendousEmporiumArmourInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = stupendousEmporiumArmourInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = stupendousEmporiumArmourInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = stupendousEmporiumArmourInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = stupendousEmporiumArmourInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = stupendousEmporiumArmourInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = stupendousEmporiumArmourInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = stupendousEmporiumArmourInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = stupendousEmporiumArmourInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = stupendousEmporiumArmourInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = stupendousEmporiumArmourInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = stupendousEmporiumArmourInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = stupendousEmporiumArmourInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = stupendousEmporiumArmourInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = stupendousEmporiumArmourInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = stupendousEmporiumArmourInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = stupendousEmporiumArmourInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "upgrade") {
            activeItemsOnDisplayItems.item1 = stupendousEmporiumUpgradeInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = stupendousEmporiumUpgradeInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = stupendousEmporiumUpgradeInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = stupendousEmporiumUpgradeInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = stupendousEmporiumUpgradeInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = stupendousEmporiumUpgradeInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = stupendousEmporiumUpgradeInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = stupendousEmporiumUpgradeInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = stupendousEmporiumUpgradeInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = stupendousEmporiumUpgradeInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = stupendousEmporiumUpgradeInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = stupendousEmporiumUpgradeInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = stupendousEmporiumUpgradeInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = stupendousEmporiumUpgradeInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = stupendousEmporiumUpgradeInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = stupendousEmporiumUpgradeInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = stupendousEmporiumUpgradeInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = stupendousEmporiumUpgradeInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = stupendousEmporiumUpgradeInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = stupendousEmporiumUpgradeInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = stupendousEmporiumUpgradeInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = stupendousEmporiumUpgradeInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = stupendousEmporiumUpgradeInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = stupendousEmporiumUpgradeInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = stupendousEmporiumUpgradeInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = stupendousEmporiumUpgradeInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = stupendousEmporiumUpgradeInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = stupendousEmporiumUpgradeInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = stupendousEmporiumUpgradeInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = stupendousEmporiumUpgradeInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = stupendousEmporiumUpgradeInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = stupendousEmporiumUpgradeInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = stupendousEmporiumUpgradeInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = stupendousEmporiumUpgradeInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = stupendousEmporiumUpgradeInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = stupendousEmporiumUpgradeInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = stupendousEmporiumUpgradeInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = stupendousEmporiumUpgradeInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = stupendousEmporiumUpgradeInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = stupendousEmporiumUpgradeInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = stupendousEmporiumUpgradeInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = stupendousEmporiumUpgradeInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = stupendousEmporiumUpgradeInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = stupendousEmporiumUpgradeInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = stupendousEmporiumUpgradeInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = stupendousEmporiumUpgradeInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = stupendousEmporiumUpgradeInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = stupendousEmporiumUpgradeInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = stupendousEmporiumUpgradeInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = stupendousEmporiumUpgradeInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = stupendousEmporiumUpgradeInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = stupendousEmporiumUpgradeInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = stupendousEmporiumUpgradeInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = stupendousEmporiumUpgradeInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = stupendousEmporiumUpgradeInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = stupendousEmporiumUpgradeInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = stupendousEmporiumUpgradeInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = stupendousEmporiumUpgradeInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = stupendousEmporiumUpgradeInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = stupendousEmporiumUpgradeInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = stupendousEmporiumUpgradeInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = stupendousEmporiumUpgradeInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = stupendousEmporiumUpgradeInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = stupendousEmporiumUpgradeInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = stupendousEmporiumUpgradeInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = stupendousEmporiumUpgradeInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = stupendousEmporiumUpgradeInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = stupendousEmporiumUpgradeInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = stupendousEmporiumUpgradeInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = stupendousEmporiumUpgradeInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = stupendousEmporiumUpgradeInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = stupendousEmporiumUpgradeInventoryPrices.item36;
        }
    }
    else if (shopNumber == 2){
        if (chosenOptionInShop == "items"){
            activeItemsOnDisplayItems.item1 = justMonstersItemsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = justMonstersItemsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = justMonstersItemsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = justMonstersItemsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = justMonstersItemsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = justMonstersItemsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = justMonstersItemsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = justMonstersItemsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = justMonstersItemsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = justMonstersItemsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = justMonstersItemsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = justMonstersItemsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = justMonstersItemsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = justMonstersItemsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = justMonstersItemsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = justMonstersItemsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = justMonstersItemsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = justMonstersItemsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = justMonstersItemsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = justMonstersItemsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = justMonstersItemsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = justMonstersItemsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = justMonstersItemsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = justMonstersItemsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = justMonstersItemsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = justMonstersItemsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = justMonstersItemsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = justMonstersItemsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = justMonstersItemsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = justMonstersItemsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = justMonstersItemsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = justMonstersItemsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = justMonstersItemsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = justMonstersItemsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = justMonstersItemsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = justMonstersItemsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = justMonstersItemsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = justMonstersItemsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = justMonstersItemsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = justMonstersItemsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = justMonstersItemsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = justMonstersItemsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = justMonstersItemsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = justMonstersItemsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = justMonstersItemsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = justMonstersItemsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = justMonstersItemsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = justMonstersItemsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = justMonstersItemsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = justMonstersItemsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = justMonstersItemsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = justMonstersItemsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = justMonstersItemsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = justMonstersItemsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = justMonstersItemsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = justMonstersItemsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = justMonstersItemsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = justMonstersItemsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = justMonstersItemsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = justMonstersItemsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = justMonstersItemsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = justMonstersItemsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = justMonstersItemsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = justMonstersItemsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = justMonstersItemsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = justMonstersItemsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = justMonstersItemsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = justMonstersItemsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = justMonstersItemsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = justMonstersItemsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = justMonstersItemsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = justMonstersItemsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "weapons") {
            activeItemsOnDisplayItems.item1 = justMonstersWeaponsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = justMonstersWeaponsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = justMonstersWeaponsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = justMonstersWeaponsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = justMonstersWeaponsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = justMonstersWeaponsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = justMonstersWeaponsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = justMonstersWeaponsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = justMonstersWeaponsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = justMonstersWeaponsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = justMonstersWeaponsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = justMonstersWeaponsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = justMonstersWeaponsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = justMonstersWeaponsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = justMonstersWeaponsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = justMonstersWeaponsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = justMonstersWeaponsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = justMonstersWeaponsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = justMonstersWeaponsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = justMonstersWeaponsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = justMonstersWeaponsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = justMonstersWeaponsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = justMonstersWeaponsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = justMonstersWeaponsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = justMonstersWeaponsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = justMonstersWeaponsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = justMonstersWeaponsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = justMonstersWeaponsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = justMonstersWeaponsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = justMonstersWeaponsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = justMonstersWeaponsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = justMonstersWeaponsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = justMonstersWeaponsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = justMonstersWeaponsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = justMonstersWeaponsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = justMonstersWeaponsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = justMonstersWeaponsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = justMonstersWeaponsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = justMonstersWeaponsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = justMonstersWeaponsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = justMonstersWeaponsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = justMonstersWeaponsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = justMonstersWeaponsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = justMonstersWeaponsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = justMonstersWeaponsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = justMonstersWeaponsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = justMonstersWeaponsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = justMonstersWeaponsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = justMonstersWeaponsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = justMonstersWeaponsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = justMonstersWeaponsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = justMonstersWeaponsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = justMonstersWeaponsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = justMonstersWeaponsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = justMonstersWeaponsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = justMonstersWeaponsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = justMonstersWeaponsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = justMonstersWeaponsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = justMonstersWeaponsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = justMonstersWeaponsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = justMonstersWeaponsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = justMonstersWeaponsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = justMonstersWeaponsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = justMonstersWeaponsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = justMonstersWeaponsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = justMonstersWeaponsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = justMonstersWeaponsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = justMonstersWeaponsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = justMonstersWeaponsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = justMonstersWeaponsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = justMonstersWeaponsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = justMonstersWeaponsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "armours") {
            activeItemsOnDisplayItems.item1 = justMonstersArmourInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = justMonstersArmourInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = justMonstersArmourInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = justMonstersArmourInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = justMonstersArmourInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = justMonstersArmourInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = justMonstersArmourInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = justMonstersArmourInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = justMonstersArmourInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = justMonstersArmourInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = justMonstersArmourInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = justMonstersArmourInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = justMonstersArmourInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = justMonstersArmourInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = justMonstersArmourInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = justMonstersArmourInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = justMonstersArmourInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = justMonstersArmourInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = justMonstersArmourInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = justMonstersArmourInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = justMonstersArmourInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = justMonstersArmourInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = justMonstersArmourInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = justMonstersArmourInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = justMonstersArmourInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = justMonstersArmourInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = justMonstersArmourInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = justMonstersArmourInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = justMonstersArmourInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = justMonstersArmourInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = justMonstersArmourInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = justMonstersArmourInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = justMonstersArmourInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = justMonstersArmourInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = justMonstersArmourInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = justMonstersArmourInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = justMonstersArmourInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = justMonstersArmourInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = justMonstersArmourInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = justMonstersArmourInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = justMonstersArmourInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = justMonstersArmourInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = justMonstersArmourInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = justMonstersArmourInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = justMonstersArmourInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = justMonstersArmourInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = justMonstersArmourInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = justMonstersArmourInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = justMonstersArmourInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = justMonstersArmourInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = justMonstersArmourInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = justMonstersArmourInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = justMonstersArmourInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = justMonstersArmourInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = justMonstersArmourInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = justMonstersArmourInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = justMonstersArmourInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = justMonstersArmourInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = justMonstersArmourInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = justMonstersArmourInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = justMonstersArmourInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = justMonstersArmourInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = justMonstersArmourInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = justMonstersArmourInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = justMonstersArmourInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = justMonstersArmourInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = justMonstersArmourInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = justMonstersArmourInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = justMonstersArmourInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = justMonstersArmourInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = justMonstersArmourInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = justMonstersArmourInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "upgrade") {
            activeItemsOnDisplayItems.item1 = justMonstersUpgradeInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = justMonstersUpgradeInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = justMonstersUpgradeInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = justMonstersUpgradeInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = justMonstersUpgradeInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = justMonstersUpgradeInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = justMonstersUpgradeInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = justMonstersUpgradeInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = justMonstersUpgradeInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = justMonstersUpgradeInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = justMonstersUpgradeInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = justMonstersUpgradeInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = justMonstersUpgradeInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = justMonstersUpgradeInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = justMonstersUpgradeInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = justMonstersUpgradeInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = justMonstersUpgradeInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = justMonstersUpgradeInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = justMonstersUpgradeInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = justMonstersUpgradeInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = justMonstersUpgradeInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = justMonstersUpgradeInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = justMonstersUpgradeInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = justMonstersUpgradeInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = justMonstersUpgradeInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = justMonstersUpgradeInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = justMonstersUpgradeInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = justMonstersUpgradeInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = justMonstersUpgradeInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = justMonstersUpgradeInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = justMonstersUpgradeInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = justMonstersUpgradeInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = justMonstersUpgradeInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = justMonstersUpgradeInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = justMonstersUpgradeInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = justMonstersUpgradeInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = justMonstersUpgradeInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = justMonstersUpgradeInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = justMonstersUpgradeInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = justMonstersUpgradeInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = justMonstersUpgradeInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = justMonstersUpgradeInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = justMonstersUpgradeInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = justMonstersUpgradeInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = justMonstersUpgradeInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = justMonstersUpgradeInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = justMonstersUpgradeInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = justMonstersUpgradeInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = justMonstersUpgradeInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = justMonstersUpgradeInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = justMonstersUpgradeInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = justMonstersUpgradeInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = justMonstersUpgradeInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = justMonstersUpgradeInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = justMonstersUpgradeInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = justMonstersUpgradeInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = justMonstersUpgradeInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = justMonstersUpgradeInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = justMonstersUpgradeInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = justMonstersUpgradeInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = justMonstersUpgradeInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = justMonstersUpgradeInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = justMonstersUpgradeInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = justMonstersUpgradeInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = justMonstersUpgradeInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = justMonstersUpgradeInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = justMonstersUpgradeInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = justMonstersUpgradeInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = justMonstersUpgradeInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = justMonstersUpgradeInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = justMonstersUpgradeInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = justMonstersUpgradeInventoryPrices.item36;
        }
    }
    else if (shopNumber == 3){
        if (chosenOptionInShop == "items"){
            activeItemsOnDisplayItems.item1 = rosesFlowerShopItemsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = rosesFlowerShopItemsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = rosesFlowerShopItemsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = rosesFlowerShopItemsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = rosesFlowerShopItemsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = rosesFlowerShopItemsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = rosesFlowerShopItemsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = rosesFlowerShopItemsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = rosesFlowerShopItemsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = rosesFlowerShopItemsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = rosesFlowerShopItemsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = rosesFlowerShopItemsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = rosesFlowerShopItemsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = rosesFlowerShopItemsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = rosesFlowerShopItemsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = rosesFlowerShopItemsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = rosesFlowerShopItemsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = rosesFlowerShopItemsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = rosesFlowerShopItemsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = rosesFlowerShopItemsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = rosesFlowerShopItemsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = rosesFlowerShopItemsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = rosesFlowerShopItemsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = rosesFlowerShopItemsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = rosesFlowerShopItemsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = rosesFlowerShopItemsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = rosesFlowerShopItemsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = rosesFlowerShopItemsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = rosesFlowerShopItemsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = rosesFlowerShopItemsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = rosesFlowerShopItemsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = rosesFlowerShopItemsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = rosesFlowerShopItemsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = rosesFlowerShopItemsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = rosesFlowerShopItemsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = rosesFlowerShopItemsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = rosesFlowerShopItemsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = rosesFlowerShopItemsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = rosesFlowerShopItemsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = rosesFlowerShopItemsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = rosesFlowerShopItemsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = rosesFlowerShopItemsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = rosesFlowerShopItemsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = rosesFlowerShopItemsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = rosesFlowerShopItemsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = rosesFlowerShopItemsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = rosesFlowerShopItemsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = rosesFlowerShopItemsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = rosesFlowerShopItemsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = rosesFlowerShopItemsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = rosesFlowerShopItemsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = rosesFlowerShopItemsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = rosesFlowerShopItemsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = rosesFlowerShopItemsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = rosesFlowerShopItemsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = rosesFlowerShopItemsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = rosesFlowerShopItemsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = rosesFlowerShopItemsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = rosesFlowerShopItemsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = rosesFlowerShopItemsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = rosesFlowerShopItemsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = rosesFlowerShopItemsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = rosesFlowerShopItemsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = rosesFlowerShopItemsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = rosesFlowerShopItemsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = rosesFlowerShopItemsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = rosesFlowerShopItemsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = rosesFlowerShopItemsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = rosesFlowerShopItemsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = rosesFlowerShopItemsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = rosesFlowerShopItemsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = rosesFlowerShopItemsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "weapons") {
            activeItemsOnDisplayItems.item1 = rosesFlowerShopWeaponsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = rosesFlowerShopWeaponsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = rosesFlowerShopWeaponsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = rosesFlowerShopWeaponsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = rosesFlowerShopWeaponsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = rosesFlowerShopWeaponsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = rosesFlowerShopWeaponsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = rosesFlowerShopWeaponsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = rosesFlowerShopWeaponsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = rosesFlowerShopWeaponsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = rosesFlowerShopWeaponsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = rosesFlowerShopWeaponsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = rosesFlowerShopWeaponsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = rosesFlowerShopWeaponsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = rosesFlowerShopWeaponsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = rosesFlowerShopWeaponsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = rosesFlowerShopWeaponsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = rosesFlowerShopWeaponsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = rosesFlowerShopWeaponsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = rosesFlowerShopWeaponsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = rosesFlowerShopWeaponsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = rosesFlowerShopWeaponsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = rosesFlowerShopWeaponsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = rosesFlowerShopWeaponsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = rosesFlowerShopWeaponsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = rosesFlowerShopWeaponsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = rosesFlowerShopWeaponsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = rosesFlowerShopWeaponsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = rosesFlowerShopWeaponsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = rosesFlowerShopWeaponsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = rosesFlowerShopWeaponsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = rosesFlowerShopWeaponsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = rosesFlowerShopWeaponsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = rosesFlowerShopWeaponsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = rosesFlowerShopWeaponsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = rosesFlowerShopWeaponsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = rosesFlowerShopWeaponsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = rosesFlowerShopWeaponsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = rosesFlowerShopWeaponsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = rosesFlowerShopWeaponsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = rosesFlowerShopWeaponsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = rosesFlowerShopWeaponsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = rosesFlowerShopWeaponsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = rosesFlowerShopWeaponsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = rosesFlowerShopWeaponsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = rosesFlowerShopWeaponsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = rosesFlowerShopWeaponsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = rosesFlowerShopWeaponsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = rosesFlowerShopWeaponsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = rosesFlowerShopWeaponsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = rosesFlowerShopWeaponsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = rosesFlowerShopWeaponsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = rosesFlowerShopWeaponsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = rosesFlowerShopWeaponsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = rosesFlowerShopWeaponsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = rosesFlowerShopWeaponsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = rosesFlowerShopWeaponsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = rosesFlowerShopWeaponsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = rosesFlowerShopWeaponsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = rosesFlowerShopWeaponsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = rosesFlowerShopWeaponsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = rosesFlowerShopWeaponsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = rosesFlowerShopWeaponsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = rosesFlowerShopWeaponsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = rosesFlowerShopWeaponsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = rosesFlowerShopWeaponsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = rosesFlowerShopWeaponsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = rosesFlowerShopWeaponsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = rosesFlowerShopWeaponsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = rosesFlowerShopWeaponsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = rosesFlowerShopWeaponsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = rosesFlowerShopWeaponsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "armours") {
            activeItemsOnDisplayItems.item1 = rosesFlowerShopArmourInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = rosesFlowerShopArmourInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = rosesFlowerShopArmourInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = rosesFlowerShopArmourInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = rosesFlowerShopArmourInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = rosesFlowerShopArmourInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = rosesFlowerShopArmourInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = rosesFlowerShopArmourInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = rosesFlowerShopArmourInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = rosesFlowerShopArmourInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = rosesFlowerShopArmourInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = rosesFlowerShopArmourInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = rosesFlowerShopArmourInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = rosesFlowerShopArmourInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = rosesFlowerShopArmourInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = rosesFlowerShopArmourInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = rosesFlowerShopArmourInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = rosesFlowerShopArmourInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = rosesFlowerShopArmourInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = rosesFlowerShopArmourInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = rosesFlowerShopArmourInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = rosesFlowerShopArmourInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = rosesFlowerShopArmourInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = rosesFlowerShopArmourInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = rosesFlowerShopArmourInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = rosesFlowerShopArmourInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = rosesFlowerShopArmourInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = rosesFlowerShopArmourInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = rosesFlowerShopArmourInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = rosesFlowerShopArmourInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = rosesFlowerShopArmourInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = rosesFlowerShopArmourInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = rosesFlowerShopArmourInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = rosesFlowerShopArmourInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = rosesFlowerShopArmourInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = rosesFlowerShopArmourInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = rosesFlowerShopArmourInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = rosesFlowerShopArmourInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = rosesFlowerShopArmourInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = rosesFlowerShopArmourInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = rosesFlowerShopArmourInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = rosesFlowerShopArmourInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = rosesFlowerShopArmourInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = rosesFlowerShopArmourInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = rosesFlowerShopArmourInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = rosesFlowerShopArmourInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = rosesFlowerShopArmourInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = rosesFlowerShopArmourInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = rosesFlowerShopArmourInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = rosesFlowerShopArmourInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = rosesFlowerShopArmourInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = rosesFlowerShopArmourInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = rosesFlowerShopArmourInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = rosesFlowerShopArmourInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = rosesFlowerShopArmourInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = rosesFlowerShopArmourInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = rosesFlowerShopArmourInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = rosesFlowerShopArmourInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = rosesFlowerShopArmourInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = rosesFlowerShopArmourInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = rosesFlowerShopArmourInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = rosesFlowerShopArmourInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = rosesFlowerShopArmourInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = rosesFlowerShopArmourInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = rosesFlowerShopArmourInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = rosesFlowerShopArmourInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = rosesFlowerShopArmourInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = rosesFlowerShopArmourInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = rosesFlowerShopArmourInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = rosesFlowerShopArmourInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = rosesFlowerShopArmourInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = rosesFlowerShopArmourInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "upgrade") {
            activeItemsOnDisplayItems.item1 = rosesFlowerShopUpgradeInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = rosesFlowerShopUpgradeInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = rosesFlowerShopUpgradeInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = rosesFlowerShopUpgradeInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = rosesFlowerShopUpgradeInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = rosesFlowerShopUpgradeInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = rosesFlowerShopUpgradeInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = rosesFlowerShopUpgradeInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = rosesFlowerShopUpgradeInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = rosesFlowerShopUpgradeInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = rosesFlowerShopUpgradeInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = rosesFlowerShopUpgradeInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = rosesFlowerShopUpgradeInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = rosesFlowerShopUpgradeInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = rosesFlowerShopUpgradeInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = rosesFlowerShopUpgradeInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = rosesFlowerShopUpgradeInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = rosesFlowerShopUpgradeInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = rosesFlowerShopUpgradeInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = rosesFlowerShopUpgradeInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = rosesFlowerShopUpgradeInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = rosesFlowerShopUpgradeInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = rosesFlowerShopUpgradeInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = rosesFlowerShopUpgradeInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = rosesFlowerShopUpgradeInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = rosesFlowerShopUpgradeInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = rosesFlowerShopUpgradeInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = rosesFlowerShopUpgradeInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = rosesFlowerShopUpgradeInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = rosesFlowerShopUpgradeInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = rosesFlowerShopUpgradeInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = rosesFlowerShopUpgradeInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = rosesFlowerShopUpgradeInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = rosesFlowerShopUpgradeInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = rosesFlowerShopUpgradeInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = rosesFlowerShopUpgradeInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = rosesFlowerShopUpgradeInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = rosesFlowerShopUpgradeInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = rosesFlowerShopUpgradeInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = rosesFlowerShopUpgradeInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = rosesFlowerShopUpgradeInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = rosesFlowerShopUpgradeInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = rosesFlowerShopUpgradeInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = rosesFlowerShopUpgradeInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = rosesFlowerShopUpgradeInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = rosesFlowerShopUpgradeInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = rosesFlowerShopUpgradeInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = rosesFlowerShopUpgradeInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = rosesFlowerShopUpgradeInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = rosesFlowerShopUpgradeInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = rosesFlowerShopUpgradeInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = rosesFlowerShopUpgradeInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = rosesFlowerShopUpgradeInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = rosesFlowerShopUpgradeInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = rosesFlowerShopUpgradeInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = rosesFlowerShopUpgradeInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = rosesFlowerShopUpgradeInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = rosesFlowerShopUpgradeInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = rosesFlowerShopUpgradeInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = rosesFlowerShopUpgradeInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = rosesFlowerShopUpgradeInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = rosesFlowerShopUpgradeInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = rosesFlowerShopUpgradeInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = rosesFlowerShopUpgradeInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = rosesFlowerShopUpgradeInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = rosesFlowerShopUpgradeInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = rosesFlowerShopUpgradeInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = rosesFlowerShopUpgradeInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = rosesFlowerShopUpgradeInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = rosesFlowerShopUpgradeInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = rosesFlowerShopUpgradeInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = rosesFlowerShopUpgradeInventoryPrices.item36;
        }
    }
    else if (shopNumber == 4){
        if (chosenOptionInShop == "items"){
            activeItemsOnDisplayItems.item1 = clydeHealeryItemsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = clydeHealeryItemsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = clydeHealeryItemsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = clydeHealeryItemsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = clydeHealeryItemsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = clydeHealeryItemsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = clydeHealeryItemsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = clydeHealeryItemsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = clydeHealeryItemsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = clydeHealeryItemsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = clydeHealeryItemsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = clydeHealeryItemsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = clydeHealeryItemsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = clydeHealeryItemsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = clydeHealeryItemsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = clydeHealeryItemsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = clydeHealeryItemsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = clydeHealeryItemsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = clydeHealeryItemsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = clydeHealeryItemsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = clydeHealeryItemsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = clydeHealeryItemsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = clydeHealeryItemsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = clydeHealeryItemsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = clydeHealeryItemsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = clydeHealeryItemsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = clydeHealeryItemsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = clydeHealeryItemsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = clydeHealeryItemsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = clydeHealeryItemsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = clydeHealeryItemsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = clydeHealeryItemsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = clydeHealeryItemsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = clydeHealeryItemsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = clydeHealeryItemsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = clydeHealeryItemsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = clydeHealeryItemsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = clydeHealeryItemsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = clydeHealeryItemsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = clydeHealeryItemsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = clydeHealeryItemsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = clydeHealeryItemsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = clydeHealeryItemsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = clydeHealeryItemsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = clydeHealeryItemsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = clydeHealeryItemsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = clydeHealeryItemsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = clydeHealeryItemsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = clydeHealeryItemsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = clydeHealeryItemsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = clydeHealeryItemsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = clydeHealeryItemsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = clydeHealeryItemsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = clydeHealeryItemsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = clydeHealeryItemsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = clydeHealeryItemsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = clydeHealeryItemsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = clydeHealeryItemsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = clydeHealeryItemsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = clydeHealeryItemsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = clydeHealeryItemsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = clydeHealeryItemsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = clydeHealeryItemsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = clydeHealeryItemsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = clydeHealeryItemsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = clydeHealeryItemsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = clydeHealeryItemsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = clydeHealeryItemsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = clydeHealeryItemsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = clydeHealeryItemsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = clydeHealeryItemsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = clydeHealeryItemsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "weapons") {
            activeItemsOnDisplayItems.item1 = clydeHealeryWeaponsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = clydeHealeryWeaponsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = clydeHealeryWeaponsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = clydeHealeryWeaponsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = clydeHealeryWeaponsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = clydeHealeryWeaponsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = clydeHealeryWeaponsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = clydeHealeryWeaponsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = clydeHealeryWeaponsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = clydeHealeryWeaponsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = clydeHealeryWeaponsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = clydeHealeryWeaponsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = clydeHealeryWeaponsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = clydeHealeryWeaponsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = clydeHealeryWeaponsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = clydeHealeryWeaponsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = clydeHealeryWeaponsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = clydeHealeryWeaponsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = clydeHealeryWeaponsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = clydeHealeryWeaponsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = clydeHealeryWeaponsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = clydeHealeryWeaponsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = clydeHealeryWeaponsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = clydeHealeryWeaponsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = clydeHealeryWeaponsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = clydeHealeryWeaponsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = clydeHealeryWeaponsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = clydeHealeryWeaponsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = clydeHealeryWeaponsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = clydeHealeryWeaponsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = clydeHealeryWeaponsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = clydeHealeryWeaponsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = clydeHealeryWeaponsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = clydeHealeryWeaponsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = clydeHealeryWeaponsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = clydeHealeryWeaponsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = clydeHealeryWeaponsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = clydeHealeryWeaponsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = clydeHealeryWeaponsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = clydeHealeryWeaponsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = clydeHealeryWeaponsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = clydeHealeryWeaponsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = clydeHealeryWeaponsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = clydeHealeryWeaponsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = clydeHealeryWeaponsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = clydeHealeryWeaponsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = clydeHealeryWeaponsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = clydeHealeryWeaponsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = clydeHealeryWeaponsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = clydeHealeryWeaponsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = clydeHealeryWeaponsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = clydeHealeryWeaponsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = clydeHealeryWeaponsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = clydeHealeryWeaponsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = clydeHealeryWeaponsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = clydeHealeryWeaponsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = clydeHealeryWeaponsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = clydeHealeryWeaponsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = clydeHealeryWeaponsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = clydeHealeryWeaponsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = clydeHealeryWeaponsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = clydeHealeryWeaponsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = clydeHealeryWeaponsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = clydeHealeryWeaponsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = clydeHealeryWeaponsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = clydeHealeryWeaponsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = clydeHealeryWeaponsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = clydeHealeryWeaponsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = clydeHealeryWeaponsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = clydeHealeryWeaponsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = clydeHealeryWeaponsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = clydeHealeryWeaponsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "armours") {
            activeItemsOnDisplayItems.item1 = clydeHealeryArmourInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = clydeHealeryArmourInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = clydeHealeryArmourInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = clydeHealeryArmourInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = clydeHealeryArmourInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = clydeHealeryArmourInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = clydeHealeryArmourInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = clydeHealeryArmourInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = clydeHealeryArmourInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = clydeHealeryArmourInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = clydeHealeryArmourInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = clydeHealeryArmourInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = clydeHealeryArmourInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = clydeHealeryArmourInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = clydeHealeryArmourInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = clydeHealeryArmourInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = clydeHealeryArmourInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = clydeHealeryArmourInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = clydeHealeryArmourInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = clydeHealeryArmourInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = clydeHealeryArmourInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = clydeHealeryArmourInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = clydeHealeryArmourInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = clydeHealeryArmourInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = clydeHealeryArmourInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = clydeHealeryArmourInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = clydeHealeryArmourInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = clydeHealeryArmourInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = clydeHealeryArmourInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = clydeHealeryArmourInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = clydeHealeryArmourInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = clydeHealeryArmourInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = clydeHealeryArmourInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = clydeHealeryArmourInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = clydeHealeryArmourInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = clydeHealeryArmourInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = clydeHealeryArmourInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = clydeHealeryArmourInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = clydeHealeryArmourInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = clydeHealeryArmourInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = clydeHealeryArmourInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = clydeHealeryArmourInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = clydeHealeryArmourInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = clydeHealeryArmourInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = clydeHealeryArmourInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = clydeHealeryArmourInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = clydeHealeryArmourInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = clydeHealeryArmourInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = clydeHealeryArmourInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = clydeHealeryArmourInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = clydeHealeryArmourInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = clydeHealeryArmourInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = clydeHealeryArmourInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = clydeHealeryArmourInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = clydeHealeryArmourInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = clydeHealeryArmourInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = clydeHealeryArmourInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = clydeHealeryArmourInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = clydeHealeryArmourInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = clydeHealeryArmourInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = clydeHealeryArmourInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = clydeHealeryArmourInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = clydeHealeryArmourInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = clydeHealeryArmourInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = clydeHealeryArmourInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = clydeHealeryArmourInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = clydeHealeryArmourInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = clydeHealeryArmourInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = clydeHealeryArmourInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = clydeHealeryArmourInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = clydeHealeryArmourInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = clydeHealeryArmourInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "upgrade") {
            activeItemsOnDisplayItems.item1 = clydeHealeryUpgradeInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = clydeHealeryUpgradeInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = clydeHealeryUpgradeInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = clydeHealeryUpgradeInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = clydeHealeryUpgradeInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = clydeHealeryUpgradeInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = clydeHealeryUpgradeInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = clydeHealeryUpgradeInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = clydeHealeryUpgradeInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = clydeHealeryUpgradeInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = clydeHealeryUpgradeInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = clydeHealeryUpgradeInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = clydeHealeryUpgradeInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = clydeHealeryUpgradeInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = clydeHealeryUpgradeInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = clydeHealeryUpgradeInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = clydeHealeryUpgradeInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = clydeHealeryUpgradeInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = clydeHealeryUpgradeInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = clydeHealeryUpgradeInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = clydeHealeryUpgradeInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = clydeHealeryUpgradeInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = clydeHealeryUpgradeInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = clydeHealeryUpgradeInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = clydeHealeryUpgradeInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = clydeHealeryUpgradeInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = clydeHealeryUpgradeInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = clydeHealeryUpgradeInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = clydeHealeryUpgradeInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = clydeHealeryUpgradeInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = clydeHealeryUpgradeInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = clydeHealeryUpgradeInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = clydeHealeryUpgradeInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = clydeHealeryUpgradeInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = clydeHealeryUpgradeInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = clydeHealeryUpgradeInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = clydeHealeryUpgradeInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = clydeHealeryUpgradeInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = clydeHealeryUpgradeInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = clydeHealeryUpgradeInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = clydeHealeryUpgradeInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = clydeHealeryUpgradeInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = clydeHealeryUpgradeInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = clydeHealeryUpgradeInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = clydeHealeryUpgradeInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = clydeHealeryUpgradeInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = clydeHealeryUpgradeInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = clydeHealeryUpgradeInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = clydeHealeryUpgradeInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = clydeHealeryUpgradeInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = clydeHealeryUpgradeInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = clydeHealeryUpgradeInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = clydeHealeryUpgradeInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = clydeHealeryUpgradeInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = clydeHealeryUpgradeInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = clydeHealeryUpgradeInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = clydeHealeryUpgradeInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = clydeHealeryUpgradeInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = clydeHealeryUpgradeInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = clydeHealeryUpgradeInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = clydeHealeryUpgradeInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = clydeHealeryUpgradeInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = clydeHealeryUpgradeInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = clydeHealeryUpgradeInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = clydeHealeryUpgradeInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = clydeHealeryUpgradeInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = clydeHealeryUpgradeInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = clydeHealeryUpgradeInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = clydeHealeryUpgradeInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = clydeHealeryUpgradeInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = clydeHealeryUpgradeInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = clydeHealeryUpgradeInventoryPrices.item36;
        }
    }
    else if (shopNumber == 5){
        if (chosenOptionInShop == "items"){
            activeItemsOnDisplayItems.item1 = swordsAndMoreItemsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = swordsAndMoreItemsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = swordsAndMoreItemsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = swordsAndMoreItemsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = swordsAndMoreItemsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = swordsAndMoreItemsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = swordsAndMoreItemsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = swordsAndMoreItemsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = swordsAndMoreItemsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = swordsAndMoreItemsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = swordsAndMoreItemsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = swordsAndMoreItemsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = swordsAndMoreItemsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = swordsAndMoreItemsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = swordsAndMoreItemsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = swordsAndMoreItemsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = swordsAndMoreItemsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = swordsAndMoreItemsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = swordsAndMoreItemsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = swordsAndMoreItemsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = swordsAndMoreItemsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = swordsAndMoreItemsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = swordsAndMoreItemsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = swordsAndMoreItemsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = swordsAndMoreItemsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = swordsAndMoreItemsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = swordsAndMoreItemsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = swordsAndMoreItemsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = swordsAndMoreItemsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = swordsAndMoreItemsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = swordsAndMoreItemsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = swordsAndMoreItemsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = swordsAndMoreItemsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = swordsAndMoreItemsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = swordsAndMoreItemsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = swordsAndMoreItemsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = swordsAndMoreItemsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = swordsAndMoreItemsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = swordsAndMoreItemsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = swordsAndMoreItemsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = swordsAndMoreItemsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = swordsAndMoreItemsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = swordsAndMoreItemsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = swordsAndMoreItemsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = swordsAndMoreItemsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 =swordsAndMoreItemsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 =swordsAndMoreItemsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 =swordsAndMoreItemsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 =swordsAndMoreItemsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 =swordsAndMoreItemsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 =swordsAndMoreItemsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 =swordsAndMoreItemsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 =swordsAndMoreItemsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 =swordsAndMoreItemsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 =swordsAndMoreItemsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 =swordsAndMoreItemsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 =swordsAndMoreItemsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 =swordsAndMoreItemsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 =swordsAndMoreItemsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 =swordsAndMoreItemsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 =swordsAndMoreItemsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 =swordsAndMoreItemsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 =swordsAndMoreItemsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 =swordsAndMoreItemsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 =swordsAndMoreItemsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 =swordsAndMoreItemsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 =swordsAndMoreItemsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 =swordsAndMoreItemsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 =swordsAndMoreItemsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 =swordsAndMoreItemsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 =swordsAndMoreItemsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 =swordsAndMoreItemsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "weapons") {
            activeItemsOnDisplayItems.item1 = swordsAndMoreWeaponsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = swordsAndMoreWeaponsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = swordsAndMoreWeaponsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = swordsAndMoreWeaponsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = swordsAndMoreWeaponsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = swordsAndMoreWeaponsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = swordsAndMoreWeaponsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = swordsAndMoreWeaponsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = swordsAndMoreWeaponsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = swordsAndMoreWeaponsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = swordsAndMoreWeaponsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = swordsAndMoreWeaponsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = swordsAndMoreWeaponsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = swordsAndMoreWeaponsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = swordsAndMoreWeaponsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = swordsAndMoreWeaponsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = swordsAndMoreWeaponsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = swordsAndMoreWeaponsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = swordsAndMoreWeaponsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = swordsAndMoreWeaponsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = swordsAndMoreWeaponsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = swordsAndMoreWeaponsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = swordsAndMoreWeaponsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = swordsAndMoreWeaponsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = swordsAndMoreWeaponsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = swordsAndMoreWeaponsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = swordsAndMoreWeaponsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = swordsAndMoreWeaponsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = swordsAndMoreWeaponsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = swordsAndMoreWeaponsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = swordsAndMoreWeaponsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = swordsAndMoreWeaponsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = swordsAndMoreWeaponsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = swordsAndMoreWeaponsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = swordsAndMoreWeaponsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = swordsAndMoreWeaponsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = swordsAndMoreWeaponsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = swordsAndMoreWeaponsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = swordsAndMoreWeaponsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = swordsAndMoreWeaponsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = swordsAndMoreWeaponsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = swordsAndMoreWeaponsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = swordsAndMoreWeaponsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = swordsAndMoreWeaponsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = swordsAndMoreWeaponsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = swordsAndMoreWeaponsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = swordsAndMoreWeaponsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = swordsAndMoreWeaponsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = swordsAndMoreWeaponsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = swordsAndMoreWeaponsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = swordsAndMoreWeaponsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = swordsAndMoreWeaponsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = swordsAndMoreWeaponsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = swordsAndMoreWeaponsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = swordsAndMoreWeaponsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = swordsAndMoreWeaponsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = swordsAndMoreWeaponsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = swordsAndMoreWeaponsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = swordsAndMoreWeaponsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = swordsAndMoreWeaponsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = swordsAndMoreWeaponsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = swordsAndMoreWeaponsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = swordsAndMoreWeaponsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = swordsAndMoreWeaponsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = swordsAndMoreWeaponsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = swordsAndMoreWeaponsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = swordsAndMoreWeaponsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = swordsAndMoreWeaponsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = swordsAndMoreWeaponsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = swordsAndMoreWeaponsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = swordsAndMoreWeaponsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = swordsAndMoreWeaponsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "armours") {
            activeItemsOnDisplayItems.item1 = swordsAndMoreArmourInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = swordsAndMoreArmourInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = swordsAndMoreArmourInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = swordsAndMoreArmourInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = swordsAndMoreArmourInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = swordsAndMoreArmourInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = swordsAndMoreArmourInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = swordsAndMoreArmourInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = swordsAndMoreArmourInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = swordsAndMoreArmourInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = swordsAndMoreArmourInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = swordsAndMoreArmourInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = swordsAndMoreArmourInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = swordsAndMoreArmourInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = swordsAndMoreArmourInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = swordsAndMoreArmourInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = swordsAndMoreArmourInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = swordsAndMoreArmourInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = swordsAndMoreArmourInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = swordsAndMoreArmourInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = swordsAndMoreArmourInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = swordsAndMoreArmourInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = swordsAndMoreArmourInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = swordsAndMoreArmourInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = swordsAndMoreArmourInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = swordsAndMoreArmourInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = swordsAndMoreArmourInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = swordsAndMoreArmourInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = swordsAndMoreArmourInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = swordsAndMoreArmourInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = swordsAndMoreArmourInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = swordsAndMoreArmourInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = swordsAndMoreArmourInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = swordsAndMoreArmourInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = swordsAndMoreArmourInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = swordsAndMoreArmourInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = swordsAndMoreArmourInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = swordsAndMoreArmourInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = swordsAndMoreArmourInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = swordsAndMoreArmourInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = swordsAndMoreArmourInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = swordsAndMoreArmourInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = swordsAndMoreArmourInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = swordsAndMoreArmourInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = swordsAndMoreArmourInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = swordsAndMoreArmourInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = swordsAndMoreArmourInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = swordsAndMoreArmourInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = swordsAndMoreArmourInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = swordsAndMoreArmourInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = swordsAndMoreArmourInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = swordsAndMoreArmourInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = swordsAndMoreArmourInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = swordsAndMoreArmourInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = swordsAndMoreArmourInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = swordsAndMoreArmourInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = swordsAndMoreArmourInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = swordsAndMoreArmourInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = swordsAndMoreArmourInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = swordsAndMoreArmourInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = swordsAndMoreArmourInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = swordsAndMoreArmourInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = swordsAndMoreArmourInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = swordsAndMoreArmourInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = swordsAndMoreArmourInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = swordsAndMoreArmourInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = swordsAndMoreArmourInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = swordsAndMoreArmourInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = swordsAndMoreArmourInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = swordsAndMoreArmourInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = swordsAndMoreArmourInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = swordsAndMoreArmourInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "upgrade") {
            activeItemsOnDisplayItems.item1 = swordsAndMoreUpgradeInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = swordsAndMoreUpgradeInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = swordsAndMoreUpgradeInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = swordsAndMoreUpgradeInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = swordsAndMoreUpgradeInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = swordsAndMoreUpgradeInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = swordsAndMoreUpgradeInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = swordsAndMoreUpgradeInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = swordsAndMoreUpgradeInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = swordsAndMoreUpgradeInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = swordsAndMoreUpgradeInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = swordsAndMoreUpgradeInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = swordsAndMoreUpgradeInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = swordsAndMoreUpgradeInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = swordsAndMoreUpgradeInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = swordsAndMoreUpgradeInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = swordsAndMoreUpgradeInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = swordsAndMoreUpgradeInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = swordsAndMoreUpgradeInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = swordsAndMoreUpgradeInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = swordsAndMoreUpgradeInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = swordsAndMoreUpgradeInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = swordsAndMoreUpgradeInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = swordsAndMoreUpgradeInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = swordsAndMoreUpgradeInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = swordsAndMoreUpgradeInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = swordsAndMoreUpgradeInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = swordsAndMoreUpgradeInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = swordsAndMoreUpgradeInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = swordsAndMoreUpgradeInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = swordsAndMoreUpgradeInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = swordsAndMoreUpgradeInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = swordsAndMoreUpgradeInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = swordsAndMoreUpgradeInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = swordsAndMoreUpgradeInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = swordsAndMoreUpgradeInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = swordsAndMoreUpgradeInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = swordsAndMoreUpgradeInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = swordsAndMoreUpgradeInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = swordsAndMoreUpgradeInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = swordsAndMoreUpgradeInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = swordsAndMoreUpgradeInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = swordsAndMoreUpgradeInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = swordsAndMoreUpgradeInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = swordsAndMoreUpgradeInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = swordsAndMoreUpgradeInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = swordsAndMoreUpgradeInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = swordsAndMoreUpgradeInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = swordsAndMoreUpgradeInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = swordsAndMoreUpgradeInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = swordsAndMoreUpgradeInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = swordsAndMoreUpgradeInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = swordsAndMoreUpgradeInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = swordsAndMoreUpgradeInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = swordsAndMoreUpgradeInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = swordsAndMoreUpgradeInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = swordsAndMoreUpgradeInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = swordsAndMoreUpgradeInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = swordsAndMoreUpgradeInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = swordsAndMoreUpgradeInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = swordsAndMoreUpgradeInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = swordsAndMoreUpgradeInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = swordsAndMoreUpgradeInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = swordsAndMoreUpgradeInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = swordsAndMoreUpgradeInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = swordsAndMoreUpgradeInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = swordsAndMoreUpgradeInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = swordsAndMoreUpgradeInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = swordsAndMoreUpgradeInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = swordsAndMoreUpgradeInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = swordsAndMoreUpgradeInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = swordsAndMoreUpgradeInventoryPrices.item36;
        }
    }
    else if (shopNumber == 6){
        if (chosenOptionInShop == "items"){
            activeItemsOnDisplayItems.item1 = violinViolenceItemsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = violinViolenceItemsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = violinViolenceItemsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = violinViolenceItemsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = violinViolenceItemsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = violinViolenceItemsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = violinViolenceItemsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = violinViolenceItemsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = violinViolenceItemsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = violinViolenceItemsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = violinViolenceItemsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = violinViolenceItemsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = violinViolenceItemsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = violinViolenceItemsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = violinViolenceItemsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = violinViolenceItemsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = violinViolenceItemsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = violinViolenceItemsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = violinViolenceItemsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = violinViolenceItemsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = violinViolenceItemsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = violinViolenceItemsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = violinViolenceItemsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = violinViolenceItemsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = violinViolenceItemsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = violinViolenceItemsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = violinViolenceItemsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = violinViolenceItemsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = violinViolenceItemsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = violinViolenceItemsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = violinViolenceItemsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = violinViolenceItemsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = violinViolenceItemsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = violinViolenceItemsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = violinViolenceItemsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = violinViolenceItemsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = violinViolenceItemsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = violinViolenceItemsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = violinViolenceItemsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = violinViolenceItemsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = violinViolenceItemsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = violinViolenceItemsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = violinViolenceItemsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = violinViolenceItemsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = violinViolenceItemsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = violinViolenceItemsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = violinViolenceItemsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = violinViolenceItemsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = violinViolenceItemsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = violinViolenceItemsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = violinViolenceItemsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = violinViolenceItemsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = violinViolenceItemsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = violinViolenceItemsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = violinViolenceItemsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = violinViolenceItemsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = violinViolenceItemsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = violinViolenceItemsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = violinViolenceItemsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = violinViolenceItemsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = violinViolenceItemsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = violinViolenceItemsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = violinViolenceItemsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = violinViolenceItemsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = violinViolenceItemsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = violinViolenceItemsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = violinViolenceItemsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = violinViolenceItemsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = violinViolenceItemsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = violinViolenceItemsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = violinViolenceItemsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = violinViolenceItemsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "weapons") {
            activeItemsOnDisplayItems.item1 = violinViolenceWeaponsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = violinViolenceWeaponsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = violinViolenceWeaponsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = violinViolenceWeaponsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = violinViolenceWeaponsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = violinViolenceWeaponsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = violinViolenceWeaponsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = violinViolenceWeaponsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = violinViolenceWeaponsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = violinViolenceWeaponsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = violinViolenceWeaponsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = violinViolenceWeaponsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = violinViolenceWeaponsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = violinViolenceWeaponsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = violinViolenceWeaponsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = violinViolenceWeaponsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = violinViolenceWeaponsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = violinViolenceWeaponsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = violinViolenceWeaponsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = violinViolenceWeaponsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = violinViolenceWeaponsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = violinViolenceWeaponsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = violinViolenceWeaponsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = violinViolenceWeaponsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = violinViolenceWeaponsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = violinViolenceWeaponsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = violinViolenceWeaponsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = violinViolenceWeaponsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = violinViolenceWeaponsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = violinViolenceWeaponsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = violinViolenceWeaponsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = violinViolenceWeaponsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = violinViolenceWeaponsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = violinViolenceWeaponsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = violinViolenceWeaponsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = violinViolenceWeaponsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = violinViolenceWeaponsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = violinViolenceWeaponsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = violinViolenceWeaponsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = violinViolenceWeaponsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = violinViolenceWeaponsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = violinViolenceWeaponsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = violinViolenceWeaponsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = violinViolenceWeaponsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = violinViolenceWeaponsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = violinViolenceWeaponsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = violinViolenceWeaponsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = violinViolenceWeaponsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = violinViolenceWeaponsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = violinViolenceWeaponsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = violinViolenceWeaponsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = violinViolenceWeaponsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = violinViolenceWeaponsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = violinViolenceWeaponsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = violinViolenceWeaponsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = violinViolenceWeaponsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = violinViolenceWeaponsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = violinViolenceWeaponsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = violinViolenceWeaponsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = violinViolenceWeaponsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = violinViolenceWeaponsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = violinViolenceWeaponsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = violinViolenceWeaponsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = violinViolenceWeaponsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = violinViolenceWeaponsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = violinViolenceWeaponsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = violinViolenceWeaponsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = violinViolenceWeaponsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = violinViolenceWeaponsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = violinViolenceWeaponsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = violinViolenceWeaponsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = violinViolenceWeaponsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "armours") {
            activeItemsOnDisplayItems.item1 = violinViolenceArmourInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = violinViolenceArmourInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = violinViolenceArmourInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = violinViolenceArmourInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = violinViolenceArmourInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = violinViolenceArmourInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = violinViolenceArmourInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = violinViolenceArmourInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = violinViolenceArmourInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = violinViolenceArmourInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = violinViolenceArmourInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = violinViolenceArmourInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = violinViolenceArmourInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = violinViolenceArmourInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = violinViolenceArmourInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = violinViolenceArmourInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = violinViolenceArmourInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = violinViolenceArmourInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = violinViolenceArmourInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = violinViolenceArmourInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = violinViolenceArmourInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = violinViolenceArmourInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = violinViolenceArmourInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = violinViolenceArmourInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = violinViolenceArmourInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = violinViolenceArmourInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = violinViolenceArmourInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = violinViolenceArmourInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = violinViolenceArmourInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = violinViolenceArmourInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = violinViolenceArmourInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = violinViolenceArmourInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = violinViolenceArmourInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = violinViolenceArmourInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = violinViolenceArmourInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = violinViolenceArmourInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = violinViolenceArmourInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = violinViolenceArmourInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = violinViolenceArmourInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = violinViolenceArmourInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = violinViolenceArmourInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = violinViolenceArmourInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = violinViolenceArmourInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = violinViolenceArmourInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = violinViolenceArmourInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = violinViolenceArmourInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = violinViolenceArmourInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = violinViolenceArmourInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = violinViolenceArmourInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = violinViolenceArmourInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = violinViolenceArmourInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = violinViolenceArmourInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = violinViolenceArmourInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = violinViolenceArmourInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = violinViolenceArmourInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = violinViolenceArmourInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = violinViolenceArmourInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = violinViolenceArmourInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = violinViolenceArmourInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = violinViolenceArmourInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = violinViolenceArmourInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = violinViolenceArmourInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = violinViolenceArmourInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = violinViolenceArmourInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = violinViolenceArmourInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = violinViolenceArmourInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = violinViolenceArmourInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = violinViolenceArmourInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = violinViolenceArmourInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = violinViolenceArmourInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = violinViolenceArmourInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = violinViolenceArmourInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "upgrade") {
            activeItemsOnDisplayItems.item1 = violinViolenceUpgradeInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = violinViolenceUpgradeInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = violinViolenceUpgradeInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = violinViolenceUpgradeInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = violinViolenceUpgradeInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = violinViolenceUpgradeInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = violinViolenceUpgradeInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = violinViolenceUpgradeInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = violinViolenceUpgradeInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = violinViolenceUpgradeInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = violinViolenceUpgradeInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = violinViolenceUpgradeInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = violinViolenceUpgradeInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = violinViolenceUpgradeInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = violinViolenceUpgradeInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = violinViolenceUpgradeInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = violinViolenceUpgradeInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = violinViolenceUpgradeInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = violinViolenceUpgradeInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = violinViolenceUpgradeInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = violinViolenceUpgradeInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = violinViolenceUpgradeInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = violinViolenceUpgradeInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = violinViolenceUpgradeInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = violinViolenceUpgradeInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = violinViolenceUpgradeInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = violinViolenceUpgradeInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = violinViolenceUpgradeInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = violinViolenceUpgradeInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = violinViolenceUpgradeInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = violinViolenceUpgradeInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = violinViolenceUpgradeInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = violinViolenceUpgradeInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = violinViolenceUpgradeInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = violinViolenceUpgradeInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = violinViolenceUpgradeInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = violinViolenceUpgradeInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = violinViolenceUpgradeInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = violinViolenceUpgradeInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = violinViolenceUpgradeInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = violinViolenceUpgradeInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = violinViolenceUpgradeInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = violinViolenceUpgradeInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = violinViolenceUpgradeInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = violinViolenceUpgradeInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = violinViolenceUpgradeInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = violinViolenceUpgradeInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = violinViolenceUpgradeInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = violinViolenceUpgradeInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = violinViolenceUpgradeInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = violinViolenceUpgradeInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = violinViolenceUpgradeInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = violinViolenceUpgradeInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = violinViolenceUpgradeInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = violinViolenceUpgradeInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = violinViolenceUpgradeInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = violinViolenceUpgradeInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = violinViolenceUpgradeInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = violinViolenceUpgradeInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = violinViolenceUpgradeInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = violinViolenceUpgradeInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = violinViolenceUpgradeInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = violinViolenceUpgradeInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = violinViolenceUpgradeInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = violinViolenceUpgradeInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = violinViolenceUpgradeInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = violinViolenceUpgradeInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = violinViolenceUpgradeInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = violinViolenceUpgradeInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = violinViolenceUpgradeInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = violinViolenceUpgradeInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = violinViolenceUpgradeInventoryPrices.item36;
        }
    }
    else if (shopNumber == 7){
        if (chosenOptionInShop == "items"){
            activeItemsOnDisplayItems.item1 = assisiAssistanceItemsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = assisiAssistanceItemsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = assisiAssistanceItemsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = assisiAssistanceItemsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = assisiAssistanceItemsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = assisiAssistanceItemsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = assisiAssistanceItemsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = assisiAssistanceItemsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = assisiAssistanceItemsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = assisiAssistanceItemsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = assisiAssistanceItemsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = assisiAssistanceItemsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = assisiAssistanceItemsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = assisiAssistanceItemsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = assisiAssistanceItemsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = assisiAssistanceItemsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = assisiAssistanceItemsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = assisiAssistanceItemsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = assisiAssistanceItemsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = assisiAssistanceItemsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = assisiAssistanceItemsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = assisiAssistanceItemsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = assisiAssistanceItemsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = assisiAssistanceItemsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = assisiAssistanceItemsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = assisiAssistanceItemsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = assisiAssistanceItemsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = assisiAssistanceItemsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = assisiAssistanceItemsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = assisiAssistanceItemsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = assisiAssistanceItemsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = assisiAssistanceItemsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = assisiAssistanceItemsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = assisiAssistanceItemsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = assisiAssistanceItemsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = assisiAssistanceItemsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = assisiAssistanceItemsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = assisiAssistanceItemsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = assisiAssistanceItemsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = assisiAssistanceItemsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = assisiAssistanceItemsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = assisiAssistanceItemsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = assisiAssistanceItemsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = assisiAssistanceItemsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = assisiAssistanceItemsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = assisiAssistanceItemsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = assisiAssistanceItemsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = assisiAssistanceItemsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = assisiAssistanceItemsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = assisiAssistanceItemsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = assisiAssistanceItemsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = assisiAssistanceItemsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = assisiAssistanceItemsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = assisiAssistanceItemsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = assisiAssistanceItemsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = assisiAssistanceItemsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = assisiAssistanceItemsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = assisiAssistanceItemsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = assisiAssistanceItemsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = assisiAssistanceItemsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = assisiAssistanceItemsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = assisiAssistanceItemsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = assisiAssistanceItemsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = assisiAssistanceItemsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = assisiAssistanceItemsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = assisiAssistanceItemsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = assisiAssistanceItemsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = assisiAssistanceItemsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = assisiAssistanceItemsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = assisiAssistanceItemsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = assisiAssistanceItemsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = assisiAssistanceItemsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "weapons") {
            activeItemsOnDisplayItems.item1 = assisiAssistanceWeaponsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = assisiAssistanceWeaponsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = assisiAssistanceWeaponsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = assisiAssistanceWeaponsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = assisiAssistanceWeaponsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = assisiAssistanceWeaponsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = assisiAssistanceWeaponsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = assisiAssistanceWeaponsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = assisiAssistanceWeaponsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = assisiAssistanceWeaponsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = assisiAssistanceWeaponsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = assisiAssistanceWeaponsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = assisiAssistanceWeaponsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = assisiAssistanceWeaponsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = assisiAssistanceWeaponsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = assisiAssistanceWeaponsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = assisiAssistanceWeaponsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = assisiAssistanceWeaponsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = assisiAssistanceWeaponsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = assisiAssistanceWeaponsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = assisiAssistanceWeaponsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = assisiAssistanceWeaponsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = assisiAssistanceWeaponsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = assisiAssistanceWeaponsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = assisiAssistanceWeaponsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = assisiAssistanceWeaponsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = assisiAssistanceWeaponsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = assisiAssistanceWeaponsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = assisiAssistanceWeaponsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = assisiAssistanceWeaponsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = assisiAssistanceWeaponsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = assisiAssistanceWeaponsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = assisiAssistanceWeaponsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = assisiAssistanceWeaponsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = assisiAssistanceWeaponsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = assisiAssistanceWeaponsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = assisiAssistanceWeaponsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = assisiAssistanceWeaponsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = assisiAssistanceWeaponsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = assisiAssistanceWeaponsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = assisiAssistanceWeaponsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = assisiAssistanceWeaponsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = assisiAssistanceWeaponsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = assisiAssistanceWeaponsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = assisiAssistanceWeaponsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = assisiAssistanceWeaponsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = assisiAssistanceWeaponsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = assisiAssistanceWeaponsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = assisiAssistanceWeaponsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = assisiAssistanceWeaponsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = assisiAssistanceWeaponsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = assisiAssistanceWeaponsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = assisiAssistanceWeaponsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = assisiAssistanceWeaponsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = assisiAssistanceWeaponsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = assisiAssistanceWeaponsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = assisiAssistanceWeaponsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = assisiAssistanceWeaponsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = assisiAssistanceWeaponsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = assisiAssistanceWeaponsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = assisiAssistanceWeaponsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = assisiAssistanceWeaponsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = assisiAssistanceWeaponsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = assisiAssistanceWeaponsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = assisiAssistanceWeaponsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = assisiAssistanceWeaponsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = assisiAssistanceWeaponsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = assisiAssistanceWeaponsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = assisiAssistanceWeaponsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = assisiAssistanceWeaponsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = assisiAssistanceWeaponsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = assisiAssistanceWeaponsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "armours") {
            activeItemsOnDisplayItems.item1 = assisiAssistanceArmourInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = assisiAssistanceArmourInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = assisiAssistanceArmourInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = assisiAssistanceArmourInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = assisiAssistanceArmourInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = assisiAssistanceArmourInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = assisiAssistanceArmourInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = assisiAssistanceArmourInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = assisiAssistanceArmourInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = assisiAssistanceArmourInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = assisiAssistanceArmourInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = assisiAssistanceArmourInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = assisiAssistanceArmourInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = assisiAssistanceArmourInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = assisiAssistanceArmourInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = assisiAssistanceArmourInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = assisiAssistanceArmourInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = assisiAssistanceArmourInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = assisiAssistanceArmourInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = assisiAssistanceArmourInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = assisiAssistanceArmourInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = assisiAssistanceArmourInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = assisiAssistanceArmourInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = assisiAssistanceArmourInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = assisiAssistanceArmourInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = assisiAssistanceArmourInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = assisiAssistanceArmourInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = assisiAssistanceArmourInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = assisiAssistanceArmourInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = assisiAssistanceArmourInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = assisiAssistanceArmourInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = assisiAssistanceArmourInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = assisiAssistanceArmourInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = assisiAssistanceArmourInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = assisiAssistanceArmourInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = assisiAssistanceArmourInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = assisiAssistanceArmourInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = assisiAssistanceArmourInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = assisiAssistanceArmourInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = assisiAssistanceArmourInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = assisiAssistanceArmourInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = assisiAssistanceArmourInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = assisiAssistanceArmourInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = assisiAssistanceArmourInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = assisiAssistanceArmourInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = assisiAssistanceArmourInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = assisiAssistanceArmourInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = assisiAssistanceArmourInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = assisiAssistanceArmourInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = assisiAssistanceArmourInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = assisiAssistanceArmourInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = assisiAssistanceArmourInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = assisiAssistanceArmourInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = assisiAssistanceArmourInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = assisiAssistanceArmourInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = assisiAssistanceArmourInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = assisiAssistanceArmourInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = assisiAssistanceArmourInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = assisiAssistanceArmourInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = assisiAssistanceArmourInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = assisiAssistanceArmourInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = assisiAssistanceArmourInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = assisiAssistanceArmourInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = assisiAssistanceArmourInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = assisiAssistanceArmourInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = assisiAssistanceArmourInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = assisiAssistanceArmourInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = assisiAssistanceArmourInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = assisiAssistanceArmourInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = assisiAssistanceArmourInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = assisiAssistanceArmourInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = assisiAssistanceArmourInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "upgrade") {
            activeItemsOnDisplayItems.item1 = assisiAssistanceUpgradeInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = assisiAssistanceUpgradeInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = assisiAssistanceUpgradeInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = assisiAssistanceUpgradeInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = assisiAssistanceUpgradeInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = assisiAssistanceUpgradeInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = assisiAssistanceUpgradeInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = assisiAssistanceUpgradeInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = assisiAssistanceUpgradeInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = assisiAssistanceUpgradeInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = assisiAssistanceUpgradeInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = assisiAssistanceUpgradeInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = assisiAssistanceUpgradeInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = assisiAssistanceUpgradeInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = assisiAssistanceUpgradeInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = assisiAssistanceUpgradeInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = assisiAssistanceUpgradeInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = assisiAssistanceUpgradeInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = assisiAssistanceUpgradeInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = assisiAssistanceUpgradeInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = assisiAssistanceUpgradeInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = assisiAssistanceUpgradeInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = assisiAssistanceUpgradeInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = assisiAssistanceUpgradeInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = assisiAssistanceUpgradeInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = assisiAssistanceUpgradeInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = assisiAssistanceUpgradeInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = assisiAssistanceUpgradeInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = assisiAssistanceUpgradeInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = assisiAssistanceUpgradeInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = assisiAssistanceUpgradeInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = assisiAssistanceUpgradeInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = assisiAssistanceUpgradeInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = assisiAssistanceUpgradeInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = assisiAssistanceUpgradeInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = assisiAssistanceUpgradeInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = assisiAssistanceUpgradeInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = assisiAssistanceUpgradeInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = assisiAssistanceUpgradeInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = assisiAssistanceUpgradeInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = assisiAssistanceUpgradeInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = assisiAssistanceUpgradeInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = assisiAssistanceUpgradeInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = assisiAssistanceUpgradeInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = assisiAssistanceUpgradeInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = assisiAssistanceUpgradeInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = assisiAssistanceUpgradeInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = assisiAssistanceUpgradeInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = assisiAssistanceUpgradeInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = assisiAssistanceUpgradeInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = assisiAssistanceUpgradeInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = assisiAssistanceUpgradeInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = assisiAssistanceUpgradeInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = assisiAssistanceUpgradeInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = assisiAssistanceUpgradeInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = assisiAssistanceUpgradeInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = assisiAssistanceUpgradeInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = assisiAssistanceUpgradeInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = assisiAssistanceUpgradeInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = assisiAssistanceUpgradeInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = assisiAssistanceUpgradeInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = assisiAssistanceUpgradeInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = assisiAssistanceUpgradeInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = assisiAssistanceUpgradeInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = assisiAssistanceUpgradeInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = assisiAssistanceUpgradeInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = assisiAssistanceUpgradeInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = assisiAssistanceUpgradeInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = assisiAssistanceUpgradeInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = assisiAssistanceUpgradeInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = assisiAssistanceUpgradeInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = assisiAssistanceUpgradeInventoryPrices.item36;
        }
    }
    else if (shopNumber == 8) {
        if (chosenOptionInShop == "items"){
            activeItemsOnDisplayItems.item1 = snackVagonItemsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = snackVagonItemsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = snackVagonItemsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = snackVagonItemsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = snackVagonItemsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = snackVagonItemsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = snackVagonItemsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = snackVagonItemsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = snackVagonItemsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = snackVagonItemsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = snackVagonItemsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = snackVagonItemsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = snackVagonItemsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = snackVagonItemsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = snackVagonItemsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = snackVagonItemsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = snackVagonItemsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = snackVagonItemsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = snackVagonItemsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = snackVagonItemsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = snackVagonItemsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = snackVagonItemsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = snackVagonItemsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = snackVagonItemsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = snackVagonItemsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = snackVagonItemsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = snackVagonItemsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = snackVagonItemsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = snackVagonItemsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = snackVagonItemsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = snackVagonItemsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = snackVagonItemsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = snackVagonItemsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = snackVagonItemsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = snackVagonItemsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = snackVagonItemsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = snackVagonItemsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = snackVagonItemsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = snackVagonItemsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = snackVagonItemsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = snackVagonItemsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = snackVagonItemsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = snackVagonItemsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = snackVagonItemsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = snackVagonItemsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = snackVagonItemsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = snackVagonItemsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = snackVagonItemsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = snackVagonItemsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = snackVagonItemsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = snackVagonItemsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = snackVagonItemsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = snackVagonItemsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = snackVagonItemsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = snackVagonItemsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = snackVagonItemsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = snackVagonItemsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = snackVagonItemsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = snackVagonItemsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = snackVagonItemsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = snackVagonItemsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = snackVagonItemsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = snackVagonItemsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = snackVagonItemsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = snackVagonItemsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = snackVagonItemsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = snackVagonItemsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = snackVagonItemsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = snackVagonItemsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = snackVagonItemsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = snackVagonItemsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = snackVagonItemsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "weapons") {
            activeItemsOnDisplayItems.item1 = snackVagonWeaponsInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = snackVagonWeaponsInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = snackVagonWeaponsInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = snackVagonWeaponsInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = snackVagonWeaponsInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = snackVagonWeaponsInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = snackVagonWeaponsInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = snackVagonWeaponsInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = snackVagonWeaponsInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = snackVagonWeaponsInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = snackVagonWeaponsInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = snackVagonWeaponsInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = snackVagonWeaponsInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = snackVagonWeaponsInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = snackVagonWeaponsInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = snackVagonWeaponsInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = snackVagonWeaponsInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = snackVagonWeaponsInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = snackVagonWeaponsInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = snackVagonWeaponsInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = snackVagonWeaponsInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = snackVagonWeaponsInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = snackVagonWeaponsInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = snackVagonWeaponsInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = snackVagonWeaponsInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = snackVagonWeaponsInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = snackVagonWeaponsInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = snackVagonWeaponsInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = snackVagonWeaponsInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = snackVagonWeaponsInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = snackVagonWeaponsInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = snackVagonWeaponsInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = snackVagonWeaponsInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = snackVagonWeaponsInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = snackVagonWeaponsInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = snackVagonWeaponsInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = snackVagonWeaponsInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = snackVagonWeaponsInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = snackVagonWeaponsInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = snackVagonWeaponsInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = snackVagonWeaponsInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = snackVagonWeaponsInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = snackVagonWeaponsInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = snackVagonWeaponsInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = snackVagonWeaponsInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = snackVagonWeaponsInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = snackVagonWeaponsInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = snackVagonWeaponsInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = snackVagonWeaponsInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = snackVagonWeaponsInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = snackVagonWeaponsInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = snackVagonWeaponsInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = snackVagonWeaponsInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = snackVagonWeaponsInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = snackVagonWeaponsInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = snackVagonWeaponsInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = snackVagonWeaponsInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = snackVagonWeaponsInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = snackVagonWeaponsInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = snackVagonWeaponsInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = snackVagonWeaponsInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = snackVagonWeaponsInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = snackVagonWeaponsInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = snackVagonWeaponsInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = snackVagonWeaponsInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = snackVagonWeaponsInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = snackVagonWeaponsInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = snackVagonWeaponsInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = snackVagonWeaponsInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = snackVagonWeaponsInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = snackVagonWeaponsInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = snackVagonWeaponsInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "armours") {
            activeItemsOnDisplayItems.item1 = snackVagonArmourInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = snackVagonArmourInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = snackVagonArmourInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = snackVagonArmourInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = snackVagonArmourInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = snackVagonArmourInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = snackVagonArmourInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = snackVagonArmourInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = snackVagonArmourInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = snackVagonArmourInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = snackVagonArmourInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = snackVagonArmourInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = snackVagonArmourInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = snackVagonArmourInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = snackVagonArmourInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = snackVagonArmourInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = snackVagonArmourInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = snackVagonArmourInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = snackVagonArmourInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = snackVagonArmourInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = snackVagonArmourInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = snackVagonArmourInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = snackVagonArmourInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = snackVagonArmourInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = snackVagonArmourInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = snackVagonArmourInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = snackVagonArmourInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = snackVagonArmourInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = snackVagonArmourInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = snackVagonArmourInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = snackVagonArmourInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = snackVagonArmourInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = snackVagonArmourInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = snackVagonArmourInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = snackVagonArmourInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = snackVagonArmourInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = snackVagonArmourInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = snackVagonArmourInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = snackVagonArmourInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = snackVagonArmourInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = snackVagonArmourInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = snackVagonArmourInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = snackVagonArmourInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = snackVagonArmourInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = snackVagonArmourInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = snackVagonArmourInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = snackVagonArmourInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = snackVagonArmourInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = snackVagonArmourInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = snackVagonArmourInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = snackVagonArmourInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = snackVagonArmourInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = snackVagonArmourInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = snackVagonArmourInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = snackVagonArmourInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = snackVagonArmourInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = snackVagonArmourInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = snackVagonArmourInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = snackVagonArmourInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = snackVagonArmourInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = snackVagonArmourInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = snackVagonArmourInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = snackVagonArmourInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = snackVagonArmourInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = snackVagonArmourInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = snackVagonArmourInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = snackVagonArmourInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = snackVagonArmourInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = snackVagonArmourInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = snackVagonArmourInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = snackVagonArmourInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = snackVagonArmourInventoryPrices.item36;
        }
        else if (chosenOptionInShop == "upgrade") {
            activeItemsOnDisplayItems.item1 = snackVagonUpgradeInventoryItems.item1;
            activeItemsOnDisplayItems.item2 = snackVagonUpgradeInventoryItems.item2;
            activeItemsOnDisplayItems.item3 = snackVagonUpgradeInventoryItems.item3;
            activeItemsOnDisplayItems.item4 = snackVagonUpgradeInventoryItems.item4;
            activeItemsOnDisplayItems.item5 = snackVagonUpgradeInventoryItems.item5;
            activeItemsOnDisplayItems.item6 = snackVagonUpgradeInventoryItems.item6;
            activeItemsOnDisplayItems.item7 = snackVagonUpgradeInventoryItems.item7;
            activeItemsOnDisplayItems.item8 = snackVagonUpgradeInventoryItems.item8;
            activeItemsOnDisplayItems.item9 = snackVagonUpgradeInventoryItems.item9;
            activeItemsOnDisplayItems.item10 = snackVagonUpgradeInventoryItems.item10;
            activeItemsOnDisplayItems.item11 = snackVagonUpgradeInventoryItems.item11;
            activeItemsOnDisplayItems.item12 = snackVagonUpgradeInventoryItems.item12;
            activeItemsOnDisplayItems.item13 = snackVagonUpgradeInventoryItems.item13;
            activeItemsOnDisplayItems.item14 = snackVagonUpgradeInventoryItems.item14;
            activeItemsOnDisplayItems.item15 = snackVagonUpgradeInventoryItems.item15;
            activeItemsOnDisplayItems.item16 = snackVagonUpgradeInventoryItems.item16;
            activeItemsOnDisplayItems.item17 = snackVagonUpgradeInventoryItems.item17;
            activeItemsOnDisplayItems.item18 = snackVagonUpgradeInventoryItems.item18;
            activeItemsOnDisplayItems.item19 = snackVagonUpgradeInventoryItems.item19;
            activeItemsOnDisplayItems.item20 = snackVagonUpgradeInventoryItems.item20;
            activeItemsOnDisplayItems.item21 = snackVagonUpgradeInventoryItems.item21;
            activeItemsOnDisplayItems.item22 = snackVagonUpgradeInventoryItems.item22;
            activeItemsOnDisplayItems.item23 = snackVagonUpgradeInventoryItems.item23;
            activeItemsOnDisplayItems.item24 = snackVagonUpgradeInventoryItems.item24;
            activeItemsOnDisplayItems.item25 = snackVagonUpgradeInventoryItems.item25;
            activeItemsOnDisplayItems.item26 = snackVagonUpgradeInventoryItems.item26;
            activeItemsOnDisplayItems.item27 = snackVagonUpgradeInventoryItems.item27;
            activeItemsOnDisplayItems.item28 = snackVagonUpgradeInventoryItems.item28;
            activeItemsOnDisplayItems.item29 = snackVagonUpgradeInventoryItems.item29;
            activeItemsOnDisplayItems.item30 = snackVagonUpgradeInventoryItems.item30;
            activeItemsOnDisplayItems.item31 = snackVagonUpgradeInventoryItems.item31;
            activeItemsOnDisplayItems.item32 = snackVagonUpgradeInventoryItems.item32;
            activeItemsOnDisplayItems.item33 = snackVagonUpgradeInventoryItems.item33;
            activeItemsOnDisplayItems.item34 = snackVagonUpgradeInventoryItems.item34;
            activeItemsOnDisplayItems.item35 = snackVagonUpgradeInventoryItems.item35;
            activeItemsOnDisplayItems.item36 = snackVagonUpgradeInventoryItems.item36;

            activeItemsOnDisplayPrices.item1 = snackVagonUpgradeInventoryPrices.item1;
            activeItemsOnDisplayPrices.item2 = snackVagonUpgradeInventoryPrices.item2;
            activeItemsOnDisplayPrices.item3 = snackVagonUpgradeInventoryPrices.item3;
            activeItemsOnDisplayPrices.item4 = snackVagonUpgradeInventoryPrices.item4;
            activeItemsOnDisplayPrices.item5 = snackVagonUpgradeInventoryPrices.item5;
            activeItemsOnDisplayPrices.item6 = snackVagonUpgradeInventoryPrices.item6;
            activeItemsOnDisplayPrices.item7 = snackVagonUpgradeInventoryPrices.item7;
            activeItemsOnDisplayPrices.item8 = snackVagonUpgradeInventoryPrices.item8;
            activeItemsOnDisplayPrices.item9 = snackVagonUpgradeInventoryPrices.item9;
            activeItemsOnDisplayPrices.item10 = snackVagonUpgradeInventoryPrices.item10;
            activeItemsOnDisplayPrices.item11 = snackVagonUpgradeInventoryPrices.item11;
            activeItemsOnDisplayPrices.item12 = snackVagonUpgradeInventoryPrices.item12;
            activeItemsOnDisplayPrices.item13 = snackVagonUpgradeInventoryPrices.item13;
            activeItemsOnDisplayPrices.item14 = snackVagonUpgradeInventoryPrices.item14;
            activeItemsOnDisplayPrices.item15 = snackVagonUpgradeInventoryPrices.item15;
            activeItemsOnDisplayPrices.item16 = snackVagonUpgradeInventoryPrices.item16;
            activeItemsOnDisplayPrices.item17 = snackVagonUpgradeInventoryPrices.item17;
            activeItemsOnDisplayPrices.item18 = snackVagonUpgradeInventoryPrices.item18;
            activeItemsOnDisplayPrices.item19 = snackVagonUpgradeInventoryPrices.item19;
            activeItemsOnDisplayPrices.item20 = snackVagonUpgradeInventoryPrices.item20;
            activeItemsOnDisplayPrices.item21 = snackVagonUpgradeInventoryPrices.item21;
            activeItemsOnDisplayPrices.item22 = snackVagonUpgradeInventoryPrices.item22;
            activeItemsOnDisplayPrices.item23 = snackVagonUpgradeInventoryPrices.item23;
            activeItemsOnDisplayPrices.item24 = snackVagonUpgradeInventoryPrices.item24;
            activeItemsOnDisplayPrices.item25 = snackVagonUpgradeInventoryPrices.item25;
            activeItemsOnDisplayPrices.item26 = snackVagonUpgradeInventoryPrices.item26;
            activeItemsOnDisplayPrices.item27 = snackVagonUpgradeInventoryPrices.item27;
            activeItemsOnDisplayPrices.item28 = snackVagonUpgradeInventoryPrices.item28;
            activeItemsOnDisplayPrices.item29 = snackVagonUpgradeInventoryPrices.item29;
            activeItemsOnDisplayPrices.item30 = snackVagonUpgradeInventoryPrices.item30;
            activeItemsOnDisplayPrices.item31 = snackVagonUpgradeInventoryPrices.item31;
            activeItemsOnDisplayPrices.item32 = snackVagonUpgradeInventoryPrices.item32;
            activeItemsOnDisplayPrices.item33 = snackVagonUpgradeInventoryPrices.item33;
            activeItemsOnDisplayPrices.item34 = snackVagonUpgradeInventoryPrices.item34;
            activeItemsOnDisplayPrices.item35 = snackVagonUpgradeInventoryPrices.item35;
            activeItemsOnDisplayPrices.item36 = snackVagonUpgradeInventoryPrices.item36;
        }
    }


    if (chosenOptionInShop == "inventory") {
        activeItemsOnDisplayItems.item1 = playerInventory.item1;
        activeItemsOnDisplayItems.item2 = playerInventory.item2;
        activeItemsOnDisplayItems.item3 = playerInventory.item3;
        activeItemsOnDisplayItems.item4 = playerInventory.item4;
        activeItemsOnDisplayItems.item5 = playerInventory.item5;
        activeItemsOnDisplayItems.item6 = playerInventory.item6;
        activeItemsOnDisplayItems.item7 = playerInventory.item7;
        activeItemsOnDisplayItems.item8 = playerInventory.item8;
        activeItemsOnDisplayItems.item9 = playerInventory.item9;
        activeItemsOnDisplayItems.item10 = playerInventory.item10;
        activeItemsOnDisplayItems.item11 = playerInventory.item11;
        activeItemsOnDisplayItems.item12 = playerInventory.item12;
        activeItemsOnDisplayItems.item13 = playerInventory.item13;
        activeItemsOnDisplayItems.item14 = playerInventory.item14;
        activeItemsOnDisplayItems.item15 = playerInventory.item15;
        activeItemsOnDisplayItems.item16 = playerInventory.item16;
        activeItemsOnDisplayItems.item17 = playerInventory.item17;
        activeItemsOnDisplayItems.item18 = playerInventory.item18;
        activeItemsOnDisplayItems.item19 = playerInventory.item19;
        activeItemsOnDisplayItems.item20 = playerInventory.item20;
        activeItemsOnDisplayItems.item21 = playerInventory.item21;
        activeItemsOnDisplayItems.item22 = playerInventory.item22;
        activeItemsOnDisplayItems.item23 = playerInventory.item23;
        activeItemsOnDisplayItems.item24 = playerInventory.item24;
        activeItemsOnDisplayItems.item25 = playerInventory.item25;
        activeItemsOnDisplayItems.item26 = playerInventory.item26;
        activeItemsOnDisplayItems.item27 = playerInventory.item27;
        activeItemsOnDisplayItems.item28 = playerInventory.item28;
        activeItemsOnDisplayItems.item29 = playerInventory.item29;
        activeItemsOnDisplayItems.item30 = playerInventory.item30;
        activeItemsOnDisplayItems.item31 = playerInventory.item31;
        activeItemsOnDisplayItems.item32 = playerInventory.item32;
        activeItemsOnDisplayItems.item33 = playerInventory.item33;
        activeItemsOnDisplayItems.item34 = playerInventory.item34;
        activeItemsOnDisplayItems.item35 = playerInventory.item35;
        activeItemsOnDisplayItems.item36 = playerInventory.item36;
    }

    while (getline(shopFileFile,shopFileString)) {
        currentLine++;
        if (currentLine == 1) {
            cout << shopFileString << endl;
        }
        else if(currentLine == 4 ) {
            loadFile("Visuals/shopTitle.txt");
        }
        else if(currentLine == 10) {
            cout << shopFileString;
            if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 1) {
                setcolor(14);
                cout << "► items";
            }
            else {
                cout << "  items";
            }
            setcolor(7);
        }
        else if(currentLine == 11) {
            cout << shopFileString;

            if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 1) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item1;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem1;

                setcolor(14);
                activeItemsOnDisplayItems.item1 = "► " + activeItemsOnDisplayItems.item1;

                cout << activeItemsOnDisplayItems.item1;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item1,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item1;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item1,' ');
            }

            if (shopPosition.currentPositionX == 2 && shopPosition.currentPositionY == 1) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item2;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem2;

                setcolor(14);
                activeItemsOnDisplayItems.item2 = "► " + activeItemsOnDisplayItems.item2;

                cout << activeItemsOnDisplayItems.item2;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item2,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item2;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item2,' ');
            }

            if (shopPosition.currentPositionX == 3 && shopPosition.currentPositionY == 1) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item3;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem3;

                setcolor(14);
                activeItemsOnDisplayItems.item3 = "► " + activeItemsOnDisplayItems.item3;

                cout << activeItemsOnDisplayItems.item3;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item3,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item3;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item3,' ');
            }

            if (shopPosition.currentPositionX == 4 && shopPosition.currentPositionY == 1) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item4;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem4;

                setcolor(14);
                activeItemsOnDisplayItems.item4 = "► " + activeItemsOnDisplayItems.item4;

                cout << activeItemsOnDisplayItems.item4;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item4,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item4;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item4,' ');
            }

            if (shopPosition.currentPositionX == 5 && shopPosition.currentPositionY == 1) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item5;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem5;

                setcolor(14);
                activeItemsOnDisplayItems.item5 = "► " + activeItemsOnDisplayItems.item5;

                cout << activeItemsOnDisplayItems.item5;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item5,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item5;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item5,' ');
            }

            if (shopPosition.currentPositionX == 6 && shopPosition.currentPositionY == 1) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item6;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem6;

                setcolor(14);
                activeItemsOnDisplayItems.item6 = "► " + activeItemsOnDisplayItems.item6;

                cout << activeItemsOnDisplayItems.item6;
                setcolor(7);
                fillerOfEmptinessStr(28,activeItemsOnDisplayItems.item6,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item6;
                setcolor(7);
                fillerOfEmptinessStr(26,activeItemsOnDisplayItems.item6,' ');
            }

            cout << "║     ║" << endl;
        }
        else if(currentLine == 13) {
            cout << shopFileString;
            if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 2) {
                setcolor(14);
                cout << "► weapons";
            }
            else {
                cout << "  weapons";
            }
            setcolor(7);
        }
        else if(currentLine == 16) {
            cout << shopFileString;
            if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 3) {
                setcolor(14);
                cout << "► armours";
            }
            else {
                cout << "  armours";
            }
            setcolor(7);
        }
        else if(currentLine == 19) {
            cout << shopFileString;
            if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 4) {
                setcolor(14);
                cout << "► upgrade";
            }
            else {
                cout << "  upgrade";
            }
            setcolor(7);
        }
        else if (currentLine == 20) {
            cout << shopFileString;

            if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 2) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item7;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem7;

                setcolor(14);
                activeItemsOnDisplayItems.item7 = "► " + activeItemsOnDisplayItems.item7;

                cout << activeItemsOnDisplayItems.item7;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item7,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item7;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item7,' ');
            }

            if (shopPosition.currentPositionX == 2 && shopPosition.currentPositionY == 2) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item8;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem8;

                setcolor(14);
                activeItemsOnDisplayItems.item8 = "► " + activeItemsOnDisplayItems.item8;

                cout << activeItemsOnDisplayItems.item8;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item8,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item8;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item8,' ');
            }

            if (shopPosition.currentPositionX == 3 && shopPosition.currentPositionY == 2) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item9;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem9;

                setcolor(14);
                activeItemsOnDisplayItems.item9 = "► " + activeItemsOnDisplayItems.item9;

                cout << activeItemsOnDisplayItems.item9;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item9,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item9;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item9,' ');
            }

            if (shopPosition.currentPositionX == 4 && shopPosition.currentPositionY == 2) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item10;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem10;

                setcolor(14);
                activeItemsOnDisplayItems.item10 = "► " + activeItemsOnDisplayItems.item10;

                cout << activeItemsOnDisplayItems.item10;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item10,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item10;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item10,' ');
            }

            if (shopPosition.currentPositionX == 5 && shopPosition.currentPositionY == 2) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item11;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem11;

                setcolor(14);
                activeItemsOnDisplayItems.item11 = "► " + activeItemsOnDisplayItems.item11;

                cout << activeItemsOnDisplayItems.item11;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item11,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item11;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item11,' ');
            }

            if (shopPosition.currentPositionX == 6 && shopPosition.currentPositionY == 2) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item12;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem12;

                setcolor(14);
                activeItemsOnDisplayItems.item12 = "► " + activeItemsOnDisplayItems.item12;

                cout << activeItemsOnDisplayItems.item12;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item12,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item12;
                setcolor(7);
                fillerOfEmptinessStr(26,activeItemsOnDisplayItems.item12,' ');
            }

            cout << "║     ║" << endl;
        }
        else if(currentLine == 22) {
            cout << shopFileString;
            if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 5) {
                setcolor(14);
                cout << "► inventory";
            }
            else {
                cout << "  inventory";
            }
            setcolor(7);
        }
        else if (currentLine == 25) {
            cout << shopFileString;
            if (shopPosition.currentPositionX == 0 && shopPosition.currentPositionY == 6) {
                setcolor(14);
                cout << "► leave";
            }
            else {
                cout << "  leave";
            }
            setcolor(7);
        }
        else if (currentLine == 28) {
            cout << shopFileString;


            if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 3) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item13;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem13;

                setcolor(14);
                activeItemsOnDisplayItems.item13 = "► " + activeItemsOnDisplayItems.item13;

                cout << activeItemsOnDisplayItems.item13;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item13,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item13;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item13,' ');
            }

            if (shopPosition.currentPositionX == 2 && shopPosition.currentPositionY == 3) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item14;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem14;

                setcolor(14);
                activeItemsOnDisplayItems.item14 = "► " + activeItemsOnDisplayItems.item14;

                cout << activeItemsOnDisplayItems.item14;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item14,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item14;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item14,' ');
            }

            if (shopPosition.currentPositionX == 3 && shopPosition.currentPositionY == 3) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item15;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem15;

                setcolor(14);
                activeItemsOnDisplayItems.item15 = "► " + activeItemsOnDisplayItems.item15;

                cout << activeItemsOnDisplayItems.item15;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item15,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item15;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item15,' ');
            }

            if (shopPosition.currentPositionX == 4 && shopPosition.currentPositionY == 3) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item16;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem16;

                setcolor(14);
                activeItemsOnDisplayItems.item16 = "► " + activeItemsOnDisplayItems.item16;

                cout << activeItemsOnDisplayItems.item16;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item16,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item16;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item16,' ');
            }

            if (shopPosition.currentPositionX == 5 && shopPosition.currentPositionY == 3) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item17;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem17;

                setcolor(14);
                activeItemsOnDisplayItems.item17 = "► " + activeItemsOnDisplayItems.item17;

                cout << activeItemsOnDisplayItems.item17;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item17,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item17;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item17,' ');
            }

            if (shopPosition.currentPositionX == 6 && shopPosition.currentPositionY == 3) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item18;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem18;

                setcolor(14);
                activeItemsOnDisplayItems.item18 = "► " + activeItemsOnDisplayItems.item18;

                cout << activeItemsOnDisplayItems.item18;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item18,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item18;
                setcolor(7);
                fillerOfEmptinessStr(26,activeItemsOnDisplayItems.item18,' ');
            }

            cout << "║     ║" << endl;
        }
        else if (currentLine == 34) {
            cout << shopFileString;


            if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 4) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item19;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem19;

                setcolor(14);
                activeItemsOnDisplayItems.item19 = "► " + activeItemsOnDisplayItems.item19;

                cout << activeItemsOnDisplayItems.item19;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item19,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item19;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item19,' ');
            }

            if (shopPosition.currentPositionX == 2 && shopPosition.currentPositionY == 4) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item20;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem20;

                setcolor(14);
                activeItemsOnDisplayItems.item20 = "► " + activeItemsOnDisplayItems.item20;

                cout << activeItemsOnDisplayItems.item20;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item20,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item20;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item20,' ');
            }

            if (shopPosition.currentPositionX == 3 && shopPosition.currentPositionY == 4) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item21;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem21;

                setcolor(14);
                activeItemsOnDisplayItems.item21 = "► " + activeItemsOnDisplayItems.item21;

                cout << activeItemsOnDisplayItems.item21;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item21,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item21;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item21,' ');
            }

            if (shopPosition.currentPositionX == 4 && shopPosition.currentPositionY == 4) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item22;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem22;

                setcolor(14);
                activeItemsOnDisplayItems.item22 = "► " + activeItemsOnDisplayItems.item22;

                cout << activeItemsOnDisplayItems.item22;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item22,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item22;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item22,' ');
            }

            if (shopPosition.currentPositionX == 5 && shopPosition.currentPositionY == 4) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item23;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem23;

                setcolor(14);
                activeItemsOnDisplayItems.item23 = "► " + activeItemsOnDisplayItems.item23;

                cout << activeItemsOnDisplayItems.item23;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item23,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item23;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item23,' ');
            }

            if (shopPosition.currentPositionX == 6 && shopPosition.currentPositionY == 4) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item24;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem24;

                setcolor(14);
                activeItemsOnDisplayItems.item24 = "► " + activeItemsOnDisplayItems.item24;

                cout << activeItemsOnDisplayItems.item24;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item24,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item24;
                setcolor(7);
                fillerOfEmptinessStr(26,activeItemsOnDisplayItems.item24,' ');
            }

            cout << "║     ║" << endl;
        }
        else if (currentLine == 40) {
            cout << shopFileString;


            if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 5) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item25;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem25;

                setcolor(14);
                activeItemsOnDisplayItems.item25 = "► " + activeItemsOnDisplayItems.item25;

                cout << activeItemsOnDisplayItems.item25;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item25,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item25;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item25,' ');
            }

            if (shopPosition.currentPositionX == 2 && shopPosition.currentPositionY == 5) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item26;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem26;

                setcolor(14);
                activeItemsOnDisplayItems.item26 = "► " + activeItemsOnDisplayItems.item26;

                cout << activeItemsOnDisplayItems.item26;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item26,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item26;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item26,' ');
            }

            if (shopPosition.currentPositionX == 3 && shopPosition.currentPositionY == 5) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item27;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem27;

                setcolor(14);
                activeItemsOnDisplayItems.item27 = "► " + activeItemsOnDisplayItems.item27;

                cout << activeItemsOnDisplayItems.item27;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item27,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item27;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item27,' ');
            }

            if (shopPosition.currentPositionX == 4 && shopPosition.currentPositionY == 5) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item28;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem28;

                setcolor(14);
                activeItemsOnDisplayItems.item28 = "► " + activeItemsOnDisplayItems.item28;

                cout << activeItemsOnDisplayItems.item28;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item28,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item28;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item28,' ');
            }

            if (shopPosition.currentPositionX == 5 && shopPosition.currentPositionY == 5) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item29;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem29;

                setcolor(14);
                activeItemsOnDisplayItems.item29 = "► " + activeItemsOnDisplayItems.item29;

                cout << activeItemsOnDisplayItems.item29;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item29,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item29;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item29,' ');
            }

            if (shopPosition.currentPositionX == 6 && shopPosition.currentPositionY == 5) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item30;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem30;

                setcolor(14);
                activeItemsOnDisplayItems.item30 = "► " + activeItemsOnDisplayItems.item30;

                cout << activeItemsOnDisplayItems.item30;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item30,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item30;
                setcolor(7);
                fillerOfEmptinessStr(26,activeItemsOnDisplayItems.item30,' ');
            }


            cout << "║     ║" << endl;
        }
        else if (currentLine == 46) {
            cout << shopFileString;


            if (shopPosition.currentPositionX == 1 && shopPosition.currentPositionY == 6) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item31;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem31;

                setcolor(14);
                activeItemsOnDisplayItems.item31 = "► " + activeItemsOnDisplayItems.item31;

                cout << activeItemsOnDisplayItems.item31;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item31,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item31;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item31,' ');
            }

            if (shopPosition.currentPositionX == 2 && shopPosition.currentPositionY == 6) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item32;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem32;

                setcolor(14);
                activeItemsOnDisplayItems.item32 = "► " + activeItemsOnDisplayItems.item32;

                cout << activeItemsOnDisplayItems.item32;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item32,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item32;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item32,' ');
            }

            if (shopPosition.currentPositionX == 3 && shopPosition.currentPositionY == 6) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item33;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem33;

                setcolor(14);
                activeItemsOnDisplayItems.item33 = "► " + activeItemsOnDisplayItems.item33;

                cout << activeItemsOnDisplayItems.item33;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item33,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item33;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item33,' ');
            }

            if (shopPosition.currentPositionX == 4 && shopPosition.currentPositionY == 6) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item34;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem34;

                setcolor(14);
                activeItemsOnDisplayItems.item34 = "► " + activeItemsOnDisplayItems.item34;

                cout << activeItemsOnDisplayItems.item34;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item34,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item34;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item34,' ');
            }

            if (shopPosition.currentPositionX == 5 && shopPosition.currentPositionY == 6) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item35;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem35;

                setcolor(14);
                activeItemsOnDisplayItems.item35 = "► " + activeItemsOnDisplayItems.item35;

                cout << activeItemsOnDisplayItems.item35;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item35,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item35;
                setcolor(7);
                fillerOfEmptinessStr(31,activeItemsOnDisplayItems.item35,' ');
            }

            if (shopPosition.currentPositionX == 6 && shopPosition.currentPositionY == 6) {
                ShopInfo.selectedItem = activeItemsOnDisplayItems.item36;
                ShopInfo.selectedItemPrice = activeItemsOnDisplayPrices.priceItem36;

                setcolor(14);
                activeItemsOnDisplayItems.item36 = "► " + activeItemsOnDisplayItems.item36;

                cout << activeItemsOnDisplayItems.item36;
                setcolor(7);
                fillerOfEmptinessStr(33,activeItemsOnDisplayItems.item36,' ');
            }
            else {
                cout << activeItemsOnDisplayItems.item36;
                setcolor(7);
                fillerOfEmptinessStr(26,activeItemsOnDisplayItems.item36,' ');
            }


            cout << "║     ║" << endl;
        }
        else if (currentLine == 56) {
            cout << shopFileString;
            if (firstTime != true) {
                if (shopPosition.currentPositionX == 0) {
                    cout << "                                                                                                                                            ║";
                }
                else {
                    if (ShopInfo.selectedItem == "#----------------" || ShopInfo.selectedItem == "► #----------------") {
                        cout << "                                                                                                                                            ║";
                    }
                    else {
                        // first lets prevent ► from being here when we render it second time
                        string preventionOfChar = "►";

                        size_t found = ShopInfo.selectedItem.find(preventionOfChar);
                        if (found != string::npos) {
                            ShopInfo.selectedItem = "\b\b" + ShopInfo.selectedItem;

                            setcolor(3);
                            cout << ShopInfo.selectedItem;
                        }
                        else {
                            setcolor(3);
                            cout << ShopInfo.selectedItem;
                        }

                        if (chosenOptionInShop == "inventory") {
                            fillerOfEmptinessStr(132,ShopInfo.selectedItem,' ');
                        }
                        else {
                            fillerOfEmptinessStr(30,ShopInfo.selectedItem,' ');

                            if (ShopInfo.selectedItemPrice > 0) {
                                setcolor(6);
                                cout << "price: " << ShopInfo.selectedItemPrice << " coin(s)";
                                setcolor(7);
                                string howLongIsPrice = to_string(ShopInfo.selectedItemPrice);
                                fillerOfEmptinessInt(94 - howLongIsPrice.length() + 1,ShopInfo.selectedItemPrice + ShopInfo.selectedItem.length() + 9,' ', "║");
                            }
                            else {
                                fillerOfEmptinessInt(100,ShopInfo.selectedItemPrice + ShopInfo.selectedItem.length() + 9,' ', "║");
                            }
                        }
                    }
                }
            }
            if (firstTime == true) {
                cout << "                                                                                                                                            ║";
            }
            setcolor(7);
            cout << endl;
        }
        else if (currentLine == 61) {
            cout << shopFileString;
            setcolor(6);
            cout << playerInventory.money;
            setcolor(7);
            fillerOfEmptinessInt(118,playerInventory.money,' ',"║");
            cout << endl;
        }

        else {
            cout << shopFileString << endl;
        }
    }
}

void renderShopInfo(string item = stupendousEmporiumItemsInventoryItemsDescriptions.item1) {
    //prep
    prepareForOutput();
    //variables
    int currentLine = 0;
    string shopInfoFileString;
    string shopInfoDescriptionFileString;
    // file prep
    fstream shopInfoFileFile ("Visuals/shopTemplateInfo.txt");
    ofstream shopInfoDescriptionFileFile("Visuals/itemDescription.txt");

    // code

    shopInfoDescriptionFileFile << item;

    shopInfoDescriptionFileFile.close();

    while(getline(shopInfoFileFile,shopInfoFileString)) {
        currentLine++;
        if (currentLine == 1) {
            cout << shopInfoFileString << endl;
        }
        else if(currentLine == 4 ) {
            loadFile("Visuals/shopTitle.txt");
        }
        else if (currentLine == 9) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",1, true);
        }
        else if (currentLine == 10) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",2, true);
        }
        else if (currentLine == 11) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",3, true);
        }
        else if (currentLine == 12) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",4, true);
        }
        else if (currentLine == 13) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",5, true);
        }
        else if (currentLine == 14) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",6, true);
        }
        else if (currentLine == 15) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",7, true);
        }
        else if (currentLine == 16) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",8, true);
        }
        else if (currentLine == 17) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",9, true);
        }
        else if (currentLine == 18) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",10, true);
        }
        else if (currentLine == 19) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",11, true);
        }
        else if (currentLine == 20) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",12, true);
        }
        else if (currentLine == 21) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",13, true);
        }
        else if (currentLine == 22) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",14, true);
        }
        else if (currentLine == 23) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",15, true);
        }
        else if (currentLine == 24) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",16, true);
        }
        else if (currentLine == 25) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",17, true);
        }
        else if (currentLine == 26) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",18, true);
        }
        else if (currentLine == 27) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",19, true);
        }
        else if (currentLine == 28) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",20, true);
        }
        else if (currentLine == 29) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",21, true);
        }
        else if (currentLine == 30) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",22, true);
        }
        else if (currentLine == 31) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",23, true);
        }
        else if (currentLine == 32) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",24, true);
        }
        else if (currentLine == 33) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",25, true);
        }
        else if (currentLine == 34) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",26, true);
        }
        else if (currentLine == 35) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",27, true);
        }
        else if (currentLine == 36) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",28, true);
        }
        else if (currentLine == 37) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",29, true);
        }
        else if (currentLine == 38) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",30, true);
        }
        else if (currentLine == 39) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",31, true);
        }
        else if (currentLine == 40) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",32, true);
        }
        else if (currentLine == 41) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",33, true);
        }
        else if (currentLine == 42) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",34, true);
        }
        else if (currentLine == 43) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",35, true);
        }
        else if (currentLine == 44) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",36, true);
        }
        else if (currentLine == 45) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",37, true);
        }
        else if (currentLine == 46) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",38, true);
        }
        else if (currentLine == 47) {
            cout << shopInfoFileString;
            loadLine("Visuals/itemDescription.txt",1, true);
        }

        else {
            cout << shopInfoFileString << endl;
        }
    }
}



void renderMap(){
    //prep
    prepareForOutput();
    //variables
    int currentLine = 0;
    string mapFileString;
    //file prep
    fstream mapFileFile("Visuals/map.txt");

    // code

    while(getline(mapFileFile,mapFileString)){
        currentLine++;

        if (currentLine == 1) {
            cout << mapFileString << endl;
        }
        else if(currentLine == 33) {
            cout << mapFileString;
            if(LevelInfo.currentLevel < 10) {
                cout << "0";
            }
            cout << LevelInfo.currentLevel;
        }


        else {
            cout << mapFileString << endl;
        }
    }
}

void renderCharacterSheet(string name = characterOne.name, int hp = characterOne.hp, int arm = characterOne.arm, int atk = characterOne.atk, int bat = characterOne.bat, int dat = characterOne.dat) {
    // prep
    prepareForOutput();
    // variables
    int currentLine = 0;
    string characterSheetRenderFileString;
    // file prep
    fstream characterSheetRenderFileFile ("Visuals/characterSheet.txt");

    // code
    while (getline(characterSheetRenderFileFile,characterSheetRenderFileString)) {
        currentLine++;

        if(currentLine == 1) {
            cout << characterSheetRenderFileString << endl;
        }
        else if (currentLine == 6) {
            if (characterSheetPosition.currentPositionY == 1) {
                setcolor(6);
                cout << characterSheetRenderFileString << "\b\b\b\b ► " << name << " ◄";
            }
            else {
                cout << characterSheetRenderFileString << "\b" << name << "\b";
            }
            setcolor(15);
            fillerOfEmptinessStr(124,name,' ',"\n");
        }
        else if (currentLine == 14) {
            cout << characterSheetRenderFileString << hp;
            fillerOfEmptinessInt(4,hp,' ',"║");
            fillerOfEmptinessStr(107,"",' ',"║\n");
        }
        else if (currentLine == 16) {
            cout << characterSheetRenderFileString << arm;
            fillerOfEmptinessInt(4,arm,' ',"║");
            fillerOfEmptinessStr(107,"",' ',"║\n");
        }
        else if (currentLine == 18) {
            if (characterSheetPosition.currentPositionY == 1 && characterSheetPosition.currentPositionX == 1){
                setcolor(0);
                cout << "  <---  ";
            }
            else {
                cout << "  <---  ";
            }
            setcolor(15);
            cout << characterSheetRenderFileString << atk;
            fillerOfEmptinessInt(4,atk,' ',"║");
            fillerOfEmptinessStr(99,"",' ',"║");

            if (characterSheetPosition.currentPositionY == 1 && characterSheetPosition.currentPositionX == 3){
                setcolor(0);
                cout << "  --->  " << endl;
            }
            else {
                cout << "  --->  " << endl;
            }
            setcolor(15);
        }
        else if (currentLine == 20) {
            cout << characterSheetRenderFileString << bat;
            fillerOfEmptinessInt(3,bat,' ',"║");
            fillerOfEmptinessStr(107,"",' ',"║\n");
        }
        else if (currentLine == 22) {
            cout << characterSheetRenderFileString << dat;
            fillerOfEmptinessInt(6,dat,' ',"║");
            fillerOfEmptinessStr(107,"",' ',"║\n");
        }
        else if (currentLine == 31) {
            cout << characterSheetRenderFileString;
            if (characterSheetPosition.currentPositionY == 2) {
                setcolor(6);
                if (characterSheetPosition.currentPositionX == 1) {
                    cout << " ► Attacks ◄";
                    characterSheetAbilityOrAttackString = "Attacks";
                }
                else {
                    cout << "► Abilities ◄";
                    characterSheetAbilityOrAttackString = "Abilities";
                }

            }
            else {
                if (characterSheetAbilityOrAttackString == "Attacks") {
                    cout << "   Attacks   ";
                }
                if (characterSheetAbilityOrAttackString == "Abilities") {
                    cout << "   Abilities ";
                }
            }
            setcolor(15);

            cout << "                                                                                                                ║" << endl;
        }
        else if (currentLine == 33) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionX == 1) {
                loadLine("Visuals/characterSheetAttackOrAbilityOne.txt",1,false);
            }
            if (characterSheetPosition.currentPositionX == 2) {
                loadLine("Visuals/characterSheetAttackOrAbilityTwo.txt",1,false);
            }
            if (characterSheetPosition.currentPositionX >= 3) {
                loadLine("Visuals/characterSheetAttackOrAbilityThree.txt",1,false);
            }

            cout << "        ║" << endl;
        }
        else if (currentLine == 34) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionX == 1) {
                loadLine("Visuals/characterSheetAttackOrAbilityOne.txt",2,false);
            }
            if (characterSheetPosition.currentPositionX == 2) {
                loadLine("Visuals/characterSheetAttackOrAbilityTwo.txt",2,false);
            }
            if (characterSheetPosition.currentPositionX >= 3) {
                loadLine("Visuals/characterSheetAttackOrAbilityThree.txt",2,false);
            }

            cout << "        ║" << endl;
        }
        else if (currentLine == 35) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionX == 1) {
                loadLine("Visuals/characterSheetAttackOrAbilityOne.txt",3,false);
            }
            if (characterSheetPosition.currentPositionX == 2) {
                loadLine("Visuals/characterSheetAttackOrAbilityTwo.txt",3,false);
            }
            if (characterSheetPosition.currentPositionX >= 3) {
                loadLine("Visuals/characterSheetAttackOrAbilityThree.txt",3,false);
            }

            cout << "        ║" << endl;
        }
        else if (currentLine == 36) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionX == 1) {
                loadLine("Visuals/characterSheetAttackOrAbilityOne.txt",4,false);
            }
            if (characterSheetPosition.currentPositionX == 2) {
                loadLine("Visuals/characterSheetAttackOrAbilityTwo.txt",4,false);
            }
            if (characterSheetPosition.currentPositionX >= 3) {
                loadLine("Visuals/characterSheetAttackOrAbilityThree.txt",4,false);
            }

            cout << "        ║" << endl;
        }
        else if (currentLine == 37) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionX == 1) {
                loadLine("Visuals/characterSheetAttackOrAbilityOne.txt",5,false);
            }
            if (characterSheetPosition.currentPositionX == 2) {
                loadLine("Visuals/characterSheetAttackOrAbilityTwo.txt",5,false);
            }
            if (characterSheetPosition.currentPositionX >= 3) {
                loadLine("Visuals/characterSheetAttackOrAbilityThree.txt",5,false);
            }

            cout << "╔═══════╝" << endl;
        }
        else if (currentLine == 38) {
            if (characterSheetPosition.currentPositionY == 3) {
                if (characterSheetPosition.currentPositionX == 1) {
                    setcolor(0);
                }
                else{
                    setcolor(6);
                }
                cout <<  "  <---  ";
            }
            else {
                cout << "  <---  ";
            }
            setcolor(15);

            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionX == 1) {
                loadLine("Visuals/characterSheetAttackOrAbilityOne.txt",6,false);
            }
            if (characterSheetPosition.currentPositionX == 2) {
                loadLine("Visuals/characterSheetAttackOrAbilityTwo.txt",6,false);
            }
            if (characterSheetPosition.currentPositionX >= 3) {
                loadLine("Visuals/characterSheetAttackOrAbilityThree.txt",6,false);
            }

            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionY == 3) {
                if (characterSheetPosition.currentPositionX == 3) {
                    setcolor(0);
                } else{
                    setcolor(6);
                }
                cout <<  "  --->  " << endl;
            }
            else {
                cout << "  --->  " << endl;
            }
            setcolor(15);
        }
        else if (currentLine == 39) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionX == 1) {
                loadLine("Visuals/characterSheetAttackOrAbilityOne.txt",7,false);
            }
            if (characterSheetPosition.currentPositionX == 2) {
                loadLine("Visuals/characterSheetAttackOrAbilityTwo.txt",7,false);
            }
            if (characterSheetPosition.currentPositionX >= 3) {
                loadLine("Visuals/characterSheetAttackOrAbilityThree.txt",7,false);
            }

            cout << "╚═══════╗" << endl;
        }
        else if (currentLine == 40) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionX == 1) {
                loadLine("Visuals/characterSheetAttackOrAbilityOne.txt",8,false);
            }
            if (characterSheetPosition.currentPositionX == 2) {
                loadLine("Visuals/characterSheetAttackOrAbilityTwo.txt",8,false);
            }
            if (characterSheetPosition.currentPositionX >= 3) {
                loadLine("Visuals/characterSheetAttackOrAbilityThree.txt",8,false);
            }

            cout << "        ║" << endl;
        }
        else if (currentLine == 41) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionX == 1) {
                loadLine("Visuals/characterSheetAttackOrAbilityOne.txt",9,false);
            }
            if (characterSheetPosition.currentPositionX == 2) {
                loadLine("Visuals/characterSheetAttackOrAbilityTwo.txt",9,false);
            }
            if (characterSheetPosition.currentPositionX >= 3) {
                loadLine("Visuals/characterSheetAttackOrAbilityThree.txt",9,false);
            }

            cout << "        ║" << endl;
        }
        else if (currentLine == 42) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionX == 1) {
                loadLine("Visuals/characterSheetAttackOrAbilityOne.txt",10,false);
            }
            if (characterSheetPosition.currentPositionX == 2) {
                loadLine("Visuals/characterSheetAttackOrAbilityTwo.txt",10,false);
            }
            if (characterSheetPosition.currentPositionX >= 3) {
                loadLine("Visuals/characterSheetAttackOrAbilityThree.txt",10,false);
            }

            cout << "        ║" << endl;
        }
        else if (currentLine == 43) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionX == 1) {
                loadLine("Visuals/characterSheetAttackOrAbilityOne.txt",11,false);
            }
            if (characterSheetPosition.currentPositionX == 2) {
                loadLine("Visuals/characterSheetAttackOrAbilityTwo.txt",11,false);
            }
            if (characterSheetPosition.currentPositionX >= 3) {
                loadLine("Visuals/characterSheetAttackOrAbilityThree.txt",11,false);
            }

            cout << "       ║" << endl;
        }
        else if (currentLine == 45) {
            cout << characterSheetRenderFileString;
            if (characterSheetPosition.currentPositionY == 4) {
                setcolor(6);
                cout << "► Equipped things ◄";
            }
            else{
                cout << "  Equipped things  ";
            }
            setcolor(15);
            fillerOfEmptinessStr(126,"  Equipped things  ", ' ', "║\n");
        }


            /// there shall lie the equipment as i was too confused to do it, also it kinda needs other stuff to work so dont forget and its line 48 if you will


        else if (currentLine == 51) {
            cout << characterSheetRenderFileString;
            if (characterSheetPosition.currentPositionY == 5) {
                setcolor(6);
                cout << "► Inventory ◄";
            }
            else {
                cout << "  Inventory  ";
            }
            setcolor(15);
            fillerOfEmptinessStr(123, "  Inventory  ", ' ', "║\n");
        }
        else if (currentLine == 54) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionY == 6 && characterSheetPosition.currentPositionX == 1) {
                setcolor(6);

                cout << "► " + playerInventory.item1;
                fillerOfEmptinessStr(30,"► " + playerInventory.item1,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item1;
                fillerOfEmptinessStr(30, playerInventory.item1,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 6 && characterSheetPosition.currentPositionX == 2) {
                setcolor(6);

                cout << "► " + playerInventory.item2;
                fillerOfEmptinessStr(30,"► " + playerInventory.item2,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item2;
                fillerOfEmptinessStr(30, playerInventory.item2,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 6 && characterSheetPosition.currentPositionX == 3) {
                setcolor(6);

                cout << "► " + playerInventory.item3;
                fillerOfEmptinessStr(30,"► " + playerInventory.item3,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item3;
                fillerOfEmptinessStr(30, playerInventory.item3,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 6 && characterSheetPosition.currentPositionX == 4) {
                setcolor(6);

                cout << "► " + playerInventory.item4;
                fillerOfEmptinessStr(30,"► " + playerInventory.item4,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item4;
                fillerOfEmptinessStr(30, playerInventory.item4,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 6 && characterSheetPosition.currentPositionX == 5) {
                setcolor(6);

                cout << "► " + playerInventory.item5;
                fillerOfEmptinessStr(30,"► " + playerInventory.item5,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item5;
                fillerOfEmptinessStr(30, playerInventory.item5,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 6 && characterSheetPosition.currentPositionX == 6) {
                setcolor(6);

                cout << "► " + playerInventory.item6;
                setcolor(15);
                fillerOfEmptinessStr(46,"► " + playerInventory.item6,' ',"║\n");
            }
            else {
                setcolor(15);

                cout << playerInventory.item6;
                fillerOfEmptinessStr(44,playerInventory.item6,' ',"║\n");
            }
        }
        else if (currentLine == 56) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionY == 7 && characterSheetPosition.currentPositionX == 1) {
                setcolor(6);

                cout << "► " + playerInventory.item7;
                fillerOfEmptinessStr(23,"► " + playerInventory.item7,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item7;
                fillerOfEmptinessStr(21, playerInventory.item7,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 7 && characterSheetPosition.currentPositionX == 2) {
                setcolor(6);

                cout << "► " + playerInventory.item8;
                fillerOfEmptinessStr(23,"► " + playerInventory.item8,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item8;
                fillerOfEmptinessStr(21, playerInventory.item8,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 7 && characterSheetPosition.currentPositionX == 3) {
                setcolor(6);

                cout << "► " + playerInventory.item9;
                fillerOfEmptinessStr(23,"► " + playerInventory.item9,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item9;
                fillerOfEmptinessStr(21, playerInventory.item9,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 7 && characterSheetPosition.currentPositionX == 4) {
                setcolor(6);

                cout << "► " + playerInventory.item10;
                fillerOfEmptinessStr(23,"► " + playerInventory.item10,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item10;
                fillerOfEmptinessStr(21, playerInventory.item10,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 7 && characterSheetPosition.currentPositionX == 5) {
                setcolor(6);

                cout << "► " + playerInventory.item11;
                fillerOfEmptinessStr(23,"► " + playerInventory.item11,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item11;
                fillerOfEmptinessStr(21, playerInventory.item11,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 7 && characterSheetPosition.currentPositionX == 6) {
                setcolor(6);

                cout << "► " + playerInventory.item12;
                fillerOfEmptinessStr(23,"► " + playerInventory.item12,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item12;
                fillerOfEmptinessStr(21, playerInventory.item12,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 7 && characterSheetPosition.currentPositionX == 7) {
                setcolor(6);

                cout << "► " + playerInventory.item13;
                fillerOfEmptinessStr(23,"► " + playerInventory.item13,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item13;
                fillerOfEmptinessStr(21, playerInventory.item13,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 7 && characterSheetPosition.currentPositionX == 8) {
                setcolor(6);

                cout << "► " + playerInventory.item14;
                fillerOfEmptinessStr(23,"► " + playerInventory.item14,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item14;
                fillerOfEmptinessStr(21, playerInventory.item14,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 7 && characterSheetPosition.currentPositionX == 9) {
                setcolor(6);

                cout << "► " + playerInventory.item15;
                fillerOfEmptinessStr(23,"► " + playerInventory.item15,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item15;
                fillerOfEmptinessStr(21, playerInventory.item15,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 7 && characterSheetPosition.currentPositionX == 10) {
                setcolor(6);

                cout << "► " + playerInventory.item16;
                setcolor(15);
                fillerOfEmptinessStr(23,"► " + playerInventory.item16,' ',"║\n");
            }
            else {
                setcolor(15);

                cout << playerInventory.item16;
                fillerOfEmptinessStr(25, playerInventory.item16,' ',"║\n");
            }

            setcolor(15);

        }
        else if (currentLine == 58) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionY == 8 && characterSheetPosition.currentPositionX == 1) {
                setcolor(6);

                cout << "► " + playerInventory.item17;
                fillerOfEmptinessStr(23,"► " + playerInventory.item17,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item17;
                fillerOfEmptinessStr(21,playerInventory.item17,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 8 && characterSheetPosition.currentPositionX == 2) {
                setcolor(6);

                cout << "► " + playerInventory.item18;
                fillerOfEmptinessStr(23,"► " + playerInventory.item18,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item18;
                fillerOfEmptinessStr(21,playerInventory.item18,' ',"");}
            if (characterSheetPosition.currentPositionY == 8 && characterSheetPosition.currentPositionX == 3) {
                setcolor(6);

                cout << "► " + playerInventory.item19;
                fillerOfEmptinessStr(23,"► " + playerInventory.item19,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item19;
                fillerOfEmptinessStr(21,playerInventory.item19,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 8 && characterSheetPosition.currentPositionX == 4) {
                setcolor(6);

                cout << "► " + playerInventory.item20;
                fillerOfEmptinessStr(23,"► " + playerInventory.item20,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item20;
                fillerOfEmptinessStr(21,playerInventory.item20,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 8 && characterSheetPosition.currentPositionX == 5) {
                setcolor(6);

                cout << "► " + playerInventory.item21;
                fillerOfEmptinessStr(23,"► " + playerInventory.item21,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item21;
                fillerOfEmptinessStr(21,playerInventory.item21,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 8 && characterSheetPosition.currentPositionX == 6) {
                setcolor(6);

                cout << "► " + playerInventory.item22;
                fillerOfEmptinessStr(23,"► " + playerInventory.item22,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item22;
                fillerOfEmptinessStr(21,playerInventory.item22,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 8 && characterSheetPosition.currentPositionX == 7) {
                setcolor(6);

                cout << "► " + playerInventory.item23;
                fillerOfEmptinessStr(23,"► " + playerInventory.item23,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item23;
                fillerOfEmptinessStr(21,playerInventory.item23,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 8 && characterSheetPosition.currentPositionX == 8) {
                setcolor(6);

                cout << "► " + playerInventory.item24;
                fillerOfEmptinessStr(23,"► " + playerInventory.item24,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item24;
                fillerOfEmptinessStr(21,playerInventory.item24,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 8 && characterSheetPosition.currentPositionX == 9) {
                setcolor(6);

                cout << "► " + playerInventory.item25;
                fillerOfEmptinessStr(23,"► " + playerInventory.item25,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item25;
                fillerOfEmptinessStr(21,playerInventory.item25,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 8 && characterSheetPosition.currentPositionX == 10) {
                setcolor(6);

                cout << "► " + playerInventory.item26;
                setcolor(15);
                fillerOfEmptinessStr(23,"► " + playerInventory.item26,' ',"║\n");
            }
            else {
                setcolor(15);

                cout << playerInventory.item26;
                fillerOfEmptinessStr(25,playerInventory.item26,' ',"║\n");
            }

            setcolor(15);
        }
        else if (currentLine == 60) {
            cout << characterSheetRenderFileString;

            if (characterSheetPosition.currentPositionY == 9 && characterSheetPosition.currentPositionX == 1) {
                setcolor(6);

                cout << "► " + playerInventory.item27;
                fillerOfEmptinessStr(23," ► " + playerInventory.item27,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item27;
                fillerOfEmptinessStr(21,playerInventory.item27,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 9 && characterSheetPosition.currentPositionX == 2) {
                setcolor(6);

                cout << "► " + playerInventory.item28;
                fillerOfEmptinessStr(23,"► " + playerInventory.item28,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item28;
                fillerOfEmptinessStr(21,playerInventory.item28,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 9 && characterSheetPosition.currentPositionX == 3) {
                setcolor(6);

                cout << "► " + playerInventory.item29;
                fillerOfEmptinessStr(23,"► " + playerInventory.item29,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item29;
                fillerOfEmptinessStr(21,playerInventory.item29,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 9 && characterSheetPosition.currentPositionX == 4) {
                setcolor(6);

                cout << "► " + playerInventory.item30;
                fillerOfEmptinessStr(23,"► " + playerInventory.item30,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item30;
                fillerOfEmptinessStr(21,playerInventory.item30,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 9 && characterSheetPosition.currentPositionX == 5) {
                setcolor(6);

                cout << "► " + playerInventory.item31;
                fillerOfEmptinessStr(23,"► " + playerInventory.item31,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item31;
                fillerOfEmptinessStr(21,playerInventory.item31,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 9 && characterSheetPosition.currentPositionX == 6) {
                setcolor(6);

                cout << "► " + playerInventory.item32;
                fillerOfEmptinessStr(23,"► " + playerInventory.item32,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item32;
                fillerOfEmptinessStr(21,playerInventory.item32,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 9 && characterSheetPosition.currentPositionX == 7) {
                setcolor(6);

                cout << "► " + playerInventory.item33;
                fillerOfEmptinessStr(23,"► " + playerInventory.item33,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item33;
                fillerOfEmptinessStr(21, playerInventory.item33,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 9 && characterSheetPosition.currentPositionX == 8) {
                setcolor(6);

                cout << "► " + playerInventory.item34;
                fillerOfEmptinessStr(23,"► " + playerInventory.item34,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item34;
                fillerOfEmptinessStr(21, playerInventory.item34,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 9 && characterSheetPosition.currentPositionX == 9) {
                setcolor(6);

                cout << "► " + playerInventory.item35;
                fillerOfEmptinessStr(23,"► " + playerInventory.item35,' ',"");
            }
            else {
                setcolor(15);

                cout << playerInventory.item35;
                fillerOfEmptinessStr(21,playerInventory.item35,' ',"");
            }
            if (characterSheetPosition.currentPositionY == 9 && characterSheetPosition.currentPositionX == 10) {
                setcolor(6);

                cout << "► " + playerInventory.item36;
                setcolor(15);
                fillerOfEmptinessStr(25,"► " + playerInventory.item36,' ',"║\n");
            }
            else {
                setcolor(15);

                cout << playerInventory.item36;
                fillerOfEmptinessStr(25,playerInventory.item36,' ',"║\n");
            }

            setcolor(15);

        }






        else {
            cout << characterSheetRenderFileString << endl;
        }
    }
}



void renderMainBattleScene (string enemyName = enemy.name, string enemyEffect = enemy.effect, int enemyHp = enemy.hp, int enemyArm = enemy.arm, int enemyAtk = enemy.atk, int enemyBat = enemy.bat, int enemyDat = enemy.dat, string heroName = active.name, string heroEffect = active.effect, int heroHp = active.hp, int heroArm = active.arm, int heroAtk = active.atk, int heroBat = active.bat, int heroDat = active.dat) {
    //prep
    prepareForOutput();
    //variables
    int currentLine = 0;
    string MainBattleSceneFileString;
    //File prep
    ifstream MainBattleSceneFileFile ("Visuals/battleSceneMain.txt");

    // code
    while (getline(MainBattleSceneFileFile, MainBattleSceneFileString)) {
        currentLine++;

        if(currentLine == 1){
            cout << MainBattleSceneFileString << endl;
        }
        else if(currentLine == 2){
            cout << MainBattleSceneFileString << enemy.name;
            fillerOfEmptinessStr(220,enemy.name,' ',"║\n");
        }
        else if(currentLine == 6) {
            cout << MainBattleSceneFileString << enemy.effect;
            fillerOfEmptinessStr(13,enemy.effect,' ',"║\n");
        }
        else if(currentLine == 11) {
            cout << MainBattleSceneFileString << enemy.hp;
            fillerOfEmptinessInt(6,enemy.hp,' ',"║\n");
        }
        else if(currentLine == 13) {
            cout << MainBattleSceneFileString;

            if (shieldActiveEnemy == true || shieldHpEnemy > 0) {
                setcolor(128);
            }
            if (bioShieldActiveEnemy == true || bioShieldHpEnemy > 0) {
                setcolor(10);
            }

            cout << enemy.arm;

            if (shieldActiveEnemy == true || shieldHpEnemy > 0) {
                cout << " + " << shieldHpEnemy;
                fillerOfEmptinessInt(2,enemy.arm + shieldHpEnemy,' ',"");
                cout << "║\n";
            }
            if (bioShieldActiveEnemy == true || bioShieldHpEnemy > 0) {
                cout << " + " << bioShieldHpEnemy;
                fillerOfEmptinessInt(2,enemy.arm + bioShieldHpEnemy,' ',"");
                cout << "║\n";
            }
            if (bioShieldActiveEnemy == false && shieldActiveEnemy == false) {
                setcolor(15);
                fillerOfEmptinessInt(6,enemy.arm,' ',"║\n");
            }
            setcolor(15);

        }
        else if(currentLine == 15) {
            cout << MainBattleSceneFileString << enemy.atk;
            fillerOfEmptinessInt(6,enemy.atk,' ',"║\n");
        }
        else if(currentLine == 17) {
            cout << MainBattleSceneFileString << enemy.bat;
            fillerOfEmptinessInt(5,enemy.bat,' ',"║\n");
        }
        else if(currentLine == 19) {
            cout << MainBattleSceneFileString << enemy.dat;
            fillerOfEmptinessInt(8,enemy.dat,' ',"║\n");
        }
        else if(currentLine == 24) {
            cout << MainBattleSceneFileString << active.name;
            fillerOfEmptinessStr(221,active.name,' ',"║\n");
        }
        else if(currentLine == 28) {
            cout << MainBattleSceneFileString << active.effect;
            fillerOfEmptinessStr(13,active.effect,' ',"║\n");
        }
        else if (currentLine == 29) {
            cout << "║        ";
            if (battleScene.currentPositionX == 1){
                setcolor(6);
                cout << "► Attacks ◄";
                setcolor(15);
            }
            else {
                cout << "  Attacks  ";
            }
            cout << MainBattleSceneFileString << endl;
        }
        else if (currentLine == 31) {
            cout << "║       ";
            if (battleScene.currentPositionX == 2){
                setcolor(6);
                cout << "► Use  Item ◄";
                setcolor(15);
            }
            else {
                cout << "  Use  Item  ";
            }
            cout << MainBattleSceneFileString << endl;
        }
        else if(currentLine == 33) {
            cout << "║        ";
            if (battleScene.currentPositionX == 3){
                setcolor(6);
                cout << "► Ability ◄";
                setcolor(15);
            }
            else {
                cout << "  Ability  ";
            }

            cout << MainBattleSceneFileString << active.hp;
            fillerOfEmptinessInt(6,active.hp,' ',"║\n");
        }
        else if(currentLine == 35) {
            cout << "║       ";
            if (battleScene.currentPositionX == 4){
                setcolor(6);
                cout << "► Swap Hero ◄";
                setcolor(15);
            }
            else {
                cout << "  Swap Hero  ";
            }

            cout << MainBattleSceneFileString;

            if (shieldActiveHero == true || shieldHpHero > 0) {
                setcolor(128);
            }
            if (bioShieldActiveHero == true || bioShieldHpHero > 0) {
                setcolor(10);
            }

            cout << active.arm;

            if (shieldActiveHero == true || shieldHpHero > 0) {
                cout << " + " << shieldHpHero;
                fillerOfEmptinessInt(2,active.arm + shieldHpHero,' ',"");
                setcolor(15);
                cout << "║\n";
            }
            if (bioShieldActiveHero == true || bioShieldHpHero > 0) {
                cout << " + " << bioShieldHpHero;
                fillerOfEmptinessInt(2,active.arm + bioShieldHpHero,' ',"");
                setcolor(15);
                cout << "║\n";
            }
            if (bioShieldActiveHero == false && shieldActiveHero == false) {
                setcolor(15);
                fillerOfEmptinessInt(6,active.arm,' ',"║\n");
            }
            setcolor(15);

        }
        else if(currentLine == 37) {
            cout << MainBattleSceneFileString << active.atk;
            fillerOfEmptinessInt(6,active.atk,' ',"║\n");
        }
        else if(currentLine == 39) {
            cout << MainBattleSceneFileString << active.bat;
            fillerOfEmptinessInt(5,active.bat,' ',"║\n");
        }
        else if(currentLine == 41) {
            cout << MainBattleSceneFileString << active.dat;
            fillerOfEmptinessInt(8,active.dat,' ',"║\n");
        }

        else {
            cout << MainBattleSceneFileString << endl;
        }
    }

}

void renderEnemyDescription(string pathToFile = "Visuals/Cutscenes/X-001.txt") {
    prepareForOutput();
    // variables
    string enemyDescriptionFileString;
    //prep file
    fstream enemyDescriptionFileFile (pathToFile);

    //code
    while(getline(enemyDescriptionFileFile, enemyDescriptionFileString)) {
        cout << enemyDescriptionFileString << endl;
    }
}

void renderItemsBattleScene () {
    //prep
    prepareForOutput();
    // variables
    string itemsBattleSceneFileString;
    int currentLine = 0;
    // prep file
    fstream itemsBattleSceneFileFile ("Visuals/battleSceneMainItems.txt");

    // code
    while(getline(itemsBattleSceneFileFile, itemsBattleSceneFileString)) {
        currentLine++;

        if (currentLine == 1){
            cout << itemsBattleSceneFileString << endl;
        }
        else if(currentLine == 2){
            cout << itemsBattleSceneFileString << enemy.name;
            fillerOfEmptinessStr(220,enemy.name,' ',"║\n");
        }
        else if(currentLine == 6) {
            cout << itemsBattleSceneFileString << enemy.effect;
            fillerOfEmptinessStr(13,enemy.effect,' ',"║\n");
        }
        else if(currentLine == 11) {
            cout << itemsBattleSceneFileString << enemy.hp;
            fillerOfEmptinessInt(6,enemy.hp,' ',"║\n");
        }
        else if(currentLine == 13) {

            cout << itemsBattleSceneFileString;

            if (shieldActiveEnemy == true || shieldHpEnemy > 0) {
                setcolor(128);
            }
            if (bioShieldActiveEnemy == true || bioShieldHpEnemy > 0) {
                setcolor(10);
            }

            cout << enemy.arm;

            if (shieldActiveEnemy == true || shieldHpEnemy > 0) {
                cout << " + " << shieldHpEnemy;
                fillerOfEmptinessInt(2,enemy.arm + shieldHpEnemy,' ',"");
                cout << "║\n";
            }
            if (bioShieldActiveEnemy == true || bioShieldHpEnemy > 0) {
                cout << " + " << bioShieldHpEnemy;
                fillerOfEmptinessInt(2,enemy.arm + bioShieldHpEnemy,' ',"");
                cout << "║\n";
            }
            if (bioShieldActiveEnemy == false && shieldActiveEnemy == false) {
                setcolor(15);
                fillerOfEmptinessInt(6,enemy.arm,' ',"║\n");
            }
        }
        else if(currentLine == 15) {
            cout << itemsBattleSceneFileString << enemy.atk;
            fillerOfEmptinessInt(6,enemy.atk,' ',"║\n");
        }
        else if(currentLine == 17) {
            cout << itemsBattleSceneFileString << enemy.bat;
            fillerOfEmptinessInt(5, enemy.bat, ' ', "║\n");
        }
        else if(currentLine == 19) {
            cout << itemsBattleSceneFileString << enemy.bat;
            fillerOfEmptinessInt(8, enemy.bat, ' ', "║\n");
        }
        else if (currentLine == 24) {
            cout << itemsBattleSceneFileString << active.name;
            fillerOfEmptinessStr(221, active.name, ' ',"║\n");
        }
        else if(currentLine == 26) {
            cout << "║          Options         ║                                                     ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 1) {
                setcolor(6);
                cout << " ► " + playerInventory.item1 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item1 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item1 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 1) {
                setcolor(6);
                cout << " ► " + playerInventory.item19 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item19 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item19 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if(currentLine == 28) {
            cout << "║                          ║                                                     ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 2) {
                setcolor(6);
                cout << " ► " + playerInventory.item2 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item2 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item2 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 2) {
                setcolor(6);
                cout << " ► " + playerInventory.item20 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item20 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item20 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << active.effect;
            fillerOfEmptinessStr(13, active.effect, ' ', "║\n");

        }
        else if(currentLine == 29) {
            cout << "║       ";

            if (battleScene.currentPositionY == 1 && battleScene.currentPositionX == 1) {
                setcolor(6);
                cout << "► Step Back ◄";
                setcolor(15);
            }
            else {
                cout << "  Step Back  ";
            }

            cout << "      ║";
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 30) {
            cout << "║                          ║                                                     ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 3) {
                setcolor(6);
                cout << " ► " + playerInventory.item3 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item3 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item3 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 3) {
                setcolor(6);
                cout << " ► " + playerInventory.item21 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item21 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item21 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 32) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 4) {
                setcolor(6);
                cout << " ► " + playerInventory.item4 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item4 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item4 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 4) {
                setcolor(6);
                cout << " ► " + playerInventory.item22 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item22 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item22 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 33) {
            cout << itemsBattleSceneFileString << active.hp;
            fillerOfEmptinessInt(6,active.hp,' ',"║\n");
        }
        else if (currentLine == 34) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 5) {
                setcolor(6);
                cout << " ► " + playerInventory.item5 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item5 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item4 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 5) {
                setcolor(6);
                cout << " ► " + playerInventory.item23 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item23 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item23 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 35) {
            cout << itemsBattleSceneFileString;

            if (shieldActiveHero == true || shieldHpHero > 0) {
                setcolor(128);
            }
            if (bioShieldActiveHero == true || bioShieldHpHero > 0) {
                setcolor(10);
            }

            cout << active.arm;

            if (shieldActiveHero == true || shieldHpHero > 0) {
                cout << " + " << shieldHpHero;
                fillerOfEmptinessInt(2,active.arm + shieldHpHero,' ',"");
                setcolor(15);
                cout << "║\n";
            }
            if (bioShieldActiveHero == true || bioShieldHpHero > 0) {
                cout << " + " << bioShieldHpHero;
                fillerOfEmptinessInt(2,active.arm + bioShieldHpHero,' ',"");
                setcolor(15);
                cout << "║\n";
            }
            if (bioShieldActiveHero == false && shieldActiveHero == false) {
                setcolor(15);
                fillerOfEmptinessInt(6,active.arm,' ',"║\n");
            }
        }
        else if (currentLine == 36) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 6) {
                setcolor(6);
                cout << " ► " + playerInventory.item6 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item6 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item6 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 6) {
                setcolor(6);
                cout << " ► " + playerInventory.item24 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item24 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item24 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 37) {
            cout << itemsBattleSceneFileString << active.atk;
            fillerOfEmptinessInt(6,active.atk,' ',"║\n");
        }
        else if (currentLine == 38) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 7) {
                setcolor(6);
                cout << " ► " + playerInventory.item7 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item7 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item7 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 7) {
                setcolor(6);
                cout << " ► " + playerInventory.item25 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item25 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item25 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 39) {
            cout << itemsBattleSceneFileString << active.bat;
            fillerOfEmptinessInt(5,active.bat,' ',"║\n");
        }
        else if (currentLine == 40) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 8) {
                setcolor(6);
                cout << " ► " + playerInventory.item8 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item8 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item8 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 8) {
                setcolor(6);
                cout << " ► " + playerInventory.item26 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item26 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item26 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 41) {
            cout << itemsBattleSceneFileString << active.dat;
            fillerOfEmptinessInt(8,active.dat,' ',"║\n");
        }
        else if (currentLine == 42) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 9) {
                setcolor(6);
                cout << " ► " + playerInventory.item9 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item9 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item9 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 9) {
                setcolor(6);
                cout << " ► " + playerInventory.item27 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item27 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item27 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 44) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 10) {
                setcolor(6);
                cout << " ► " + playerInventory.item10 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item10 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item10 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 10) {
                setcolor(6);
                cout << " ► " + playerInventory.item28 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item28 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item28 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 46) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 11) {
                setcolor(6);
                cout << " ► " + playerInventory.item11 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item11 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item11 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 11) {
                setcolor(6);
                cout << " ► " + playerInventory.item29 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item29 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item29 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 48) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 12) {
                setcolor(6);
                cout << " ► " + playerInventory.item12 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item12 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item12 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 12) {
                setcolor(6);
                cout << " ► " + playerInventory.item30 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item30 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item30 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 50) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 13) {
                setcolor(6);
                cout << " ► " + playerInventory.item13 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item13 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item13 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 13) {
                setcolor(6);
                cout << " ► " + playerInventory.item31 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item31 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item31 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 52) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 14) {
                setcolor(6);
                cout << " ► " + playerInventory.item14 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item14 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item14 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 14) {
                setcolor(6);
                cout << " ► " + playerInventory.item32 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item32 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item32 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 54) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 15) {
                setcolor(6);
                cout << " ► " + playerInventory.item15 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item15 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item15 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 15) {
                setcolor(6);
                cout << " ► " + playerInventory.item33 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item33 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item33 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 56) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 16) {
                setcolor(6);
                cout << " ► " + playerInventory.item16 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item16 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item16 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 16) {
                setcolor(6);
                cout << " ► " + playerInventory.item34 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item34 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item34 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 58) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 17) {
                setcolor(6);
                cout << " ► " + playerInventory.item17 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item17 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item17 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 17) {
                setcolor(6);
                cout << " ► " + playerInventory.item35 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item35 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item35 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }
        else if (currentLine == 60) {
            cout << "║                                                                                ║";
            if (battleScene.currentPositionY == 2 && battleScene.currentPositionX == 18) {
                setcolor(6);
                cout << " ► " + playerInventory.item18 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item18 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item18 + "  ",' ',"║");
            if (battleScene.currentPositionY == 3 && battleScene.currentPositionX == 18) {
                setcolor(6);
                cout << " ► " + playerInventory.item36 + " ◄";
                setcolor(15);
            }
            else {
                cout << "   " + playerInventory.item36 + "  ";
            }
            fillerOfEmptinessStr(33,"   " + playerInventory.item36 + "  ",' ',"║");
            cout << itemsBattleSceneFileString << endl;
        }



        else {
            cout << itemsBattleSceneFileString << endl;
        }
    }
}

void renderAttacksBattleScene () {
    //prep
    prepareForOutput();
    // variables
    string attacksBattleSceneFileString;
    int currentLine = 0;
    // prep file
    fstream attacksBattleSceneFileFile ("Visuals/battleSceneMainAttacksAbilities.txt");

    // code
    while(getline(attacksBattleSceneFileFile,attacksBattleSceneFileString)) {
        currentLine++;

        if (currentLine == 1) {
            cout << attacksBattleSceneFileString << endl;
        }
        else if (currentLine == 2) {
            cout << attacksBattleSceneFileString << enemy.name;
            fillerOfEmptinessStr(220, enemy.name, ' ', "║\n");
        }
        else if (currentLine == 6) {
            cout << attacksBattleSceneFileString << enemy.effect;
            fillerOfEmptinessStr(13,enemy.effect,' ', "║\n");
        }
        else if (currentLine == 11) {
            cout << attacksBattleSceneFileString << enemy.hp;
            fillerOfEmptinessInt(6, enemy.hp, ' ', "║\n");
        }
        else if (currentLine == 13) {

            cout << attacksBattleSceneFileString;

            if (shieldActiveEnemy == true || shieldHpEnemy > 0) {
                setcolor(128);
            }
            if (bioShieldActiveEnemy == true || bioShieldHpEnemy > 0) {
                setcolor(10);
            }

            cout << enemy.arm;

            if (shieldActiveEnemy == true || shieldHpEnemy > 0) {
                cout << " + " << shieldHpEnemy;
                fillerOfEmptinessInt(2,enemy.arm + shieldHpEnemy,' ',"");
                cout << "║\n";
            }
            if (bioShieldActiveEnemy == true || bioShieldHpEnemy > 0) {
                cout << " + " << bioShieldHpEnemy;
                fillerOfEmptinessInt(2,enemy.arm + bioShieldHpEnemy,' ',"");
                cout << "║\n";
            }
            if (bioShieldActiveEnemy == false && shieldActiveEnemy == false) {
                setcolor(15);
                fillerOfEmptinessInt(6,enemy.arm,' ',"║\n");
            }
        }
        else if (currentLine == 15) {
            cout << attacksBattleSceneFileString << enemy.atk;
            fillerOfEmptinessInt(6, enemy.atk, ' ', "║\n");
        }
        else if (currentLine == 17) {
            cout << attacksBattleSceneFileString << enemy.bat;
            fillerOfEmptinessInt(5, enemy.bat, ' ', "║\n");
        }
        else if (currentLine == 19) {
            cout << attacksBattleSceneFileString << enemy.dat;
            fillerOfEmptinessInt(8, enemy.dat, ' ', "║\n");
        }
        else if (currentLine == 24) {
            cout << attacksBattleSceneFileString << active.name;
            fillerOfEmptinessStr(221, active.name, ' ', "║\n");
        }
        else if (currentLine == 26) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",1);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",1);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 1);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",1);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",1);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 1);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",1);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",1);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 1);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",1);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",1);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 1);
            }
            cout << "  ║      Effect     ║" << endl;
        }
        else if (currentLine == 27) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",2);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",2);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 2);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",2);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",2);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 2);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",2);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",2);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 2);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",2);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",2);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 2);
            }
            cout << "  ╠═════════════════╣" << endl;
        }
        else if (currentLine == 28) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",3);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",3);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 3);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",3);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",3);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 3);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",3);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",3);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 3);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",3);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",3);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 3);
            }
            cout << "  ║ > ";
            cout << active.effect;
            fillerOfEmptinessStr(13, active.effect, ' ', "║\n");
        }
        else if (currentLine == 29) {
            cout << "║       ";
            if (battleScene.currentPositionY == 1 && battleScene.currentPositionX == 1) {
                setcolor(6);
                cout << "► Step Back ◄";
                setcolor(15);
            }
            else {
                cout << "  Step Back  ";
            }
            fillerOfEmptinessStr(7, "  Step Back  ", ' ', "");

            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",4);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",4);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 4);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",4);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",4);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 4);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",4);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",4);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 4);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",4);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",4);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 4);
            }
            cout << "  ╠═════════════════╣" << endl;
        }
        else if (currentLine == 30) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",5);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",5);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 5);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",5);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",5);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 5);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",5);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",5);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 5);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",5);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",5);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 5);
            }
            cout << "  ║      Stats      ║" << endl;
        }
        else if (currentLine == 31) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",6);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",6);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 6);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",6);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",6);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 6);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",6);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",6);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 6);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 6);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 6);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 6);
            }
            cout << "  ╠═════════════════╣" << endl;
        }
        else if (currentLine == 32) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",7);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",7);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 7);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",7);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",7);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 7);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",7);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",7);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 7);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",7);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",7);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 7);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 33) {
            cout << "║       ";
            if (battleScene.currentPositionX == 2) {
                setcolor(6);
                cout << "► Options 1 ◄";
                setcolor(15);
            }
            else {
                cout << "  Options 1  ";
            }

            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",8);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",8);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 8);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",8);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",8);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 8);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",8);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",8);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 8);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",8);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",8);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 8);
            }
            cout << "  ║ > Health ";
            cout << active.hp;
            fillerOfEmptinessInt(6,active.hp, ' ', "║\n");
        }
        else if (currentLine == 34) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",9);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",9);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 9);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",9);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",9);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 9);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",9);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",9);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 9);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",9);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",9);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 9);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 35) {
            cout << "║       ";
            if (battleScene.currentPositionX == 3) {
                setcolor(6);
                cout << "► Options 2 ◄";
                setcolor(15);
            }
            else {
                cout << "  Options 2  ";
            }

            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",10);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",10);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 10);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",10);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",10);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 10);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",10);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",10);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 10);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",10);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",10);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 10);
            }
            cout << "  ║ > Armour ";

            if (shieldActiveHero == true || shieldHpHero > 0) {
                setcolor(128);
            }
            if (bioShieldActiveHero == true || bioShieldHpHero > 0) {
                setcolor(10);
            }

            cout << active.arm;

            if (shieldActiveHero == true || shieldHpHero > 0) {
                cout << " + " << shieldHpHero;
                fillerOfEmptinessInt(2,active.arm + shieldHpHero,' ',"");
                setcolor(15);
                cout << "║\n";
            }
            if (bioShieldActiveHero == true || bioShieldHpHero > 0) {
                cout << " + " << bioShieldHpHero;
                fillerOfEmptinessInt(2,active.arm + bioShieldHpHero,' ',"");
                setcolor(15);
                cout << "║\n";
            }
            if (bioShieldActiveHero == false && shieldActiveHero == false) {
                setcolor(15);
                fillerOfEmptinessInt(6,active.arm,' ',"║\n");
            }
        }
        else if (currentLine == 36) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",11);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",11);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 11);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",11);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",11);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 11);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",11);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",11);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 11);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",11);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",11);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 11);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 37) {
            cout << "║       ";
            if (battleScene.currentPositionX == 4) {
                setcolor(6);
                cout << "► Options 3 ◄";
                setcolor(15);
            }
            else {
                cout << "  Options 3  ";
            }

            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",12);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",12);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 12);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",12);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",12);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 12);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",12);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",12);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 12);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",12);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",12);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 12);
            }
            cout << "  ║ > Attack ";
            cout << active.atk;
            fillerOfEmptinessInt(6,active.atk, ' ', "║\n");
        }
        else if (currentLine == 38) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",13);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",13);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 13);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",13);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",13);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 13);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",13);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",13);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 13);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",13);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",13);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 13);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 39) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",14);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",14);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 14);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",14);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",14);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 14);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",14);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",14);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 14);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",14);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",14);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 14);
            }
            cout << "  ║ > Battery ";
            cout << active.bat;
            fillerOfEmptinessInt(5,active.bat, ' ', "║\n");
        }
        else if (currentLine == 40) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 15);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",15);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 15);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",15);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 15);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",15);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",15);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 15);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 41) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",16);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",16);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 16);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",16);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",16);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 16);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",16);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",16);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 16);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",16);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",16);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 16);
            }
            cout << "  ║ > Data ";
            cout << active.dat;
            fillerOfEmptinessInt(8,active.dat, ' ', "║\n");
        }
        else if (currentLine == 42) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",17);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",17);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 17);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",17);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",17);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 17);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",17);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",17);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 17);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",17);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",17);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 17);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 43) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",18);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",18);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 18);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",18);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",18);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 18);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",18);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",18);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 18);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",18);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",18);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 18);
            }
            cout << "  ╠═════════════════╣" << endl;
        }
        else if (currentLine == 44) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",19);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",19);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 19);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",19);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",19);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 19);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",19);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",19);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 19);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",19);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",19);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 19);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 45) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",20);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",20);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 20);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",20);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",20);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 20);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",20);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",20);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 20);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",20);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",20);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 20);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 46) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",21);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",21);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 21);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",21);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",21);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 21);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",21);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",21);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 21);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",21);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",21);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 21);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 47) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",22);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",22);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 22);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",22);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",22);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 22);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",22);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",22);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 22);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",22);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",22);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 22);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 48) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",23);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",23);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 23);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",23);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",23);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 23);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",23);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",23);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 23);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",23);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",23);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 23);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 49) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",24);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",24);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 24);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",24);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",24);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 24);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",24);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",24);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 24);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",24);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",24);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 24);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 50) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",25);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",25);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 25);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",25);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",25);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 25);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",25);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",25);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 25);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",25);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",25);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 25);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 51) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",26);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",26);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 26);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",26);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",26);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 26);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",26);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",26);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 26);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",26);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",26);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 26);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 52) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",27);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",27);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 27);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",27);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",27);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 27);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",27);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",27);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 27);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",27);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",27);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 27);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 53) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",28);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",28);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 28);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",28);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",28);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 28);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",28);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",28);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 28);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",28);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",28);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 28);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 54) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",29);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",29);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 29);
            }

            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",29);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",29);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 29);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",29);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",29);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 29);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",29);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",29);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 29);
            }
            cout << "  ║                 ║" << endl;
        }
        else if (currentLine == 55) {
            cout << attacksBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",30);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",30);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 30);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt",30);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",30);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 30);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",30);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt",30);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 30);
                setcolor(15);
            }
            else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt",30);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt",30);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 30);
            }
            cout << "  ║                 ║" << endl;
        }



        else {
            cout << attacksBattleSceneFileString << endl;
        }
    }
}

void renderAbilitiesBattleScene () {
    //prep
    prepareForOutput();
    // variables
    string abilitiesBattleSceneFileString;
    int currentLine = 0;
    // prep file
    fstream abilitiesBattleSceneFileFile ("Visuals/battleSceneMainAttacksAbilities.txt");

    // code
    while(getline(abilitiesBattleSceneFileFile,abilitiesBattleSceneFileString)) {
        currentLine++;

        if (currentLine == 1) {
            cout << abilitiesBattleSceneFileString << endl;
        } else if (currentLine == 2) {
            cout << abilitiesBattleSceneFileString << enemy.name;
            fillerOfEmptinessStr(220, enemy.name, ' ', "║\n");
        } else if (currentLine == 6) {
            cout << abilitiesBattleSceneFileString << enemy.effect;
            fillerOfEmptinessStr(13, enemy.effect, ' ', "║\n");
        } else if (currentLine == 11) {
            cout << abilitiesBattleSceneFileString << enemy.hp;
            fillerOfEmptinessInt(6, enemy.hp, ' ', "║\n");
        } else if (currentLine == 13) {
            cout << abilitiesBattleSceneFileString;

            if (shieldActiveEnemy == true || shieldHpEnemy > 0) {
                setcolor(128);
            }
            if (bioShieldActiveEnemy == true || bioShieldHpEnemy > 0) {
                setcolor(10);
            }

            cout << enemy.arm;

            if (shieldActiveEnemy == true || shieldHpEnemy > 0) {
                cout << " + " << shieldHpEnemy;
                fillerOfEmptinessInt(2,enemy.arm + shieldHpEnemy,' ',"");
                cout << "║\n";
            }
            if (bioShieldActiveEnemy == true || bioShieldHpEnemy > 0) {
                cout << " + " << bioShieldHpEnemy;
                fillerOfEmptinessInt(2,enemy.arm + bioShieldHpEnemy,' ',"");
                cout << "║\n";
            }
            if (bioShieldActiveEnemy == false && shieldActiveEnemy == false) {
                setcolor(15);
                fillerOfEmptinessInt(6,enemy.arm,' ',"║\n");
            }
        } else if (currentLine == 15) {
            cout << abilitiesBattleSceneFileString << enemy.atk;
            fillerOfEmptinessInt(6, enemy.atk, ' ', "║\n");
        } else if (currentLine == 17) {
            cout << abilitiesBattleSceneFileString << enemy.bat;
            fillerOfEmptinessInt(5, enemy.bat, ' ', "║\n");
        } else if (currentLine == 19) {
            cout << abilitiesBattleSceneFileString << enemy.dat;
            fillerOfEmptinessInt(8, enemy.dat, ' ', "║\n");
        } else if (currentLine == 24) {
            cout << abilitiesBattleSceneFileString << active.name;
            fillerOfEmptinessStr(221, active.name, ' ', "║\n");
        } else if (currentLine == 26) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 1);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 1);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 1);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 1);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 1);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 1);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 1);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 1);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 1);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 1);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 1);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 1);
            }
            cout << "  ║      Effect     ║" << endl;
        } else if (currentLine == 27) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 2);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 2);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 2);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 2);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 2);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 2);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 2);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 2);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 2);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 2);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 2);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 2);
            }
            cout << "  ╠═════════════════╣" << endl;
        } else if (currentLine == 28) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 3);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 3);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 3);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 3);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 3);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 3);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 3);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 3);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 3);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 3);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 3);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 3);
            }
            cout << "  ║ > ";
            cout << active.effect;
            fillerOfEmptinessStr(13, active.effect, ' ', "║\n");
        } else if (currentLine == 29) {
            cout << "║       ";
            if (battleScene.currentPositionY == 1 && battleScene.currentPositionX == 1) {
                setcolor(6);
                cout << "► Step Back ◄";
                setcolor(15);
            } else {
                cout << "  Step Back  ";
            }
            fillerOfEmptinessStr(7, "  Step Back  ", ' ', "");

            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 4);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 4);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 4);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 4);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 4);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 4);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 4);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 4);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 4);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 4);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 4);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 4);
            }
            cout << "  ╠═════════════════╣" << endl;
        } else if (currentLine == 30) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 5);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 5);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 5);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 5);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 5);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 5);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 5);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 5);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 5);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 5);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 5);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 5);
            }
            cout << "  ║      Stats      ║" << endl;
        } else if (currentLine == 31) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 6);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 6);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 6);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 6);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 6);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 6);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 6);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 6);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 6);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 6);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 6);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 6);
            }
            cout << "  ╠═════════════════╣" << endl;
        } else if (currentLine == 32) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 7);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 7);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 7);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 7);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 7);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 7);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 7);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 7);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 7);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 7);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 7);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 7);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 33) {
            cout << "║       ";
            if (battleScene.currentPositionX == 2) {
                setcolor(6);
                cout << "► Options 1 ◄";
                setcolor(15);
            } else {
                cout << "  Options 1  ";
            }

            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 8);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 8);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 8);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 8);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 8);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 8);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 8);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 8);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 8);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 8);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 8);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 8);
            }
            cout << "  ║ > Health ";
            cout << active.hp;
            fillerOfEmptinessInt(6, active.hp, ' ', "║\n");
        } else if (currentLine == 34) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 9);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 9);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 9);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 9);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 9);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 9);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 9);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 9);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 9);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 9);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 9);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 9);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 35) {
            cout << "║       ";
            if (battleScene.currentPositionX == 3) {
                setcolor(6);
                cout << "► Options 2 ◄";
                setcolor(15);
            } else {
                cout << "  Options 2  ";
            }

            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 10);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 10);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 10);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 10);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 10);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 10);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 10);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 10);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 10);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 10);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 10);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 10);
            }
            cout << "  ║ > Armour ";

            if (shieldActiveHero == true || shieldHpHero > 0) {
                setcolor(128);
            }
            if (bioShieldActiveHero == true || bioShieldHpHero > 0) {
                setcolor(10);
            }

            cout << active.arm;

            if (shieldActiveHero == true || shieldHpHero > 0) {
                cout << " + " << shieldHpHero;
                fillerOfEmptinessInt(2,active.arm + shieldHpHero,' ',"");
                setcolor(15);
                cout << "║\n";
            }
            if (bioShieldActiveHero == true || bioShieldHpHero > 0) {
                cout << " + " << bioShieldHpHero;
                fillerOfEmptinessInt(2,active.arm + bioShieldHpHero,' ',"");
                setcolor(15);
                cout << "║\n";
            }
            if (bioShieldActiveHero == false && shieldActiveHero == false) {
                setcolor(15);
                fillerOfEmptinessInt(6,active.arm,' ',"║\n");
            }
        } else if (currentLine == 36) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 11);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 11);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 11);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 11);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 11);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 11);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 11);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 11);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 11);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 11);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 11);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 11);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 37) {
            cout << "║       ";
            if (battleScene.currentPositionX == 4) {
                setcolor(6);
                cout << "► Options 3 ◄";
                setcolor(15);
            } else {
                cout << "  Options 3  ";
            }

            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 12);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 12);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 12);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 12);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 12);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 12);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 12);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 12);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 12);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 12);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 12);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 12);
            }
            cout << "  ║ > Attack ";
            cout << active.atk;
            fillerOfEmptinessInt(6, active.atk, ' ', "║\n");
        } else if (currentLine == 38) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 13);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 13);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 13);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 13);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 13);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 13);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 13);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 13);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 13);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 13);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 13);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 13);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 39) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 14);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 14);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 14);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 14);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 14);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 14);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 14);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 14);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 14);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 14);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 14);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 14);
            }
            cout << "  ║ > Battery ";
            cout << active.bat;
            fillerOfEmptinessInt(5, active.bat, ' ', "║\n");
        } else if (currentLine == 40) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 15);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 15);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 15);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 15);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 15);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 15);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 15);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 15);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 41) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 16);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 16);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 16);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 16);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 16);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 16);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 16);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 16);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 16);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 16);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 16);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 16);
            }
            cout << "  ║ > Data ";
            cout << active.dat;
            fillerOfEmptinessInt(8, active.dat, ' ', "║\n");
        } else if (currentLine == 42) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 17);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 17);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 17);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 17);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 17);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 17);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 17);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 17);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 17);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 17);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 17);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 17);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 43) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 18);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 18);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 18);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 18);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 18);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 18);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 18);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 18);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 18);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 18);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 18);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 18);
            }
            cout << "  ╠═════════════════╣" << endl;
        } else if (currentLine == 44) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 19);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 19);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 19);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 19);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 19);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 19);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 19);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 19);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 19);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 19);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 19);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 19);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 45) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 20);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 20);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 20);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 20);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 20);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 20);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 20);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 20);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 20);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 20);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 20);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 20);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 46) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 21);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 21);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 21);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 21);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 21);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 21);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 21);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 21);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 21);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 21);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 21);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 21);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 47) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 22);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 22);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 22);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 22);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 22);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 22);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 22);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 22);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 22);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 22);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 22);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 22);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 48) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 23);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 23);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 23);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 23);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 23);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 23);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 23);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 23);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 23);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 23);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 23);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 23);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 49) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 24);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 24);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 24);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 24);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 24);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 24);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 24);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 24);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 24);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 24);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 24);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 24);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 50) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 25);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 25);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 25);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 25);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 25);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 25);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 25);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 25);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 25);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 25);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 25);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 25);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 51) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 26);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 26);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 26);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 26);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 26);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 26);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 26);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 26);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 26);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 26);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 26);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 26);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 52) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 27);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 27);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 27);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 27);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 27);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 27);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 27);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 27);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 27);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 27);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 27);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 27);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 53) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 28);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 28);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 28);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 28);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 28);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 28);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 28);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 28);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 28);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 28);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 28);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 28);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 54) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 29);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 29);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 29);
            }

            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 29);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 29);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 29);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 29);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 29);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 29);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 29);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 29);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 29);
            }
            cout << "  ║                 ║" << endl;
        } else if (currentLine == 55) {
            cout << abilitiesBattleSceneFileString;
            if (battleScene.currentPositionX == 1) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 30);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 30);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 30);
            }
            if (battleScene.currentPositionX == 2) {
                loadLine("Visuals/chooseCharacterAttackOne.txt", 30);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 30);
                setcolor(15);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 30);
                setcolor(15);
            } else if (battleScene.currentPositionX == 3) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 30);
                setcolor(15);
                cout << "   ║";
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 30);
                cout << "  ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackThree.txt", 30);
                setcolor(15);
            } else if (battleScene.currentPositionX == 4) {
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackOne.txt", 30);
                setcolor(15);
                cout << "   ║";
                setcolor(8);
                loadLine("Visuals/chooseCharacterAttackTwo.txt", 30);
                setcolor(15);
                cout << "  ║";
                loadLine("Visuals/chooseCharacterAttackThree.txt", 30);
            }
            cout << "  ║                 ║" << endl;
        }

        else {
            cout << abilitiesBattleSceneFileString << endl;
        }
    }
}

void renderSwapHeroBattleScene () {
    //prep
    prepareForOutput();
    // variables
    string swapHeroBattleSceneFileString;
    int currentLine = 0;

    string characterOneNameEdited = characterOne.name;
    string characterTwoNameEdited = characterTwo.name;
    string characterThreeNameEdited = characterThree.name;

    characterOneNameEdited.erase(remove(characterOneNameEdited.begin(), characterOneNameEdited.end(), ' '), characterOneNameEdited.end()); //remove space from character names
    characterTwoNameEdited.erase(remove(characterTwoNameEdited.begin(), characterTwoNameEdited.end(), ' '), characterTwoNameEdited.end());
    characterThreeNameEdited.erase(remove(characterThreeNameEdited.begin(), characterThreeNameEdited.end(), ' '), characterThreeNameEdited.end());

    // prep file
    fstream swapHeroBattleSceneFileFile ("Visuals/battleSceneMainSwapHero.txt");

    // code
    while(getline(swapHeroBattleSceneFileFile, swapHeroBattleSceneFileString)) {
        currentLine++;

        if (currentLine == 1) {
            cout << swapHeroBattleSceneFileString << endl;
        }
        else if (currentLine == 2) {
            cout << swapHeroBattleSceneFileString << enemy.name;
            fillerOfEmptinessStr(220, enemy.name,' ', "║\n");
        }
        else if (currentLine == 6) {
            cout << swapHeroBattleSceneFileString << enemy.effect;
            fillerOfEmptinessStr(13, enemy.effect,' ', "║\n");
        }
        else if(currentLine == 11) {
            cout << swapHeroBattleSceneFileString << enemy.hp;
            fillerOfEmptinessInt(6, enemy.hp, ' ', "║\n");
        }
        else if (currentLine == 13) {
            cout << swapHeroBattleSceneFileString;

            if (shieldActiveEnemy == true || shieldHpEnemy > 0) {
                setcolor(128);
            }
            if (bioShieldActiveEnemy == true || bioShieldHpEnemy > 0) {
                setcolor(10);
            }

            cout << enemy.arm;

            if (shieldActiveEnemy == true || shieldHpEnemy > 0) {
                cout << " + " << shieldHpEnemy;
                fillerOfEmptinessInt(2,enemy.arm + shieldHpEnemy,' ',"");
                cout << "║\n";
            }
            if (bioShieldActiveEnemy == true || bioShieldHpEnemy > 0) {
                cout << " + " << bioShieldHpEnemy;
                fillerOfEmptinessInt(2,enemy.arm + bioShieldHpEnemy,' ',"");
                cout << "║\n";
            }
            if (bioShieldActiveEnemy == false && shieldActiveEnemy == false) {
                setcolor(15);
                fillerOfEmptinessInt(6,enemy.arm,' ',"║\n");
            }
        }
        else if (currentLine == 15) {
            cout << swapHeroBattleSceneFileString << enemy.atk;
            fillerOfEmptinessInt(6, enemy.atk, ' ', "║\n");
        }
        else if (currentLine == 17) {
            cout << swapHeroBattleSceneFileString << enemy.bat;
            fillerOfEmptinessInt(5, enemy.bat, ' ', "║\n");
        }
        else if (currentLine == 19) {
            cout << swapHeroBattleSceneFileString << enemy.dat;
            fillerOfEmptinessInt(8, enemy.dat, ' ', "║\n");
        }
        else if (currentLine == 24) {
            cout << swapHeroBattleSceneFileString << active.name;
            fillerOfEmptinessStr(221, active.name, ' ', "║\n");
        }
        else if (currentLine == 28) {
            cout << swapHeroBattleSceneFileString << active.effect;
            fillerOfEmptinessStr(13, active.effect,' ', "║\n");
        }
        else if (currentLine == 29) {
            cout << "║       ";

            if (battleScene.currentPositionY == 1 && battleScene.currentPositionX == 1) {
                setcolor(6);
                cout << "► Step Back ◄";
                setcolor(15);
            }
            else {
                cout << "  Step Back  ";
            }
            cout << swapHeroBattleSceneFileString << endl;
        }
        else if (currentLine == 33) {
            cout << swapHeroBattleSceneFileString << active.hp;
            fillerOfEmptinessInt(6, active.hp, ' ', "║\n");
        }
        else if (currentLine == 35) {
            if (active.name == characterOne.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Health ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Health ";
                    cout << characterTwo.hp;
                    fillerOfEmptinessInt(15,characterTwo.hp, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Health ";
                    cout << characterThree.hp;
                    fillerOfEmptinessInt(15,characterThree.hp, ' ', "║");
                }
            }
            else if (active.name == characterTwo.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Health ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Health ";
                    cout << characterOne.hp;
                    fillerOfEmptinessInt(15,characterOne.hp, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Health ";
                    cout << characterThree.hp;
                    fillerOfEmptinessInt(15,characterThree.hp, ' ', "║");
                }
            }
            else if (active.name == characterThree.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Health ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Health ";
                    cout << characterOne.hp;
                    fillerOfEmptinessInt(15,characterOne.hp, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Health ";
                    cout << characterTwo.hp;
                    fillerOfEmptinessInt(15,characterTwo.hp, ' ', "║");
                }
            }
            cout << swapHeroBattleSceneFileString;
            cout << active.hp;
            fillerOfEmptinessInt(6,active.hp,' ', "║\n");
        }
        else if (currentLine == 35) {
            if (active.name == characterOne.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Health ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Health ";
                    cout << characterTwo.hp;
                    fillerOfEmptinessInt(15,characterTwo.hp, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Health ";
                    cout << characterThree.hp;
                    fillerOfEmptinessInt(15,characterThree.hp, ' ', "║");
                }
            }
            else if (active.name == characterTwo.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Health ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Health ";
                    cout << characterOne.hp;
                    fillerOfEmptinessInt(15,characterOne.hp, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Health ";
                    cout << characterThree.hp;
                    fillerOfEmptinessInt(15,characterThree.hp, ' ', "║");
                }
            }
            else if (active.name == characterThree.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Health ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Health ";
                    cout << characterOne.hp;
                    fillerOfEmptinessInt(15,characterOne.hp, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Health ";
                    cout << characterTwo.hp;
                    fillerOfEmptinessInt(15,characterTwo.hp, ' ', "║");
                }
            }
                cout << swapHeroBattleSceneFileString;

                if (shieldActiveHero == true || shieldHpHero > 0) {
                    setcolor(128);
                }
                if (bioShieldActiveHero == true || bioShieldHpHero > 0) {
                    setcolor(10);
                }

                cout << active.arm;

            if (shieldActiveHero == true || shieldHpHero > 0) {
                cout << " + " << shieldHpHero;
                fillerOfEmptinessInt(2,active.arm + shieldHpHero,' ',"");
                setcolor(15);
                cout << "║\n";
            }
            if (bioShieldActiveHero == true || bioShieldHpHero > 0) {
                cout << " + " << bioShieldHpHero;
                fillerOfEmptinessInt(2,active.arm + bioShieldHpHero,' ',"");
                setcolor(15);
                cout << "║\n";
            }
                if (bioShieldActiveHero == false && shieldActiveHero == false) {
                    setcolor(15);
                    fillerOfEmptinessInt(6,active.arm,' ',"║\n");
                }
        }
        else if (currentLine == 37) {
            if (active.name == characterOne.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Armour ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Armour ";
                    cout << characterTwo.arm;
                    fillerOfEmptinessInt(15,characterTwo.arm, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Armour ";
                    cout << characterThree.arm;
                    fillerOfEmptinessInt(15,characterThree.arm, ' ', "║");
                }
            }
            else if (active.name == characterTwo.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Armour ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Armour ";
                    cout << characterOne.arm;
                    fillerOfEmptinessInt(15,characterOne.arm, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Armour ";
                    cout << characterThree.arm;
                    fillerOfEmptinessInt(15,characterThree.arm, ' ', "║");
                }
            }
            else if (active.name == characterThree.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Armour ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Armour ";
                    cout << characterOne.arm;
                    fillerOfEmptinessInt(15,characterOne.arm, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Armour ";
                    cout << characterTwo.arm;
                    fillerOfEmptinessInt(15,characterTwo.arm, ' ', "║");
                }
            }
            cout << swapHeroBattleSceneFileString;
            cout << active.atk;
            fillerOfEmptinessInt(6,active.atk,' ', "║\n");
        }
        else if (currentLine == 38) {
            cout << "║                          ║                               ║ ";

            if (characterOne.name == active.name) {
                if (battleScene.currentPositionY == 2) {
                    setcolor(6);
                    cout << "► " + characterTwoNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterTwoNameEdited;
                }
                fillerOfEmptinessStr(18, "► " + characterTwoNameEdited, ' ', "");

                cout << " ║                                                                                     ║ ";

                if (battleScene.currentPositionY == 3) {
                    setcolor(6);

                    cout << "► " + characterThreeNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterThreeNameEdited;
                }
                fillerOfEmptinessStr(18, "► " + characterThreeNameEdited, ' ', "");
            }
            else if (characterTwo.name == active.name) {
                if (battleScene.currentPositionY == 2) {
                    setcolor(6);
                    cout << "► " + characterOneNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterOneNameEdited;
                }
                fillerOfEmptinessStr(18, "► " + characterOneNameEdited, ' ', "");

                cout << " ║                                                                                     ║ ";

                if (battleScene.currentPositionY == 3) {
                    setcolor(6);

                    cout << "► " + characterThreeNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterThreeNameEdited;
                }
                fillerOfEmptinessStr(18, "► " + characterThreeNameEdited, ' ', "");
            }
            else if (characterThree.name == active.name) {
                if (battleScene.currentPositionY == 2) {
                    setcolor(6);
                    cout << "► " + characterOneNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterOneNameEdited;
                }
                fillerOfEmptinessStr(18, "► " + characterOneNameEdited, ' ', "");

                cout << " ║                                                                                     ║ ";

                if (battleScene.currentPositionY == 3) {
                    setcolor(6);

                    cout << "► " + characterTwoNameEdited;
                    setcolor(15);
                }
                else {
                    cout << "  " + characterTwoNameEdited;
                }
                fillerOfEmptinessStr(18, "► " + characterTwoNameEdited, ' ', "");
            }



            cout << swapHeroBattleSceneFileString << endl;
        }
        else if (currentLine == 39) {
            if (active.name == characterOne.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Attack ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Attack ";
                    cout << characterTwo.atk;
                    fillerOfEmptinessInt(15,characterTwo.atk, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Attack ";
                    cout << characterThree.atk;
                    fillerOfEmptinessInt(15,characterThree.atk, ' ', "║");
                }
            }
            else if (active.name == characterTwo.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Attack ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Attack ";
                    cout << characterOne.atk;
                    fillerOfEmptinessInt(15,characterOne.atk, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Attack ";
                    cout << characterThree.atk;
                    fillerOfEmptinessInt(15,characterThree.atk, ' ', "║");
                }
            }
            else if (active.name == characterThree.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Attack ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Attack ";
                    cout << characterOne.atk;
                    fillerOfEmptinessInt(15,characterOne.atk, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Attack ";
                    cout << characterTwo.atk;
                    fillerOfEmptinessInt(15,characterTwo.atk, ' ', "║");
                }
            }
            cout << swapHeroBattleSceneFileString;
            cout << active.bat;
            fillerOfEmptinessInt(5,active.bat,' ', "║\n");
        }
        else if (currentLine == 41) {
            if (active.name == characterOne.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Battery ";
                    cout << 0;
                    fillerOfEmptinessInt(15,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Battery ";
                    cout << characterTwo.bat;
                    fillerOfEmptinessInt(15,characterTwo.bat, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Battery ";
                    cout << characterThree.bat;
                    fillerOfEmptinessInt(15,characterThree.bat, ' ', "║");
                }
            }
            else if (active.name == characterTwo.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Battery ";
                    cout << 0;
                    fillerOfEmptinessInt(14,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Battery ";
                    cout << characterOne.bat;
                    fillerOfEmptinessInt(14,characterOne.bat, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Battery ";
                    cout << characterThree.bat;
                    fillerOfEmptinessInt(14,characterThree.bat, ' ', "║");
                }
            }
            else if (active.name == characterThree.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Battery ";
                    cout << 0;
                    fillerOfEmptinessInt(14,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Battery ";
                    cout << characterOne.bat;
                    fillerOfEmptinessInt(14,characterOne.bat, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Battery ";
                    cout << characterTwo.bat;
                    fillerOfEmptinessInt(14,characterTwo.bat, ' ', "║");
                }
            }
            cout << swapHeroBattleSceneFileString;
            cout << active.dat;
            fillerOfEmptinessInt(8,active.dat,' ', "║\n");
        }
        else if (currentLine == 43) {
            if (active.name == characterOne.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Data ";
                    cout << 0;
                    fillerOfEmptinessInt(17,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Data ";
                    cout << characterTwo.dat;
                    fillerOfEmptinessInt(17,characterTwo.hp, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Data ";
                    cout << characterThree.dat;
                    fillerOfEmptinessInt(17,characterThree.hp, ' ', "║");
                }
            }
            else if (active.name == characterTwo.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Data ";
                    cout << 0;
                    fillerOfEmptinessInt(17,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Data ";
                    cout << characterOne.dat;
                    fillerOfEmptinessInt(17,characterOne.hp, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Data ";
                    cout << characterThree.dat;
                    fillerOfEmptinessInt(17,characterThree.hp, ' ', "║");
                }
            }
            else if (active.name == characterThree.name) {
                if (battleScene.currentPositionY == 1) {
                    cout << "║ > Data ";
                    cout << 0;
                    fillerOfEmptinessInt(17,0, ' ', "║");
                }
                else if (battleScene.currentPositionY == 2) {
                    cout << "║ > Data ";
                    cout << characterOne.dat;
                    fillerOfEmptinessInt(17,characterOne.dat, ' ', "║");
                }
                else if (battleScene.currentPositionY == 3) {
                    cout << "║ > Data ";
                    cout << characterTwo.dat;
                    fillerOfEmptinessInt(17,characterTwo.dat, ' ', "║");
                }
            }
            cout << swapHeroBattleSceneFileString << endl;
        }


        else {
            cout << swapHeroBattleSceneFileString << endl;
        }
    }
}

void renderVoiceline () {
    //prep
    prepareForOutput();
    //variables
    string voicelineFileString;
    int currentLine = 0;
    // file prep
    fstream voicelineFileFile ("Visuals/battleSceneVoiceline.txt");

    // code

    while(getline(voicelineFileFile, voicelineFileString)) {
        currentLine++;

        if (currentLine == 2) {
            cout << voicelineFileString << enemy.name;
            fillerOfEmptinessStr(221, enemy.name, ' ' , "║\n");
        }
        else if (currentLine == 13) {
            cout << voicelineFileString << voiceline;
            fillerOfEmptinessStr(183, voiceline, ' ', "║\n");
        }
        else if (currentLine == 24) {
            cout << voicelineFileString << active.name;
            fillerOfEmptinessStr(222, active.name, ' ', "║\n");
        }
        else if (currentLine == 39) {
            cout << voicelineFileString << messageOne;
            fillerOfEmptinessStr(183, messageOne, ' ', "║\n");
        }
        else if (currentLine == 40) {
            cout << voicelineFileString << messageTwo;
            fillerOfEmptinessStr(183, messageTwo, ' ', "║\n");
        }
        else if (currentLine == 41) {
            cout << voicelineFileString << messageThree;
            fillerOfEmptinessStr(183, messageThree, ' ', "║\n");
        }
        else if (currentLine == 42) {
            cout << voicelineFileString << messageFour;
            fillerOfEmptinessStr(183, messageFour, ' ', "║\n");
        }
        else if (currentLine == 43) {
            cout << voicelineFileString << messageFive;
            fillerOfEmptinessStr(183, messageFive, ' ', "║\n");
        }
        else {
            cout << voicelineFileString << endl;
        }
    }

}

#endif //GAME_RENDERS_H
