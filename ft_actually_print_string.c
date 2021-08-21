/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actually_print_string.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:01:00 by shaas             #+#    #+#             */
/*   Updated: 2021/08/21 15:50:23 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_actually_print_string(char *str)
{
	int	ret;

	ret = 0;
	if (str == NULL)
		return (ft_actually_print_string("(null)"));
	while (*str != '\0')
	{
		ret = ret + ft_actually_print_character(*str);
		str++;
	}
	return (ret);
}
