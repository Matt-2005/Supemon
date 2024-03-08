#ifndef PLAYER_H
#define PLAYER_H
#include "supemon.h"

typedef struct {
    char name[50];
    char supemonList[3]; 
    int selectedSupemon;
    int supcoins;
    char items[3][50];
    int location;
} Player ;

void initPlayer(Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3);

#endif