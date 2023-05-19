#ifndef GAME_SHOPS_H
#define GAME_SHOPS_H

using namespace std;

class shop {
public:
    string shopTitle;
    int shopNum;

    string itemsShopInventory[36] = {};

    shop(string ShopTitle, int ShopNum) {
        shopTitle = ShopTitle;
        shopNum = ShopNum;
    }

};

shop stupendousEmporium ("║                                      ███████╗████████╗██╗   ██╗██████╗ ███████╗███╗   ██╗██████╗  ██████╗ ██╗   ██╗███████╗    ███████╗███╗   ███╗██████╗  ██████╗ ██████╗ ██╗██╗   ██╗███╗   ███╗                                      ║\n"
                         "║                                      ██╔════╝╚══██╔══╝██║   ██║██╔══██╗██╔════╝████╗  ██║██╔══██╗██╔═══██╗██║   ██║██╔════╝    ██╔════╝████╗ ████║██╔══██╗██╔═══██╗██╔══██╗██║██║   ██║████╗ ████║                                      ║\n"
                         "║                                      ███████╗   ██║   ██║   ██║██████╔╝█████╗  ██╔██╗ ██║██║  ██║██║   ██║██║   ██║███████╗    █████╗  ██╔████╔██║██████╔╝██║   ██║██████╔╝██║██║   ██║██╔████╔██║                                      ║\n"
                         "║                                      ╚════██║   ██║   ██║   ██║██╔═══╝ ██╔══╝  ██║╚██╗██║██║  ██║██║   ██║██║   ██║╚════██║    ██╔══╝  ██║╚██╔╝██║██╔═══╝ ██║   ██║██╔══██╗██║██║   ██║██║╚██╔╝██║                                      ║\n"
                         "║                                      ███████║   ██║   ╚██████╔╝██║     ███████╗██║ ╚████║██████╔╝╚██████╔╝╚██████╔╝███████║    ███████╗██║ ╚═╝ ██║██║     ╚██████╔╝██║  ██║██║╚██████╔╝██║ ╚═╝ ██║                                      ║\n"
                         "║                                      ╚══════╝   ╚═╝    ╚═════╝ ╚═╝     ╚══════╝╚═╝  ╚═══╝╚═════╝  ╚═════╝  ╚═════╝ ╚══════╝    ╚══════╝╚═╝     ╚═╝╚═╝      ╚═════╝ ╚═╝  ╚═╝╚═╝ ╚═════╝ ╚═╝     ╚═╝                                      ║", 1);


shop justMonsters ("║                                                                       ██╗██╗   ██╗███████╗████████╗    ███╗   ███╗ ██████╗ ███╗   ██╗███████╗████████╗███████╗██████╗ ███████╗                                                          ║\n"
                   "║                                                                       ██║██║   ██║██╔════╝╚══██╔══╝    ████╗ ████║██╔═══██╗████╗  ██║██╔════╝╚══██╔══╝██╔════╝██╔══██╗██╔════╝                                                          ║\n"
                   "║                                                                       ██║██║   ██║███████╗   ██║       ██╔████╔██║██║   ██║██╔██╗ ██║███████╗   ██║   █████╗  ██████╔╝███████╗                                                          ║\n"
                   "║                                                                  ██   ██║██║   ██║╚════██║   ██║       ██║╚██╔╝██║██║   ██║██║╚██╗██║╚════██║   ██║   ██╔══╝  ██╔══██╗╚════██║                                                          ║\n"
                   "║                                                                  ╚█████╔╝╚██████╔╝███████║   ██║       ██║ ╚═╝ ██║╚██████╔╝██║ ╚████║███████║   ██║   ███████╗██║  ██║███████║                                                          ║\n"
                   "║                                                                   ╚════╝  ╚═════╝ ╚══════╝   ╚═╝       ╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝╚══════╝                                                          ║", 2);

