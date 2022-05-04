/*
** EPITECH PROJECT, 2021
** generator.h
** File description:
** generator header file
*/

#ifndef GENERATOR_H_
#define GENERATOR_H_

#include "struct.h"

void generator(int ac, char **av);

// in init directory

maze_t *init_maze(int ac, char **av);

char **create_maze(int x, int y);

// in algorithm directory

void binary_tree(maze_t *s_maze, vec2_t pos, vec2_t move, vec2_t bias);

void join_cell(maze_t *s_maze, vec2_t pos, vec2_t move);

// in print directory

void print_maze(maze_t *s_maze);

void print_usage(void);

// in destroy directory

void destroy_maze(maze_t *s_maze);

#endif // end of generator.h definition condition