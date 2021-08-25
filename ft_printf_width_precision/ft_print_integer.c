/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:38 by shaas             #+#    #+#             */
/*   Updated: 2021/08/24 21:09:05 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_integer(va_list args, t_flags *flags)
{
	int	i;

	i = va_arg(args, int);
	return (ft_actually_print_integer(i, 0));
}
