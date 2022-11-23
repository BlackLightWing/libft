/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:22:23 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/18 08:58:57 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static size_t	ft_slen(const char *c)
{
	unsigned int		i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

static size_t	ft_len(int n)
{
	unsigned int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while(n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_reverse(char *str, size_t j)
{
	char			*strf;
	unsigned int	i;

	i = 0;
	strf = (char *)malloc(j);
	j--;
	while (j > 0)
	{
		strf[i] = str[j];
		j--;
		i++;
	}
	return (strf);
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = ft_len(n);
	j = 0;
	str = (char *)malloc(i);
	if (n < 0)
	{
		str[0] = '-';
		j = 1;
	}
	i--;
	while ( j <= i)
	{
		str[j] = n % 10 + '0';
		n /= 10;
		j++;
	}
	j = ft_slen(str);
	str = ft_reverse(str, j);
	str[j] = '\0';
	return (str);
}
