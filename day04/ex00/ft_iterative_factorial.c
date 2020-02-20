/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 10:29:22 by atumco            #+#    #+#             */
/*   Updated: 2020/02/01 10:29:24 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	res = 0;
	if (nb < 0 || nb > 12)
	{
		return (res);
	}
	if (!nb)
	{
		res = 1;
	}
	i = 0;
	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		--nb;
	}
	return (res);
}
