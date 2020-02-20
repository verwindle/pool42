/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 20:03:09 by atumco            #+#    #+#             */
/*   Updated: 2020/02/04 20:03:10 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	argc = 0;
	while (argv[argc][i] != '\0')
	{
		ft_putchar(argv[argc][i]);
		++i;
	}
	return (0);
}
