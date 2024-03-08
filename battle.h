#ifndef BATTLE_H
#define BATTLE_H

typedef struct{
    int userGlobalChoise;
    int moveChoise;
    int SupemonChoise;
    int ItemChoise;
    int captureChoise;
    int runAwayChoise;
} Battle ;

void initBattle(Battle *battle, const Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3, int userGlobalChoise, int moveChoise, int SupemonChoise, int ItemChoise, int captureChoise, int runAweyChoise);

#endif