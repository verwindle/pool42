/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atumco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 20:55:13 by atumco            #+#    #+#             */
/*   Updated: 2020/02/04 20:55:14 by atumco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	if (sizeof(dest) < sizeof(src))
	{
		return (src);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = src[i];
	return (dest);
}

int	ft_strcmp(char *s1, char *s2)
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

void sort(char **arr, int i, char* tmp)
{
	ft_strcpy(tmp, arr[i + 1]);
	ft_strcpy(arr[i + 1], arr[i]);
	ft_strcpy(arr[i], tmp);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	char* tmp[10000] = {0};
 
	i = 1;
	j = 0;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + i]) > 0)
		{
			sort(argv, i, tmp);
			i = 1;
		}
		else
			++i;
	}
	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			++i;
		}
		i = 0;
		++j;
		ft_putchar('\n');
	}
	return (0);
}
