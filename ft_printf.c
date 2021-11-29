/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:46:25 by shaas             #+#    #+#             */
/*   Updated: 2021/11/29 22:15:46 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_arguments(char specifier, t_flags *flags, va_list args)
{
	int	char_num;

	if (specifier == '%')
		char_num = ft_print_percent_sign();
	else if (specifier == 'c')
		char_num = ft_print_character(args, flags);
	else if (specifier == 's')
		char_num = ft_print_string(args, flags);
	else if (specifier == 'i')
		char_num = ft_print_integer(args, flags);
	else if (specifier == 'd')
		char_num = ft_print_decimal(args, flags);
	else if (specifier == 'u')
		char_num = ft_print_unsigned(args, flags);
	else if (specifier == 'x')
		char_num = ft_print_hexa_lower(args, flags);
	else if (specifier == 'X')
		char_num = ft_print_hexa_upper(args, flags);
	else if (specifier == 'p')
		char_num = ft_print_pointer(args, flags);
	else
		char_num = ft_print_wtf();
	return (char_num);
}

static int	ft_printf2(int i, int ret, const char *string, va_list args)
{
	int		char_num;
	t_flags	flags;

	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i = i + ft_flags(&string[i], &flags);
			char_num = ft_arguments(string[i], &flags, args);
			ret = ret + char_num;
			if (char_num == -1)
				return (-1);
		}
		else
			ret = ret + ft_actually_print_character(string[i]);
		i++;
	}
	return (ret);
}

int	ft_printf(const char *string, ...)
{
	va_list	args; // va stands for variable/variadic argument
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(args, string);
	ret = ft_printf2(i, ret, string, args);
	va_end(args);
	return (ret);
}

int	main(void) //needs to go!!!
{
	int	u;

	u = 523;
	printf("hallo %x", u);
	return (0);
}
