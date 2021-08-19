/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:31 by shaas             #+#    #+#             */
/*   Updated: 2021/08/19 20:18:47 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int*	ft_hexa_converter(unsigned int x_l, int arr[8])
{
	int	divider;
	int	i;

	divider = 268435456;
	i = 0;
	while (divider > 0)
	{
		arr[i] = x_l / divider;
		arr[i + 1] = x_l % divider;
		i++;
		divider = divider / 16;
	}
	return (arr);
}

int	ft_print_hexa(int *arr, char *char_set)
{
	int i;
	int char_num;

	i = 0;
	char_num = 0;
	while (i < 8)
	{
		char_num = char_num + ft_actually_print_character(char_set[arr[i]]);
		i++;
	}
	return (char_num);
}

static int	ft_actually_print_hexa_lower(unsigned int x_l)
{
	int		hexa_arr[8];
	char	*char_set;
	int		ret;

	ft_bzero(hexa_arr, 8 * sizeof(int));
	char_set = "0123456789abcdef";
	hexa_arr = ft_hexa_converter(x_l, hexa_arr);
	ret = ft_print_hexa(hexa_arr, "0123456789abcdef");
	return (ret);
}

int	ft_print_hexa_lower(va_list args)
{
	unsigned int	x_l;

	x_l = va_arg(args, unsigned int);
	return (ft_actually_print_hexa_lower(x_l));
}

