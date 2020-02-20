/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:16:06 by atumco            #+#    #+#             */
/*   Updated: 2020/02/01 15:16:08 by atumco           ###   ########.fr       */
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
		return (2);
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

int	ft_find_next_prime(int nb)
{
	int res;

	res = (ft_is_prime(nb)) ? nb : 0;
	if (!res)
	{
		res = ft_find_next_prime(nb + 1);
	}
	return (res);
}
