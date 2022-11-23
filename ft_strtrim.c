/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:31:37 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/18 15:32:36 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdlib.h>

// static size_t	ft_strlen(char const *c)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (c[i])
// 		i++;
// 	return (i);
// }

// char *ft_strtrim(char const *s1, char const *set)
// {
// 	unsigned int	i;
// 	unsigned int	j;
// 	unsigned int	k;
// 	unsigned int	l;
// 	unsigned int	len;
// 	char			*str;
// 	char			*st1;
// 	char			*st2;

// 	i = 0;
// 	k = 0;
// 	l = 0;
// 	st1 = (char *)s1;
// 	st2 = (char *)set;
// 	if (!s1 || !set)
// 		return (NULL);
// 	while (st1[i] == st2[i] && st2[i])
// 		i++;
// 	j = ft_strlen(st1);
// 	while (st1[j] == st2[k] && st2[k])
// 	{
// 		j--;
// 		k++;
// 	}
// 	j = ft_strlen(st1);
// 	len = j - (i + k);
// 	str = (char *)malloc(len + 1);
// 	i = 0;
// 	while (s1[i])
// 	{
// 		if (st1[i] == st2)
// 		{
// 			while (st1[i] == st2)
// 				i++;
// 		}
// 		str[i] = st1[i];
// 		i++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }

