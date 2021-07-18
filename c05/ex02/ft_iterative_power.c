/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:25:21 by izareb            #+#    #+#             */
/*   Updated: 2021/07/07 16:34:01 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result = nb * result;
			power--;
		}
	}
	return (result);
}
