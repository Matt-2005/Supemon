#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supemon.h"
#include "player.h"

void initPlayer(Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3) {
    printf("What is your name?\n");
    scanf("%s", player->name);
    printf("Hello %s!\nWelcome in Supémon World\n\n+----------------------------+\n| Choose your starter Supémon: |\n", player->name);
    printf("|     1 - %s                 |\n", supemon1->name);
    printf("|     2 - %s                 |\n", supemon2->name);
    printf("|     3 - %s                 |\n", supemon3->name);
    printf("1, 2 or 3 :\n");
    scanf("%d", &player->selectedSupemon);
    if (player->selectedSupemon == 1)
    {
        displaySupemon(supemon1);
    }  
    else if (player->selectedSupemon == 2)
    {
        displaySupemon(supemon2);
    }
    else if (player->selectedSupemon == 3)
    {
        displaySupemon(supemon3);
    }
    printf("How many Supemons coins do you have?\n");
    scanf("%d", &player->supcoins);
    printf("Where do you want to go?\n1 - Into the Wild\n2 - To the shop\n3 - In the Supémon Center\n4 - Leave the Game\n");
    printf("1, 2, 3 or 4 ? :\n");
    scanf("%d", &player->location);
}

