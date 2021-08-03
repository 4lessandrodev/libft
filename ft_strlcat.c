#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_pos;

	dst_size = ft_strlen(dst);
	src_pos = 0;
	if (!dst || !src)
		return (dst_size);
	while (src[src_pos] != '\0' && dst_size < size)
	{
		dst[dst_size] = src[src_pos];
		dst_size++;
		src_pos++;
	}
	dst[dst_size] = '\0';
	return (dst_size);
}
