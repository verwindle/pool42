/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_stuff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:23:43 by atumco            #+#    #+#             */
/*   Updated: 2020/02/19 15:23:43 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headersexp.h"
#include <stdlib.h>

char	**init_matrix(char *vector)
{
	char	**matrix;
	int		i;
	int		j;
	int		k;

	j = 0;
	matrix = (char **)malloc(sizeof(char*) * g_nublines);
	i = 0;
	while (i < g_nublines)
	{
		matrix[i] = (char*)malloc(sizeof(char) * g_nubsymb);
		k = 0;
		while (k <= g_nubsymb)
		{
			if ((k == g_nubsymb + 1) && (++k) && (++j))
				continue;
			matrix[i][k] = vector[j];
			j++;
			++k;
		}
		++i;
	}
	return (matrix);
}

int		**init_cache(char **matrix)
{
	int		**cache;
	int		i;
	int		j;

	cache = (int**)malloc(sizeof(int*) * g_nublines);
	i = 0;
	while (i < g_nublines)
	{
		cache[i] = (int*)malloc(sizeof(int) * g_nubsymb);
		j = 0;
		while (j < g_nubsymb)
		{
			cache[i][j] = (matrix[i][j] == g_empty) ? 1 : 0;
			++j;
		}
		++i;
	}
	return (cache);
}

int		**bsq_walkthrough(int **cache, int *res)
{
	int	i;
	int	j;

	*res = 0;
	i = 0;
	while (i < g_nublines)
	{
		j = 0;
		while (j <= g_nubsymb)
		{
			if ((!i || !j) && (++j))
				continue;
			else if (cache[i][j] > 0)
				cache[i][j] = 1 +
					min(cache[i][j - 1], cache[i - 1][j], cache[i - 1][j - 1]);
			if (cache[i][j] > *res)
				*res = cache[i][j];
			++j;
		}
		++i;
	}
	return (cache);
}

int		*bsq_idx_to_write(int **cache, int *res)
{
	int	i;
	int	j;
	int *idx;

	idx = (int*)malloc(sizeof(int) * 2);
	i = 0;
	while (i < g_nublines)
	{
		j = 0;
		while (j <= g_nubsymb)
		{
			if (cache[i][j] == *res)
			{
				idx[0] = i;
				idx[1] = j;
				return (idx);
			}
			++j;
		}
		++i;
	}
	return (0);
}

char	**bsq_fillfull(char **matrix, int *res, int *idx)
{
	int i;
	int j;
	int row;
	int col;

	row = idx[0];
	col = idx[1];
	i = row - *res + 1;
	i = (i >= 0) ? i : 0;
	while (i <= row)
	{
		j = col - *res + 1;
		j = (j >= 0) ? j : 0;
		while (j <= col)
		{
			matrix[i][j] = g_full;
			++j;
		}
		++i;
	}
	return (matrix);
}
