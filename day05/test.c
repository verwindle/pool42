/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 13:31:54 by atumco            #+#    #+#             */
/*   Updated: 2020/02/03 13:31:59 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <time.h>
#include "ex01/ft_putnbr.c"
#include <stdlib.h>
#include <string.h>
#include <xlocale.h>

int main()
{
	clock_t t;
	t = clock();

	//char str[13] = {'-', '6', 'm', '4', 'i', 'n', 'o', 'r', 'e', 'r', '\0'};
	//char str[13] = "Hello World!";
	//char str[13] = "HelloWorld";
	//char str[30] = "  \t\r\n-2147483648asdas";
	//char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	//char dest[20];
	//unsigned int res = ft_strlcpy(str, num_str,  6);
	//ft_putchar('\n');
	ft_putnbr(-787231741);

/*
	char* c = "0123456789ABCDEF";
	ft_putnbr_base(-2147483648, c);
	printf("%c", '\n');
*/

	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	//printf("result:\t%i\n", res);
	printf("function took %f seconds to execute \n", time_taken); 
	return (0);
}
