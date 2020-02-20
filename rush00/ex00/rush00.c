/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:54:46 by atumco            #+#    #+#             */
/*   Updated: 2020/02/01 16:54:47 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	cycle_x(int x, int y, int j)
{
	char	symb;
	int		i;

	i = 0;
	while (i < x)
	{
		if (!j || !(y - j - 1))
		{
			symb = (!i || !(x - i - 1)) ? 'o' : '-';
		}
		else
		{
			symb = (!i || !(x - i - 1)) ? '|' : ' ';
		}
		ft_putchar(symb);
		++i;
	}
}

void	rush(int x, int y)
{
	int j;

	if (x < 0 || y < 0)
	{
		x = 0;
		y = 0;
	}
	j = 0;
	while (j < y)
	{
		cycle_x(x, y, j);
		ft_putchar('\n');
		++j;
	}
}
