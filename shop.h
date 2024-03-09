#ifndef SHOP_H
#define SHOP_H
#include "items.h"
#include "player.h"


typedef struct{
    int itemsChoise;
    int buyChoise;
} Shop;

void initShop(Shop *shop, Player *player, const Items *item1, const Items *item2, const Items *item3);


#endif