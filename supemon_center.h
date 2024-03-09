#ifndef SUPCENTER_H
#define SUPCENTER_H
#include "player.h"
#include "supemon.h"

typedef struct{
    int userChoise;
    int supemonChoise;
} Supcenter;

void initSupcenter(Supcenter *supcenter, Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3);

#endif