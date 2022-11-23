/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:05:24 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/17 14:12:07 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int sc)
{
	int		i;
	char	*c;
	char	s;

	i = ft_len(str);
	s = (char)sc;
	c = (char *)str;
	if (str[0] == '\0' && s == '\0')
		return ((char *)str);
	while (i >= 0)
	{
		if (c[i] == s)
			return (c + i);
		i--;
	}
	return (0);
}
