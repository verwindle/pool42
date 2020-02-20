/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmidori <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:37:49 by lmidori           #+#    #+#             */
/*   Updated: 2020/02/19 15:37:50 by lmidori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(char *str)
{
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		sum = sum * 10 + (str[i] - 48);
		i++;
	}
	return (sum);
}