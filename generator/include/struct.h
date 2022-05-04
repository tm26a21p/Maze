/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** structs definition
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct vec2_s
{
    int x;
    int y;
} vec2_t;

typedef struct maze_s
{
    vec2_t size;
    char **maze;
    char perfect;
} maze_t;

#endif