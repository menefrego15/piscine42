/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:31:20 by izareb            #+#    #+#             */
/*   Updated: 2021/07/13 18:50:33 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkBase(char *base)
{
	int	i;
	int	f;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if ((base[i] == ' ') || (base[i] >= 9 && base[i] <= 13))
			return (0);
		f = i + 1;
		while (base[f])
		{
			if (base[i] == base[f])
				return (0);
			f++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			j;
	int long	nb;

	j = 0;
	nb = nbr;
	if (checkBase(base) == 0)
		return ;
	j = checkBase(base);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > j)
	{
		ft_putnbr_base((nb / j), base);
	}
	ft_putchar(base[nb % j]);
}

int        main(void)
{

    ft_putnbr_base(42, "hellooo");
}
