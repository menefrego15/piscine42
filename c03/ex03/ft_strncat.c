/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:59:05 by izareb            #+#    #+#             */
/*   Updated: 2021/07/05 15:02:12 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	f;

	i = 0;
	f = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[f] && f < nb)
	{
		dest[i] = src[f];
		i++;
		f++;
	}
	dest[i] = '\0';
	return (dest);
}
