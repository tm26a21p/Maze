/*
** EPITECH PROJECT, 2021
** join_cell.c
** File description:
** a function that join cell
*/

#include "struct.h"

#include <stdlib.h>
#include <stdio.h>

void join_cell(maze_t *s_maze, vec2_t pos, vec2_t bias)
{
    s_maze->maze[pos.y][pos.x] = '*';
    if (pos.x + bias.x < 0 && pos.y + bias.y < 0)
        return;
    if (pos.x + bias.x < 0 || pos.y + bias.y < 0) {
        if (pos.x + bias.x < 0)
            s_maze->maze[pos.y + bias.y][pos.x] = '*';
        if (pos.y + bias.y < 0)
            s_maze->maze[pos.y][pos.x + bias.x] = '*';
        return;
    }
    if (rand() % 2 == 0)
        s_maze->maze[pos.y + bias.y][pos.x] = '*';
    else
        s_maze->maze[pos.y][pos.x + bias.x] = '*';
}