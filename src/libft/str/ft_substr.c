#include "../../../inc/libft.h"

char	*ft_substr(const char *str, unsigned char start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	if (len > ft_strlen(str + start))
		len =  ft_strlen(str + start);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = str[start + i];
		i++;
	}
	str[i] = '\0';
	return (sub);
}

