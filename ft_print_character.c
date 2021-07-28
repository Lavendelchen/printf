/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_character.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:26 by shaas             #+#    #+#             */
/*   Updated: 2021/07/28 13:30:09 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_actually_print_character(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_character(va_list args)
{
	int	c;

	c = va_arg(args, int);
	return (ft_actually_print_character(c));
}
