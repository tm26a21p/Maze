/*
** EPITECH PROJECT, 2021
** check_env.c
** File description:
** a function that check if the environment variable is empty
*/

#include <stddef.h>

int check_env(char **env)
{
    if (!(*env))
        return (1);
    return (0);
}