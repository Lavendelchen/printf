# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaas <shaas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 20:52:56 by shaas             #+#    #+#              #
#    Updated: 2021/07/28 15:33:57 by shaas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

COMP = gcc -c -Wall -Wextra -Werror

C_FILES = ft_printf.c ft_print_string.c ft_print_percent_sign.c ft_print_character.c \
ft_print_wtf.c ft_utoa.c #ft_print_hexa_lower.c ft_print_unsigned.c \
ft_print_hexa_upper.c ft_print_pointer.c ft_print_decimal.c ft_print_integer.c \

O_FILES = $(C_FILES:.c=.o)

all: $(NAME)

comp:
	$(COMP) $(C_FILES)

$(NAME):  comp
	ar rc $(NAME) $(O_FILES)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
