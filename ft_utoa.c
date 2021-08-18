/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:32:15 by shaas             #+#    #+#             */
/*   Updated: 2021/08/18 15:07:54 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_assign(unsigned int n, char *nbr, int i)
{
	if (n >= 10)
	{
		i = ft_assign((n / 10), nbr, i);
		i = ft_assign((n % 10), nbr, i);
	}
	else
	{
		nbr[i] = n + '0';
		i++;
		return (i);
	}
	return (i);
}

char	*ft_utoa(unsigned int n) // if used, free str!!!
{
	char	nbr[12];
	int		i;
	char	*str;

	i = 0;
	i = ft_assign(n, nbr, i);
	nbr[i] = '\0';
	str = ft_strdup(nbr);
	return (str);
}
