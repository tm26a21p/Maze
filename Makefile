##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## make
##

MAKEFLAGS += --silent

RM		=	rm -f

GEN		=	generator/

SOL		=	solver/
all:
	$(MAKE) -C $(GEN)
	$(MAKE) -C $(SOL)

clean:
	$(MAKE) -C $(GEN) clean
	$(MAKE) -C $(SOL) clean

fclean:
	$(MAKE) -C $(GEN) fclean
	$(MAKE) -C $(SOL) fclean

re:	fclean all

.PHONY:		all fclean re