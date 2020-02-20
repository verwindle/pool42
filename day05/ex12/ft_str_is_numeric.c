/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:25:37 by atumco            #+#    #+#             */
/*   Updated: 2020/02/04 13:25:39 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is__numeric(char str)
{
	if ((str >= '0' && str <= '9'))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int i;

	if (!str)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!is__numeric(str[i]))
			return (0);
		++i;
	}
	return (1);
}
