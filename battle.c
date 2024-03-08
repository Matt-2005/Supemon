#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supemon.h"
#include "player.h"
#include "battle.h"

void initBattle(Battle *battle, const Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3, int userGlobalChoise, int moveChoise, int SupemonChoise, int ItemChoise, int captureChoise, int runAweyChoise) {
    // Il faut d'occuper de la gestion de l'enemi
    printf("What will you do?\n1 - Move\n2 - Change Supémon\n3 - Use item\n4 - Capture\n5 - Run away\n");
    printf("1, 2, 3, 4 or 5 ? :");
    scanf("%d", &userGlobalChoise);
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
            scanf("%d", &SupemonChoise);
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
            print("Here are items that you have:\n1 - %s\n2 - %s\n3 - %s", player->items[0], player->items[1], player->items[2]);
            printf("1, 2 or 3 ? :\n");
            scanf("%d", &ItemChoise);
        }
        
    };
    
    
};
