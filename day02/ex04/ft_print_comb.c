/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:28:41 by atumco            #+#    #+#             */
/*   Updated: 2020/01/30 15:57:52 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	left;
	char	mid;
	char	right;

	left = 47;
	mid = left + 1;
	right = mid + 1;
	while (left <= mid && mid <= right && (mid = left + 1) && ++left != 56)
	{
		while ((right = mid + 1) && ++mid != 58)
		{
			while (++right != 58)
			{
				ft_putchar(left);
				ft_putchar(mid);
				ft_putchar(right);
				if (left != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			right = mid + 1;
		}
	}
}
