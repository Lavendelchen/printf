/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:41 by shaas             #+#    #+#             */
/*   Updated: 2021/08/21 15:24:54 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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

int	ft_print_pointer(va_list args)
{
	unsigned long long	ptr;

	ptr = va_arg(args, unsigned long long);
	return (ft_actually_print_pointer(ptr));
}
