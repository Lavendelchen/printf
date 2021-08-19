/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orig_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:31:57 by shaas             #+#    #+#             */
/*   Updated: 2021/08/19 20:08:42 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"

int	main(void)
{
	char	c[] = "0123456789abcdef";

	printf("%s", c);
}

// NULL pointer: segmentation fault. don't need to handle that.
