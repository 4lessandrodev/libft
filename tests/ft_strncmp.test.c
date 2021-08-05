#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char *should_return_15(){
	mu_assert("error, result != -15", ft_strncmp("hello", "world", 7) == -15);
	return 0;
}

static char *should_return_0(){
	mu_assert("error, result != 0", ft_strncmp("", "", 1) == 0);
	return 0;
}

static char *should_return_1(){
	mu_assert("error, result != -1", ft_strncmp("AA", "AB", 2) == -1);
	return 0;
}

static char *should_return_17(){
	mu_assert("error, result != 17", ft_strncmp("TAC", "CAT", 2) == 17);
	return 0;
}

static char *should_return_12(){
	mu_assert("error, result != -12", ft_strncmp("-150", "950", 3) == -12);
	return 0;
}


static char *all_tests() {
	mu_run_test(should_return_15);
	mu_run_test(should_return_0);
	mu_run_test(should_return_1);
	mu_run_test(should_return_17);
	mu_run_test(should_return_12);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_strncmp] > \n");

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
