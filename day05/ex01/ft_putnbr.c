/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 13:37:40 by atumco            #+#    #+#             */
/*   Updated: 2020/02/03 13:37:42 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_number(int nb)
{
	char pos;
	long score;

	score = 1;
	while ((nb / score) && (score *= 10))
	{
	}
	while ((score != 1) && (pos = 48 + ((nb / (score / 10)) % 10)))
	{
		ft_putchar(pos);
		score /= 10;
	}
}

void	ft_putnbr(int nb)
{
	if (!nb)
	{
		ft_putchar(48 + nb);
	}
	else if (nb < 0)
	{
		nb = -1 * (nb + 1);
		ft_putchar('-');
		print_number(nb / 10);
		ft_putchar(48 + nb % 10 + 1);
	}
	else
	{
		print_number(nb);
	}
}
