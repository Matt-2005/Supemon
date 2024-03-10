#ifndef SAVE_H
#define SAVE_H
#include "player.h"

typedef struct {

} Save;


void saveGame(Player *player);
void loadGame(Player *player, Supemon *supemon1, Supemon *supemon2, Supemon *supemon3, Supemon *supemonEnemy1, Supemon *supemonEnemy2, Supemon *supemonEnemy3, Items *item1, Items *item2, Items *item3, Move *move1, Move *move2, Move *move3, Move *move4, Move *move5, Move *move6, Move *move7, Move *move8, Move *move9, Move *move10);

#endif