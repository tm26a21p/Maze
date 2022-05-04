/*
** EPITECH PROJECT, 2021
** error_handling.h
** File description:
** a header for all the error_handling function
*/

#ifndef ERROR_HANDLING_H_
#define ERROR_HANDLING_H_

int check_env(char **env);

int check_is_num(const char *str);

int check_is_usage(int ac, char **av);

#endif /* !ERROR_HANDLING_H_ */