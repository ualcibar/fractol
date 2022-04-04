/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:48:09 by ualcibar          #+#    #+#             */
/*   Updated: 2021/09/14 11:25:09 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	cont;
	long	num;
	int		s;

	cont = 0;
	s = 1;
	num = 0;
	while (str[cont] == ' ' || str[cont] == '\n' || str[cont] == '\t'
		|| str[cont] == '\v' || str[cont] == '\f' || str[cont] == '\r')
		cont++;
	if (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			s = -1;
		cont++;
	}
	while (str[cont] && ft_isdigit(str[cont]))
	{
		if ((num * s < -2147483648) || (num * s > 2147483648))
			return ((num * s < -2147483648) - 1);
		num = (num * 10) + (str[cont] - '0');
		cont++;
	}
	return (num * s);
}
