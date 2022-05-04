/*
** EPITECH PROJECT, 2021
** free_solver.c
** File description:
** free_solver function
*/

#include "solver.h"

void free_solver(node_t *open, char *map)
{
    if (open)
        free_list(open);
    free(map);
}