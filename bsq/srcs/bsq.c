/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:15:36 by atumco            #+#    #+#             */
/*   Updated: 2020/02/19 16:15:37 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headersexp.h"
#include <stdlib.h>

char	**bsq(char *vector)
{
	char	**matrix;
	int		**cache;
	int		res;
	int		*idx;

	res = 0;
	matrix = init_matrix(vector);
	cache = init_cache(matrix);
	cache = bsq_walkthrough(cache, &res);
	idx = bsq_idx_to_write(cache, &res);
	matrix = bsq_fillfull(matrix, &res, idx);
	free(cache);
	return (matrix);
}