shop rosesFlowerShop ("║                                                    ██████╗  ██████╗ ███████╗███████╗███████╗    ███████╗██╗      ██████╗ ██╗    ██╗███████╗██████╗     ███████╗██╗  ██╗ ██████╗ ██████╗                                                 ║\n"
                      "║                                                    ██╔══██╗██╔═══██╗██╔════╝██╔════╝██╔════╝    ██╔════╝██║     ██╔═══██╗██║    ██║██╔════╝██╔══██╗    ██╔════╝██║  ██║██╔═══██╗██╔══██╗                                                ║\n"
                      "║                                                    ██████╔╝██║   ██║███████╗█████╗  ███████╗    █████╗  ██║     ██║   ██║██║ █╗ ██║█████╗  ██████╔╝    ███████╗███████║██║   ██║██████╔╝                                                ║\n"
                      "║                                                    ██╔══██╗██║   ██║╚════██║██╔══╝  ╚════██║    ██╔══╝  ██║     ██║   ██║██║███╗██║██╔══╝  ██╔══██╗    ╚════██║██╔══██║██║   ██║██╔═══╝                                                 ║\n"
                      "║                                                    ██║  ██║╚██████╔╝███████║███████╗███████║    ██║     ███████╗╚██████╔╝╚███╔███╔╝███████╗██║  ██║    ███████║██║  ██║╚██████╔╝██║                                                     ║\n"
                      "║                                                    ╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚══════╝╚══════╝    ╚═╝     ╚══════╝ ╚═════╝  ╚══╝╚══╝ ╚══════╝╚═╝  ╚═╝    ╚══════╝╚═╝  ╚═╝ ╚═════╝ ╚═╝                                                     ║", 3);

shop clydeHealery ("║                                                                         ██████╗██╗  ██╗   ██╗██████╗ ███████╗    ██╗  ██╗███████╗ █████╗ ██╗     ███████╗██████╗ ██╗   ██╗                                                              ║\n"
                   "║                                                                        ██╔════╝██║  ╚██╗ ██╔╝██╔══██╗██╔════╝    ██║  ██║██╔════╝██╔══██╗██║     ██╔════╝██╔══██╗╚██╗ ██╔╝                                                              ║\n"
                   "║                                                                        ██║     ██║   ╚████╔╝ ██║  ██║█████╗      ███████║█████╗  ███████║██║     █████╗  ██████╔╝ ╚████╔╝                                                               ║\n"
                   "║                                                                        ██║     ██║    ╚██╔╝  ██║  ██║██╔══╝      ██╔══██║██╔══╝  ██╔══██║██║     ██╔══╝  ██╔══██╗  ╚██╔╝                                                                ║\n"
                   "║                                                                        ╚██████╗███████╗██║   ██████╔╝███████╗    ██║  ██║███████╗██║  ██║███████╗███████╗██║  ██║   ██║                                                                 ║\n"
                   "║                                                                         ╚═════╝╚══════╝╚═╝   ╚═════╝ ╚══════╝    ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝╚═╝  ╚═╝   ╚═╝                                                                 ║", 4);

shop swordsAndMore ("║                                                                  ███████╗██╗    ██╗ ██████╗ ██████╗ ██████╗ ███████╗     █████╗ ███╗   ██╗██████╗     ███╗   ███╗ ██████╗ ██████╗ ███████╗                                              ║\n"
                    "║                                                                  ██╔════╝██║    ██║██╔═══██╗██╔══██╗██╔══██╗██╔════╝    ██╔══██╗████╗  ██║██╔══██╗    ████╗ ████║██╔═══██╗██╔══██╗██╔════╝                                              ║\n"
                    "║                                                                  ███████╗██║ █╗ ██║██║   ██║██████╔╝██║  ██║███████╗    ███████║██╔██╗ ██║██║  ██║    ██╔████╔██║██║   ██║██████╔╝█████╗                                                ║\n"
                    "║                                                                  ╚════██║██║███╗██║██║   ██║██╔══██╗██║  ██║╚════██║    ██╔══██║██║╚██╗██║██║  ██║    ██║╚██╔╝██║██║   ██║██╔══██╗██╔══╝                                                ║\n"
                    "║                                                                  ███████║╚███╔███╔╝╚██████╔╝██║  ██║██████╔╝███████║    ██║  ██║██║ ╚████║██████╔╝    ██║ ╚═╝ ██║╚██████╔╝██║  ██║███████╗                                              ║\n"
                    "║                                                                  ╚══════╝ ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚══════╝    ╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝     ╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚══════╝                                              ║", 5);

