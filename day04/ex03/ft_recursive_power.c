/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:52:00 by atumco            #+#    #+#             */
/*   Updated: 2020/02/01 12:52:01 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else if (!power)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
