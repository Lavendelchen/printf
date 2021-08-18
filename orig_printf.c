/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orig_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:31:57 by shaas             #+#    #+#             */
/*   Updated: 2021/08/18 20:20:19 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"

static int*	ft_hexa_converter(unsigned int x_l, int arr[8])
{
	int	divider;
	int	i;

	divider = 268435456;
	i = 0;
	while (divider > 0)
	{
		arr[i] = x_l / divider;
		x_l = x_l % divider;
		i++;
		divider = divider / 16;
	}
	return (arr);
}

int	main(void)
{
	//long	c = 'A';
//
	//printf("%c", c);

	int	arr[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int *arrr;
	int i = 0;

	arrr = ft_hexa_converter(93857, arr);
	while (i < 8)
	{
		printf("[%d]", arr[i]);
		i++;
	}
	return (0);
}

// NULL pointer: segmentation fault. don't need to handle that.
