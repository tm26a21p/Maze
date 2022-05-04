/*
** EPITECH PROJECT, 2021
** remove_node.c
** File description:
** remove_node function
*/
#include "solver.h"

void remove_node(node_t **head, node_t *node)
{
    node_t *tmp = *head;
    node_t *prev = NULL;

    if (tmp && tmp->p.x == node->p.x && tmp->p.y == node->p.y) {
        *head = tmp->next;
        return;
    }
    while (tmp && (tmp->p.x != node->p.x || tmp->p.y != node->p.y)) {
        prev = tmp;
        tmp = tmp->next;
    }
    if (tmp == NULL)
        return;
    prev->next = tmp->next;
}