/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 22:30:41 by atumco            #+#    #+#             */
/*   Updated: 2020/02/02 22:30:43 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar(char c);

void	cycle_x(int x, int y, int j)
{
	char	curr;
	int		i;

	i = 0;
	while (i < x)
	{
		if (!j)
		{
			curr = (!i || !(x - i - 1)) ? 'A' : 'B';
		}
		else if (!(y - j - 1))
		{
			curr = (!i || !(x - i - 1)) ? 'C' : 'B';
		}
		else
		{
			curr = (!i || !(x - i - 1)) ? 'B' : ' ';
		}
		ft_putchar(curr);
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
