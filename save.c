#include <stdio.h>
#include "player.h"

void savePlayerData(const Player *player, const char *filename) { //ajouter nom du fichier de sauvegarde
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error 404 not found\n");
        return;
    }

    fprintf(file, "Nom du joueur : %s\n", player->name);
    fprintf(file, "Supcoins : %d\n", player->supcoins);

    fprintf(file, "Supemons :\n");
    for (int i = 0; i < 3; i++) {
        fprintf(file, "Nom : %s, Niveau : %d, HP : %d/%d\n",
                player->supemonList[i].name,
                player->supemonList[i].level,
                player->supemonList[i].hp,
                player->supemonList[i].max_hp);
    }

    fprintf(file, "Items :\n");
    for (int i = 0; i < 3; i++) {
        fprintf(file, "Name : %s, Quantity : %d\n",
                player->itemsList[i].name,
                player->itemsList[i].quantity);
    }

    fclose(file);
}
