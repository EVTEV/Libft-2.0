#include "../../../inc/libft.h"

static int	word_count(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_copy(const char *str, char c)
{
	char	*word;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[len] && str[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	int		j;

	j = 0;
	if (!str)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (word_count(str, c) + 1));
	if (!tab)
		return (NULL);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			tab[j] = ft_copy(str, c);
			if (!tab[j])
				return (free_split(tab, j));
			j++;
		}
		while (*str != c && *str)
			str++;
	}
	tab[j] = (NULL);
	return (tab);
}
