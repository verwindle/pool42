/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 20:37:50 by atumco            #+#    #+#             */
/*   Updated: 2020/02/04 20:37:51 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			++i;
		}
		i = 0;
		++j;
		ft_putchar('\n');
	}
	return (0);
}
