#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supemon.h"
#include "player.h"

void initPlayer(Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3) {
    printf("What is your name?\n");
    scanf("%s", player->name);
    printf("Welcome %s! Here are the availeble Supemons:\n", player->name);
    displaySupemon(supemon1);
    displaySupemon(supemon2);
    displaySupemon(supemon3);
    printf("Choose 1 of them to start the game. 1, 2 or 3 ?\n");
    scanf("%d", &player->selectedSupemon);
    if (player->selectedSupemon == 1)
    {
        displaySupemon(supemon1);
        player->supemonList[0] = supemon1->name;
    }  
    else if (player->selectedSupemon == 2)
    {
        displaySupemon(supemon2);
        player->supemonList[1] = supemon2->name;
    }
    else if (player->selectedSupemon == 3)
    {
        displaySupemon(supemon3);
        player->supemonList[2] = supemon3->name;
    }
    printf("How many Supemons coins do you have?\n");
    scanf("%d", &player->supcoins);
    printf("Where do you want to go?\n1 - Into the Wild\n2 - To the shop\n3 - In the Supémon Center\n4 - Leave the Game\n");
    printf("1, 2, 3 or 4 ? :\n");
    scanf("%d", &player->location);
}

