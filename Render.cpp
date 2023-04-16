#include <iostream>
#include <unistd.h>
#include <fstream>

using namespace std;

// Variables

string FileTest;

int CurrentBattleLine = 0;

class Stats {
public:
    string name;
    int health;
    int damage;
    int armour;
    int battery;
    int data;
    string status;
    Stats(string a, int b, int c, int d, int e, int f, string g) {
        name = a;
        health = b;
        damage = c;
        armour = d;
        battery = e;
        data = f;
        status = g;
    }
};
class LevelData {
public:
    int number;
    string currentEnemy;
    string music;
    int currentWave;
    int waves;
    int numOfEnemyes;
    LevelData(int a, string b, string c, int d, int e, int f) {
        number = a;
        currentEnemy = b;
        music = c;
        currentEnemy = d;
        waves = e;
        numOfEnemyes = f;
    }
};

Stats TestHero("Koyo", 6, 57, 29, 100, 100, "None");
Stats TetsEnemy("Červné rajčátko", 56, 6, 28, 100, 100, "None");

LevelData TestLevel(0, "Červené rajčátko", "Slide into the void", 1, 1, 1);

int main() {
    system("Red=$'\\e[1;31m'");
    ifstream BattleScene("/home/helianes/Documents/School stuff/Programko/Seminarka - RPG/Files/Txt/battle (copy).txt");

    while (getline (BattleScene, FileTest)) {
        CurrentBattleLine++;
        if (CurrentBattleLine == 1) {
            cout <<  FileTest << " ";
            cout << TetsEnemy.name << " " ;
        }
        else if (CurrentBattleLine == 5) {
            cout << FileTest;
            cout << TestLevel.currentWave << "/" << TestLevel.waves;
        }
        else if (CurrentBattleLine == 6) {
            cout << FileTest << TetsEnemy.health;
        }
        else if (CurrentBattleLine == 8) {
            cout << FileTest;
            cout << TetsEnemy.damage << "   ";
        }
        else if (CurrentBattleLine == 10) {
            cout << FileTest;
            cout << TetsEnemy.armour << "  ";
        }
        else if (CurrentBattleLine == 12) {
            cout << FileTest;
            cout << TetsEnemy.battery << " ";
        }
        else if (CurrentBattleLine == 14) {
            cout << FileTest;
            cout << TetsEnemy.data << "   ";
        }
        else if (CurrentBattleLine == 17) {
            cout << FileTest;
            cout << TetsEnemy.status;
        }
        else if (CurrentBattleLine == 22) {
            cout << FileTest;
            cout << TestHero.name;
        }
        else if (CurrentBattleLine == 25) {
            system("echo '\\e[1;0m'{Attack}'\\e[0m'");
        }
        else if (CurrentBattleLine == 27) {
            system("echo '\\e[1;0m'{Ability}'\\e[0m'");
        }
        else if (CurrentBattleLine == 29) {
            system("echo '\\e[1;0m'{Use Item}'\\e[0m'");
        }
        else if (CurrentBattleLine == 31) {
            system("echo '\\e[1;0m'{Flee}'\\e[0m'");
        }
        else if (CurrentBattleLine == 35) {
            cout << FileTest;
            cout << TestHero.health << "   ";
        }
        else if (CurrentBattleLine == 37) {
            cout << FileTest;
            cout << TestHero.damage << "  ";
        }
        else if (CurrentBattleLine == 39) {
            cout << FileTest;
            cout << TestHero.armour << "  ";
        }
        else if (CurrentBattleLine == 41) {
            cout << FileTest;
            cout << TestHero.battery << " ";
        }
        else if (CurrentBattleLine == 43) {
            cout << FileTest;
            cout << TestHero.data << "  ";
        }
        else if (CurrentBattleLine == 46) {
            cout << FileTest;
            cout << TestHero.status;
        }
        else {
            cout << FileTest << endl;
        }
    }

    BattleScene.close();

    return 0;
}


/* Notes:
 * system("echo '\\e[1;31m'{Attack}'\\e[0m'"); -- red in cmd
 * canberra-gtk-play -f y2mate.com\ -\ SLIDE\ INTO\ THE\ VOID\ Control\ Song\ feat\ CamiCat.wav -- to play audio file
 * exit -- to exit terminal
 */