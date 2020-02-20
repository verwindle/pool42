/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmidori <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:42:28 by lmidori           #+#    #+#             */
/*   Updated: 2020/02/19 15:42:33 by lmidori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "headersexp.h"

char		*read_map(char *argv, char *str, int argc)
{
	int		i;
	int		fd;
	int		ret;
	char	buf;

	i = 0;
	if (argc > 1)
	{
		fd = open(argv, O_RDWR);
		if (fd == -1)
			return (0);
	}
	else
		fd = 0;
	while ((ret = read(fd, &buf, 1)))
	{
		str = ft_strdup(str);
		str[i] = buf;
		++i;
	}
	str[i] = '\0';
	if (close(fd) == -1)
		return (0);
	return (str);
}
