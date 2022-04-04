/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 12:19:26 by ualcibar          #+#    #+#             */
/*   Updated: 2021/08/31 12:42:04 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	conth;
	size_t	contn;

	conth = 0;
	if (needle[0] == '\0')
		return ((char *)(haystack));
	while (haystack[conth] != '\0')
	{
		contn = 0;
		while ((conth + contn) < len
			&& haystack[conth + contn] == needle[contn])
		{
			if (haystack[conth + contn] == '\0' && needle[contn] == '\0')
				return ((char *)&haystack[conth]);
			contn++;
		}
		if (needle[contn] == '\0')
			return ((char *)haystack + conth);
		conth++;
	}
	return (0);
}
