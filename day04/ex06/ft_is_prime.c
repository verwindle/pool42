/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 13:35:16 by atumco            #+#    #+#             */
/*   Updated: 2020/02/01 13:35:17 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int n;
	int half;

	n = 0;
	half = nb / 2;
	while (n <= half && (n * n) != nb)
	{
		n++;
	}
	if ((n * n) == nb)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}

int	ft_is_prime(int nb)
{
	int i;

	if (nb == 2)
	{
		return (1);
	}
	else if (!(nb % 2) || !nb || !(nb - 1) || nb < 0)
	{
		return (0);
	}
	i = 3;
	while (i <= ft_sqrt(nb))
	{
		if (!(nb % i))
		{
			return (0);
		}
		++i;
	}
	return (1);
}