shop violinViolence ("║                                                                  ██╗   ██╗██╗ ██████╗ ██╗     ██╗███╗   ██╗    ██╗   ██╗██╗ ██████╗ ██╗     ███████╗███╗   ██╗ ██████╗███████╗                                                          ║\n"
                     "║                                                                  ██║   ██║██║██╔═══██╗██║     ██║████╗  ██║    ██║   ██║██║██╔═══██╗██║     ██╔════╝████╗  ██║██╔════╝██╔════╝                                                          ║\n"
                     "║                                                                  ██║   ██║██║██║   ██║██║     ██║██╔██╗ ██║    ██║   ██║██║██║   ██║██║     █████╗  ██╔██╗ ██║██║     █████╗                                                            ║\n"
                     "║                                                                  ╚██╗ ██╔╝██║██║   ██║██║     ██║██║╚██╗██║    ╚██╗ ██╔╝██║██║   ██║██║     ██╔══╝  ██║╚██╗██║██║     ██╔══╝                                                            ║\n"
                     "║                                                                   ╚████╔╝ ██║╚██████╔╝███████╗██║██║ ╚████║     ╚████╔╝ ██║╚██████╔╝███████╗███████╗██║ ╚████║╚██████╗███████╗                                                          ║\n"
                     "║                                                                    ╚═══╝  ╚═╝ ╚═════╝ ╚══════╝╚═╝╚═╝  ╚═══╝      ╚═══╝  ╚═╝ ╚═════╝ ╚══════╝╚══════╝╚═╝  ╚═══╝ ╚═════╝╚══════╝                                                          ║", 6);

shop assisiAssistance ("║                                                                   █████╗ ███████╗██╗███████╗███████╗██╗     █████╗ ███████╗███████╗██╗███████╗████████╗ █████╗ ███╗   ██╗ ██████╗███████╗                                               ║\n"
                       "║                                                                  ██╔══██╗██╔════╝██║██╔════╝██╔════╝██║    ██╔══██╗██╔════╝██╔════╝██║██╔════╝╚══██╔══╝██╔══██╗████╗  ██║██╔════╝██╔════╝                                               ║\n"
                       "║                                                                  ███████║███████╗██║███████╗███████╗██║    ███████║███████╗███████╗██║███████╗   ██║   ███████║██╔██╗ ██║██║     █████╗                                                 ║\n"
                       "║                                                                  ██╔══██║╚════██║██║╚════██║╚════██║██║    ██╔══██║╚════██║╚════██║██║╚════██║   ██║   ██╔══██║██║╚██╗██║██║     ██╔══╝                                                 ║\n"
                       "║                                                                  ██║  ██║███████║██║███████║███████║██║    ██║  ██║███████║███████║██║███████║   ██║   ██║  ██║██║ ╚████║╚██████╗███████╗                                               ║\n"
                       "║                                                                  ╚═╝  ╚═╝╚══════╝╚═╝╚══════╝╚══════╝╚═╝    ╚═╝  ╚═╝╚══════╝╚══════╝╚═╝╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝╚══════╝                                               ║", 7);

shop snackVagon ("║                                                                         ███████╗███╗   ██╗ █████╗  ██████╗██╗  ██╗    ██╗   ██╗ █████╗  ██████╗  ██████╗ ███╗   ██╗                                                                     ║\n"
                 "║                                                                         ██╔════╝████╗  ██║██╔══██╗██╔════╝██║ ██╔╝    ██║   ██║██╔══██╗██╔════╝ ██╔═══██╗████╗  ██║                                                                     ║\n"
                 "║                                                                         ███████╗██╔██╗ ██║███████║██║     █████╔╝     ██║   ██║███████║██║  ███╗██║   ██║██╔██╗ ██║                                                                     ║\n"
                 "║                                                                         ╚════██║██║╚██╗██║██╔══██║██║     ██╔═██╗     ╚██╗ ██╔╝██╔══██║██║   ██║██║   ██║██║╚██╗██║                                                                     ║\n"
                 "║                                                                         ███████║██║ ╚████║██║  ██║╚██████╗██║  ██╗     ╚████╔╝ ██║  ██║╚██████╔╝╚██████╔╝██║ ╚████║                                                                     ║\n"
                 "║                                                                         ╚══════╝╚═╝  ╚═══╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝      ╚═══╝  ╚═╝  ╚═╝ ╚═════╝  ╚═════╝ ╚═╝  ╚═══╝                                                                     ║", 8);

