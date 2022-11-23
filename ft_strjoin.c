/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:33:44 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/22 14:37:47 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	l;
	char			*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	l = 0;
	str = (char *)malloc(ft_strlen(s1) * ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[l])
	{
		str[i] = s2[l];
		i++;
		l++;
	}
	str[i] = '\0';
	return (str);
}
