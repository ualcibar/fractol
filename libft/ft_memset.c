/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:54:37 by ualcibar          #+#    #+#             */
/*   Updated: 2021/07/28 20:04:10 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*buc;

	cont = 0;
	buc = (unsigned char *)b;
	while (cont < len)
	{
		buc[cont] = c;
		cont++;
	}
	return (b);
}
