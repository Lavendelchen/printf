/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:46 by shaas             #+#    #+#             */
/*   Updated: 2021/08/21 15:50:55 by shaas            ###   ########.fr       */
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

int	ft_print_unsigned(va_list args)
{
	unsigned int	u;

	u = va_arg(args, unsigned int);
	return (ft_actually_print_unsigned(u, 0));
}
