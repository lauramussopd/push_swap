
int	ft_counter(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}

void	ft_free(char **split, int num)
{
	while (num > 0)
	{
		num--;
		free(split[num]);
	}
	free (split);
}

char	**ft_loop(char const *s, char c, char **split, int num)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			split[num] = ft_substr(s, start, i - start + 1);
			if (split[num] == NULL)
			{
				ft_free(split, num);
				return (0);
			}
			num++;
		}
		i++;
	}
	split[num] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		start;
	int		num;

	num = 0;
	start = 0;
	split = malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!split)
		return (NULL);
	split = ft_loop(s, c, split, num);
	if (split == NULL)
		return (NULL);
	return (split);
}