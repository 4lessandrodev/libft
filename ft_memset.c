#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int		limit;
	char	*pointer;

	limit = 0;
	pointer = (char *)str;
	while (limit < n && pointer[limit] != '\0')
	{
		pointer[limit] = (char)c;
		limit++;
	}
	return (str);
}
