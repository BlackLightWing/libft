/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:30:17 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/17 16:32:36 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(const char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

static size_t	ft_if(char *str, const char *tf, unsigned int i, size_t size)
{
	unsigned int	j;

	j = 0;
	if (str[i] == tf[j])
	{
		while (str[j + i] == tf[j] && j + i < size
			&& ((tf[j] >= 'a' && tf[j] <= 'z')
				|| (tf[j] >= 'A' && tf[j] <= 'Z')
				|| (tf[j] >= '0' && tf[j] <= '9')))
			j++;
	}
	return (j);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	unsigned int		i;
	unsigned int		j;
	char				*strf;

	i = 0;
	strf = (char *)str;
	if (size == 0 && !strf)
		return (NULL);
	if (to_find[0] == '\0')
		return (strf);
	while (strf[i] && i < size)
	{
		j = ft_if(strf, to_find, i, size);
		if (j == ft_strlen(to_find))
			return (&strf[i]);
		i++;
	}
	return (NULL);
}
		// if (strf[i] == to_find[j])
		// {
		// 	while (strf[j + i] == to_find[j] && j + i < size
		// 		&& ((to_find[j] >= 'a' && to_find[j] <= 'z')
		// 			|| (to_find[j] >= 'A' && to_find[j] <= 'Z')
		// 			|| (to_find[j] >= '0' && to_find[j] <= '9')))
		// 		j++;
		// }
		/*
		char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char*)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}*/
