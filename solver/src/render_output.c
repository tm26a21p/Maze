/*
** EPITECH PROJECT, 2021
** render_output.c
** File description:
** render_output function
*/
#include "solver.h"

static void clear_map_from_node_used(char *map)
{
    for (int x = 0; map[x]; x++)
        map[x] = (map[x] == WAS) ? '*' : map[x];
}

void render_output(node_t *node, char *map)
{
    int x = 0;

    if (!node)
    {
        printf("no solution found");
        return;
    }
    x = (node->goal.x + 1) * (node->goal.y + 2) - 1;
    for (; node; node = node->prev)
        map[POS(node->goal.y, node->p.x, node->p.y)] = 'o';
    clear_map_from_node_used(map);
    write(1, map, x);
}