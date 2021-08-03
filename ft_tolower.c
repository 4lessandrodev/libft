#include "libft.h"

int	is_upper(int c)
{
	return (c >= 65 && c <= 90);
}

int	ft_tolower(int c)
{
	if (is_upper(c))
		return (c + 32);
	else
		return (c);
}
