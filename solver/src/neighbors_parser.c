/*
** EPITECH PROJECT, 2021
** neighbors_parser.c
** File description:
** neighbors_parser function
*/
#include "solver.h"

static node_t *set_node_from_neigh(neigh_t neighbor)
{
    node_t *node = malloc(sizeof(node_t));

    node->h = neighbor.h;
    node->p = neighbor.p;
    node->goal = neighbor.g;
    node->next = NULL;
    return node;
}

void neighbors_parser(node_t *cur, node_t **open, char *map)
{
    neigh_t tmp;
    node_t *new_node = NULL;

    for (int i = 0; i < NEIGH_NUMBER; i++)
    {
        tmp = cur->neighbors[i];
        if (tmp.ok == true && map[POS(tmp.g.y, tmp.p.x, tmp.p.y)] != WAS)
        {
            new_node = set_node_from_neigh(tmp);
            new_node->prev = cur;
            get_node_neighbors(new_node, map);
            add_node(open, new_node);
        }
    }
}