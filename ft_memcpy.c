/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:21:02 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/15 09:20:28 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned int	i;
	char			*strf;
	char			*str;

	i = 0;
	str = dest;
	strf = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < size)
	{
		str[i] = strf[i];
		i++;
	}
	return (str);
}
