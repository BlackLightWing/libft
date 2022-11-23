/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:57:52 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/15 10:39:38 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned int	i;
	int				j;
	unsigned char	*c;
	unsigned char	*d;

	i = 0;
	j = 0;
	c = (unsigned char *)ptr1;
	d = (unsigned char *)ptr2;
	if (ptr1 == ptr2 || size == 0)
		return (0);
	while (i < size)
	{
		if (*c != *d)
			return (*c - *d);
		else
		{
			i++;
			c++;
			d++;
		}
	}
	return (0);
}
