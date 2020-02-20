/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:19:54 by atumco            #+#    #+#             */
/*   Updated: 2020/02/05 16:19:55 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		argnum(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
			++i;
		++j;
	}
	return (j);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 1;
	k = 0;
	str = (char*)malloc(sizeof(*str) * (argnum(argc, argv) + argc - 1));
	while (k < argnum(argc, argv))
	{
		while (j < argc)
		{
			while ((argv[j][i]) && (++i) && (++k))
				str[k - 1] = argv[j][i - 1];
			str[k] = '\n';
			++k;
			i = 0;
			++j;
		}
	}
	str[k] = '\0';
	return (str);
}