class activeItemsOnDisplay{
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
    activeItemsOnDisplay(string Item1,string Item2,string Item3,string Item4,string Item5,string Item6,string Item7,string Item8,string Item9,string Item10,string Item11,string Item12,string Item13,string Item14,string Item15,string Item16,string Item17,string Item18,string Item19,string Item20,string Item21,string Item22,string Item23,string Item24,string Item25,string Item26,string Item27,string Item28,string Item29,string Item30,string Item31,string Item32,string Item33,string Item34,string Item35,string Item36){
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
    }

    int priceItem1;
    int priceItem2;
    int priceItem3;
    int priceItem4;
    int priceItem5;
    int priceItem6;
    int priceItem7;
    int priceItem8;
    int priceItem9;
    int priceItem10;
    int priceItem11;
    int priceItem12;
    int priceItem13;
    int priceItem14;
    int priceItem15;
    int priceItem16;
    int priceItem17;
    int priceItem18;
    int priceItem19;
    int priceItem20;
    int priceItem21;
    int priceItem22;
    int priceItem23;
    int priceItem24;
    int priceItem25;
    int priceItem26;
    int priceItem27;
    int priceItem28;
    int priceItem29;
    int priceItem30;
    int priceItem31;
    int priceItem32;
    int priceItem33;
    int priceItem34;
    int priceItem35;
    int priceItem36;
    activeItemsOnDisplay(int PriceItem1,int PriceItem2,int PriceItem3,int PriceItem4,int PriceItem5,int PriceItem6,int PriceItem7,int PriceItem8,int PriceItem9,int PriceItem10,int PriceItem11,int PriceItem12,int PriceItem13,int PriceItem14,int PriceItem15,int PriceItem16,int PriceItem17,int PriceItem18,int PriceItem19,int PriceItem20,int PriceItem21,int PriceItem22,int PriceItem23,int PriceItem24,int PriceItem25,int PriceItem26,int PriceItem27,int PriceItem28,int PriceItem29,int PriceItem30,int PriceItem31,int PriceItem32,int PriceItem33,int PriceItem34,int PriceItem35,int PriceItem36) {
        priceItem1 = PriceItem1;
        priceItem2 = PriceItem2;
        priceItem3 = PriceItem3;
        priceItem4 = PriceItem4;
        priceItem5 = PriceItem5;
        priceItem6 = PriceItem6;
        priceItem7 = PriceItem7;
        priceItem8 = PriceItem8;
        priceItem9 = PriceItem9;
        priceItem10 = PriceItem10;
        priceItem11 = PriceItem11;
        priceItem12 = PriceItem12;
        priceItem13 = PriceItem13;
        priceItem14 = PriceItem14;
        priceItem15 = PriceItem15;
        priceItem16 = PriceItem16;
        priceItem17 = PriceItem17;
        priceItem18 = PriceItem18;
        priceItem19 = PriceItem19;
        priceItem20 = PriceItem20;
        priceItem21 = PriceItem21;
        priceItem22 = PriceItem22;
        priceItem23 = PriceItem23;
        priceItem24 = PriceItem24;
        priceItem25 = PriceItem25;
        priceItem26 = PriceItem26;
        priceItem27 = PriceItem27;
        priceItem28 = PriceItem28;
        priceItem29 = PriceItem29;
        priceItem30 = PriceItem30;
        priceItem31 = PriceItem31;
        priceItem32 = PriceItem32;
        priceItem33 = PriceItem33;
        priceItem34 = PriceItem34;
        priceItem35 = PriceItem35;
        priceItem36 = PriceItem36;
    }

};

activeItemsOnDisplay activeItemsOnDisplayItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

activeItemsOnDisplay activeItemsOnDisplayPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);


class itemsShopItems{
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
    itemsShopItems(string Item1,string Item2,string Item3,string Item4,string Item5,string Item6,string Item7,string Item8,string Item9,string Item10,string Item11,string Item12,string Item13,string Item14,string Item15,string Item16,string Item17,string Item18,string Item19,string Item20,string Item21,string Item22,string Item23,string Item24,string Item25,string Item26,string Item27,string Item28,string Item29,string Item30,string Item31,string Item32,string Item33,string Item34,string Item35,string Item36){
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
    }

