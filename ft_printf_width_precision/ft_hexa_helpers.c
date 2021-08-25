/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:17:28 by shaas             #+#    #+#             */
/*   Updated: 2021/08/21 15:50:24 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_hexa_converter(unsigned long long x, int *arr,
unsigned long long divider)
{
	int	i;

	i = 0;
	while (divider > 0)
	{
		arr[i] = x / divider;
		x = x % divider;
		divider = divider / 16;
		i++;
	}
}

int	ft_hexa_printer(int *arr, int size_of_arr, char *char_set)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (arr[i] == 0 && i < (size_of_arr - 1))
		i++;
	while (i < size_of_arr)
	{
		ret = ret + ft_actually_print_character(char_set[arr[i]]);
		i++;
	}
	return (ret);
}
