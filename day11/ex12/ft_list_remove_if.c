/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:50:06 by atumco            #+#    #+#             */
/*   Updated: 2020/02/12 22:50:07 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while (begin_list != 0)
	{
		if (!cmp(data_ref, begin_list->data))
			begin_list = NULL;
		begin_list = begin_list->next;
	}
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *linked_list;
	t_list *next_node;

	linked_list = *begin_list;
	while (*begin_list != 0)
	{
		next_node = linked_list->next;
		if (!cmp(data_ref, (*begin_list)->data))
		{
			free(linked_list);
			ft_list_find(*begin_list, data_ref, cmp);
		}
		linked_list = next_node;
	}
}
