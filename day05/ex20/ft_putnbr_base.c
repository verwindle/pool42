/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 15:09:42 by atumco            #+#    #+#             */
/*   Updated: 2020/02/04 15:09:43 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (sizeof(base) <= 1)
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	min_int(char *base, int power)
{
	int i;
	int coeff;

	while (base[power] != '\0')
		power++;
	power /= 2;
	coeff = 1;
	ft_putchar('-');
	ft_putchar(base[power]);
	while (power - 2 > 0)
	{
		coeff *= 2;
		power /= 2;
	}
	i = 32 / coeff - 1;
	while (i)
	{
		ft_putchar('0');
		--i;
	}
}

int		*algorithm(int nbr, char *base, int power, int res[33])
{
	int i;

	while (base[power] != '\0')
		power++;
	i = 0;
	while (nbr)
	{
		res[i] = nbr % power;
		nbr = nbr / power;
		++i;
	}
	res[32] = i;
	return (res);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	power;
	int	res[33];
	int	i;

	power = 0;
	if (check_base(base))
	{
		if (!nbr)
			ft_putchar('0');
		else if (nbr < 0)
		{
			if (nbr == -2147483648)
			{
				min_int(base, power);
				return ;
			}
			nbr = -nbr;
			ft_putchar('-');
		}
		algorithm(nbr, base, power, res);
		i = res[32];
		while (--i >= 0)
			ft_putchar(base[res[i]]);
	}
}
