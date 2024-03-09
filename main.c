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


    initSupemon(&supemon1, "Supmander", 1, 10, 1, 1, 1, 2, 1, scratch, grawl);
    initSupemon(&supemon2, "Supasaur", 1, 9, 1, 1, 3, 2, 2, pound, foliage);
    initSupemon(&supemon3, "Supirtle", 1, 11, 1, 2, 2, 1, 2, pound, shell);
    initSupemon(&supemonEnemy1, "Supttata", 1, 8, 2, 1, 1, 1, 2, tackle, tailwhip);
    initSupemon(&supemonEnemy2, "Supcool", 1, 10, 1, 1, 2, 2, 2, gust, sandattack);
    initSupemon(&supemonEnemy3, "Supnipan", 1, 9, 1, 1, 1, 2, 2, tackle, stringshot);

// tout est rouge la ah oui     mmmmmmhhhhhhhh   AH        p


    initPlayer(&player, &supemon1, &supemon2, &supemon3, &supemonEnemy1, &supemonEnemy2, &supemonEnemy3);
    



    return 0;
}

