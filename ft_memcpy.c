void	*ft_memcpy(char *dest, const char *src, unsigned long size_t)
{
	long int	limit;

	limit = 0;
	while (src[limit] != '\0' && limit <= size_t)
	{
		dest[limit] = src[limit];
		limit++;
	}
	return (dest);
}
