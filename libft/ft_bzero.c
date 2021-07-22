/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:14:11 by shaas             #+#    #+#             */
/*   Updated: 2021/06/25 15:26:07 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*char_s;

	i = 0;
	while (i < n)
	{
		char_s = (char *)s;
		*char_s = '\0';
		s++;
		i++;
	}
}