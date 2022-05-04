/*
** EPITECH PROJECT, 2021
** check_is_num.c
** File description:
** a function that check if a string is only composed of numeric characters
*/

int check_is_num(const char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] < '0' || str[i] > '9')
            return (1);
        i++;
    }
    return (0);
}