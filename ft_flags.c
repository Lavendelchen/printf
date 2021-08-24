/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 20:58:38 by shaas             #+#    #+#             */
/*   Updated: 2021/08/24 21:04:23 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_outsource(const char *string, t_flags *flags, int i)
{
	if (string[i] == '-')
	{
		flags->minus = 1;
		i++;
	}
	else if (string[i] == '0')
	{
		flags->zero = 1;
		i++;
	}
	if ('0' <= string[i] && string[i] <= '9')
	{
		flags->width = ft_atoi(&string[i]);
		while ('0' <= string[i] && string[i] <= '9')
			i++;
	}
	if (string[i] == '.')
	{
		i++;
		flags->precision = ft_atoi(&string[i]);
		while ('0' <= string[i] && string[i] <= '9')
			i++;
	}
	return (i);
}

int	ft_flags(const char *string, t_flags *flags)
{
	int	i;

	i = 1;
	flags->minus = 0;
	flags->zero = 0;
	flags->width = -1;
	flags->precision = -1;
	i = ft_outsource(string, flags, i);
	return (i);
}
