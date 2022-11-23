int	ft_if(char const *s, char *temp, int tab_int)
{
	if (s[tab_int[0] + 1] == c || s[tab_int[0] + 1] == '\0')
	{
		temp[tab_int[1]] = '\0';
		tab_int[2]++;
		return (0);
	}
	return (1);
}

void	ft_if2(int tab_int, char *temp, char **tab)
{
	if (tab_int[2] == 1)
	{
		tab[tab_int[3]] = ft_strdup(temp);
		tab_int[3]++;
		tab_int[2] = 0;
		tab_int[1] = 0;
	}
}

static char	**tab_add_entries(char const *s, char *temp, char **tab, char c)
{
	int	tab_int[4];

	tab_int[0] = 0;
	tab_int[1] = 0;
	tab_int[2] = 0;
	tab_int[3] = 0;
	while (s[tab_int[0]])
	{
		while (s[tab_int[0]] != c)
		{
			temp[tab_int[1]] = s[tab_int[0]];
			tab_int[1]++;
			if (ft_if(s, temp, tab_int) == 0)
				break ;
			tab_int[0]++;
		}
		ft_if2(tab_int, temp, tab);
		tab_int[0]++;
	}
	tab[tab_int[3]] = 0;
	return (tab);
}
