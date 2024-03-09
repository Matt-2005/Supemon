#ifndef MOVE_H
#define MOVE_H

//liste des include

typedef struct {
    char name[50];
    int damage;
    int attack;
    int defense;
    int evasion;
} Move ;

void initMove(Move *move, const char *name, int damage, int attack, int defense, int evasion);

#endif