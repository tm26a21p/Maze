##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

MAKEFLAGS += --silent

NAME =	generator

SRC_DIR		=	src/

ERROR_DIR	=	$(SRC_DIR)error_handling/

INIT_DIR	=	$(SRC_DIR)init/

ALGO_DIR	=	$(SRC_DIR)algorithm/

PRINT_DIR =	$(SRC_DIR)print/

DESTROY_DIR	=	$(SRC_DIR)destroy/

SRC		=	$(SRC_DIR)main.c					\
			$(SRC_DIR)generator.c				\
			$(ERROR_DIR)error_handling.c		\
			$(ERROR_DIR)check_env.c				\
			$(ERROR_DIR)check_is_usage.c		\
			$(ERROR_DIR)check_is_num.c			\
			$(INIT_DIR)init_maze.c				\
			$(INIT_DIR)create_maze.c			\
			$(ALGO_DIR)binary_tree.c			\
			$(ALGO_DIR)join_cell.c				\
			$(PRINT_DIR)print_usage.c			\
			$(PRINT_DIR)print_maze.c			\
			$(DESTROY_DIR)destroy_maze.c		\

CC		=	gcc

RM		=	rm -f

CFLAGS		=	-Wall -Wextra

CPPFLAGS	=	-I/usr/local/include/ -I./include

OBJ		=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

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