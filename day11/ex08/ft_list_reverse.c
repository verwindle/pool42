/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 21:27:04 by atumco            #+#    #+#             */
/*   Updated: 2020/02/12 21:27:05 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *next_node;
	t_list *next_to_next_node;

	next_node = *begin_list;
	*begin_list = NULL;
	next_to_next_node = NULL;
	while (next_node != 0)
	{
		next_to_next_node = next_node->next;
		next_node->next = *begin_list;
		*begin_list = next_node;
		next_node = next_to_next_node;
	}
}
