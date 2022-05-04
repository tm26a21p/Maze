/*
** EPITECH PROJECT, 2021
** binary_tree.c
** File description:
** a function that create a maze with the binary tree algorithm
*/

#include "struct.h"
#include "generator.h"

#include <stdlib.h>
#include <time.h>

void binary_tree(maze_t *s_maze, vec2_t pos, vec2_t move, vec2_t bias)
{
    srand(time(NULL));

    s_maze->maze[s_maze->size.x - 1][s_maze->size.y - 1] = '*';
    s_maze->maze[s_maze->size.x - 1][s_maze->size.y - 2] = '*';
    for (int i = 0; i < s_maze->size.x; i += 2) {
        for (int j = 0; j < s_maze->size.y; j += 2) {
            join_cell(s_maze, (vec2_t) {pos.x + j * move.x,
            pos.y + i * move.y}, bias);
        }
    }
    if (s_maze->perfect == 0)
        for (int i = 0; i < s_maze->size.x; i++)
            s_maze->maze[i][s_maze->size.y / 2] = '*';
}