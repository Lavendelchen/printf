/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:46 by shaas             #+#    #+#             */
/*   Updated: 2021/08/25 17:49:58 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_actually_print_unsigned(unsigned int u, int ret)
{
	if (u >= 10)
	{
		ret = ft_actually_print_unsigned((u / 10), ret);
		ret = ft_actually_print_unsigned((u % 10), ret);
	}
	else
	{
		ret = ret + ft_actually_print_character(u + '0');
		return (ret);
	}
	return (ret);
}

int	ft_print_unsigned(va_list args, t_flags *flags)
{
	unsigned int	u;

	u = va_arg(args, unsigned int);
	if (flags->hashtag == 1 || flags->space == 1 || flags->plus == 1)
		return (ft_print_wtf());
	else
		return (ft_actually_print_unsigned(u, 0));
}
