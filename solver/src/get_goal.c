/*
** EPITECH PROJECT, 2021
** get_goal.c
** File description:
** get_goal function
*/
#include "solver.h"

pos_t get_goal(char *map)
{
    pos_t goal = {0, 0};

    for (; map[goal.y] != '\n'; ++goal.y);
    for (int y = goal.y; map[y] == '\n' || map[y] != '\0'; ++goal.x) {
        y += goal.y + 1;
    }
    goal.y--;
    return goal;
}