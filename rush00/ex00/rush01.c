/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 21:33:59 by atumco            #+#    #+#             */
/*   Updated: 2020/02/02 21:34:02 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	cycle_x(int x, int y, int j)
{
	char	slashfinder;
	char	symb;
	int		i;

	i = 0;
	while (i < x)
	{
		if (!j)
		{
			slashfinder = (!(i)) ? '/' : '\\';
			symb = (!i || !(x - i - 1)) ? slashfinder : '*';
		}
		else if (!(y - j - 1))
		{
			slashfinder = (!i) ? '\\' : '/';
			symb = (!i || !(x - i - 1)) ? slashfinder : '*';
		}
		else
		{
			symb = (!i || !(x - i - 1)) ? '*' : ' ';
		}
		ft_putchar(symb);
		++i;
	}
}

void	rush(int x, int y)
{
	int j;

	j = 0;
	if (x < 0 || y < 0)
	{
		x = 0;
		y = 0;
	}
	while (j < y)
	{
		cycle_x(x, y, j);
		ft_putchar('\n');
		++j;
	}
}
