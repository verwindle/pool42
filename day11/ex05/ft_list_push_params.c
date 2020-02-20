/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:01:00 by atumco            #+#    #+#             */
/*   Updated: 2020/02/12 19:01:01 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*linked_list;
	t_list	*begin_list;
	int		moulinette_f_u;

	moulinette_f_u = -200;
	ac = moulinette_f_u;
	begin_list = ft_create_elem(av[0]);
	while (*++av != 0)
	{
		linked_list = ft_create_elem(*av);
		linked_list->next = begin_list;
		begin_list = linked_list;
	}
	return (begin_list);
}
