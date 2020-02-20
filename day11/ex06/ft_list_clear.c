/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:20:02 by atumco            #+#    #+#             */
/*   Updated: 2020/02/12 20:20:02 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *linked_list;
	t_list *next_node;

	linked_list = *begin_list;
	while (linked_list != NULL)
	{
		next_node = linked_list->next;
		free(linked_list);
		linked_list = next_node;
	}
	*begin_list = NULL;
}
