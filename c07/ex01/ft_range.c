/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:00:33 by izareb            #+#    #+#             */
/*   Updated: 2021/07/18 20:42:06 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = i + min;
		i++;
	}
	return (tab);
}
