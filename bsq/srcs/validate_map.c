/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmidori <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:28:02 by lmidori           #+#    #+#             */
/*   Updated: 2020/02/19 15:28:05 by lmidori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "headersexp.h"

char		*validate_map(char *str)
{
	int		x;
	int		y;
	int		x1;

	x1 = 0;
	x = 0;
	y = 0;
	if (init_globals(str))
	{
		str = cut_string(str);
		if (valid_xymap(str, x, y, x1))
			return (str);
	}
	write(2, "map error\n", 10);
	return (0);
}
