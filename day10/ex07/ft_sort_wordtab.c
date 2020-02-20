/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:13:26 by atumco            #+#    #+#             */
/*   Updated: 2020/02/11 19:13:35 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (tab[i] != 0)
	{
		j = i;
		while ((j) && (ft_strcmp(tab[j - 1], tab[j]) > 0))
		{
			tmp = tab[j];
			tab[j] = tab[j - 1];
			tab[j - 1] = tmp;
			--j;
		}
		++i;
	}
}
