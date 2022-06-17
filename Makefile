NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC =	ft_printf.c\
		ft_putchar.c \
		ft_putstr.c \
		ft_putptr_hexa.c \
		ft_putnbr.c \
		ft_putunbr.c \
		ft_putnbr_hexa.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
