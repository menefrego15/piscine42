/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 09:55:28 by izareb            #+#    #+#             */
/*   Updated: 2021/07/11 12:00:39 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	while (i < nb / 2 && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}