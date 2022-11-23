/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:39:03 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/18 09:02:32 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *ptr, int sc, size_t size)
{
	unsigned int		i;
	char				*c;

	i = 0;
	c = (char *)ptr;
	while (i < size)
	{
		if (c[i] == (char)sc)
			return ((char *)ptr + i);
		i++;
	}
	return (0);
}
