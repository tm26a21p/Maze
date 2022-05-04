/*
** EPITECH PROJECT, 2021
** destroy_maze.c
** File description:
** a function that free the maze structure
*/

#include "struct.h"

#include <stdlib.h>

void destroy_maze(maze_t *s_maze)
{
    for (int i = 0; s_maze->maze[i]; i++)
        free(s_maze->maze[i]);
    free(s_maze->maze);
    free(s_maze);
}