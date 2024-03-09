#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supemon.h"
#include "player.h"
#include "battle.h" 

int main() 
{
    Supemon supemon1;
    Supemon supemon2;
    Supemon supemon3;
    Supemon supemonEnemy1;
    Supemon supemonEnemy2;
    Supemon supemonEnemy3;
    Player player;
    Battle battle;

    initSupemon(&supemon1, "Supmander", 1, 10, 1, 1, 1, 2, 1, "Scratch", "Growl");
    initSupemon(&supemon2, "Supasaur", 1, 9, 1, 1, 3, 2, 2, "Pound", "Foliage");
    initSupemon(&supemon3, "Supirtle", 1, 11, 1, 2, 2, 1, 2, "Pound", "Shell");
    initSupemon(&supemonEnemy1, "Blaziken", 1, 12, 2, 1, 2, 2, 3, "Flame Kick", "Fire Spin");
    initSupemon(&supemonEnemy2, "Torterra", 1, 15, 1, 3, 1, 2, 1, "Earthquake", "Leaf Storm");
    initSupemon(&supemonEnemy3, "Electrivire", 1, 11, 2, 2, 2, 3, 2, "Thunder Punch", "Thunderbolt");




    initPlayer(&player, &supemon1, &supemon2, &supemon3, &supemonEnemy1, &supemonEnemy2, &supemonEnemy3);

    int choix = 0;
    while(choix != 4) { // Supposons que 4 soit l'option pour quitter le jeu
        printf("+------------------------------+\n");
        printf("|Where do you want to go?      |\n|     1 - Into the Wild        |\n|     2 - To the shop          |\n|     3 - In the Supemon Center|\n|     4 - Leave the Game       |\n");
        printf("+------------------------------+\n");
        printf("1, 2, 3 or 4 ? : \n");
        scanf("%d", &player.location);

        switch(player.location) {
            case 1:
                printf("You are now in the wild\n");
                initBattle(&battle, &player, &supemon1, &supemon2, &supemon3, &supemonEnemy1, &supemonEnemy2, &supemonEnemy3);
                break;
            case 2:
                // Logique pour le magasin
                break;
            case 3:
                // Logique pour le centre Supémon
                break;
            case 4:
                printf("Merci d'avoir joué !\n");
                break;
            default:
                printf("Choix non valide, veuillez réessayer.\n");
        }
    }



    return 0;
}

