/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:59:18 by atumco            #+#    #+#             */
/*   Updated: 2020/02/04 13:59:20 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	shift;

	i = 0;
	shift = 0;
	while (dest[shift] != '\0')
		++shift;
	while (src[i] != '\0')
	{
		if (shift < size - 1)
		{
			dest[shift] = src[i];
		}
		++shift;
		++i;
	}
	dest[shift - 1] = '\0';
	if (i + size > sizeof(src) + sizeof(dest))
		return (shift);
	return (i + size);
}
