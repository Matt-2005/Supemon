#ifndef SUPCENTER_H
#define SUPCENTER_H
#include "player.h"
#include "supemon.h"

typedef struct{
    int userChoise;
    int supemonChoise;
} Supcenter;

void initSupcenter(Supcenter *supcenter, Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3, const Supemon *supemonEnemy1, const Supemon *supemonEnemy2, const Supemon *supemonEnemy3, const Items *item1, const Items *item2, const Items *item3);

#endif