#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char *should_put_3(){
	char str[6] = {"hello"};
	ft_bzero(str, 3);

	mu_assert("error, hello != 000lo", str[0] == '0');
	mu_assert("error, hello != 000lo", str[1] == '0');
	mu_assert("error, hello != 000lo", str[2] == '0');
	mu_assert("error, hello != 000lo", str[3] == 'l');
	mu_assert("error, hello != 000lo", str[4] == 'o');
	mu_assert("error, hello != 000lo", str[5] == '\0');
	return 0;
}

static char *should_put_1(){
	char str[6] = {"hello"};
	ft_bzero(str, 1);

	mu_assert("error, hello != heAlo", str[0] == '0');
	mu_assert("error, hello != heAlo", str[1] == 'e');
	mu_assert("error, hello != heAlo", str[2] == 'l');
	mu_assert("error, hello != heAlo", str[3] == 'l');
	mu_assert("error, hello != heAlo", str[4] == 'o');
	mu_assert("error, hello != heAlo", str[5] == '\0');
	return 0;
}

static char *should_put_none(){
	char str[6] = {"hello"};
	ft_bzero(str, 0);

	mu_assert("error, hello != heAlo", str[0] == 'h');
	mu_assert("error, hello != heAlo", str[1] == 'e');
	mu_assert("error, hello != heAlo", str[2] == 'l');
	mu_assert("error, hello != heAlo", str[3] == 'l');
	mu_assert("error, hello != heAlo", str[4] == 'o');
	mu_assert("error, hello != heAlo", str[5] == '\0');
	return 0;
}

static char *should_put_all(){
	char str[6] = {"hello"};
	ft_bzero(str, 6);

	mu_assert("error, hello != heAlo", str[0] == '0');
	mu_assert("error, hello != heAlo", str[1] == '0');
	mu_assert("error, hello != heAlo", str[2] == '0');
	mu_assert("error, hello != heAlo", str[3] == '0');
	mu_assert("error, hello != heAlo", str[4] == '0');
	mu_assert("error, hello != heAlo", str[5] == '\0');
	return 0;
}

static char *all_tests() {
	mu_run_test(should_put_3);
	mu_run_test(should_put_all);
	mu_run_test(should_put_1);
	mu_run_test(should_put_none);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_bzero] > \n");

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
