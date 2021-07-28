/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:31 by shaas             #+#    #+#             */
/*   Updated: 2021/07/26 15:56:40 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_actually_print_hexa_lower(unsigned int x_l)
{
	unsigned int	nbr;
	char			*hexa_str;

	nbr = 4294967295;
	hexa_str = ft_make_hexa(i, nbr);
}

int	ft_print_hexa_lower(va_list args)
{
	unsigned int	x_l;

	x_l = va_arg(args, unsigned int);
	return (ft_actually_print_hexa_lower(x_l));
}
