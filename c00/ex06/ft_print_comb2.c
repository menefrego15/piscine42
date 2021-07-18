/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:05:21 by izareb            #+#    #+#             */
/*   Updated: 2021/07/01 16:55:58 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	char	nbr;

	while (n >= 10)
	{
		nbr = n / 10 + 48;
		write(1, &nbr, 1);
		n %= 10;
	}
	nbr = n + '0';
	write(1, &nbr, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a < 10)
				write(1, "0", 1);
			ft_putnbr(a);
			write(1, " ", 1);
			if (b < 10)
				write(1, "0", 1);
			ft_putnbr(b);
			if (a == 98 && b == 99)
				return ;
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
