/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 14:54:35 by atumco            #+#    #+#             */
/*   Updated: 2020/02/04 14:54:36 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
			dest[i] = src[i];
		++i;
	}
	dest[i - sizeof(dest)] = '\0';
	return (i);
}
