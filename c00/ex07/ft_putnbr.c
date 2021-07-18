/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:30:37 by izareb            #+#    #+#             */
/*   Updated: 2021/07/01 10:44:06 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", 10);
		return ;
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1 ));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
