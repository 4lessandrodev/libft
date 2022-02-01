#include <stdio.h>
#include <string.h>

int	main (void)
{
	const char	str[] = "http://www.tutorialspoint.com";
	const char	ch = '.';
	char		*ret;

	ret = memchr(str, ch, 11);

	printf("String after |%c| is - |%s|\n", ch, ret);

	return (0);
}
