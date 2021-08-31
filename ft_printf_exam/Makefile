NAME = libftprintf.a

COMP = gcc -Wall -Wextra -Werror

C_FILES = ft_printf.c

O_FILES = $(C_FILES:.c=.o)

all: $(NAME)

comp:
	$(COMP) $(C_FILES)

$(NAME): comp
	ar rc $(NAME) $(O_FILES)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
