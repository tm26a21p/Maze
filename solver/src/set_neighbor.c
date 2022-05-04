/*
** EPITECH PROJECT, 2021
** set_neighbor.c
** File description:
** set_neighbor function
*/
#include "solver.h"

neigh_t set_neighbor(node_t *from, neighbor POS)
{
    neigh_t neigh;

    neigh.ok = true;
    neigh.p = from->p;
    neigh.g = from->goal;
    neigh.p.x += POS == UP ? -1 : 0;
    neigh.p.x += POS == DOWN ? +1 : 0;
    neigh.p.y += POS == RIGHT ? +1 : 0;
    neigh.p.y += POS == LEFT ? -1 : 0;
    neigh.h = get_node_value(neigh.p, from->goal, 'h');
    return neigh;
}