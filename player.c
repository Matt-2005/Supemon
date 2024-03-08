#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supemon.h"
#include "player.h"

void initPlayer(Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3) {
    printf("What is your name?\n");
    scanf("%s", player->name);
    printf("Hello %s!\nWelcome in Supemon World\n\n+------------------------------+\n| Choose your starter Supemon: |\n", player->name);
    printf("|     1 - %s            |\n", supemon1->name);
    printf("|     2 - %s             |\n", supemon2->name);
    printf("|     3 - %s             |\n", supemon3->name);
    printf("+------------------------------+\n");
    printf("1, 2 or 3 : ");
    scanf("%d", &player->selectedSupemon);
    if (player->selectedSupemon == 1)
    {
        printf("\n");
        printf("%s\n", supemon1->name);
        printf("--------------------------------\n");
        printf("HP: %d     Lvl: %d\n", supemon1->hp, supemon1->level);
        printf("Atk: %d     Def: %d\n", supemon1->attack, supemon1->defense);
        printf("Acc: %d     Eva: %d\n", supemon1->accuracy, supemon1->evasion);
        printf("\n");
    }  
    else if (player->selectedSupemon == 2)
    {
        printf("\n");
        printf("%s\n", supemon2->name);
        printf("--------------------------------\n");
        printf("HP: %d      Lvl: %d\n", supemon2->hp, supemon2->level);
        printf("Atk: %d     Def: %d\n", supemon2->attack, supemon2->defense);
        printf("Acc: %d     Eva: %d\n", supemon2->accuracy, supemon2->evasion);
        printf("\n");
    }
    else if (player->selectedSupemon == 3)
    {
        printf("\n");
        printf("%s\n", supemon3->name);
        printf("--------------------------------\n");
        printf("HP: %d     Lvl: %d\n", supemon3->hp, supemon3->level);
        printf("Atk: %d     Def: %d\n", supemon3->attack, supemon3->defense);
        printf("Acc: %d     Eva: %d\n", supemon3->accuracy, supemon3->evasion);
        printf("\n");
    }
    // printf("How many Supemons coins do you have?\n");
    // scanf("%d", &player->supcoins);
    printf("+------------------------------+\n");
    printf("|Where do you want to go?      |\n|     1 - Into the Wild        |\n|     2 - To the shop          |\n|     3 - In the Supemon Center|\n|     4 - Leave the Game       |\n");
    printf("+------------------------------+\n");
    printf("1, 2, 3 or 4 ? : ");
    scanf("%d", &player->location);
}

