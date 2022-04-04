/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:20:41 by ualcibar          #+#    #+#             */
/*   Updated: 2021/09/13 13:06:04 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;
	int		diff;

	cont = 0;
	diff = 0;
	while (s1[cont] && s2[cont] && cont < n && diff == 0)
	{
		diff = (unsigned char)s1[cont] - (unsigned char)s2[cont];
		cont++;
	}
	if ((diff == 0) && (cont < n))
		diff = (unsigned char)s1[cont] - (unsigned char)s2[cont];
	return (diff);
}
