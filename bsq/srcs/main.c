/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmidori <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:27:44 by lmidori           #+#    #+#             */
/*   Updated: 2020/02/19 15:27:46 by lmidori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "headersexp.h"

int			main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = 0;
	str = (char *)malloc(sizeof(char));
	if (argc == 1)
		j = -1;
	while (argv[++j])
	{
		str = read_map(argv[j], str, argc);
		if (str == NULL)
			return (0);
		if ((str = validate_map(str)) == 0)
			return (0);
		print(str);
	}
	return (0);
}
