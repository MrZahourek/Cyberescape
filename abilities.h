
#ifndef GAME_ABILITIES_H
#define GAME_ABILITIES_H

using namespace std;

class abilities {
public:
    string attackOneDescriptionChooseYourCharacter;
    string attackTwoDescriptionChooseYourCharacter;
    string attackThreeDescriptionChooseYourCharacter;



    abilities(string a, string b, string c) {
        attackOneDescriptionChooseYourCharacter = a;
        attackTwoDescriptionChooseYourCharacter = b;
        attackThreeDescriptionChooseYourCharacter = c;
    }
};

#endif //GAME_ABILITIES_H
