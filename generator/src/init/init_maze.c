/*
** EPITECH PROJECT, 2021
** init_maze.c
** File description:
** a function that create a new maze structure
*/

#include "struct.h"
#include "generator.h"

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

maze_t *init_maze(int ac, char **av)
{
    maze_t *new = malloc(sizeof(maze_t));

    new->size = (vec2_t) {atoi(av[1]), atoi(av[2])};
    new->maze = create_maze(new->size.x, new->size.y);
    new->perfect = 0;
    if (ac == 4 && strcmp(av[3], "perfect") == 0)
        new->perfect = 1;
    return (new);
}