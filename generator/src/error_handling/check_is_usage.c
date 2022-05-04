/*
** EPITECH PROJECT, 2021
** check_is_usage.c
** File description:
** check if the parameters call for the usage
*/

#include <string.h>

int check_is_usage(int ac, char **av)
{
    if (ac == 2) {
        if (strcmp(av[1], "-h") == 0)
            return (0);
    }
    return (1);
}