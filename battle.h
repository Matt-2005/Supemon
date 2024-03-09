#ifndef BATTLE_H
#define BATTLE_H
#include "supemon.h"
#include "player.h"

typedef struct{
    int userGlobalChoise;
    int moveChoise;
    int SupemonChoise;
    int ItemChoise;
    int captureChoise;
    int runAwayChoise;
} Battle;

void initBattle(Battle *battle, Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3);

#endif