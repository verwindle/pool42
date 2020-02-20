/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmidori <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:26:54 by lmidori           #+#    #+#             */
/*   Updated: 2020/02/19 15:26:56 by lmidori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headersexp.h"

char		*cut_string(char *src)
{
	int		i;
	int		j;
	int		size;
	char	*dest;

	i = 0;
	j = -1;
	while ((src[i] != '\n') && (src[i] != '\0'))
		i++;
	size = i;
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * (i - size + 1));
	i = size;
	while (src[++i] != '\0')
	{
		dest[++j] = src[i];
	}
	dest[j] = '\0';
	free(src);
	return (dest);
}
