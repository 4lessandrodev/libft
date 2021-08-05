#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char *should_find_l(){
	char str[6] = {"hello"};

	size_t result = (long int) ft_strrchr(str, 'l');
	size_t original = (long int) &str[3];
	mu_assert("error, result != original", result == original);
	return 0;
}

static char *should_find_none(){
	char str[6] = {"hello"};

	size_t result = (long int) ft_strrchr(str, 65); //a
	mu_assert("error, result != null", result == 0);
	return 0;
}

static char *all_tests() {
	mu_run_test(should_find_l);
	mu_run_test(should_find_none);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_strrchr] > \n");

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
