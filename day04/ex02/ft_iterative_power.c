/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:27:03 by atumco            #+#    #+#             */
/*   Updated: 2020/02/01 12:27:04 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;

	res = 0;
	if (power < 0)
	{
		return (res);
	}
	res = 1;
	while (power > 0)
	{
		res *= (nb * nb);
		power -= 2;
	}
	if (power % 2)
	{
		res = res / nb;
	}
	return (res);
}
