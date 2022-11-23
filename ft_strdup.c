/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:55:56 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/15 10:44:52 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*c;

	i = 0;
	while (src[i])
		i++;
	c = (char *)malloc(sizeof(*c) * (i + 1));
	j = 0;
	if (!c)
		return (NULL);
	while (j < i)
	{
		c[j] = src[j];
		j++;
	}
	c[i] = '\0';
	return (c);
}
