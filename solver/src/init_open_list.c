/*
** EPITECH PROJECT, 2021
** init_open_list.c
** File description:
** init_open_list function
*/
#include "solver.h"

node_t *init_open_list(pos_t goal, char *map)
{
    node_t *head = malloc(sizeof(node_t));
    pos_t p = {0, 0};

    head->p = p;
    head->goal = goal;
    head->h = 0;
    get_node_neighbors(head, map);
    head->next = NULL;
    head->prev = NULL;
    return head;
}