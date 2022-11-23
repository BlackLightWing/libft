/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:26:24 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/18 10:04:06 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t eC, size_t eS)
{
	void	*c;
	size_t	i;

	i = eC * eS;
	if (eC == SIZE_MAX && eS == SIZE_MAX)
		return (NULL);
	c = (void *)malloc(i);
	if (!c)
		return (NULL);
	ft_bzero(c, i);
	return (c);
}
