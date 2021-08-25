/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:29 by shaas             #+#    #+#             */
/*   Updated: 2021/08/25 17:49:26 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_decimal(va_list args, t_flags *flags)
{
	int	d;
	int	ret;

	ret = 0;
	d = va_arg(args, int);
	if (flags->hashtag == 1 || (flags->space == 1 && flags->plus == 1)) // because space and plus together get an error message
		return (ft_print_wtf());
	else
	{
		if (d >= 0)
		{
			if (flags->space == 1)
				ret = ret + ft_actually_print_character(' ');
			else if (flags->plus == 1)
				ret = ret + ft_actually_print_character('+');
		}
		return (ret + ft_actually_print_integer(d, 0));
	}
}
