#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supemon.h"
#include "player.h"
#include "battle.h"
#include "move.h" 
#include "items.h"

int main() 
{
    Supemon supemon1;
    Supemon supemon2;
    Supemon supemon3;
    Supemon supemonEnemy1;
    Supemon supemonEnemy2;
    Supemon supemonEnemy3;
    Items item1;
    Items item2;
    Items item3;


    Move scratch;
    Move grawl;
    Move pound;
    Move foliage;
    Move shell;
    Move tackle;
    Move tailwhip;
    Move gust;
    Move sandattack;
    Move stringshot;

    Player player;
    Battle battle; 





    initSupemon(&supemon1, "Supmander", 1, 10, 1, 1, 1, 2, 1, "Scratch", "Grawl");
    initSupemon(&supemon2, "Supasaur", 1, 9, 1, 1, 3, 2, 2, "Pound", "Foliage");
    initSupemon(&supemon3, "Supirtle", 1, 11, 1, 2, 2, 1, 2, "Pound", "Shell");
    initSupemon(&supemonEnemy1, "Supttata", 1, 8, 2, 1, 1, 1, 2, "Tackle", "Tail Whip");
    initSupemon(&supemonEnemy2, "Supcool", 1, 10, 1, 1, 2, 2, 2, "Gust", "Sand Attack");
    initSupemon(&supemonEnemy3, "Supnipan", 1, 9, 1, 1, 1, 2, 2, "Tackle", "String Shot");



    initMove(&scratch, "Scratch", 3, 0, 0, 0, 0, 0);
    initMove(&grawl, "Grawl", 0, 1, 0, 0, 0, 0);
    initMove(&pound, "Pound", 2, 0, 0, 0, 0, 0);
    initMove(&foliage, "Foliage", 0, 0, 0, 1, 0, 0);
    initMove(&shell, "Shell", 0, 0, 1, 0, 0, 0);
    initMove(&tackle, "Tackle", 2, 0, 0, 0, 0, 0);
    initMove(&tailwhip, "Tail Whip", 0, 0, 1, 0, 0, 0);
    initMove(&gust, "Gust", 2, 0, 0, 0, 0, 0);
    initMove(&sandattack, "Sand Attack", 0, 0, 0, 0, 1, 0);
    initMove(&stringshot, "String Shot", 0, 0, 1, 0, 0, 1);

    itemInit(&item1, "Potion", 100, 5, 0);
    itemInit(&item2, "Super Potion", 300, 10, 0);
    itemInit(&item3, "Rare candy", 700, 0, 1);
    // printf("Item 1: %s, Price: %d\n", item1.name, item1.price);
    // printf("Item 2: %s, Price: %d\n", item2.name, item2.price);
    // printf("Item 3: %s, Price: %d\n", item3.name, item3.price);



    initPlayer(&player, &supemon1, &supemon2, &supemon3, &supemonEnemy1, &supemonEnemy2, &supemonEnemy3, &item1, &item2, &item3);
    



    return 0;
}

