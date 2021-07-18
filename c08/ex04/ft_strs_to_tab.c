/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:49:41 by izareb            #+#    #+#             */
/*   Updated: 2021/07/18 16:46:14 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
		return (0);
	return (ft_strcpy(dest, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str;

	i = 0;
	str = malloc(sizeof (struct s_stock_str) * (ac + 2));
	if (!str)
		return (0);
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i++;
	}
	str[i].str = NULL;
	return (str);
}
