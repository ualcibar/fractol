/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:10:31 by ualcibar          #+#    #+#             */
/*   Updated: 2021/08/23 12:53:56 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		cont;
	char	c;

	cont = 0;
	if (!s)
		return ;
	while (s[cont] != '\0')
	{
		c = s[cont];
		write(fd, &c, 1);
		cont++;
	}
}
