/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:15:16 by atumco            #+#    #+#             */
/*   Updated: 2020/02/05 16:15:18 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;
	int *arr;

	size = (max - min);
	arr = (int*)malloc(sizeof(int) * size);
	if (arr == NULL || max - min <= 0)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (size);
}
