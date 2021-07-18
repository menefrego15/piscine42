/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 09:45:02 by izareb            #+#    #+#             */
/*   Updated: 2021/07/08 12:24:35 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1 && index >= 0)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