    int priceItem1;
    int priceItem2;
    int priceItem3;
    int priceItem4;
    int priceItem5;
    int priceItem6;
    int priceItem7;
    int priceItem8;
    int priceItem9;
    int priceItem10;
    int priceItem11;
    int priceItem12;
    int priceItem13;
    int priceItem14;
    int priceItem15;
    int priceItem16;
    int priceItem17;
    int priceItem18;
    int priceItem19;
    int priceItem20;
    int priceItem21;
    int priceItem22;
    int priceItem23;
    int priceItem24;
    int priceItem25;
    int priceItem26;
    int priceItem27;
    int priceItem28;
    int priceItem29;
    int priceItem30;
    int priceItem31;
    int priceItem32;
    int priceItem33;
    int priceItem34;
    int priceItem35;
    int priceItem36;
    itemsShopItems(int PriceItem1,int PriceItem2,int PriceItem3,int PriceItem4,int PriceItem5,int PriceItem6,int PriceItem7,int PriceItem8,int PriceItem9,int PriceItem10,int PriceItem11,int PriceItem12,int PriceItem13,int PriceItem14,int PriceItem15,int PriceItem16,int PriceItem17,int PriceItem18,int PriceItem19,int PriceItem20,int PriceItem21,int PriceItem22,int PriceItem23,int PriceItem24,int PriceItem25,int PriceItem26,int PriceItem27,int PriceItem28,int PriceItem29,int PriceItem30,int PriceItem31,int PriceItem32,int PriceItem33,int PriceItem34,int PriceItem35,int PriceItem36) {
        priceItem1 = PriceItem1;
        priceItem2 = PriceItem2;
        priceItem3 = PriceItem3;
        priceItem4 = PriceItem4;
        priceItem5 = PriceItem5;
        priceItem6 = PriceItem6;
        priceItem7 = PriceItem7;
        priceItem8 = PriceItem8;
        priceItem9 = PriceItem9;
        priceItem10 = PriceItem10;
        priceItem11 = PriceItem11;
        priceItem12 = PriceItem12;
        priceItem13 = PriceItem13;
        priceItem14 = PriceItem14;
        priceItem15 = PriceItem15;
        priceItem16 = PriceItem16;
        priceItem17 = PriceItem17;
        priceItem18 = PriceItem18;
        priceItem19 = PriceItem19;
        priceItem20 = PriceItem20;
        priceItem21 = PriceItem21;
        priceItem22 = PriceItem22;
        priceItem23 = PriceItem23;
        priceItem24 = PriceItem24;
        priceItem25 = PriceItem25;
        priceItem26 = PriceItem26;
        priceItem27 = PriceItem27;
        priceItem28 = PriceItem28;
        priceItem29 = PriceItem29;
        priceItem30 = PriceItem30;
        priceItem31 = PriceItem31;
        priceItem32 = PriceItem32;
        priceItem33 = PriceItem33;
        priceItem34 = PriceItem34;
        priceItem35 = PriceItem35;
        priceItem36 = PriceItem36;
    }

};

