#ifndef SUPEMON_H
#define SUPEMON_H

typedef struct {
    char name[50];
    int level;
    int experience;
    int hp;
    int max_hp;
    int attack;
    int base_attack;
    int defense;
    int base_defense;
    int evasion;
    int base_evasion;
    int accuracy;
    int base_accuracy;
    int speed;
    char moves[2][50];
    int isPlayerOwned;
} Supemon;

void initSupemon(Supemon *supemon, const char *name, int level, int hp, int attack, int defense, int evasion, int accuracy, int speed, const char *move1, const char *move2);
void displaySupemon(const Supemon *supemon);
void levelUpSupemon(Supemon *supemon);

#endif