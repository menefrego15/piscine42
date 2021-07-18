/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:57:14 by izareb            #+#    #+#             */
/*   Updated: 2021/07/08 10:30:35 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc)
	{
		while (argv[i])
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
