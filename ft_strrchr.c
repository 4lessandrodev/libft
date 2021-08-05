#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	size;

	size = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + size);
	while (size--)
	{
		if (*(s + size) == c)
			return ((char *)(s + size));
	}
	return (NULL);
}
