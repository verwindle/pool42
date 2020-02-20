/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_display.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:07:46 by atumco            #+#    #+#             */
/*   Updated: 2020/02/13 16:07:47 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_includes.h"

int	main(int argc, char **argv)
{
	int		fd;
	ssize_t	ret;
	char	c;
	char	*msg;

	if (argc != 2)
	{
		msg = (argc < 2) ? "File name missing.\n" : "Too many arguments.\n";
		write(2, msg, 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY | O_CREAT);
	if (fd < 0)
		return (1);
	while ((ret = read(fd, &c, 1)) > 0)
		write(1, &c, 1);
	if (ret < 0)
	{
		write(2, "Cannot read file\n", 17);
		return (1);
	}
	if (close(fd))
		return (1);
	return (0);
}
