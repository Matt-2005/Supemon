#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supemon.h"
#include "player.h"
#include "battle.h"
#include "move.h" 

int main() 
{
    Supemon supemon1;
    Supemon supemon2;
    Supemon supemon3;
    Supemon supemonEnemy1;
    Supemon supemonEnemy2;
    Supemon supemonEnemy3;

    // Move move3;
    // Move move4;
    // Move move2;
    // Move move5;
    // Move move1;
    // Move move6;
    // Move move7;
    // Move move8;
    // Move move9;
    // Move move10;
    // Move move11;

    Player player;
    Battle battle;

    initSupemon(&supemon1, "Supmander", 1, 10, 1, 1, 1, 2, 1, "Scratch", "Grawl");
    initSupemon(&supemon2, "Supasaur", 1, 9, 1, 1, 3, 2, 2, "Pound", "Foliage");
    initSupemon(&supemon3, "Supirtle", 1, 11, 1, 2, 2, 1, 2, "Pound", "Shell");
    initSupemon(&supemonEnemy1, "Supttata", 1, 8, 2, 1, 1, 1, 2, "Tackle", "Fire Spin");
    initSupemon(&supemonEnemy2, "Supcool", 1, 10, 1, 1, 2, 2, 2, "Earthquake", "Leaf Storm");
    initSupemon(&supemonEnemy3, "Supnipan", 1, 9, 1, 1, 1, 2, 2, "Tackle", "Thunderbolt");

    // initMove(&move1, "Scratch", 3, 0, 0, 0);
    // initMove(&move2, "Grawl", 0, 1, 0, 0);
    // initMove(&move3, "Pound", 2, 0, 0, 0);
    // initMove(&move4, "Foliage", 0, 0, 0, 1);
    // initMove(&move5, "Shell", 0, 0, 1, 0);




    initPlayer(&player, &supemon1, &supemon2, &supemon3, &supemonEnemy1, &supemonEnemy2, &supemonEnemy3);
    



    return 0;
}

