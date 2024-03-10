#include <stdio.h>
#include <stdlib.h>
#include "save.h"
#include "player.h"
#include "supemon.h"
#include "items.h"
#include "move.h"
#include "battle.h"
#include "shop.h"
#include "supemon_center.h"


// Fonction de sauvegarde
void saveGame(Player *player) { 
    FILE *file = fopen("savegame.dat", "wb");
    // Sauvegarde des données du joueur
    fwrite(player, sizeof(Player), 1, file);

    // Sauvegarde des Supémons et de leurs moves
    for (int i = 0; i < 6; i++) { // Pour supposer que le joueur peut avoir jusqu'à 6 Supémons
        fwrite(&player->supemonList[i], sizeof(Supemon), 1, file);
        for (int j = 0; j < 2; j++) { // Chaque Supémon peut avoir jusqu'à 2 moves
            fwrite(&player->supemonList[i].move[j], sizeof(Move), 1, file);
        }
    }

    // Sauvegarde des items
    for (int i = 0; i < 3; i++) { // Pour supposer que le joueur peut avoir jusqu'à 3 types d'items
        fwrite(&player->itemsList[i], sizeof(Items), 1, file);
    }

    fclose(file);
    printf("Jeu sauvegarde avec succes !\n");
}

// Fonction de chargement
void loadGame(Player *player) {
    FILE *file = fopen("savegame.dat", "rb");
    if (!file) {
        printf("Aucune sauvegarde trouvée.\n");
        return;
    }

    // Chargement des données du joueur
    fread(player, sizeof(Player), 1, file);

    // Chargement des Supémons et de leurs moves
    for (int i = 0; i < 6; i++) {
        fread(&player->supemonList[i], sizeof(Supemon), 1, file);
        for (int j = 0; j < 2; j++) {
            fread(&player->supemonList[i].move[j], sizeof(Move), 1, file);
        }
    }

    // Chargement des items
    for (int i = 0; i < 3; i++) {
        fread(&player->itemsList[i], sizeof(Items), 1, file);
    }

    fclose(file);
    printf("Jeu charge avec succes !\n");
    // printf("You ran away\n");
    // printf("+------------------------------+\n");
    // printf("|You have %d supcoins         |\n", player->supcoins);
    // printf("|Where do you want to go?      |\n|     1 - Into the Wild        |\n|     2 - To the shop          |\n|     3 - In the Supemon Center|\n|     4 - Leave the Game       |\n");
    // printf("+------------------------------+\n");
    // printf("1, 2, 3 or 4 ? : ");
    // scanf("%d",&player->location);
    // if (player->location == 1)
    // {
    //     Battle battle;
    //     initBattle(&battle, player, supemon1, supemon2, supemon3, supemonEnemy1, supemonEnemy2, supemonEnemy3, item1, item2, item3, move1, move2, move3, move4, move5, move6, move7, move8, move9, move10);
    // }
    // else if (player->location == 2)
    // {
    //     Shop shop;
    //     initShop(&shop, player, item1, item2, item3, supemon1, supemon2, supemon3, supemonEnemy1, supemonEnemy2, supemonEnemy3, move1, move2, move3, move4, move5, move6, move7, move8, move9, move10);
    // }
    // else if (player->location == 3)
    // {
    //     Supcenter supcenter;
    //     initSupcenter(&supcenter, player, supemon1, supemon2, supemon3, supemonEnemy1, supemonEnemy2, supemonEnemy3, item1, item2, item3, move1, move2, move3, move4, move5, move6, move7, move8, move9, move10);
    // }
    // else if (player->location == 4)
    // {
    //     printf("Goodbye, your progression has been saved !\n");
    //     saveGame(player);
        
    // }
}
