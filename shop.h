#ifndef SHOP_H
#define SHOP_H
#include "items.h"
#include "player.h"
#include "supemon.h"


typedef struct{
    int itemsChoise;
    int buyChoise;
} Shop;

void initShop(Shop *shop, Player *player, const Items *item1, const Items *item2, const Items *item3, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3, const Supemon *supemonEnemy1, const Supemon *supemonEnemy2, const Supemon *supemonEnemy3);


#endif