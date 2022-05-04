/*
** EPITECH PROJECT, 2021
** lowest_f_cost.c
** File description:
** lowest_f_cost function
*/
#include "solver.h"

node_t *lowest_f_cost(node_t **open)
{
    node_t *tmp = *open, *r = tmp;

    for (int i = 0; i < 4; tmp = tmp->next, i++) {
        if (!tmp)
            break;
        if (r->h > tmp->h)
            r = tmp;
    }
    return r;
}