/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:03:10 by ualcibar          #+#    #+#             */
/*   Updated: 2021/09/14 11:31:00 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	cont;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	result = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (0);
	cont = 0;
	i = 0;
	while (cont < (ft_strlen(s1)))
		result[cont++] = s1[i++];
	i = 0;
	while (cont < (ft_strlen(s2) + ft_strlen(s1)))
		result[cont++] = s2[i++];
	result[cont] = '\0';
	return (result);
}
