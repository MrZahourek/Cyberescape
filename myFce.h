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

void prepareForOutput() {
    SetConsoleOutputCP(CP_UTF8);
}

void fillerOfEmptinessStr(int stopPoint = 10, string startingFromWorld = "abc", char fillingChar = ' ', string lastChar = "") {
    for (int i = startingFromWorld.length(); i <= stopPoint; i++) {
        cout << fillingChar;
    }
    cout << lastChar;
}

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

#endif //GAME_MYFCE_H
