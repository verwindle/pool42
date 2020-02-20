/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:47:20 by atumco            #+#    #+#             */
/*   Updated: 2020/02/04 13:47:27 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int shift;

	i = 0;
	shift = 0;
	while (dest[shift] != '\0')
		++shift;
	while (src[i] != '\0')
	{
		dest[shift] = src[i];
		++i;
		++shift;
	}
	dest[shift] = '\0';
	return (dest);
}
