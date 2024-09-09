##
## Makefile
## File description:
## oh bordel
##

SRC	=	main.c			\
		lib.c			\
		true_main.c		\

TEST	=	main.c			\
		tests/test_hidenp.c	\
		lib.c			\

NAME	= hidenp

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)
	rm -f $(OBJ)

tests_run:
	gcc -o unit_tests $(TEST) -lcriterion --coverage
	./unit_tests

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re tests_run

