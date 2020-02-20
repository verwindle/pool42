/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:39:57 by atumco            #+#    #+#             */
/*   Updated: 2020/01/31 20:39:59 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		c;
	int		size;
	char	tmp;

	c = 0;
	while (str[c] != '\0' || str[c])
	{
		++c;
	}
	size = c - 1;
	c = 0;
	while (size > 0)
	{
		tmp = str[size];
		str[size] = str[c];
		--size;
		str[c] = tmp;
		++c;
	}
	return (str);
}
