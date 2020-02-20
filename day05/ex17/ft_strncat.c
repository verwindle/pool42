/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:56:35 by atumco            #+#    #+#             */
/*   Updated: 2020/02/04 13:56:36 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int shift;

	i = 0;
	shift = 0;
	while (dest[shift] != '\0')
		++shift;
	while (i < nb && src[i] != '\0')
	{
		dest[shift] = src[i];
		++i;
		++shift;
	}
	dest[shift] = '\0';
	return (dest);
}
