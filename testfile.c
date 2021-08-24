/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:31:57 by kprzybyl             #+#    #+#             */
/*   Updated: 2021/08/24 18:16:11 by kprzybyl fuck off            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    main(void)
{
	int	i = 30;
	int	*p = &i;

	printf("Kamil ist %010c gut\n");
	printf("Kamil ist %-10.0s gut\n", "sehr");
	printf("Kamil ist %3s gut\n", "sehr");
	printf("Kamil ist %10.2s gut\n", "sehr");
	printf("Kamil ist %10.5d gut\n", 20);
	printf("Kamil ist %10.5d gut\n", 20);
	printf("Kamil ist %10.5d gut\n", 20);
	printf("Kamil ist %20p gut\n", p);
    return (0);
}

// no precision with chars
// precision subtracts with strings, adds zeroes with integer types
