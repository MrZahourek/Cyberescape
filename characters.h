#ifndef GAME_CHARACTERS_H
#define GAME_CHARACTERS_H

#include <string>

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

    int maxHp;
    int maxArm;
    int maxAtk;
    int maxBat;
    int maxDat;

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

    characters(string Name, int Hp, int Arm, int Atk, int Bat, int Dat, string FirstAttack,string SecondAttack,string ThirdAttack,string FirstAbility, string SecondAbility,string ThirdAbility) {
        name = Name;

        hp = Hp;
        arm = Arm;
        atk = Atk;
        bat = Bat;
        dat = Dat;

        attackOne = FirstAttack;
        attackTwo = SecondAttack;
        attackThree = ThirdAttack;
        abilityOne = FirstAbility;
        abilityTwo = SecondAbility;
        abilityThree = ThirdAbility;
    }

    characters(string Name,string Effect,string Class,string FirstAttack,string SecondAttack,string ThirdAttack,string FirstAbility, string SecondAbility,string ThirdAbility,int Hp,int Arm,int Atk,int Bat, int Dat, int MaxHp, int MaxArm, int MaxAtk, int MaxBat, int MaxDat) {
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

        int maxHp = MaxHp;
        int maxArm = MaxArm;
        int maxAtk = MaxAtk;
        int maxBat = MaxBat;
        int maxDat = MaxDat;
    }
};
//Characters
characters       inferno("      Inferno      ", "Clear", "                       Fighter", "Shield melt", "Flamethrower", "Smoke grenade", "Firewall","Fire kills germs","Fight fire with fire", 35, 0, 7, 100, 75, false, false);
characters         atlas("       Atlas       ", "Clear", "                   Fighter/Support", "Data leach", "Data leak", "SQL injection","Import library","Open backdoor","Value change", 40, 0, 6, 100, 250, false, false);
characters       hanibal("      Hanibal      ", "Clear", "                       Fighter","Big bite", "Scrap reuse", "Spine snap bite", "Chew off flesh", "Eat up", "Bite off achilles",25,0,8,350,80,false,false);
characters         monoI("      Mono_I.      ", "Clear", "                       Defence","Shield infection", "Meat hook", "Iron punch", "Live shield", "Armour repair", "Super shield", 50, 0, 3, 150, 100, false, false);
characters     biohazard("     Biohazard     ", "Clear", "                        Tank","Spore rain","Wood hammer","Flowers burn","Fungus shield","Regrow","Shield heal", 50, 0, 3, 100, 150, false, false);
characters           zip("        Zip        ", "Clear", "                        Tank", "Compression", "Zap", "Decompress shield", "Shield compression", "Decompress hp", "Zip them up", 47, 0, 3, 200, 100, false, false);
characters         plagy("       Plagy       ", "Clear", "                      Supporter", "Release the cyberplague", "Germs in wound", "Put on the drain worm", "Pick up drain worm", "Good old surgery", "Massive surgery", 17, 0, 4, 150, 200, false, false);
characters         amper("       Amper       ", "Clear", "                      Supporter", "Trojan bug", "Virtual punch", "Brute force attack", "Reload Hp", "Reload Arm", "Receive Hp", 15, 0, 3, 150, 150, false, false);

// Enemies
characters subject079 ("Subject #079",20, 2, 3, 150, 50, "Double bite", "", "", "", "", "");
characters X001  ("X-001", 15, 15, 4, 150, 150, "Full body attack", "", "", "", "", "");
characters BioMechSlasher  ("Bio-Mech Slasher", 20, 10, 8, 200, 80, "Smash!", "", "", "", "", "");
characters VortexDrone  ("Vortex Drone", 25, 0, 6, 150, 150, "Targeted shot", "", "", "", "", "");
characters Cyberviper  ("Cyberviper", 10, 15, 5, 150, 100, "Poison blade", "", "", "", "", "");
characters Techgeist  ("Techgeist", 20, 5, 5, 150, 150, "Circuit cripple", "", "", "", "", "");
characters Pyrofreak  ("Pyrofreak", 35, 0, 7, 200, 180, "Napalm shower", "Artificial hell", "", "", "", "");
characters Shredder  ("Shredder", 40, 0, 8, 100, 100, "Bone crush", "Flesh ripping protocol", "", "", "", "");
characters SAM  ("S.A.M. (Sentient Autonomous Machine)", 30, 10, 5, 200, 200, "Surgery (no anaesthesia)", "Hand-saw", "", "", "", "");
characters NanoZombie  ("Nano-Zombie", 10, 35, 7, 150, 250, "Ugly bite", "Horde", "", "", "", "");
characters PlasmaticEnforcer  ("Plasmatic Enforcer", 25, 15, 7, 150, 150, "Human BBQ", "Plasma inferno", "", "", "", "");
characters ShadowbladeBalerina  ("Shadowblade Balerina", 35, 15, 6, 200, 200, "Shadow blade", "Scream", "Shadowlash", "", "", "");
characters ToxinWraith  ("Toxin Wraith", 50, 5, 8, 250, 180, "Venomous Grasp", "Noxious Cloud", "Lethal Exhalation", "", "", "");
characters ScythebladeAugment  ("Scytheblade Augment", 40, 15, 8, 180, 180, "Crippling Harvest", "Phantom Blade Barrage", "Reaping Strike", "", "", "");
characters MutagenicBrute  ("Mutagenic Brute", 55, 0, 8, 180, 200, "Venomous Grasp", "Feral Rampage", "Biohazard Slam", "", "", "");
characters NeuralOverlord  ("Neural Overlord", 50, 10, 6, 200, 200, "Mind Control Surge", "Psychic Assault", "Neural Collapse", "", "", "");
// Special
characters active("", "", "", "", "", "", "", "", "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
characters characterOne("", "", "", "", "", "", "", "", "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
characters characterTwo("", "", "", "", "", "", "", "", "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
characters characterThree("", "", "", "", "", "", "", "", "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
characters enemy("", "Clear", "", "", "", "", "", "", "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

// boss
characters TheMask ("Dr. [REDACTED] - The Mask", 30, 10, 7, 200, 200, "Nightmare Fuel","Triple Attack","Artificial Lighting","Shield Of Darkness","Manipulation","Refill");
characters ERr0R ("Dr. [REDACTED] - ERr0R", 50, 25, 10, 333, 333, "Razor Sword", "Flame Rain", "9th Circle Of Hell", "Stamina Steal", "Bleeding Heart Transplant", "Telepot");
characters Boss ("The BOSS", 100, 0, 15, 400, 400, "Mini-gun!", "Flame Rain", "9th Circle Of Hell", "Stamina Steal", "Bleeding Heart Transplant", "Telepot");


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
