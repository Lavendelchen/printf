/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:43 by shaas             #+#    #+#             */
/*   Updated: 2021/07/28 14:06:44 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	ft_actually_print_string(char *str)
{
	int	strlen;

	strlen = 0;
	if (str == NULL)
		return (ft_actually_print_string("(null)"));
	while (*str != '\0')
	{
		strlen = strlen + ft_actually_print_character(*str);
		str++;
	}
	return (strlen);
}

int	ft_print_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	return (ft_actually_print_string(str));
}
