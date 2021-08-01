#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	size;
	char	*dst;
	char	*source;

	dst = (char *)dest;
	source = (char *)src;
	size = 0;
	while (size++ < n)
	{
		*dst++ = *source++;
	}
	return (dest);
}
