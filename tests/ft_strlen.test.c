#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char *should_return_5(){
	mu_assert("error, hello != 5", ft_strlen("hello") == 5);
	return 0;
}

static char *should_return_0(){
	mu_assert("error, empty != 0", ft_strlen("") == 0);
	return 0;
}

static char *should_return_1(){
	mu_assert("error, 1 != 1", ft_strlen("1") == 1);
	return 0;
}

static char *should_return_11(){
	mu_assert("error, 1&#@01*10-+ != 11", ft_strlen("1&#@01*10-+") == 11);
	return 0;
}

static char *should_return_20(){
	mu_assert("error, student_42SP_first_p != 20", ft_strlen("student_42SP_first_p") == 20);
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

	printf("\n"BHBLU"[ft_strlen] > \n");

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
