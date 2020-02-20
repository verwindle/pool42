/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_logic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 21:14:32 by atumco            #+#    #+#             */
/*   Updated: 2020/02/10 21:14:33 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_logic.h"

t_op	switch_op(char *op)
{
	if (op[0] == '+' && op[1] == 0)
		return (add);
	else if (op[0] == '-' && op[1] == 0)
		return (subtract);
	else if (op[0] == '*' && op[1] == 0)
		return (multiply);
	else if (op[0] == '/' && op[1] == 0)
		return (divide);
	else if (op[0] == '%' && op[1] == 0)
		return (modulo);
	else
		return (0);
}

void	ft_putnum(int num)
{
	char c;

	if (-9 > num || num > 9)
		ft_putnum(num / 10);
	else if (num < 0)
		write(1, "-", 1);
	c = (num < 0) ? -(num % 10) : num % 10;
	c += 48;
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int		num;
	char	sign;

	num = 0;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '+' || *str == '-')
		++str;
	while (47 < *str && *str < 58)
	{
		num *= 10;
		num += *str++ - 48;
	}
	return (num * sign);
}
