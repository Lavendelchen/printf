/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:49:31 by shaas             #+#    #+#             */
/*   Updated: 2021/07/28 15:44:34 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char*	ft_hexa_maker(int i, unsigned int x_l, char *hexa_str) // null terminator?
{
	while ()
	hexa_str[i] =
}

int	ft_actually_print_hexa_lower(unsigned int x_l)
{
	char	*hexa_str;
	char	*x_l_str;

	x_l_str = ft_utoa(x_l);
	hexa_str = ft_hexa_maker(7, x_l, hexa_str);
	free (x_l_str)
	return ();
}

//int	ft_print_hexa_lower(va_list args)
//{
//	unsigned int	x_l;
//
//	x_l = va_arg(args, unsigned int);
//	return (ft_actually_print_hexa_lower(x_l));
//}
//
