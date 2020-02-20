/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 19:22:22 by atumco            #+#    #+#             */
/*   Updated: 2020/02/14 19:22:24 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int l_c;
	int r_c;

	if (!root)
		return (-1);
	l_c = btree_level_count(root->left);
	r_c = btree_level_count(root->right);
	if (l_c > r_c)
		return (l_c + 1);
	else
		return (r_c + 1);
}
