#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supemon.h"

void initSupemon(Supemon *supemon, const char *name, int level, int hp, int attack, int defense, int evasion, int accuracy, int speed, const char *move1, const char *move2) {
    strcpy(supemon->name, name);
    supemon->level = level;
    supemon->experience = 0;
    supemon->hp = hp;
    supemon->max_hp = supemon->hp;
    supemon->attack = attack;
    supemon->base_attack = 1;
    supemon->defense = defense;
    supemon->base_defense = 1;
    supemon->evasion = evasion;
    supemon->base_evasion = 1;
    supemon->accuracy = accuracy;
    supemon->base_accuracy = 1;
    supemon->speed = speed;
    strcpy(supemon->moves[0], move1);
    strcpy(supemon->moves[1], move2);
}

void displaySupemon(const Supemon *supemon) {
    printf("Name: %s\n", supemon->name);
    printf("HP: %d / %d\n", supemon->hp, supemon->max_hp);
    printf("Attack: %d\n", supemon->attack);
    printf("Defense: %d\n", supemon->defense);
    printf("Evasion: %d\n", supemon->evasion);
    printf("Accuracy: %d\n", supemon->accuracy);
    printf("Speed: %d\n", supemon->speed);
    printf("Moves: %s, %s\n", supemon->moves[0], supemon->moves[1]);
}

void levelUpSupemon(Supemon *supemon) {
    supemon->level++;
    supemon->hp = supemon->max_hp = 10 + (supemon->level * 2);
    supemon->attack = 1 + supemon->level;
    supemon->defense = 1 + supemon->level;
    supemon->evasion = 1 + supemon->level;
    supemon->accuracy = 1 + supemon->level;
    supemon->speed = 1 + supemon->level;
}

