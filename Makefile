##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## My_defender
##

SRC	=	./code/my_defender.c			\
		./code/initialize.c				\
		./code/launch.c					\
		./code/events.c					\

HDR	=	./code/my_defender.h		\

OBJ	=	$(SRC:.c=.o)	\

LIB	=	-L /usr/lib64/libcsfml*		\
		##-L /usr/lib64/libcsfml-graphics.so.2.5.1	\

NAME	=	my_defender	\

CFLAGS = -W -Wall -Wextra -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(HDR) $(LIB)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all
