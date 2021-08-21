/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:46:25 by shaas             #+#    #+#             */
/*   Updated: 2021/08/21 15:41:42 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_arguments(char specifier, va_list args)
{
	int	char_num;

	if (specifier == '%')
		char_num = ft_print_percent_sign();
	else if (specifier == 'c')
		char_num = ft_print_character(args);
	else if (specifier == 's')
		char_num = ft_print_string(args);
	else if (specifier == 'i')
		char_num = ft_print_integer(args);
	else if (specifier == 'd')
		char_num = ft_print_decimal(args);
	else if (specifier == 'u')
		char_num = ft_print_unsigned(args);
	else if (specifier == 'x')
		char_num = ft_print_hexa_lower(args);
	else if (specifier == 'X')
		char_num = ft_print_hexa_upper(args);
	else if (specifier == 'p')
		char_num = ft_print_pointer(args);
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

//int	main(void) //needs to go!!!
//{
//	unsigned int	u;
//	unsigned int	*p_u;
//
//	u = 4294967295;
//	p_u = &u;
//	printf("orig return: %d\n", printf("orig: %p\n", p_u));
//	printf("my return: %d\n", ft_printf("mine: %p\n", p_u));
//	return (0);
//}
//
