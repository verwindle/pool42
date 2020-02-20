/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 21:07:26 by atumco            #+#    #+#             */
/*   Updated: 2020/02/03 21:07:27 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char str)
{
	if ((str >= '0' && str <= '9'))
		return (1);
	return (0);
}

int		is_alpha(char str, int caps)
{
	if ((caps) && (str >= 'A' && str <= 'Z'))
		return (1);
	else if ((!caps) && (str >= 'a' && str <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_not_alpha;
	int is_not_num;

	i = 0;
	if (is_alpha(str[0], 0))
	{
		str[0] -= 32;
		i = 1;
	}
	while (str[i] != '\0')
	{
		if (is_alpha(str[i], 1))
			str[i] += 32;
		++i;
	}
	i = 0;
	while (str[i] != '\0' && ++i)
	{
		is_not_alpha = (!is_alpha(str[i], 1) && !is_alpha(str[i], 0));
		is_not_num = !is_numeric(str[i]);
		if ((is_not_alpha) && (is_not_num) && (is_alpha(str[i + 1], 0)))
			str[i + 1] -= 32;
	}
	return (str);
}
