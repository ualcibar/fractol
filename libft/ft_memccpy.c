/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:27:10 by ualcibar          #+#    #+#             */
/*   Updated: 2021/07/31 19:52:32 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dstc;
	unsigned char	*srccc;
	size_t			i;

	if (!dst && !src)
		return (0);
	i = 0;
	dstc = (unsigned char *)dst;
	srccc = (unsigned char *)src;
	while (i < n)
	{
		dstc[i] = srccc[i];
		if ((unsigned char)c == srccc[i])
			return (dst + i + 1);
		i++;
	}
	return (0);
}
