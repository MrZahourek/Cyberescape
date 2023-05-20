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

#endif //GAME_MYFCE_H
