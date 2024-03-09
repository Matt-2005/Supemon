#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supemon.h"
#include "player.h"
#include "battle.h"

void initBattle(Battle *battle, Player *player, const Supemon *supemon1, const Supemon *supemon2, const Supemon *supemon3) {
    if (player->selectedSupemon == 1)
    {
        int continuer = 1;
        while (continuer)
        {
            printf("+----------------------------+\n");
            printf("|What will you do?           |\n|     1 - Move               |\n|     2 - Change Supemon     |\n|     3 - Use item           |\n|     4 - Capture            |\n|     5 - Run away           |\n");
            printf("+----------------------------+\n");
            printf("1, 2, 3, 4 or 5 ? : ");
            scanf("%d", &battle->userGlobalChoise);

            switch (battle->userGlobalChoise)
            {
                case 1:
                    printf("1 - %s\n2 - %s\n2 - Cancel\n", supemon1->moves[0], supemon1->moves[1]);
                    printf("1, 2 or 3 ? :\n");
                    scanf("%d", &battle->moveChoise);
                    if (battle->moveChoise == 1)
                    {
                        printf("%s", supemon1->moves[0]);
                        // a implementer avec la logique des move apres
                        continuer = 0;
                    }
                    else if (battle->moveChoise == 2)
                    {
                        printf("%s", supemon1->moves[1]);
                        // a implementer avec la logique des move apres
                        continuer = 0;
                    }
                    else if (battle->moveChoise == 3)
                    {
                        
                    }
            
                break;

                case 2:
                    printf("+--------------------------------+\n");
                    printf("|which pokemon will you take?    |\n|     1 - %s              |\n|     2 - %s                       |\n|     3 - %s                       |\n", player->supemonList[0], player->supemonList[1], player->supemonList[2]);
                    printf("+--------------------------------+\n");
                    printf("1, 2 or 3 ? : ");
                    scanf("%d", &battle->SupemonChoise);
                    if (battle->SupemonChoise == 1)
                    {
                        printf("You choose %s\n", player->supemonList[0]);
                        printf("\n");
                    }
                    else if (battle->SupemonChoise == 2)
                    {
                        printf("You choose %s\n", player->supemonList[1]);
                        printf("\n");
                    }
                    else if (battle->SupemonChoise == 3)
                    {
                        printf("You choose %s\n", player->supemonList[2]);
                        printf("\n");
                    }
                break;

                case 3:
                    printf("Here are items that you have:\n1 - %s\n2 - %s\n3 - %s\n", player->itemsList[0], player->itemsList[1], player->itemsList[2]);
                    printf("1, 2 or 3 ? :\n");
                    scanf("%d", &battle->ItemChoise);
                    if (battle->ItemChoise == 1)
                    {
                        printf("Vous utilisez votre item 1 (a implementer)");
                        continuer = 0;
                    }
                    else if (battle->ItemChoise == 2)
                    {
                        printf("Vous utilisez votre item 2 (a implementer)");
                        continuer = 0;
                    }
                    else if (battle->ItemChoise == 3)
                    {
                        printf("Vous utilisez votre item 3 (a implementer)");
                        continuer = 0;
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
    else if (player->selectedSupemon == 2)
    {
        int continuer = 1;
        while (continuer)
        {
            printf("+----------------------------+\n");
            printf("|What will you do?           |\n|     1 - Move               |\n|     2 - Change Supemon     |\n|     3 - Use item           |\n|     4 - Capture            |\n|     5 - Run away           |\n");
            printf("+----------------------------+\n");
            printf("1, 2, 3, 4 or 5 ? : ");
            scanf("%d", &battle->userGlobalChoise);

            switch (battle->userGlobalChoise)
            {
                case 1:
                    printf("1 - %s\n2 - %s\n2 - Cancel\n", supemon2->moves[0], supemon2->moves[1]);
                    printf("1, 2 or 3 ? :\n");
                    scanf("%d", &battle->moveChoise);
                    if (battle->moveChoise == 1)
                    {
                        printf("%s", supemon2->moves[0]);
                        // a implementer avec la logique des move apres
                        continuer = 0;
                    }
                    else if (battle->moveChoise == 2)
                    {
                        printf("%s", supemon2->moves[1]);
                        // a implementer avec la logique des move apres
                        continuer = 0;
                    }
                    else if (battle->moveChoise == 3)
                    {
                        
                    }
            
                break;

                case 2:
                    printf("+--------------------------------+\n");
                    printf("|which pokemon will you take?    |\n|     1 - %s              |\n|     2 - %s                       |\n|     3 - %s                       |\n", player->supemonList[0], player->supemonList[1], player->supemonList[2]);
                    printf("+--------------------------------+\n");
                    printf("1, 2 or 3 ? : ");
                    scanf("%d", &battle->SupemonChoise);
                    if (battle->SupemonChoise == 1)
                    {
                        printf("You choose %s\n", player->supemonList[0]);
                        printf("\n");
                    }
                    else if (battle->SupemonChoise == 2)
                    {
                        printf("You choose %s\n", player->supemonList[1]);
                        printf("\n");
                    }
                    else if (battle->SupemonChoise == 3)
                    {
                        printf("You choose %s\n", player->supemonList[2]);
                        printf("\n");
                    }
                break;

                case 3:
                    printf("Here are items that you have:\n1 - %s\n2 - %s\n3 - %s\n", player->itemsList[0], player->itemsList[1], player->itemsList[2]);
                    printf("1, 2 or 3 ? :\n");
                    scanf("%d", &battle->ItemChoise);
                    if (battle->ItemChoise == 1)
                    {
                        printf("Vous utilisez votre item 1 (a implementer)");
                        continuer = 0;
                    }
                    else if (battle->ItemChoise == 2)
                    {
                        printf("Vous utilisez votre item 2 (a implementer)");
                        continuer = 0;
                    }
                    else if (battle->ItemChoise == 3)
                    {
                        printf("Vous utilisez votre item 3 (a implementer)");
                        continuer = 0;
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
    else if (player->selectedSupemon == 3)
    {
        int continuer = 1;
        while (continuer)
        {
            printf("+----------------------------+\n");
            printf("|What will you do?           |\n|     1 - Move               |\n|     2 - Change Supemon     |\n|     3 - Use item           |\n|     4 - Capture            |\n|     5 - Run away           |\n");
            printf("+----------------------------+\n");
            printf("1, 2, 3, 4 or 5 ? : ");
            scanf("%d", &battle->userGlobalChoise);

            switch (battle->userGlobalChoise)
            {
                case 1:
                    printf("1 - %s\n2 - %s\n2 - Cancel\n", supemon3->moves[0], supemon3->moves[1]);
                    printf("1, 2 or 3 ? :\n");
                    scanf("%d", &battle->moveChoise);
                    if (battle->moveChoise == 1)
                    {
                        printf("%s", supemon3->moves[0]);
                        // a implementer avec la logique des move apres
                        continuer = 0;
                    }
                    else if (battle->moveChoise == 2)
                    {
                        printf("%s", supemon3->moves[1]);
                        // a implementer avec la logique des move apres
                        continuer = 0;
                    }
                    else if (battle->moveChoise == 3)
                    {
                        
                    }
            
                break;

                case 2:
                    printf("+--------------------------------+\n");
                    printf("|which pokemon will you take?    |\n|     1 - %s              |\n|     2 - %s                       |\n|     3 - %s                       |\n", player->supemonList[0], player->supemonList[1], player->supemonList[2]);
                    printf("+--------------------------------+\n");
                    printf("1, 2 or 3 ? : ");
                    scanf("%d", &battle->SupemonChoise);
                    if (battle->SupemonChoise == 1)
                    {
                        printf("You choose %s\n", player->supemonList[0]);
                        printf("\n");
                    }
                    else if (battle->SupemonChoise == 2)
                    {
                        printf("You choose %s\n", player->supemonList[1]);
                        printf("\n");
                    }
                    else if (battle->SupemonChoise == 3)
                    {
                        printf("You choose %s\n", player->supemonList[2]);
                        printf("\n");
                    }
                break;

                case 3:
                    printf("Here are items that you have:\n1 - %s\n2 - %s\n3 - %s\n", player->itemsList[0], player->itemsList[1], player->itemsList[2]);
                    printf("1, 2 or 3 ? :\n");
                    scanf("%d", &battle->ItemChoise);
                    if (battle->ItemChoise == 1)
                    {
                        printf("Vous utilisez votre item 1 (a implementer)");
                        continuer = 0;
                    }
                    else if (battle->ItemChoise == 2)
                    {
                        printf("Vous utilisez votre item 2 (a implementer)");
                        continuer = 0;
                    }
                    else if (battle->ItemChoise == 3)
                    {
                        printf("Vous utilisez votre item 3 (a implementer)");
                        continuer = 0;
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
    

}
