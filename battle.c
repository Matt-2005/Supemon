#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supemon.h"
#include "player.h"
#include "battle.h"

void initBattle(Battle *battle, const Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3, int userGlobalChoise, int moveChoise, int SupemonChoise, int ItemChoise, int captureChoise, int runAweyChoise) {
    // Il faut d'occuper de la gestion de l'enemi
    printf("+------------------------------+\n");
    printf("|Where do you want to go?      |\n|     1 - Into the Wild        |\n|     2 - To the shop          |\n|     3 - In the Supemon Center|\n|     4 - Leave the Game       |\n");
    printf("+------------------------------+\n");
    printf("1, 2, 3 or 4 ? : ");
    scanf("%d", &battle->userGlobalChoise);
    if (player->selectedSupemon == 1)
    {
        if (battle->userGlobalChoise == 1)
        {
            printf("1 - %s\n2 - %s\n2 - Cancel\n", supemon1->moves[0], supemon1->moves[1]);
            printf("1, 2 or 3 ? :\n");
            scanf("%d", &moveChoise);
            if (battle->moveChoise == 1)
            {
                printf("%s", supemon1->moves[0]);
                // a implementer avec la logique des move apres
            }
            else if (battle->moveChoise == 2)
            {
                printf("%s", supemon1->moves[1]);
                // a implementer avec la logique des move apres
            }
            else if (battle->moveChoise == 3)
            {
                void initBattle(Battle *battle, const Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3, int userGlobalChoise, int moveChoise, int SupemonChoise, int ItemChoise, int captureChoise, int runAweyChoise);
            }
            
            
            
        }
        else if (battle->userGlobalChoise == 2)
        {
            printf("Here are Supemons that you have :\n1 - %s\n2 - %s\n3 - %s\n", player->supemonList[0],player->supemonList[1], player->supemonList[2]);
            printf("1, 2 or 3 ? :\n");
            scanf("%d", &battle->SupemonChoise);
            if (battle->SupemonChoise == 1)
            {
                void initBattle(Battle *battle, const Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3, int userGlobalChoise, int moveChoise, int SupemonChoise, int ItemChoise, int captureChoise, int runAweyChoise);
            }
            else if (battle->SupemonChoise == 2)
            {
                void initBattle(Battle *battle, const Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3, int userGlobalChoise, int moveChoise, int SupemonChoise, int ItemChoise, int captureChoise, int runAweyChoise);
            }
            else if (battle->SupemonChoise == 3)
            {
                void initBattle(Battle *battle, const Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3, int userGlobalChoise, int moveChoise, int SupemonChoise, int ItemChoise, int captureChoise, int runAweyChoise);
            }
        }
        else if (battle->userGlobalChoise == 3)
        {
            printf("Here are items that you have:\n1 - %s\n2 - %s\n3 - %s", player->items[0], player->items[1], player->items[2]);
            printf("1, 2 or 3 ? :\n");
            scanf("%d", &ItemChoise);
            if (battle->ItemChoise == 1)
            {
                printf("Vous utilisez votre item 1 (a implementer)");
            }
            else if (battle->ItemChoise == 2)
            {
                printf("Vous utilisez votre item 2 (a implementer)");
            }
            else if (battle->ItemChoise == 3)
            {
                printf("Vous utilisez votre item 3 (a implementer)");
            }
        }
        
    };
    
    
};
