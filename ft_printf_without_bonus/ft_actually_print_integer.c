/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actually_print_integer.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:09:16 by shaas             #+#    #+#             */
/*   Updated: 2021/08/21 15:50:20 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_actually_print_integer(int i, int ret)
{
	if (i == -2147483648)
		return (ft_actually_print_string("-2147483648"));
	else if (i < 0)
	{
		ret = ft_actually_print_character('-');
		i = i * -1;
		return (ft_actually_print_integer(i, ret));
	}
	else if (i >= 10)
	{
		ret = ft_actually_print_integer((i / 10), ret);
		ret = ft_actually_print_integer((i % 10), ret);
	}
	else
	{
		ret = ret + ft_actually_print_character(i + '0');
		return (ret);
	}
	return (ret);
}
