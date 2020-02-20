/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_xymap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmidori <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:27:54 by lmidori           #+#    #+#             */
/*   Updated: 2020/02/19 15:27:55 by lmidori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headersexp.h"
#include <stdio.h>

int			valid_xymap(char *str, int x, int y, int x1)
{
	int		i;

	i = -1;
	x1 = find_len(str);
	y++;
	while (str[++i] != '\0')
	{
		if (str[i] != '\n' && str[i] == g_full && str[i] != g_obstacle
		&& str[i] != g_empty)
			return (0);
		if (str[i] == '\n')
		{
			if (x != x1)
				return (0);
			y++;
			x = 0;
		}
		else
			x++;
	}
	if (y != g_nublines)
		return (0);
	g_nubsymb = x;
	return (1);
}
