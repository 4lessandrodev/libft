#include "libft.h"

int	ft_strlen(const char *s)
{
	unsigned int	size;

	size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}
