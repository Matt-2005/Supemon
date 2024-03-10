#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cJSON.h"
#include "player.h"
#include "save.h"

void savePlayerData(const Player *player, const char *save_game) {
    cJSON *root = cJSON_CreateObject();

    cJSON_AddStringToObject(root, "player_name", player->name);
    
    cJSON_AddNumberToObject(root, "supcoins", player->supcoins);

    cJSON *supemonsArray = cJSON_CreateArray();
    for (int i = 0; i < 3; i++) {
        cJSON *supemonObj = cJSON_CreateObject();
        cJSON_AddStringToObject(supemonObj, "name", player->supemonList[i].name);
        cJSON_AddNumberToObject(supemonObj, "level", player->supemonList[i].level);
        cJSON_AddNumberToObject(supemonObj, "hp", player->supemonList[i].hp);
        cJSON_AddNumberToObject(supemonObj, "max_hp", player->supemonList[i].max_hp);
        cJSON_AddItemToArray(supemonsArray, supemonObj);
    }
    cJSON_AddItemToObject(root, "supemons", supemonsArray);

    cJSON *itemsArray = cJSON_CreateArray();
    for (int i = 0; i < 3; i++) {
        cJSON *itemObj = cJSON_CreateObject();
        cJSON_AddStringToObject(itemObj, "name", player->itemsList[i].name);
        cJSON_AddItemToArray(itemsArray, itemObj);
    }
    cJSON_AddItemToObject(root, "items", itemsArray);

    FILE *file = fopen(save_game, "w");
    if (file == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier de sauvegarde.\n");
        cJSON_Delete(root);
        return;
    }
    char *jsonString = cJSON_Print(root);
    fputs(jsonString, file);
    fclose(file);
    free(jsonString);

    cJSON_Delete(root);
}
