/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybitton <ybitton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 15:21:31 by ybitton           #+#    #+#             */
/*   Updated: 2016/12/15 14:23:27 by ybitton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_espace(int c)
{
	return ((9 <= c && c <= 13) || c == 32);
}

int				ft_atoi(const char *str)
{
	int			n;
	int			negatif;

	negatif = 0;
	n = 0;
	while (ft_espace(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		negatif = 1;
		str++;
	}
	while (*str != '\0' && ft_isdigit(*str))
	{
		n = n * 10 + (*str++ - '0');
	}
	if (negatif)
		return (-n);
	else
		return (n);
}
