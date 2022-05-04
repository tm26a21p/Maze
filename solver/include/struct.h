/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** structs definition
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <stdarg.h>
#include <stdbool.h>

#define CO(x) (((x == 0) ? 1 : x))
#define POS(c, x, y) (((c + 1) * x) + y + x)
#define NEIGH_NUMBER 4
#define WAS 'c'

typedef struct position_s pos_t;
typedef struct node_s node_t;
typedef struct neighbors_s neigh_t;

struct position_s
{
    int x;
    int y;
};

typedef enum
{
    RIGHT = 0,
    DOWN,
    LEFT,
    UP
} neighbor;

struct neighbors_s
{
    bool ok;
    int h;
    pos_t p;
    pos_t g;
};

struct node_s
{
    int h;
    pos_t p;
    pos_t goal;
    neigh_t neighbors[NEIGH_NUMBER];
    node_t *prev;
    node_t *next;
};

#endif