/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:52:16 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/18 14:15:26 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static char	*str_b_zero(char *str, int s, int len, int i)
{
	while (i < s && i < len)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

static size_t	ft_strlen(const char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	j = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(len + 1);
	if (start >= ft_strlen(s))
	{
		str_b_zero(str, ft_strlen(s), len, 0);
		return (str);
	}
	if (!str)
		return (NULL);
	i = start;
	while (s[i] && j < len)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
