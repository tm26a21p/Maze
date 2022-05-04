/*
** EPITECH PROJECT, 2021
** a function that generate a maze
** File description:
** generator
*/
#include "generator.h"
#include "struct.h"

void generator(int ac, char **av)
{
    maze_t *s_maze = init_maze(ac, av);

    binary_tree(s_maze, (vec2_t) {0, 0}, (vec2_t) {1, 1}, (vec2_t) {-1, -1});
    print_maze(s_maze);
    destroy_maze(s_maze);
}