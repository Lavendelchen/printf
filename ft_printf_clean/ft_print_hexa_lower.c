/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:31 by shaas             #+#    #+#             */
/*   Updated: 2021/08/25 19:04:09 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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

int	ft_print_hexa_lower(va_list args, t_flags *flags)
{
	unsigned int	x_l;
	int				ret;

	ret = 0;
	x_l = va_arg(args, unsigned int);
	if (flags->space == 1 || flags->plus == 1)
		return (ft_print_wtf());
	else
	{
		if (flags->hashtag == 1 && x_l > 0)
			ret = ret + ft_actually_print_string("0x");
		return (ret + ft_actually_print_hexa_lower(x_l));
	}
}
