/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:46:25 by shaas             #+#    #+#             */
/*   Updated: 2021/07/20 20:54:33 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //just for orig printf
#include "printf.h"

// what about if the amount of args, and the %s don't match? need to see how to do that

int	ft_arguments(char datatype)
{
	int	char_num;

	char_num = 0;
	if (datatype == '%')
	{
		ft_putchar_fd('%', 1);
		char_num++;
	}
	else if (datatype == 'c')
		char_num = ft_print_character();
	else if (datatype == 's')
		char_num = ft_print_string();
	else if (datatype == 'p')
		char_num = ft_print_pointer();
	else if (datatype == 'd')
		char_num = ft_print_decimal();
	else if (datatype == 'i')
		char_num = ft_print_integer();
	else if (datatype == 'u')
		char_num = ft_print_unsigned();
	else if (datatype == 'x')
		char_num = ft_print_hexa_lower();
	else if (datatype == 'X')
		char_num = ft_print_hexa_upper();
	return (char_num);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		ret;

	ret = 0;
	i = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			ret = ret + ft_arguments(string[i]);
		}
		else
		{
			ft_putchar_fd(string[i], 1);
			ret++;
		}
		i++;
	}

	va_end(args);
	retrun (ret);
}

int	main(void)
{
	printf("orig: %d\n", printf("orig: ", ));
	ft_printf("mine: %d\n", ft_printf("mine: ", ));
	return (0);
}
