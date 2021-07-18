/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:05:04 by izareb            #+#    #+#             */
/*   Updated: 2021/07/01 18:07:59 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	beg;
	int	newt;

	beg = 0;
	while (beg < size)
	{
		newt = tab[beg];
		tab[beg] = tab[size - 1];
		tab[size - 1] = newt;
		beg++;
		size--;
	}
}
