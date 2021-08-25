/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:34 by shaas             #+#    #+#             */
/*   Updated: 2021/08/25 19:04:01 by shaas            ###   ########.fr       */
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

int	ft_print_hexa_upper(va_list args, t_flags *flags)
{
	unsigned int	x_u;
	int				ret;

	ret = 0;
	x_u = va_arg(args, unsigned int);
	if (flags->space == 1 || flags->plus == 1)
		return (ft_print_wtf());
	else
	{
		if (flags->hashtag == 1 && x_u > 0)
			ret = ret + ft_actually_print_string("0X");
		return (ret + ft_actually_print_hexa_upper(x_u));
	}
}
