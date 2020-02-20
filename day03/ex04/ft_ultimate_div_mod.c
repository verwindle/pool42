/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:09:59 by atumco            #+#    #+#             */
/*   Updated: 2020/01/31 12:10:02 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <time.h>

int	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
    
    printf("%d %d", *a, *b);
    return (*a);
}

int main()
{
    clock_t t;
    t = clock();
    int a = 5;
    int b = 2;
    int res = ft_ultimate_div_mod(&a, &b);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("result:\t%i\n", res);
    printf("function took %f seconds to execute \n", time_taken);
    return (0);
}
