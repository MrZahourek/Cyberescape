#ifndef GAME_CHARACTERS_H
#define GAME_CHARACTERS_H

using namespace std;

class characters{
public:
    int hp;
    int arm;
    int atk;
    int bat;
    int dat;

    string name;
    string effect;
    string fighterClass;

    string attackOne;
    string attackTwo;
    string attackThree;

    string abilityOne;
    string abilityTwo;
    string abilityThree;

    bool active;
    bool picked;

    characters(string Name,string Effect,string Class,string FirstAttack,string SecondAttack,string ThirdAttack,string FirstAbility, string SecondAbility,string ThirdAbility,int Hp,int Arm,int Atk,int Bat, int Dat, bool Active, bool Picked) {
        name = Name;
        effect = Effect;
        fighterClass = Class;
        attackOne = FirstAttack;
        attackTwo = SecondAttack;
        attackThree = ThirdAttack;
        abilityOne = FirstAbility;
        abilityTwo = SecondAbility;
        abilityThree = ThirdAbility;

        hp = Hp;
        arm = Arm;
        atk = Atk;
        bat = Bat;
        dat = Dat;

        active = Active;
        picked = Picked;
    }
};
//Characters
characters       inferno("      Inferno      ", "Clear", "                       Fighter", "Shield melt", "Flamethrower", "Smoke grenade", "Firewall","Fire kills germs","Fight fire with fire", 35, 0, 7, 100, 75, false, false);
characters         atlas("       Atlas       ", "Clear", "                   Fighter/Support                   ", "Data leach", "Data leak", "SQL injection","Import library","Open backdoor","Value change", 40, 0, 6, 100, 250, false, false);
characters       hanibal("      Hanibal      ", "Clear", "                       Fighter","Big bite", "Scrap reuse", "Spine snap bite", "Chew off flesh", "Eat up", "Bite off achilles",25,0,8,350,80,false,false);
characters         monoI("      Mono I.      ", "Clear", "                       Defence","Shield infection", "Meat hook", "Iron punch", "Live shield", "Armour repair", "Super shield", 50, 0, 3, 150, 100, false, false);
characters     biohazard("     Biohazard     ", "Clear", "                        Tank","Spore rain","Wood hammer","Flowers burn","Fungus shield","Regrow","Shield heal", 50, 0, 3, 100, 150, false, false);
characters           zip("        Zip        ", "Clear", "                        Tank", "Compression", "Zap", "Decompress shield", "Shield compression", "Decompress hp", "Zip them up", 47, 0, 3, 200, 100, false, false);
characters         plagy("       Plagy       ", "Clear", "                      Supporter", "Release the cyberplague", "Germs in wound", "Put on the drain worm", "Pick up drain worm", "Good old surgery", "Massive surgery", 17, 0, 4, 150, 200, false, false);
characters         amper("       Amper       ", "Clear", "                      Supporter", "Trojan bug", "Virtual punch", "Brute force attack", "Reload Hp", "Reload Arm", "Receive Hp", 15, 0, 3, 150, 150, false, false);

//Enemies
characters arian("Arian", "Clear", "", "Atk 1", "Atk 2", "Atk 3", "Abt 1", "Abt 2", "Abt 3", 10, 5, 1, 100, 100, false, false);
// Special
characters active(inferno.name, inferno.effect, inferno.fighterClass, inferno.attackOne, inferno.abilityTwo, inferno.attackThree, inferno.abilityOne, inferno.abilityTwo, inferno.abilityThree, inferno.hp, inferno.arm, inferno.atk, inferno.bat, inferno.dat, inferno.active, inferno.picked);


class playerInventory{
public:
    string item1;
    string item2;
    string item3;
    string item4;
    string item5;
    string item6;
    string item7;
    string item8;
    string item9;
    string item10;
    string item11;
    string item12;
    string item13;
    string item14;
    string item15;
    string item16;
    string item17;
    string item18;
    string item19;
    string item20;
    string item21;
    string item22;
    string item23;
    string item24;
    string item25;
    string item26;
    string item27;
    string item28;
    string item29;
    string item30;
    string item31;
    string item32;
    string item33;
    string item34;
    string item35;
    string item36;

    int money;
    playerInventory(string Item1,string Item2,string Item3,string Item4,string Item5,string Item6,string Item7,string Item8,string Item9,string Item10,string Item11,string Item12,string Item13,string Item14,string Item15,string Item16,string Item17,string Item18,string Item19,string Item20,string Item21,string Item22,string Item23,string Item24,string Item25,string Item26,string Item27,string Item28,string Item29,string Item30,string Item31,string Item32,string Item33,string Item34,string Item35,string Item36,int Money){
        item1 = Item1;
        item2 = Item2;
        item3 = Item3;
        item4 = Item4;
        item5 = Item5;
        item6 = Item6;
        item7 = Item7;
        item8 = Item8;
        item9 = Item9;
        item10 = Item10;
        item11 = Item11;
        item12 = Item12;
        item13 = Item13;
        item14 = Item14;
        item15 = Item15;
        item16 = Item16;
        item17 = Item17;
        item18 = Item18;
        item19 = Item19;
        item20 = Item20;
        item21 = Item21;
        item22 = Item22;
        item23 = Item23;
        item24 = Item24;
        item25 = Item25;
        item26 = Item26;
        item27 = Item27;
        item28 = Item28;
        item29 = Item29;
        item30 = Item30;
        item31 = Item31;
        item32 = Item32;
        item33 = Item33;
        item34 = Item34;
        item35 = Item35;
        item36 = Item36;

        money = Money;
    }

};


playerInventory playerInventory("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------",10);

int playerInventoryPositions = 1;


#endif //GAME_CHARACTERS_H
