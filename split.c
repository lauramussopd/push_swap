#include "push_swap.h"
#include <stdlib.h>
#include <string.h>

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
//count: how many substring, the num of string in the dinamic allocated memory
//1 - how many substring do we need to allocate space for?
//2 - we allocate space to store each substring
//3 - get the lenght of the string

int ft_strlen(char *c)


char	**ft_split(char *s, char *separetors, int *count);
{

    int len = ft_strlen(s);

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