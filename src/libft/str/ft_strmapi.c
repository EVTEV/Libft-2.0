#include "../../../inc/libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;
	size_t			len;

	if (!str || !f)
		return (NULL);
	len = ft_strlen(map);
	map = (char *)malloc(sizeof(char) * (len + 1));
	if (!map)
		return (NULL);
	i = 0;
	while (i < len)
	{
		map[i] = (*f)(i, str[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
