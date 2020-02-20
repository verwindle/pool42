/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:31:20 by atumco            #+#    #+#             */
/*   Updated: 2020/01/31 20:31:23 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*str != '\0' || *str)
	{
		++c;
		++str;
	}
	return (c);
}