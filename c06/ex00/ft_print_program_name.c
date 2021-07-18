/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:51:23 by izareb            #+#    #+#             */
/*   Updated: 2021/07/10 11:36:34 by izareb           ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	if (argc)
	{
		write(1, argv[0], ft_strlen(argv[0]));
		write(1, "\n", 1);
	}
}
