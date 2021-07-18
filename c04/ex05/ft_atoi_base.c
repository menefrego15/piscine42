/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 22:31:51 by izareb            #+#    #+#             */
/*   Updated: 2021/07/18 00:00:52 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if ((base[i] == ' ') || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && c != base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	sign;
	int	j;

	i = 0;
	j = 0;
	nb = 0;
	sign = 1;
	if (checkbase(base) == 0)
		return (0);
	j = checkbase(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (is_base(str[i], base))
	{
		nb = nb * j + in_base(str[i], base);
		i++;
	}
	return (nb * sign);
}

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}
