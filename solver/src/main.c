/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function
*/
#include "solver.h"

int main(int ac, char **av)
{
    char *map = NULL;

    if (ac != 2)
        return EXIT_ERROR_USAGE;
    map = load_file_in_mem(av[1]);
    if (map == NULL)
        return EXIT_ERROR_MAP;
    return solver(map);
}