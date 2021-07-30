#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char * should_3_not_be_alphanumeric() {
	mu_assert("error, 3 != 0", ft_isalnum(3) == 0);
	return 0;
}

static char * should_0_be_alphanumeric() {
	mu_assert("error, char(0) != 1", ft_isalnum('0') == 1);
	return 0;
}

static char * should_9_be_alphanumeric() {
	mu_assert("error, char(9) != 1", ft_isalnum('9') == 1);
	return 0;
}

static char * should_48_be_alphanumeric() {
	mu_assert("error, 48 != 1", ft_isalnum(48) == 1);
	return 0;
}

static char * should_57_be_alphanumeric() {
	mu_assert("error, 57 != 1", ft_isalnum(57) == 1);
	return 0;
}

static char * should_50_be_alphanumeric() {
	mu_assert("error, 50 != 1", ft_isalnum(50) == 1);
	return 0;
}

static char * should_space_not_be_alphanumeric() {
	mu_assert("error, char(SPACE) != 0", ft_isalnum(' ') == 0);
	return 0;
}

static char * should_65_not_be_alphanumeric() {
	mu_assert("error, 65 != 0", ft_isalnum(65) == 1);
	return 0;
}

static char * should_70_be_alphanumeric() {
	mu_assert("error, 70 != 1", ft_isalnum(70) == 1);
	return 0;
}

static char * should_95_not_be_alphanumeric() {
	mu_assert("error, 95 != 0", ft_isalnum(95) == 0);
	return 0;
}

static char * should_special_char_not_be_alphanumeric() {
	mu_assert("error, char(#) != 0", ft_isalnum('#') == 0);
	return 0;
}

static char * should_65_be_alphanumeric() {
	mu_assert("error, 65 != 1", ft_isalnum(65) == 1);
	return 0;
}

static char * should_90_be_alphanumeric() {
	mu_assert("error, 90 != 1", ft_isalnum(90) == 1);
	return 0;
}

static char * should_97_be_alphanumeric() {
	mu_assert("error, 97 != 1", ft_isalnum(97) == 1);
	return 0;
}

static char * should_100_be_alphanumeric() {
	mu_assert("error, 100 != 1", ft_isalnum(100) == 1);
	return 0;
}

static char * should_122_be_alphanumeric() {
	mu_assert("error, 122 != 1", ft_isalnum(122) == 1);
	return 0;
}

static char * all_tests() {
	mu_run_test(should_3_not_be_alphanumeric);
	mu_run_test(should_0_be_alphanumeric);
	mu_run_test(should_48_be_alphanumeric);
	mu_run_test(should_57_be_alphanumeric);
	mu_run_test(should_50_be_alphanumeric);
	mu_run_test(should_65_not_be_alphanumeric);
	mu_run_test(should_9_be_alphanumeric);
	mu_run_test(should_space_not_be_alphanumeric);
	mu_run_test(should_special_char_not_be_alphanumeric);
	mu_run_test(should_65_be_alphanumeric);
	mu_run_test(should_70_be_alphanumeric);
	mu_run_test(should_90_be_alphanumeric);
	mu_run_test(should_95_not_be_alphanumeric);
	mu_run_test(should_97_be_alphanumeric);
	mu_run_test(should_100_be_alphanumeric);
	mu_run_test(should_122_be_alphanumeric);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_isalnum] > \n");

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
