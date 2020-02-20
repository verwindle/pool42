/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 23:29:01 by atumco            #+#    #+#             */
/*   Updated: 2020/02/09 23:29:03 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_star(char *s, int was_in)
{
	int i;

	i = 0;
	while ((s[i] != '\0') && (++i))
	{
		if (s[i] == '*')
			return (i + 1);
	}
	return (-1);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char *base;

	base = s1;
	while ((s1 - base < n) && (*s1 != '\0' || *s2 != '\0') && (*s2 != '*'))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (0);
}

int	end_case_handler(char *s2)
{
	while (*s2 != '\0')
	{
		if (*s2 == '*')
			return (1);
	}
	return (0);
}

int	star_walker(char *s1, char *s2, int pos)
{
	if (ft_strncmp(s1, s2, pos))
		return (0);
	return ((*s1 == '\0') ? end_case_handler(s2) :
		star_walker(&s1[pos], &s2[pos], is_star(&s2[pos], 0)));
}

int	match(char *s1, char *s2)
{
	int pos;

	if (is_star(s2, 0) == -1)
		return ((ft_strncmp(s1, s2, 100)) ? 0 : 1);
	pos = is_star(s2, 0);
	return (star_walker(s1, s2, pos));
}
