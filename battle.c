#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "supemon.h"
#include "player.h"
#include "battle.h"

void initBattle(Battle *battle, Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3, const Supemon *supemonEnemy1, const Supemon *supemonEnemy2, const Supemon *supemonEnemy3) {
    srand(time(NULL));
    int randomNumber = rand() % 3;
    int playerTurn = 2;
    if (playerTurn == 1)
    {
        playerTurn = 2;
    } else if (playerTurn == 2)
    {
        playerTurn = 1;
    }

    int continuer = 1;
    while (continuer)
    {
        printf("Your turn...\n");
        printf("\n");
        printf("%s (enemy)\n", player->supemonEnemyList[randomNumber].name);
        printf("--------------------------------\n");
        printf("HP: %d/%d     Lvl: %d\n", player->supemonEnemyList[randomNumber].hp,player->supemonEnemyList[randomNumber].max_hp, player->supemonEnemyList[randomNumber].level);
        printf("Atk: %d     Def: %d\n", player->supemonEnemyList[randomNumber].attack, player->supemonEnemyList[randomNumber].defense);
        printf("Acc: %d     Eva: %d\n", player->supemonEnemyList[randomNumber].accuracy, player->supemonEnemyList[randomNumber].evasion);
        printf("\n");
        printf("+----------------------------+\n");
        printf("%s (%s)\n", player->currentSupemon[0].name, player->name);
        printf("--------------------------------\n");
        printf("HP: %d/%d     Lvl: %d\n", player->currentSupemon[0].hp, player->currentSupemon[0].max_hp, player->currentSupemon[0].level);
        printf("Atk: %d     Def: %d\n", player->currentSupemon[0].attack, player->currentSupemon[0].defense);
        printf("Acc: %d     Eva: %d\n", player->currentSupemon[0].accuracy, player->currentSupemon[0].evasion);
        printf("--------------------------------\n");


        printf("+----------------------------+\n");
        printf("|What will you do?           |\n|     1 - Move               |\n|     2 - Change Supemon     |\n|     3 - Use item           |\n|     4 - Capture            |\n|     5 - Run away           |\n");
        printf("+----------------------------+\n");
        printf("1, 2, 3, 4 or 5 ? : ");
        scanf("%d", &battle->userGlobalChoise);

        switch (battle->userGlobalChoise)
        {
            case 1:
                printf("1 - %s\n2 - %s\n2 - Cancel\n", player->currentSupemon->moves[0], player->currentSupemon->moves[1]);
                printf("1, 2 or 3 ? :\n");
                scanf("%d", &battle->moveChoise);
                if (battle->moveChoise == 1)
                {
                    printf("%s", player->currentSupemon->moves[0]);
                    // a implementer avec la logique des move apres
                    continuer = 0;
                }
                else if (battle->moveChoise == 2)
                {
                    printf("%s", player->currentSupemon->moves[1]);
                    // a implementer avec la logique des move apres
                    continuer = 0;
                }
                else if (battle->moveChoise == 3)
                {
                    
                }
        
            break;

            case 2:
                printf("+--------------------------------+\n");
                printf("|which pokemon will you take?    |\n|     1 - %s              |\n|     2 - %s               |\n|     3 - %s               |\n", player->supemonList[0].name, player->supemonList[1].name, player->supemonList[2].name);
                printf("+--------------------------------+\n");
                printf("1, 2 or 3 ? : ");
                scanf("%d", &battle->SupemonChoise);
                if (battle->SupemonChoise == 1)
                {
                    printf("You choose %s\n", player->supemonList[0].name);
                    player->currentSupemon[0] = *supemon1;
                    printf("\n");
                }
                else if (battle->SupemonChoise == 2)
                {
                    printf("You choose %s\n", player->supemonList[1].name);
                    player->currentSupemon[0] = *supemon2;
                    printf("\n");
                }
                else if (battle->SupemonChoise == 3)
                {
                    printf("You choose %s\n", player->supemonList[2].name);
                    player->currentSupemon[0] = *supemon3;
                    printf("\n");
                }
            break;

            case 3:
                printf("Here are items that you have:\n1 - %s\n2 - %s\n3 - %s\n", player->itemsList[0].name, player->itemsList[1].name, player->itemsList[2].name);
                printf("1, 2 or 3 ? :\n");
                scanf("%d", &battle->ItemChoise);
                if (battle->ItemChoise == 1)
                {
                    printf("You are using %s\n", player->itemsList[0].name);
                    player->currentSupemon[0].max_hp += player->itemsList[0].hpGain;
                    player->currentSupemon[0].hp += player->itemsList[0].hpGain;
                }
                else if (battle->ItemChoise == 2)
                {
                    printf("You are using %s\n", player->itemsList[1].name);
                    player->currentSupemon[0].max_hp += player->itemsList[1].hpGain;
                    player->currentSupemon[0].hp += player->itemsList[1].hpGain;
                }
                else if (battle->ItemChoise == 3)
                {
                    printf("You are using %s\n", player->itemsList[2].name);
                    player->currentSupemon[0].level += player->itemsList[2].levelGain;
                }
            break;

            case 4:
                printf("+------------------------------------------------+\n");
                printf("|Are you sure you want to capture the supemon?   |\n|     1 - Yes                                    |\n|     2 - No                                     |\n");
                printf("+------------------------------------------------+\n");
                printf("1 or 2 ? : ");
                scanf("%d", &battle->captureChoise);
                if (battle->captureChoise == 1)
                {
                    printf("fonction de capture a implementer");
                    continuer = 0;
                }
                else if (battle->captureChoise == 2)
                {
                    printf("You don't want to capture the supemon");
                }
            break;

            case 5:
                printf("+----------------------------------+\n");
                printf("|Are you sure you want to run away?|\n|     1 - Yes                      |\n|     2 - No                       |\n");
                printf("+----------------------------------+\n");
                printf("1 or 2 ? : ");
                scanf("%d", &battle->runAwayChoise);
                if (battle->runAwayChoise == 1)
                {
                    printf("fonction de fuite a implementer\n");
                    continuer = 0;
                }
                else if (battle->runAwayChoise == 2)
                {
                    printf("You don't want to run away\n");
                }
            break;    

            default:
                continuer = 0;
                break;
        }

    }
}
