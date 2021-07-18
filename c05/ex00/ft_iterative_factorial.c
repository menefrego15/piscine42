/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 20:58:47 by izareb            #+#    #+#             */
/*   Updated: 2021/07/17 12:31:08 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	ans;
	int	i;

	ans = 1;
	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i <= nb)
	{
		ans = ans * i;
		i++;
	}
	return (ans);
}
