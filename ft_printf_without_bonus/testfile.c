/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:31:57 by shaas             #+#    #+#             */
/*   Updated: 2021/08/21 14:48:59 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "printf.h"

int    ft_actually_print_character(int c)
{
    write(1, &c, 1);
    return (1);
}

int    ft_actually_print_string(char *str)
{
    int    strlen;

    strlen = 0;
    if (str == NULL)
        return (ft_actually_print_string("(null)"));
    while (*str != '\0')
    {
        strlen = strlen + ft_actually_print_character(*str);
        str++;
    }
    return (strlen);
}

void    ft_hexa_converter(unsigned long long x, int *arr, unsigned long long divider) //leave it like that or not?
{
    int    i;

    i = 0;
    while (divider > 0)
    {
        arr[i] = x / divider;
        x = x % divider;
        divider = divider / 16;
        i++;
    }
}

int    ft_print_hexa(int *arr, int size_of_arr, char *char_set)
{
    int    i;
    int    char_num;

    i = 0;
    char_num = 0;
    while (arr[i] == 0 && i < (size_of_arr - 1)) // i < 7 is so if everything is zero, the last zero still gets printed
        i++;
    while (i < size_of_arr)
    {
        char_num = char_num + ft_actually_print_character(char_set[arr[i]]);
        i++;
    }
    return (char_num);
}

int    main(void)
{
    int        hexa_arr[16];
    char    *char_set;
    int        ret;

    char_set = "0123456789abcdef";
    ret = ft_actually_print_string("0x");
    ft_hexa_converter(140732724902232, hexa_arr, 1152921504606846976);
    ret = ret + ft_print_hexa(hexa_arr, 16, char_set);
    return (ret);
}
