#ifndef PLAYER_H
#define PLAYER_H
#include "supemon.h"

typedef struct {
    char name[50];
    Supemon supemonList[3];
    Supemon supemonEnemyList[6]; 
    int selectedSupemon;
    int supcoins;
    char itemsList[3][50];
    int location;
} Player ;

void initPlayer(Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3, const Supemon *supemonEnemy1, const Supemon *supemonEnemy2, const Supemon *supemonEnemy3);

#endif