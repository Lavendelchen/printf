/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:41 by shaas             #+#    #+#             */
/*   Updated: 2021/08/25 17:49:48 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_actually_print_pointer(unsigned long long ptr)
{
	int		hexa_arr[16];
	char	*char_set;
	int		ret;

	char_set = "0123456789abcdef";
	ret = ft_actually_print_string("0x");
	ft_hexa_converter(ptr, hexa_arr, 1152921504606846976);
	ret = ret + ft_hexa_printer(hexa_arr, 16, char_set);
	return (ret);
}

int	ft_print_pointer(va_list args, t_flags *flags)
{
	unsigned long long	ptr;

	ptr = va_arg(args, unsigned long long);
	if (flags->hashtag == 1 || flags->space == 1 || flags->plus == 1)
		return (ft_print_wtf());
	else
		return (ft_actually_print_pointer(ptr));
}
