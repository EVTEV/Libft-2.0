#include "../../../inc/libft.h"

void	*ft_memchr(const void *str, int c, sixe_t n)
{
	unsigned char	*pstr;
	size_t			i;

	pstr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (pstr[i] == (unsigned char)c)
			return ((void *)&pstr[i]);
		i++;
	}
	return (NULL);
}
