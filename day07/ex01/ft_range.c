/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:52:28 by atumco            #+#    #+#             */
/*   Updated: 2020/02/05 15:52:29 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *arr;

	if (max - min <= 0)
		return (NULL);
	arr = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
