#ifndef GAME_INFO_H
#define GAME_INFO_H

using namespace std;

class levelInfo {
public:
    int currentLevel;
    string levelType;

    string enemy;

    int currentPositionX;
    int currentPositionY;

    levelInfo(int CurrentLevel, string LevelType) {
        currentLevel = CurrentLevel;
        levelType = LevelType;
    }

    levelInfo(string Enemy) {
        enemy = Enemy;
    }

    levelInfo(int CurrentPositionX) {
        currentPositionX = CurrentPositionX;
    }

    levelInfo(int CurrentPositionX, int CurrentPositionY) {
        currentPositionX = CurrentPositionX;
        currentPositionY = CurrentPositionY;
    }
};

levelInfo LevelInfo(1,"");

levelInfo tutorial ("Arian");

// positions
levelInfo chooseCharacter(1,1);
levelInfo shopPosition(0, 1);
levelInfo characterSheetPosition(1,1);

#endif //GAME_INFO_H
