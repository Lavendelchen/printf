/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:31 by shaas             #+#    #+#             */
/*   Updated: 2021/08/21 15:23:28 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_actually_print_hexa_lower(unsigned int x_l)
{
	int		hexa_arr[8];
	char	*char_set;
	int		ret;

	char_set = "0123456789abcdef";
	ft_hexa_converter(x_l, hexa_arr, 268435456);
	ret = ft_hexa_printer(hexa_arr, 8, char_set);
	return (ret);
}

int	ft_print_hexa_lower(va_list args)
{
	unsigned int	x_l;

	x_l = va_arg(args, unsigned int);
	return (ft_actually_print_hexa_lower(x_l));
}
