/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 18:30:54 by atumco            #+#    #+#             */
/*   Updated: 2020/01/30 18:30:57 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a[99];
	int	i;
	int	j;

	i = 0;
	while (i < 2)
	{
		j = i;
		while (j < 99)
		{
			a[j] = j;
			ft_putchar(' ');
			ft_putchar((char)(a[i] / 10 + 48));
			ft_putchar((char)(a[i] % 10 + 48));
			ft_putchar(' ');
			ft_putchar((char)((a[j] + 1) / 10 + 48));
			ft_putchar((char)((a[j] + 1) % 10 + 48));
			if (!(i == 98 && j == 98))
			{
				ft_putchar(',');
			}
			j++;
		}
		i++;
	}
}

int main() {
	ft_print_comb2();
	return(0);
}