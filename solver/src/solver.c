/*
** EPITECH PROJECT, 2021
** solver.c
** File description:
** solver function
*/
#include "solver.h"

static node_t *a_star(char *map, node_t *open)
{
    node_t *node = NULL;

    while (1) {
        node = lowest_f_cost(&open);
        if (!node)
            break;
        remove_node(&open, node);
        if (node->p.x == node->goal.x && node->p.y == node->goal.y)
            break;
        neighbors_parser(node, &open, map);
        map[POS(node->goal.y, node->p.x, node->p.y)] = WAS;
    }
    return node;
}

int solver(char *map)
{
    pos_t goal = get_goal(map);
    node_t *open = init_open_list(goal, map);
    render_output(a_star(map, open), map);
    free_solver(open, map);
    return 0;
}