/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function
*/

#include "generator.h"

int error_handling(int ac, char **av, char **env);

int main(int ac, char **av, char **env)
{
    int check = error_handling(ac, av, env);

    if (check == 1)
        return (84);
    else if (check == 2)
        print_usage();
    else
        generator(ac, av);
    return 0;
}