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
    Player player;
    Battle battle;

    initSupemon(&supemon1, "Supmander", 1, 10, 1, 1, 1, 2, 1, "Scratch", "Growl");
    initSupemon(&supemon2, "Supasaur", 1, 9, 1, 1, 3, 2, 2, "Pound", "Foliage");
    initSupemon(&supemon3, "Supirtle", 1, 11, 1, 2, 2, 1, 2, "Pound", "Shell");

    initPlayer(&player, &supemon1, &supemon2, &supemon3);
    initBattle(&battle, &player, &supemon1, &supemon2, &supemon3);
    return 0;
}

