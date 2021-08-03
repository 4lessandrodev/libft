#include "libft.h"

int	is_lower(int c)
{
	return (c >= 97 && c <= 122);
}

int	ft_toupper(int c)
{
	if (is_lower(c))
		return (c - 32);
	else
		return (c);
}
