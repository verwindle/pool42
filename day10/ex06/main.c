/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 21:09:29 by atumco            #+#    #+#             */
/*   Updated: 2020/02/10 21:09:32 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_logic.h"

int		main(int argc, char **argv)
{
	t_op	op;
	int		val1;
	int		val2;
	int		res;

	if (argc == 4)
	{
		val1 = ft_atoi(argv[1]);
		op = switch_op(argv[2]);
		val2 = ft_atoi(argv[3]);
		res = 0;
		if (op == divide && val2 == 0)
			write(1, "Stop : division by zero", 23);
		else if (op == modulo && val2 == 0)
			write(1, "Stop : modulo by zero", 21);
		else if (op != 0)
		{
			res = op(val1, val2);
			ft_putnum(res);
		}
		else
			ft_putnum(0);
		write(1, "\n", 1);
	}
	return (0);
}
