/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:46:21 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/18 08:48:55 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void	*ft_memcpy(void *dest, const void *src, size_t size)
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

static void	*ft_if(size_t i, size_t j, char *strd, char *strc)
{
	if (strd < strc)
		return (ft_memcpy(strd, strc, i));
	else
	{
		while (j < i--)
			strd[i] = strc[i];
	}
	return (strd);
}

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	char			*strd;
	char			*strc;

	strd = dest;
	strc = (char *)src;
	i = size;
	j = 0;
	if (!dest && !src)
		return (NULL);
	return (ft_if(i, j, strd, strc));
}
