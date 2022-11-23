/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:28:48 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/15 13:55:22 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int sc)
{
	int		i;
	char	*ptr;

	i = 0;
	while (str[i] != (unsigned char)sc)
	{
		if (!str[i])
			return (0);
		i++;
	}
	ptr = (char *)&str[i];
	return (ptr);
}
