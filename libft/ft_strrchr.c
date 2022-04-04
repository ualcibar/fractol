/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:17:02 by ualcibar          #+#    #+#             */
/*   Updated: 2021/07/29 20:17:05 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	ssize_t	cont;

	cont = ft_strlen(s);
	while (cont >= 0)
	{
		if (s[cont] == (char)c)
			return ((char *)(s + cont));
		cont--;
	}
	return (NULL);
}
