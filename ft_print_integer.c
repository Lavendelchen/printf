/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:09:05 by shaas             #+#    #+#             */
/*   Updated: 2021/08/25 17:49:41 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_integer(va_list args, t_flags *flags)
{
	int	i;
	int	ret;

	ret = 0;
	i = va_arg(args, int);
	if (flags->hashtag == 1 || (flags->space == 1 && flags->plus == 1)) // because space and plus together get an error message
		return (ft_print_wtf());
	else
	{
		if (i >= 0)
		{
			if (flags->space == 1)
				ret = ret + ft_actually_print_character(' ');
			else if (flags->plus == 1)
				ret = ret + ft_actually_print_character('+');
		}
		return (ret + ft_actually_print_integer(i, 0));
	}
}
