#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	int		limit;
	char	*pointer;

	pointer = (char *)str;
	limit = 0;
	while (limit < n && pointer[limit] != '\0')
	{
		pointer[limit] = '0';
		limit++;
	}
}
