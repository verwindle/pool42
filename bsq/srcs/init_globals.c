/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_globals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmidori <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:27:37 by lmidori           #+#    #+#             */
/*   Updated: 2020/02/19 15:27:38 by lmidori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headersexp.h"
#include <stdlib.h>

int			init_globals(char *str)
{
	int		i;
	int		j;
	char	*dest;

	j = -1;
	i = 0;
	while ((str[i] != '\n') && (str[i] != '\0'))
		i++;
	if (i < 4)
		return (0);
	dest = (char*)malloc(sizeof(char) * (i - 2));
	while (++j < i - 3)
		dest[j] = str[j];
	g_nublines = ft_atoi(dest);
	if (cout_atoi(g_nublines) + 3 != i)
		return (0);
	g_empty = str[i - 3];
	g_obstacle = str[i - 2];
	g_full = str[i - 1];
	free(dest);
	return (1);
}
