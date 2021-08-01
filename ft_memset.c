#include "libft.h"

void	*ft_memset(char *str, int c, unsigned long size_t)
{
	int	limit;

	limit = 0;
	while (limit < size_t && str[limit] != '\0')
	{
		str[limit] = (char)c;
		limit++;
	}
	return (str);
}
