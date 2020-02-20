/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 15:14:15 by atumco            #+#    #+#             */
/*   Updated: 2020/02/03 15:14:18 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valueinarray(char val, char *arr)
{
	unsigned long i;

	i = 0;
	while (i < sizeof(arr) + 2)
	{
		if (arr[i] == val)
			return (1);
		++i;
	}
	return (0);
}

int	stripped_str_pos(char *str)
{
	int		i;
	char	*special_s;

	special_s = "\t\v\n\r\f+ \0";
	i = 0;
	while ((valueinarray(str[i], special_s)) && (str[i] != '\0'))
	{
		++i;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int		res;
	int		i;
	int		minus;
	char	*digits;

	digits = "0123456789\0";
	res = 0;
	i = stripped_str_pos(str);
	minus = (str[i] == '-') ? 1 : 0;
	i += (str[i] == '-') ? 1 : 0;
	while (str[i] != '\0' && valueinarray(str[i], digits))
	{
		str[i] = (str[i] - 48);
		res = 10 * res + str[i];
		++i;
	}
	if (minus && res)
	{
		res = -res;
	}
	return (res);
}
