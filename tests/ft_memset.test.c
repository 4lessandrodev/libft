#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char *should_put_0(){
	char str[6] = {"hello"};
	ft_memset(str, 48, 3);

	mu_assert("error, hello != 000lo", str[0] == '0');
	mu_assert("error, hello != 000lo", str[1] == '0');
	mu_assert("error, hello != 000lo", str[2] == '0');
	mu_assert("error, hello != 000lo", str[3] == 'l');
	mu_assert("error, hello != 000lo", str[4] == 'o');
	mu_assert("error, hello != 000lo", str[5] == '\0');
	return 0;
}

static char *should_put_A(){
	char str[6] = {"hello"};
	ft_memset(str + 2, 'A', 1);

	mu_assert("error, hello != heAlo", str[0] == 'h');
	mu_assert("error, hello != heAlo", str[1] == 'e');
	mu_assert("error, hello != heAlo", str[2] == 'A');
	mu_assert("error, hello != heAlo", str[3] == 'l');
	mu_assert("error, hello != heAlo", str[4] == 'o');
	mu_assert("error, hello != heAlo", str[5] == '\0');
	return 0;
}

static char *should_put_none(){
	char str[6] = {"hello"};
	ft_memset(str, 'A', 0);

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
	ft_memset(str, 'A', 10);

	mu_assert("error, hello != heAlo", str[0] == 'A');
	mu_assert("error, hello != heAlo", str[1] == 'A');
	mu_assert("error, hello != heAlo", str[2] == 'A');
	mu_assert("error, hello != heAlo", str[3] == 'A');
	mu_assert("error, hello != heAlo", str[4] == 'A');
	mu_assert("error, hello != heAlo", str[5] == '\0');
	return 0;
}

static char *all_tests() {
	mu_run_test(should_put_0);
	mu_run_test(should_put_A);
	mu_run_test(should_put_none);
	mu_run_test(should_put_all);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_memset] > \n");

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
