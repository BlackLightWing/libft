/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:30:58 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/14 15:40:35 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = ptr;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
