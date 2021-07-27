#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	A;
	int	ZERO;

	A = ft_isalpha(65);
	ZERO = ft_isalpha(9);
	printf("A É alfabeto %d\n", A);
	printf("0 É alfabeto %d\n", ZERO);
	return (0);
}
