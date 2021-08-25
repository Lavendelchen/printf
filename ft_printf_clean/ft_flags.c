/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 20:58:38 by shaas             #+#    #+#             */
/*   Updated: 2021/08/25 14:43:47 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_outsource(const char *string, t_flags *flags, int i)
{
	if (string[i] == '#')
	{
		flags->hashtag++;
		i++;
	}
	if (string[i] == ' ')
	{
		flags->space++;
		i++;
	}
	if (string[i] == '+')
	{
		flags->plus++;
		i++;
	}
	return (i);
}

int	ft_flags(const char *string, t_flags *flags)
{
	int	i;

	i = 1;
	flags->hashtag = 0;
	flags->space = 0;
	flags->plus = 0;
	i = ft_outsource(string, flags, i);
	return (i);
}
