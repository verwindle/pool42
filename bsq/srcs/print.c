/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:48:45 by atumco            #+#    #+#             */
/*   Updated: 2020/02/19 16:48:46 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headersexp.h"
#include <unistd.h>
#include <stdlib.h>

void	print(char *string)
{
	char	**matrix;
	int		i;
	int		j;

	matrix = bsq(string);
	i = 0;
	while (i < g_nublines)
	{
		j = 0;
		while (j < g_nubsymb)
		{
			write(1, &matrix[i][j], 1);
			++j;
		}
		++i;
		write(1, "\n", 1);
	}
	free(matrix);
}
