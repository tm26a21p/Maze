##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

MAKEFLAGS += --silent

NAME =	solver

SRC_DIR		=	src/

SRC		=	$(SRC_DIR)main.c			\
			$(SRC_DIR)load_file_in_mem.c	\
			$(SRC_DIR)solver.c	\
			$(SRC_DIR)init_open_list.c	\
			$(SRC_DIR)get_goal.c	\
			$(SRC_DIR)set_neighbor.c	\
			$(SRC_DIR)add_node.c	\
			$(SRC_DIR)get_node_neighbors.c	\
			$(SRC_DIR)get_node_value.c	\
			$(SRC_DIR)remove_node.c	\
			$(SRC_DIR)lowest_f_cost.c	\
			$(SRC_DIR)render_output.c	\
			$(SRC_DIR)neighbors_parser.c	\
			$(SRC_DIR)free_solver.c	\
			$(SRC_DIR)free_list.c	\

CC		=	gcc

RM		=	rm -f

CFLAGS		=	-Wall -Wextra -O3

CPPFLAGS	=	-I/usr/local/include/ -I./include

OBJ		=	$(SRC:.c=.o)

TESTS_SRC	=	$(SRC_DIR)?.c			\

UNIT_TEST	=	$(TESTS_DIR)tests_$(NAME).c		\

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LIB)

db:	CFLAGS += -g3
db: $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

unit_test:	fclean $(NAME)
	$(CC) -o $(TESTS) $(TESTS_SRC) $(UNIT_TEST) $(LIB) $(INC) $(COVER) $(CRIT)

tests_run: 	unit_test
	./$(TESTS)
	$(GCOVR) $(EXCLUD) $(TESTS_DIR)
	$(GCOVR) $(EXCLUD) $(TESTS_DIR) $(BRANCH)

clean:
	$(RM) $(OBJ) *gc*

fclean:		clean
	$(RM) $(NAME) $(TESTS)

re:	fclean all

redb:	fclean db

.PHONY:		all tests fclean re db redb