#include "libft.h"

char		*ft_strncpy(char *dest, char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < len)
	{
		ft_bzero((void *)(dest + i), len - i);
		i++;
	}
	return (dest);
}