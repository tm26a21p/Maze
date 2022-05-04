/*
** EPITECH PROJECT, 2021
** get_node_value.c
** File description:
** get_node_value function
*/
#include "solver.h"

int get_node_value(pos_t p, pos_t by, char c)
{
    int r = 0;

    if (c == 'g')
        r = (p.x - by.x) + (p.y - by.y);
    if (c == 'h')
        r = (by.x - p.x) + (by.y - p.y);
    return r;
}