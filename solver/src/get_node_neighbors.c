/*
** EPITECH PROJECT, 2021
** get_node_neighbors.c
** File description:
** get_node_neighbors function
*/

#include "solver.h"

void get_node_neighbors(node_t *n, char *map)
{
    neigh_t no;
    no.ok = false;

    n->neighbors[RIGHT] = n->p.y == n->goal.y ? no : map[POS(n->goal.y, \
        n->p.x, (n->p.y + 1))] == '*' ? set_neighbor(n, RIGHT) : no;
    n->neighbors[DOWN] = n->p.x == n->goal.x ? no : map[POS(n->goal.y, \
        (n->p.x + 1), n->p.y)] == '*' ? set_neighbor(n, DOWN) : no;
    n->neighbors[LEFT] = n->p.y == 0 ? no : map[POS(n->goal.y, n->p.x, \
        (n->p.y - 1))] == '*' ? set_neighbor(n, LEFT) : no;
    n->neighbors[UP] = n->p.x == 0 ? no : map[POS(n->goal.y, \
        (n->p.x - 1), n->p.y)] == '*' ? set_neighbor(n, UP) : no;
}