/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:43 by shaas             #+#    #+#             */
/*   Updated: 2021/08/25 17:49:54 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_string(va_list args, t_flags *flags)
{
	char	*str;

	str = va_arg(args, char *);
	if (flags->hashtag == 1 || flags->space == 1 || flags->plus == 1)
		return (ft_print_wtf());
	else
		return (ft_actually_print_string(str));
}
