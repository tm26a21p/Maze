/*
** EPITECH PROJECT, 2021
** print_usage.c
** File description:
** a function that print the usage of the maze generator
*/

#include <stdio.h>

static const char *usage[7] =
{
    "USAGE:",
    "\t./generator x y [p]",
    "DESCRIPTION:",
    "\tx\tthe maze's number of raw",
    "\ty\tthe maze's number of column",
    "\t[p]\tthe optionnal boolean that determine if the maze is perfect",
    "\t\tby default the maze is perfect"
};

void print_usage(void)
{
    for (int i = 0; usage[i]; i++)
        printf("%s\n", usage[i]);
}