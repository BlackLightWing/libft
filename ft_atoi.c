/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorbell <msorbell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:58:25 by msorbell          #+#    #+#             */
/*   Updated: 2022/11/17 14:16:22 by msorbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_while(int i, const char *str, int ret)
{
	int	v;

	v = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			v = -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			ret *= 10;
			ret += str[i] - '0';
		}
		else
			break ;
		i++;
	}
	return (ret * v);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	return (ft_while(i, str, ret));
}
