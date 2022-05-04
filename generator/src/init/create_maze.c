/*
** EPITECH PROJECT, 2021
** a function that create a new maze
** File description:
** create_maze
*/

#include <stdlib.h>
#include <stddef.h>

char **create_maze(int x, int y)
{
    char **maze = NULL;

    maze = malloc(sizeof(char *) * (x + 1));
    for (int i = 0; i < x; i++)
        maze[i] = malloc(sizeof(char) * (y + 1));
    maze[x] = NULL;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            maze[i][j] = 'X';
        maze[i][y] = '\0';
    }
    return (maze);
}