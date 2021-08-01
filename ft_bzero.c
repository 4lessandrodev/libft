void	*ft_bzero(char *str, unsigned long size_t)
{
	int	limit;

	limit = 0;
	while (limit < size_t && str[limit] != '\0')
	{
		str[limit] = '0';
		limit++;
	}
}
