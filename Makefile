##
## EPITECH PROJECT, 2019
## PSU_my_printf_bootstrap_2019
## File description:
## Makefile
##

SRC		=	./src/my_sokoban.c 			\
			./src/option.c 				\
			./src/mouvement.c 			\
			./src/collision.c 			\

OBJ		= $(SRC:.c=.o)

CC 		= gcc

LIB		= make -C ./lib/my

RM		= rm -f

NAME	= my_sokoban

CFLAGS	= -g3 -lncurses

all: 		$(NAME)

$(NAME):
		$(LIB)
		$(CC) -o $(NAME) $(SRC) $(CFLAGS) ./lib/libmy.a

tests_run:
		$(LIB)
		gcc -o units tests/*.c ./src/option.c ./src/my_sokoban.c ./src/mouvement.c ./src/collision.c §(CFLAGS) --coverage -lcriterion ./lib/libmy.a
		./units

clean:
		$(LIB) clean
		$(RM) $(OBJ)
		$(RM) *.gcda
		$(RM) *.gcno

fclean: clean
		$(RM) $(NAME)
		$(RM) units
		$(LIB) fclean

re:		fclean all