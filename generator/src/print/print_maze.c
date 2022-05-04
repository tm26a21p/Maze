/*
** EPITECH PROJECT, 2021
** print_maze.c
** File description:
** a function that print a maze
*/
#include "struct.h"
#include <unistd.h>

void print_maze(maze_t *s_maze)
{
    int i = 0;

    for (; s_maze->maze[i + 1]; i++) {
        write(1, s_maze->maze[i], (s_maze->size.y));
        write(1, "\n", 1);
    }
    write(1, s_maze->maze[i], (s_maze->size.y));
}