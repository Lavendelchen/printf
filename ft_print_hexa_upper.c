/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:34 by shaas             #+#    #+#             */
/*   Updated: 2021/08/21 15:50:37 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_actually_print_hexa_upper(unsigned int x_u)
{
	int		hexa_arr[8];
	char	*char_set;
	int		ret;

	char_set = "0123456789ABCDEF";
	ft_hexa_converter(x_u, hexa_arr, 268435456);
	ret = ft_hexa_printer(hexa_arr, 8, char_set);
	return (ret);
}

int	ft_print_hexa_upper(va_list args)
{
	unsigned int	x_u;

	x_u = va_arg(args, unsigned int);
	return (ft_actually_print_hexa_upper(x_u));
}
