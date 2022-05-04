/*
** EPITECH PROJECT, 2021
** add_node.c
** File description:
** add_node function
*/
#include "solver.h"

void add_node(node_t **list, node_t *node)
{
    node->next = (*list);
    (*list) = node;
}