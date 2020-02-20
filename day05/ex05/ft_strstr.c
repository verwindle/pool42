/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:50:22 by atumco            #+#    #+#             */
/*   Updated: 2020/02/03 19:50:23 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	first;
	int	last;
	int	sublen;

	first = 0;
	last = 0;
	sublen = 0;
	while (to_find[sublen])
		sublen++;
	if (!sublen)
		return (str);
	while (str[first] != '\0')
	{
		while (to_find[last] == str[first + last])
		{
			if (last == sublen - 1)
			{
				return (str + first);
			}
			++last;
		}
		last = 0;
		++first;
	}
	return (0);
}
