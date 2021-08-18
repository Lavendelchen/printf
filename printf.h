/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:47:18 by shaas             #+#    #+#             */
/*   Updated: 2021/08/18 15:09:20 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h> // variadic functions
# include <unistd.h> // uhhhh not sure
# include <stdio.h> // test purposes
# include <limits.h> // UINT_MAX (hexa)
# include <stdlib.h> // malloc/free

//libft????

int		ft_printf(const char *string, ...);
int		ft_print_character(va_list args);
int		ft_actually_print_character(int c);
int		ft_print_percent_sign(void);
int		ft_print_string(va_list args);
int		ft_actually_print_string(char *str);
int		ft_print_wtf(void);
char	*ft_utoa(unsigned int n);

#endif
