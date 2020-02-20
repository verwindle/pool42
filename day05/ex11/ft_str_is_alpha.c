/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:09:19 by atumco            #+#    #+#             */
/*   Updated: 2020/02/04 13:09:21 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is__alpha(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int i;

	if (!str)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!is__alpha(str[i]))
			return (0);
		++i;
	}
	return (1);
}
