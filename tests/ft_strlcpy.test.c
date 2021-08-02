#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char *should_return_5(){
	char dest[] = "yy";
	char src[] = "xxxxx";
	mu_assert("error, dest != xxxxx", ft_strlcpy(dest, src, 5) == 5);
	mu_assert("error, dest[0] != x", dest[0] == 'x');
	mu_assert("error, dest[1] != x", dest[1] == 'x');
	mu_assert("error, dest[2] != x", dest[2] == 'x');
	mu_assert("error, dest[3] != x", dest[3] == 'x');
	mu_assert("error, dest[4] != x", dest[4] == 'x');
	mu_assert("error, dest[5] != end", dest[5] == '\0');
	return 0;
}

static char *should_return_0(){
	char dest[1];
	char src[4] = "bbb";
	int result = ft_strlcpy(dest, src, 1);
	mu_assert("error, dest != b", result == 3);
	mu_assert("error, dest[0] != b", dest[0] == 'b');
	mu_assert("error, dest[1] != end", dest[1] == '\0');
	return 0;
}

static char *should_return_1(){
	char dest[] = "1";
	char src[] = "330";
	mu_assert("error, dest != 3", ft_strlcpy(dest, src, 1) == 3);
	mu_assert("error, dest[0] != 3", dest[0] == '3');
	mu_assert("error, dest[1] != end", dest[1] == '\0');
	return 0;
}

static char *should_return_11(){
	char dest[] = "1&#@01";
	char src[] = "*10-+";
	mu_assert("error, dest != *10-+", ft_strlcpy(dest, src, 5) == 5);
	mu_assert("error, dest[0] != *", dest[0] == '*');
	mu_assert("error, dest[1] != 1", dest[1] == '1');
	mu_assert("error, dest[2] != 0", dest[2] == '0');
	mu_assert("error, dest[3] != -", dest[3] == '-');
	mu_assert("error, dest[4] != +", dest[4] == '+');
	mu_assert("error, dest[5] != end", dest[5] == '\0');
	return 0;
}

static char *should_return_20(){
	char dest[] = "student";
	char src[] = "_42SP_first_p";
	mu_assert("error, dest != _42SP_first_p",
	ft_strlcpy(dest, src, 13) == 13);
	return 0;
}

static char *all_tests() {
	mu_run_test(should_return_5);
	mu_run_test(should_return_0);
	mu_run_test(should_return_1);
	mu_run_test(should_return_20);
	mu_run_test(should_return_11);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_strcpy] > \n");

	if (result != 0) {
		printf(BRED"[KO] "RESET"%s\n", result);
	}
	else
	{
		printf(BGRN"[OK] "RESET"ALL TESTS PASSED\n");
	}
	printf("Tests run: %d\n", tests_run);

	return result != 0;
}
