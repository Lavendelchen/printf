/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:46:25 by shaas             #+#    #+#             */
/*   Updated: 2021/07/28 14:25:33 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// what about if the amount of args, and the %s don't match? need to see how to do that
// handle 0s & null pointers & stuff (look at every datatype)

static int	ft_arguments(char datatype, va_list args)
{
	int	char_num;

	char_num = -1; //weg!!!
	if (datatype == '%')
		char_num = ft_print_percent_sign();
	else if (datatype == 'c')
		char_num = ft_print_character(args);
	else if (datatype == 's')
		char_num = ft_print_string(args);
	//else if (datatype == 'p')
	//	char_num = ft_print_pointer(args);
	//else if (datatype == 'd')
	//	char_num = ft_print_decimal(args);
	//else if (datatype == 'i')
	//	char_num = ft_print_integer(args);
	//else if (datatype == 'u')
	//	char_num = ft_print_unsigned(args);
	//else if (datatype == 'x')
	//	char_num = ft_print_hexa_lower(args);
	//else if (datatype == 'X')
	//	char_num = ft_print_hexa_upper(args); // what if its none of those? we don't need to handle that i think,. like, at all. but that sucks :( i guess i'm gonna make it so that it doesn't do anything lol. just go on without printing the "thing". i wanna print an error message. am i allowed to do that?
	else
		char_num = ft_print_wtf();
	return (char_num);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		ret;
	int		char_num;

	i = 0;
	ret = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			char_num = ft_arguments(string[i], args);
			ret = ret + char_num;
			if (char_num == -1)
				return (-1);
		}
		else
			ret = ret + ft_actually_print_character(string[i]);
		i++;
	}
	va_end(args);
	return (ret);
}

int	main(void)
{
	printf("orig return: %d ", printf("orig: %x\n", UINT_MAX));
	//printf("my return: %d ", ft_printf("mine: %x"));
	return (0);
}
