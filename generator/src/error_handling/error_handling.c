/*
** EPITECH PROJECT, 2021
** error_handling.c
** File description:
** a function that check if there is no error in the parameters
*/

#include "error_handling.h"

#include <stdlib.h>
#include <string.h>

int error_handling(int ac, char **av, char **env)
{
    if (check_env(env) == 1)
        return (1);
    if (check_is_usage(ac, av) == 0)
        return (2);
    if (ac < 3 || ac > 4)
        return (1);
    if (check_is_num(av[1]) + check_is_num(av[2]) > 0)
        return (1);
    if (atoi(av[1]) < 1 || atoi(av[2]) < 1)
        return (1);
    if (ac == 4)
        if (strcmp(av[3], "perfect") != 0)
            return (1);
    return (0);
}