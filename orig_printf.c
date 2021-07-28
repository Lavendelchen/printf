/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orig_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:31:57 by shaas             #+#    #+#             */
/*   Updated: 2021/07/26 15:49:00 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	long	c = 'A';

	printf("%c", c);
}

// NULL pointer: segmentation fault. don't need to handle that.
