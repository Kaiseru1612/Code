#ifndef _definition_h_
#include "defs.h"
#define _definition_h_
#endif

int levelOcal(int i) {
    int b = i % 10;
    int level0;
    level0 = i > 6 ? (b > 5 ? b : 5) : b;
    return level0;
}
report* walkthrough(knight& theKnight, castle arrCastle[], int nCastle, int mode, int nPetal)
{
    report* pReturn = new report;
    int bFlag = 0;
    int nWin = 0, nLose = 0, Petal = nPetal;
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
LinkStart:
    for (int j = 0; j < nCastle; j++) {
        for (int i = 0; i < arrCastle->nEvent; i++) {
            if (arrCastle[j].arrEvent[i] == 0) { break; }
            switch (arrCastle[j].arrEvent[i]) {
            case 1:
            case 3:
            case 4:
            case 5:
                break;
            case 95:// Shield
                shield = true;
                Petal--;
                break;
            case 96:// Lancelot spear
                if (!spear) { spear = true; }
                Petal--;
                break;
            case 97://Guinevere hair
                hair = true;
                Petal--;
                break;
            case 98://Excalibur
                if (spear && hair && shield) { excalibur = true; }
                if (arthur) { excalibur = true; }
                Petal--;
                break;
            case 99:
                if (excalibur) {
                    nWin++;
                    bFlag = 1;
                    Petal--;
                    WinUlti = true;
                    goto GameOver;
                }
                else {
                    nLose++;
                    theKnight.HP = theKnight.HP / 3;
                    if (theKnight.HP < 3) {
                        theKnight.HP = 1;

                    }
                    Petal--;
                }
                break;
            }
        }
    }
    if (!WinUlti) { goto LinkStart; }
    // success or failure?
GameOver:
    if (bFlag) {
        pReturn->nLose = nLose;
        pReturn->nWin = nWin;
        pReturn->nPetal = Petal;
    }
    return pReturn;
}