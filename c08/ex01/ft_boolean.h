/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izareb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:23:11 by izareb            #+#    #+#             */
/*   Updated: 2021/07/18 16:44:34 by izareb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
typedef int	t_bool;
# define FALSE 0
# define TRUE 1
# define EVEN_MSG "I have an even number of arguments\n"
# define ODD_MSG "I have an odd number of arguments\n"
# define SUCCESS 0
# define EVEN(x) x % 2 == 0

#endif
