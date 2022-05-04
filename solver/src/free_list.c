/*
** EPITECH PROJECT, 2021
** free_list.c
** File description:
** free_list function
*/
#include "solver.h"

void free_list(node_t *node)
{
    node_t *tmp = NULL;

    while (node) {
        tmp = node;
        node = node->next;
        free(tmp);
    }
}