#include "../libftprintf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char			str[]= "abc";
	char			*ptr;
	char			*ptr2;
	int				n;
	int				i;
	unsigned int	u;
	ptr = (NULL);
	ptr2 = 0;
	n = -2147483648;
	u = 4294967295;
	i = 2147483647;

	printf("\n----------Test FTPRINT %%----------\n");
	printf("opt: %d\n", ft_printf(
		"\nthis is %%! %c char! %s string! %d maxi! %i zero! %d mini! %i +! %i -! %u maxui! %x hex! %X HEX! %p &!\n", 'v', "abc", i, 0, n, 42, -42, u, 42, -42, str
		));
	printf("exp: %d\n", printf(
		"\nthis is %%! %c char! %s string! %d maxi! %i zero! %d mini! %i +! %i -! %u maxui! %x hex! %X HEX! %p &!\n", 'v', "abc", i, 0, n, 42, -42, u, 42, -42, str
		));

	printf("\n----------Test %%----------\n");
	printf("opt: %d\n", ft_printf(" %% %%% % %%% %  % %    % % % %% %\n"));
	printf("exp: %d\n", printf(" %% %%% % %%% %  % %    % % % %% %\n"));
	printf("\n----------Test c----------\n");
	printf("opt: %d\n", ft_printf(" %c %c %c\n", 0, '1', 'x'));
	printf("exp: %d\n", printf(" %c %c %c\n", 0, '1', 'x'));
	printf("\n----------Test s----------\n");
	printf("opt: %d\n", ft_printf(" %s %s %s %s %s %s\n", " - ", "\0", "4", "", "z ", ptr));
	printf("exp: %d\n", printf(" %s %s %s %s %s %s\n", " - ", "\0", "4", "", "z ", ptr));
	printf("\n----------Test d----------\n");
	printf("opt: %d\n", ft_printf(" %d %d %d %d %d\n", i, n, 42, 0, -42));
	printf("exp: %d\n", printf(" %d %d %d %d %d\n", i, n, 42, 0, -42));
	printf("\n----------Test i----------\n");
	printf("opt: %d\n", ft_printf(" %i %i %i %i %i\n", i, n, 42, 0, -42));
	printf("exp: %d\n", printf(" %i %i %i %i %i\n", i, n, 42, 0, -42));
	printf("\n----------Test u----------\n");
	printf("opt: %d\n", ft_printf(" %u %u %u %u %u %u\n", i, n, 42, u, 0, -42));
	printf("exp: %d\n", printf(" %u %u %u %u %u %u\n", i, n, 42, u, 0, -42));
	printf("\n----------Test x----------\n");
	printf("opt: %d\n", ft_printf(" %x %x %x %x %x %x\n", i, n, 42, u, 0, -42));
	printf("exp: %d\n", printf(" %x %x %x %x %x %x\n", i, n, 42, u, 0, -42));
	printf("\n----------Test X----------\n");
	printf("opt: %d\n", ft_printf(" %X %X %X %X %X %X\n", i, n, 42, u, 0, -42));
	printf("exp: %d\n", printf(" %X %X %X %X %X %X\n", i, n, 42, u, 0, -42));
	printf("\n----------Test p----------\n");
	printf("opt: %d\n", ft_printf(" %p %p %p\n", str, ptr, ptr2));
	printf("exp: %d\n", printf(" %p %p %p\n", str, ptr, ptr2));
	printf("\n----------Test MIX----------\n");
	printf("opt: %d\n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
	printf("exp: %d\n", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
	return (0);
}

//make && gcc -Wall -Wextra -Werror printf-test-main.c libftprintf.a && ./a.out
