NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
SRC = ft_printf.c \
					ft_printf_utils.c \

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o
clean:
	/bin/rm -f  *.o
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re