itemsShopItems stupendousEmporiumItemsInventoryItems ("Item","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

itemsShopItems stupendousEmporiumItemsInventoryPrices (100,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

itemsShopItems justMonstersItemsInventoryItems ("Item","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

itemsShopItems justMonstersItemsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

itemsShopItems rosesFlowerShopItemsInventoryItems ("Item","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

itemsShopItems rosesFlowerShopItemsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

itemsShopItems clydeHealeryItemsInventoryItems ("Item","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

itemsShopItems clydeHealeryItemsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

itemsShopItems swordsAndMoreItemsInventoryItems ("Item","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

itemsShopItems swordsAndMoreItemsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

itemsShopItems violinViolenceItemsInventoryItems ("Item","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

itemsShopItems violinViolenceItemsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

itemsShopItems assisiAssistanceItemsInventoryItems ("Item","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

itemsShopItems assisiAssistanceItemsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

itemsShopItems snackVagonItemsInventoryItems ("Item","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

itemsShopItems snackVagonItemsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);


class weaponsShopItems{
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
    weaponsShopItems(string Item1,string Item2,string Item3,string Item4,string Item5,string Item6,string Item7,string Item8,string Item9,string Item10,string Item11,string Item12,string Item13,string Item14,string Item15,string Item16,string Item17,string Item18,string Item19,string Item20,string Item21,string Item22,string Item23,string Item24,string Item25,string Item26,string Item27,string Item28,string Item29,string Item30,string Item31,string Item32,string Item33,string Item34,string Item35,string Item36){
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
    }

    int priceItem1;
    int priceItem2;
    int priceItem3;
    int priceItem4;
    int priceItem5;
    int priceItem6;
    int priceItem7;
    int priceItem8;
    int priceItem9;
    int priceItem10;
    int priceItem11;
    int priceItem12;
    int priceItem13;
    int priceItem14;
    int priceItem15;
    int priceItem16;
    int priceItem17;
    int priceItem18;
    int priceItem19;
    int priceItem20;
    int priceItem21;
    int priceItem22;
    int priceItem23;
    int priceItem24;
    int priceItem25;
    int priceItem26;
    int priceItem27;
    int priceItem28;
    int priceItem29;
    int priceItem30;
    int priceItem31;
    int priceItem32;
    int priceItem33;
    int priceItem34;
    int priceItem35;
    int priceItem36;
    weaponsShopItems(int PriceItem1,int PriceItem2,int PriceItem3,int PriceItem4,int PriceItem5,int PriceItem6,int PriceItem7,int PriceItem8,int PriceItem9,int PriceItem10,int PriceItem11,int PriceItem12,int PriceItem13,int PriceItem14,int PriceItem15,int PriceItem16,int PriceItem17,int PriceItem18,int PriceItem19,int PriceItem20,int PriceItem21,int PriceItem22,int PriceItem23,int PriceItem24,int PriceItem25,int PriceItem26,int PriceItem27,int PriceItem28,int PriceItem29,int PriceItem30,int PriceItem31,int PriceItem32,int PriceItem33,int PriceItem34,int PriceItem35,int PriceItem36) {
        priceItem1 = PriceItem1;
        priceItem2 = PriceItem2;
        priceItem3 = PriceItem3;
        priceItem4 = PriceItem4;
        priceItem5 = PriceItem5;
        priceItem6 = PriceItem6;
        priceItem7 = PriceItem7;
        priceItem8 = PriceItem8;
        priceItem9 = PriceItem9;
        priceItem10 = PriceItem10;
        priceItem11 = PriceItem11;
        priceItem12 = PriceItem12;
        priceItem13 = PriceItem13;
        priceItem14 = PriceItem14;
        priceItem15 = PriceItem15;
        priceItem16 = PriceItem16;
        priceItem17 = PriceItem17;
        priceItem18 = PriceItem18;
        priceItem19 = PriceItem19;
        priceItem20 = PriceItem20;
        priceItem21 = PriceItem21;
        priceItem22 = PriceItem22;
        priceItem23 = PriceItem23;
        priceItem24 = PriceItem24;
        priceItem25 = PriceItem25;
        priceItem26 = PriceItem26;
        priceItem27 = PriceItem27;
        priceItem28 = PriceItem28;
        priceItem29 = PriceItem29;
        priceItem30 = PriceItem30;
        priceItem31 = PriceItem31;
        priceItem32 = PriceItem32;
        priceItem33 = PriceItem33;
        priceItem34 = PriceItem34;
        priceItem35 = PriceItem35;
        priceItem36 = PriceItem36;
    }

};

weaponsShopItems stupendousEmporiumWeaponsInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

weaponsShopItems stupendousEmporiumWeaponsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

weaponsShopItems justMonstersWeaponsInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

weaponsShopItems justMonstersWeaponsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

weaponsShopItems rosesFlowerShopWeaponsInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

weaponsShopItems rosesFlowerShopWeaponsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

weaponsShopItems clydeHealeryWeaponsInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

weaponsShopItems clydeHealeryWeaponsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

weaponsShopItems swordsAndMoreWeaponsInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

weaponsShopItems swordsAndMoreWeaponsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

weaponsShopItems violinViolenceWeaponsInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

weaponsShopItems violinViolenceWeaponsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

weaponsShopItems assisiAssistanceWeaponsInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

weaponsShopItems assisiAssistanceWeaponsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

weaponsShopItems snackVagonWeaponsInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

weaponsShopItems snackVagonWeaponsInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

class armourShopItems{
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
    armourShopItems(string Item1,string Item2,string Item3,string Item4,string Item5,string Item6,string Item7,string Item8,string Item9,string Item10,string Item11,string Item12,string Item13,string Item14,string Item15,string Item16,string Item17,string Item18,string Item19,string Item20,string Item21,string Item22,string Item23,string Item24,string Item25,string Item26,string Item27,string Item28,string Item29,string Item30,string Item31,string Item32,string Item33,string Item34,string Item35,string Item36){
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
    }

    int priceItem1;
    int priceItem2;
    int priceItem3;
    int priceItem4;
    int priceItem5;
    int priceItem6;
    int priceItem7;
    int priceItem8;
    int priceItem9;
    int priceItem10;
    int priceItem11;
    int priceItem12;
    int priceItem13;
    int priceItem14;
    int priceItem15;
    int priceItem16;
    int priceItem17;
    int priceItem18;
    int priceItem19;
    int priceItem20;
    int priceItem21;
    int priceItem22;
    int priceItem23;
    int priceItem24;
    int priceItem25;
    int priceItem26;
    int priceItem27;
    int priceItem28;
    int priceItem29;
    int priceItem30;
    int priceItem31;
    int priceItem32;
    int priceItem33;
    int priceItem34;
    int priceItem35;
    int priceItem36;
    armourShopItems(int PriceItem1,int PriceItem2,int PriceItem3,int PriceItem4,int PriceItem5,int PriceItem6,int PriceItem7,int PriceItem8,int PriceItem9,int PriceItem10,int PriceItem11,int PriceItem12,int PriceItem13,int PriceItem14,int PriceItem15,int PriceItem16,int PriceItem17,int PriceItem18,int PriceItem19,int PriceItem20,int PriceItem21,int PriceItem22,int PriceItem23,int PriceItem24,int PriceItem25,int PriceItem26,int PriceItem27,int PriceItem28,int PriceItem29,int PriceItem30,int PriceItem31,int PriceItem32,int PriceItem33,int PriceItem34,int PriceItem35,int PriceItem36) {
        priceItem1 = PriceItem1;
        priceItem2 = PriceItem2;
        priceItem3 = PriceItem3;
        priceItem4 = PriceItem4;
        priceItem5 = PriceItem5;
        priceItem6 = PriceItem6;
        priceItem7 = PriceItem7;
        priceItem8 = PriceItem8;
        priceItem9 = PriceItem9;
        priceItem10 = PriceItem10;
        priceItem11 = PriceItem11;
        priceItem12 = PriceItem12;
        priceItem13 = PriceItem13;
        priceItem14 = PriceItem14;
        priceItem15 = PriceItem15;
        priceItem16 = PriceItem16;
        priceItem17 = PriceItem17;
        priceItem18 = PriceItem18;
        priceItem19 = PriceItem19;
        priceItem20 = PriceItem20;
        priceItem21 = PriceItem21;
        priceItem22 = PriceItem22;
        priceItem23 = PriceItem23;
        priceItem24 = PriceItem24;
        priceItem25 = PriceItem25;
        priceItem26 = PriceItem26;
        priceItem27 = PriceItem27;
        priceItem28 = PriceItem28;
        priceItem29 = PriceItem29;
        priceItem30 = PriceItem30;
        priceItem31 = PriceItem31;
        priceItem32 = PriceItem32;
        priceItem33 = PriceItem33;
        priceItem34 = PriceItem34;
        priceItem35 = PriceItem35;
        priceItem36 = PriceItem36;
    }

};

armourShopItems stupendousEmporiumArmourInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

armourShopItems stupendousEmporiumArmourInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

armourShopItems justMonstersArmourInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

armourShopItems justMonstersArmourInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

armourShopItems rosesFlowerShopArmourInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

armourShopItems rosesFlowerShopArmourInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

armourShopItems clydeHealeryArmourInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

armourShopItems clydeHealeryArmourInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

armourShopItems swordsAndMoreArmourInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

armourShopItems swordsAndMoreArmourInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

armourShopItems violinViolenceArmourInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

armourShopItems violinViolenceArmourInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

armourShopItems assisiAssistanceArmourInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

armourShopItems assisiAssistanceArmourInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

armourShopItems snackVagonArmourInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

armourShopItems snackVagonArmourInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

class upgradeShopItems{
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

    upgradeShopItems(string Item1,string Item2,string Item3,string Item4,string Item5,string Item6,string Item7,string Item8,string Item9,string Item10,string Item11,string Item12,string Item13,string Item14,string Item15,string Item16,string Item17,string Item18,string Item19,string Item20,string Item21,string Item22,string Item23,string Item24,string Item25,string Item26,string Item27,string Item28,string Item29,string Item30,string Item31,string Item32,string Item33,string Item34,string Item35,string Item36){
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
    }

    int priceItem1;
    int priceItem2;
    int priceItem3;
    int priceItem4;
    int priceItem5;
    int priceItem6;
    int priceItem7;
    int priceItem8;
    int priceItem9;
    int priceItem10;
    int priceItem11;
    int priceItem12;
    int priceItem13;
    int priceItem14;
    int priceItem15;
    int priceItem16;
    int priceItem17;
    int priceItem18;
    int priceItem19;
    int priceItem20;
    int priceItem21;
    int priceItem22;
    int priceItem23;
    int priceItem24;
    int priceItem25;
    int priceItem26;
    int priceItem27;
    int priceItem28;
    int priceItem29;
    int priceItem30;
    int priceItem31;
    int priceItem32;
    int priceItem33;
    int priceItem34;
    int priceItem35;
    int priceItem36;
    upgradeShopItems(int PriceItem1,int PriceItem2,int PriceItem3,int PriceItem4,int PriceItem5,int PriceItem6,int PriceItem7,int PriceItem8,int PriceItem9,int PriceItem10,int PriceItem11,int PriceItem12,int PriceItem13,int PriceItem14,int PriceItem15,int PriceItem16,int PriceItem17,int PriceItem18,int PriceItem19,int PriceItem20,int PriceItem21,int PriceItem22,int PriceItem23,int PriceItem24,int PriceItem25,int PriceItem26,int PriceItem27,int PriceItem28,int PriceItem29,int PriceItem30,int PriceItem31,int PriceItem32,int PriceItem33,int PriceItem34,int PriceItem35,int PriceItem36) {
        priceItem1 = PriceItem1;
        priceItem2 = PriceItem2;
        priceItem3 = PriceItem3;
        priceItem4 = PriceItem4;
        priceItem5 = PriceItem5;
        priceItem6 = PriceItem6;
        priceItem7 = PriceItem7;
        priceItem8 = PriceItem8;
        priceItem9 = PriceItem9;
        priceItem10 = PriceItem10;
        priceItem11 = PriceItem11;
        priceItem12 = PriceItem12;
        priceItem13 = PriceItem13;
        priceItem14 = PriceItem14;
        priceItem15 = PriceItem15;
        priceItem16 = PriceItem16;
        priceItem17 = PriceItem17;
        priceItem18 = PriceItem18;
        priceItem19 = PriceItem19;
        priceItem20 = PriceItem20;
        priceItem21 = PriceItem21;
        priceItem22 = PriceItem22;
        priceItem23 = PriceItem23;
        priceItem24 = PriceItem24;
        priceItem25 = PriceItem25;
        priceItem26 = PriceItem26;
        priceItem27 = PriceItem27;
        priceItem28 = PriceItem28;
        priceItem29 = PriceItem29;
        priceItem30 = PriceItem30;
        priceItem31 = PriceItem31;
        priceItem32 = PriceItem32;
        priceItem33 = PriceItem33;
        priceItem34 = PriceItem34;
        priceItem35 = PriceItem35;
        priceItem36 = PriceItem36;
    }

};

upgradeShopItems stupendousEmporiumUpgradeInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

upgradeShopItems stupendousEmporiumUpgradeInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

upgradeShopItems justMonstersUpgradeInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

upgradeShopItems justMonstersUpgradeInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

upgradeShopItems rosesFlowerShopUpgradeInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

upgradeShopItems rosesFlowerShopUpgradeInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

upgradeShopItems clydeHealeryUpgradeInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

upgradeShopItems clydeHealeryUpgradeInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

upgradeShopItems swordsAndMoreUpgradeInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

upgradeShopItems swordsAndMoreUpgradeInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

upgradeShopItems violinViolenceUpgradeInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

upgradeShopItems violinViolenceUpgradeInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

upgradeShopItems assisiAssistanceUpgradeInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

upgradeShopItems assisiAssistanceUpgradeInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

upgradeShopItems snackVagonUpgradeInventoryItems ("#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------","#----------------");

upgradeShopItems snackVagonUpgradeInventoryPrices (1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36);

class shopInfo {
public:
    string selectedItem;
    int selectedItemPrice;

    shopInfo(string SelectedItem, int SelectedItemPrice) {
        selectedItem = SelectedItem;
        selectedItemPrice = SelectedItemPrice;
    }
};

shopInfo ShopInfo ("", 0);

#endif //GAME_SHOPS_H
