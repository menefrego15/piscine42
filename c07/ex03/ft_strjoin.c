/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:07:41 by izareb            #+#    #+#             */
/*   Updated: 2021/07/18 12:53:31 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*join(int size, char **argv, char *sep, char *tab)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = 0;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (argv[i][++j])
		{
			tab[k++] = argv[i][j];
		}
		if (i < size - 1)
		{
			j = -1;
			while (sep[++j])
			{
				tab[k++] = sep[j];
			}
		}
	}
	tab[k] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **argv, char *sep)
{
	int		i;
	int		giga;
	char	*tab;

	giga = 0;
	i = 0;
	while (i < size)
	{
		giga = giga + ft_strlen(argv[i]) + ft_strlen(sep) + 1;
		i++;
	}
	tab = malloc(sizeof(char) * giga);
	if (!tab)
		return (NULL);
	if (size == 0)
		return (tab);
	tab = join(size, argv, sep, tab);
	return (tab);
}
