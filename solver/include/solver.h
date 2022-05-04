/*
** EPITECH PROJECT, 2021
** solver.h
** File description:
** solver header file
*/

#ifndef SOLVER_H_
#define SOLVER_H_

#include "macro.h"
#include "struct.h"
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

char *load_file_in_mem(char const *filepath);
void check_map(char *map);
int solver(char *map);
pos_t get_goal(char *map);
void add_node(node_t **list, node_t *node);
void remove_node(node_t **list, node_t *node);
node_t *lowest_f_cost(node_t **open);
bool node_exist(node_t **list, pos_t pos);
int list_len(node_t *list);
node_t *init_open_list(pos_t goal, char *map);
void get_node_neighbors(node_t *n, char *map);
int get_node_value(pos_t p, pos_t by, char c);
neigh_t set_neighbor(node_t *from, neighbor POS);
void render_output(node_t *node, char *map);
void neighbors_parser(node_t *cur, node_t **open, char *map);
void free_word_array(char **word_array);
void free_list(node_t *node);
void free_solver(node_t *open, char *map);

#endif // end of solver.h definition condition