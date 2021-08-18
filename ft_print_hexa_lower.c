/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:31 by shaas             #+#    #+#             */
/*   Updated: 2021/08/18 20:17:48 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int*	ft_hexa_converter(unsigned int x_l, int arr[8])
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

int	ft_actually_print_hexa_lower(unsigned int x_l)
{
	char	*the_string;
	int		arr[8];

	bzero(arr, 8 * sizeof(int));
	the_string = ft_hexa_converter(x_l, arr);


	free (x_l_string);
	return ()
}

int	ft_print_hexa_lower(va_list args)
{
	unsigned int	x_l;

	x_l = va_arg(args, unsigned int);
	return (ft_actually_print_hexa_lower(x_l));
}

