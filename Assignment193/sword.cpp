#ifndef _definition_h_
#include "defs.h"
#define _definition_h_
#endif
#include <cmath>


bool isPrimenum(int a){
    int i = 2;
    while ((a % i != 0) && (i <= a))
        i++;
    if (a == i)
        return true;
    else return false;
}
double damage( int levelO, int eventcode)
{
    double basedam=0;
    switch(eventcode){
        case 1: basedam = 1;
            break;
        case 2: basedam = 1.5;
            break;
        case 3: basedam = 4.5;
            break;
        case 4: basedam = 6.5;
            break;
        default: basedam = 8.5;
            break;
    }
    return (basedam*levelO*10);
}
int levelOcal (int i){
    int b = i % 10;
    int level0;
    level0 = i > 6?(b > 5?b:5):b;
    return level0;
}
bool issquarenumber(double a)
{
    double check = ((double)sqrt(a) - (int)sqrt(a)) ;
    if (check == 0){return true;}
    else {return false;}
}
bool isdragonKnight(int HP) {
    for (int i = 2; i < HP; i++)
        for (int j = i; j < HP; j++) {
            if (sqrt(i * i + j * j) > 500) break;
            if (issquarenumber(i * i + j * j)) { return true; }
        }
    return false;
}
int sumdigit(int a)
{
    int sum = 0, digit = 0;
    while (a > 0)
    {
        digit = a % 10;
        sum = sum + digit;
        a = a / 10;
    }
    return sum;
}
int sumPrimeFactor(int n)
{
    int i=2, sum=0;
    while(n>1)
    {
        if(n%i==0)
        {
            sum=sum+sumdigit(i);
            n=n/i;
        }
        else
            i++;
    }
    return sum;
}
bool isCompositenumber(int n)
{
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c>2)
        return true;
    else
        return false;
}
bool isSmithnumber (int n)
{
    if(isCompositenumber(n) && (sumdigit(n) == sumPrimeFactor(n))){return true;}
    else {return false;}
}
bool isfibonacci (int n)
{
    int a= 0, b =1;
    int c;
    for (int i = 1; i < n; i++) {
        if (i==1){if (n==0) {return true;} else continue;}
        if (i==2){if (n==1) {return true;} else continue;}
        c = a + b;
        a = b;
        b = c;
        if (n==c){return true;}
    }
    return false;
}
void Checkmode1(int event, bool &shield, bool &spear, bool hair){
    if((hash(97) > hash(96)) && (hash(96) > hash(95))){
        if (event == 95) shield = true;
        if (shield && event == 96) spear = true;
        if (spear && event == 97 && shield) hair = true;
    }
    if ((hash(96) > hash(97)) && (hash(97) > hash(95))){
        if (event == 95) shield = true;
        if (shield && event == 97) hair = true;
        if (hair&& event == 96 && shield) spear = true;
    }
    if ((hash(97) > hash(95)) && (hash(95) > hash(96))){
        if (event == 96) spear = true;
        if (spear && event == 95) shield = true;
        if (shield && event == 97 && spear) spear = true;
    }
    if ((hash(95) > hash(97)) && (hash(97) > hash(96))){
        if (event == 96) spear = true;
        if (spear && event == 97) hair = true;
        if (hair && event == 95 && spear ) shield = true;
    }
    if ((hash(96) > hash(95)) && (hash(95) > hash(97))){
        if (event == 97) hair = true;
        if (hair && event == 95) shield = true;
        if (shield && event == 96 && hair) spear = true;
    }
    if ((hash(95) > hash(96)) && (hash(96) > hash(97))){
        if (event == 97) hair = true;
        if (hair == 1 && event == 96) spear = true;
        if (spear == 1 && event == 95 && hair == 1) shield = true;
    }
}
bool isLucky(int n) {
    static int counter = 2;
    int next_position = n;
    if (counter > n)
        return true;
    if (n % counter == 0)
        return false;
    next_position -= next_position / counter;
    counter++;
    return isLucky(next_position);
}
report*  walkthrough (knight& theKnight, castle arrCastle[], int nCastle, int mode, int nPetal) {
    report *pReturn;
    pReturn = new report;
    int arrayevent[5];
    int countevent = 0;
    int bFlag = -1;
    int nWin=0, nLose=0, Petal = nPetal;
    int antidote = 0;
    int levelO, b = 0;
    bool win = false;
    bool excalibur = false;
    bool shield = false;
    bool hair = false;
    bool spear = false;
    bool Katana = false;
    bool lockdoor = false;
    int curseringcount = 0;
    bool Lionheart = false;
    bool Durian = true;
    bool poison = false;
    bool Goldcoin = false;
    int poisoncount = -1;
    int Mythrilarmor = false;
    bool arthur = false;
    bool guinevere = false;
    bool lancelot = false;
    bool paladin = false;
    bool dragonKnight = false;
    int MaxHP = theKnight.HP;
    int fakearmorcount = 0;
    int countMerlin = 1;
    bool fakearmor = false;
    bool WinOmega = false;
    bool Odin = false;
    bool WinUlti = false;

    //fighting for the existence of mankind here
    if (theKnight.HP == 999) { arthur = true; }
    if (theKnight.HP == 888) {
        lancelot = true;
        spear = true;
    }
    if (theKnight.HP == 777) {
        guinevere = true;
        hair = true;
    }
    if (isSmithnumber(theKnight.HP)) {
        paladin = true;
        shield = true;
    }
    if (isdragonKnight(theKnight.HP)) { dragonKnight = true; }
    for (int j = 0; j < nCastle; j++) {
        for (int i = 0; i < arrCastle->nEvent; i++) {
            if (arrCastle[j].arrEvent[i] == 0) { break; }
            if (antidote > 0 && poison) {
                poison = false;
                poisoncount = 0;
                antidote = antidote - 1;
            }
            switch (arrCastle[j].arrEvent[i]) {
                case 1:
                case 3:
                case 4:
                case 5:
                    ////arhtur and lance
                    if ((arthur == 1) || (lancelot == 1)) {
                        switch (arrCastle[j].arrEvent[i]) {
                            case 1:
                                theKnight.gil += 100;
                                break;
                            case 3:
                                theKnight.gil += 450;
                                break;
                            case 4:
                                theKnight.gil += 650;
                                break;
                            case 5:
                                theKnight.gil += 850;
                                break;
                        }
                        if (theKnight.gil > 999)
                            theKnight.gil = 999;

                        nWin++;
                        break;
                    }
                    ////// normal
                    if (theKnight.level >= levelOcal(i) && !fakearmor || Odin || paladin || Lionheart) {
                        win = true;
                        nWin++;
                        switch (arrCastle[j].arrEvent[i]) {
                            case 1:
                                theKnight.gil += 100;
                                break;
                            case 3:
                                theKnight.gil += 450;
                                break;
                            case 4:
                                theKnight.gil += 650;
                                break;
                            case 5:
                                theKnight.gil += 850;
                                break;
                        }
                        if (theKnight.gil > 999) { theKnight.gil = 999; }

                    } else {
                        if (theKnight.level < levelOcal(i) || fakearmor) {
                            nLose++;
                            theKnight.HP = (int)(theKnight.HP - damage(levelOcal(i), arrCastle[j].arrEvent[i]));
                        }
                    }
                    //poison
                    if (poison) {
                        if ((theKnight.level >= levelOcal(i)) || Odin || paladin || Lionheart) {
                            theKnight.HP = (int) (theKnight.HP - damage(levelOcal(i), arrCastle[j].arrEvent[i]));
                            if (theKnight.HP <= 0) {
                                callPhoenix(theKnight, MaxHP);
                                poison = false;
                                poisoncount = 0;
                            }

                            switch (arrCastle[j].arrEvent[i]) {
                                case 1:
                                    theKnight.gil += 100;
                                    break;
                                case 3:
                                    theKnight.gil += 450;
                                    break;
                                case 4:
                                    theKnight.gil += 650;
                                    break;
                                case 5:
                                    theKnight.gil += 850;
                                    break;
                            }
                            if (theKnight.gil > 999)
                                theKnight.gil = 999;

                            nWin++;
                            break;
                        }
                        Petal--;
                        break;
                    }
                            case 2: //Moon
                            {
                                if (theKnight.level >= levelOcal(i) && !fakearmor) {
                                    win = true;
                                    nWin++;
                                    if (theKnight.gil < 999) { theKnight.gil = theKnight.gil + 150; }
                                }
                                if (theKnight.level < levelOcal(i) || fakearmor) {
                                    nLose++;
                                    theKnight.HP = (int) (theKnight.HP - damage(levelOcal(i), 2));
                                    if (theKnight.HP <= 0) { callPhoenix(theKnight, MaxHP); }
                                }

                                Petal--;
                                break;
                            }
                            case 6://Tornberry
                            {
                                if (poison) {
                                    Petal--;
                                    continue;
                                }
                                if (theKnight.level >= levelOcal(i) || !fakearmor) {
                                    win = true;
                                    nWin++;
                                    if (theKnight.level < 10) { theKnight.level++; }
                                }
                                if (theKnight.level < levelOcal(i) || fakearmor) {
                                    nLose++;
                                    theKnight.HP = (int) (theKnight.HP - damage(levelOcal(i), 2));
                                    if (theKnight.HP <= 0) { callPhoenix(theKnight, MaxHP); }
                                    poison = true;
                                    poisoncount = 7;
                                }
                                Petal--;
                                break;
                            }
                            case 7:
                                if (isfibonacci(theKnight.HP)) {
                                    nWin++;
                                    if (theKnight.gil > 999) { theKnight.gil = 999; }
                                    else { theKnight.gil = (theKnight.gil * 2) + 50; }
                                    if (!Mythrilarmor && !Katana) {
                                        fakearmorcount = 7;
                                        fakearmor = true;
                                    }
                                } else {
                                    nLose++;
                                    if (Katana) {
                                        theKnight.gil = theKnight.gil + 50;
                                    } else {
                                        theKnight.gil = theKnight.gil / 2;
                                        theKnight.HP = theKnight.HP / 2;
                                        if (Mythrilarmor) { Mythrilarmor = false; }
                                    }
                                }
                            Petal--;
                            break;
                            case 8://Nina
                                Petal--;
                            if (isLucky(theKnight.HP)) {
                                if (theKnight.gil < 50) { continue; }
                                else {
                                    while (theKnight.gil) {
                                        if ((poison || fakearmor) && theKnight.gil > 50) {
                                            poison = false;
                                            fakearmor = fakearmor;
                                            fakearmorcount = 0;
                                            poisoncount = 0;
                                        }
                                        for (int k = theKnight.HP; k <= MaxHP; k++) {
                                            if (theKnight.HP == MaxHP || theKnight.gil == 0) { break; }
                                            theKnight.HP++;
                                            theKnight.gil--;
                                        }
                                    }
                                }

                            }
                            break;
                            case 9://Durian
                            {
                                if (Durian) {
                                    if (poison) { poison = false; }
                                    theKnight.HP = MaxHP;
                                    if (Petal >= 999) { Petal = 99; } else { Petal = Petal + 20; }
                                }
                                if (Katana) { Durian = false; }
                                Petal--;
                                break;
                                case 10:
                                    if (poison) {
                                        callPhoenix(theKnight, MaxHP);
                                        poison = false;
                                        poisoncount = 0;
                                    } else {
                                        poison = true;
                                        poisoncount = 7;
                                        theKnight.HP = theKnight.HP / 2;
                                    }
                                Petal--;
                                break;
                            }
                            case 11:
                                break;
                           /* case 12://Merlin
                                switch (countMerlin) {
                                    case 1:
                                        if (poison) { poison = false; }
                                        if (fakearmor) { fakearmor = false; }
                                        countMerlin++;
                                        break;
                                    case 2:
                                        theKnight.HP = MaxHP;
                                        countMerlin++;
                                        break;
                                    default:
                                        if (!Goldcoin) { Goldcoin = true; }
                                        countMerlin = 1;
                                        break;
                                }
                            Petal--;*/
                            case 13://Omega
                            {
                                Petal--;
                                if (WinOmega) {
                                    Petal--;
                                    continue;
                                }
                                if (((theKnight.level == 10) && (excalibur)) || (dragonKnight && Lionheart)) {
                                    nWin++;
                                    int Level_up = 0;
                                    WinOmega = true;
                                    Level_up = 10 - theKnight.level;
                                    MaxHP = MaxHP + Level_up * 100;
                                    if (MaxHP > 999) { MaxHP = 999; }
                                    theKnight.gil = 999;
                                    break;
                                } else {
                                    nLose++;
                                    callPhoenix(theKnight, MaxHP);
                                }
                            }
                            break;
                            case 14:
                                break;
                            case 15:
                                Petal--;
                            Katana = true;
                            break;
                            case 16: {
                                Petal--;
                                if (!lockdoor) {
                                    if (theKnight.level > (i % 10) || dragonKnight) {
                                        lockdoor = true;
                                        continue;
                                    } else { break; }
                                }

                            }
                            break;
                            case 17:
                                break;
                            case 95:// Shield
                                if (mode == 1) { if (mode == 1){
                                        if ((hash(95) < hash(96)) && (hash(95) < hash(97)))
                                            shield = true;
                                        //hash 95 nho nhi
                                        if ((hash(95) > hash(96)) && (hash(95) < hash(97)))
                                            if (spear)
                                                shield = true;
                                        if ((hash(95) > hash(97)) && (hash(95) < hash(96)))
                                            if (hair)
                                                shield = true;
                                        if ((hash(95) > hash(96)) && (hash(95) > hash(97)))
                                            if (spear && hair)
                                                shield = true;
                                        shield = true;
                                    break;
                                }
                            shield = true;
                            Petal--;
                            break;
                            case 96:// Lancelot spear
                                if (mode == 1) {          // hash 96 nho nhat
                                    if ((hash(96) < hash(95)) && (hash(96) < hash(97)))
                                        spear = true;
                                    if ((hash(96) > hash(95)) && (hash(96) < hash(97)))
                                        if (shield)
                                            spear = true;
                                    if ((hash(96) > hash(97)) && (hash(96) < hash(95)))
                                        if (hair)
                                            spear = true;
                                    if ((hash(96) > hash(95)) && (hash(96) > hash(97)))
                                        if (shield && hair)
                                            spear = 1;

                                }
                                    spear = true;
                                    break;
                                }
                            spear = true;
                            Petal--;
                            break;
                            case 97://Guinevere hair
                                if (mode == 1) {
                                    if ((hash(97) < hash(95)) && (hash(97) < hash(96)))
                                        hair = true;
                                    if ((hash(97) > hash(96)) && (hash(97) < hash(95)))
                                        if (spear)
                                            hair = true;
                                    if ((hash(97) > hash(95)) && (hash(97) < hash(96)))
                                        if (shield)
                                            hair = true;
                                    if ((hash(97) > hash(96)) && (hash(97) > hash(95)))
                                        if (spear && shield)
                                            hair  = true;

                                }
                            hair = true;
                            Petal--;
                            break;
                            case 98://Excalibur
                                if (spear && hair && shield) { excalibur = true; }
                            if (arthur) { excalibur = true; }
                            Petal--;
                            break;
                            case 99:
                                if ((excalibur || Lionheart) && !poison) {
                                    nWin++;
                                    bFlag = 1;
                                    goto GameOver;
                                } else {
                                    theKnight.HP = theKnight.HP / 3;
                                    if (theKnight.HP < 3) {
                                        theKnight.HP = 1;
                                    }
                                }
                            if (poison) {
                                if (excalibur || Lionheart) {
                                    nWin++;
                                    theKnight.HP = theKnight.HP / 3;
                                    if (theKnight.HP < 3)
                                        theKnight.HP = 1;
                                    bFlag = 1;
                                    goto GameOver;
                                    break;
                                }
                                Petal--;

                                break;
                            }
            }//switch
                        if (Petal == 0) { return NULL; }
                        if (win) {
                            win = false;
                            theKnight.level++;
                            if (MaxHP >= 999) { MaxHP = 999; } else { MaxHP = MaxHP + 100; }
                        }
                        if (poisoncount == 0) { poison = false; } else { poisoncount--; }
                        if (fakearmorcount == 0) { fakearmor = false; } else { fakearmorcount--; }
                        //Odin

        }//for


    }//for

    GameOver:
    // success or failure?
    if (bFlag){
        pReturn = new report;
        pReturn->nLose = nLose;
        pReturn->nWin = nWin;
        pReturn->nPetal = Petal;
    } else return NULL;
    return pReturn;
}