#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char *should_3_not_be_upper() {
	mu_assert("error, 3 != 3", ft_toupper(3) == 3);
	return 0;
}

static char *should_0_be_upper() {
	mu_assert("error, char(0) != 48", ft_toupper('0') == 48);
	return 0;
}

static char *should_9_be_upper() {
	mu_assert("error, char(9) != 57", ft_toupper('9') == 57);
	return 0;
}

static char *should_48_be_upper() {
	mu_assert("error, 48 != 48", ft_toupper(48) == 48);
	return 0;
}

static char *should_57_be_upper() {
	mu_assert("error, 57 != 57", ft_toupper(57) == 57);
	return 0;
}

static char *should_50_be_upper() {
	mu_assert("error, 50 != 50", ft_toupper(50) == 50);
	return 0;
}

static char *should_space_not_be_upper() {
	mu_assert("error, char(SPACE) != SPACE", ft_toupper(' ') == ' ');
	return 0;
}

static char *should_special_char_not_be_upper() {
	mu_assert("error, char(#) != #", ft_toupper('#') == '#');
	return 0;
}

static char *should_65_not_be_upper() {
	mu_assert("error, 65 != 97", ft_toupper(65) == 65);
	return 0;
}

static char *should_70_not_be_upper() {
	mu_assert("error, 70 != 102", ft_toupper(70) == 70);
	return 0;
}

static char *should_90_not_be_upper() {
	mu_assert("error, 90 != 122", ft_toupper(90) == 90);
	return 0;
}

static char *should_95_not_be_upper() {
	mu_assert("error, 95 != 95", ft_toupper(95) == 95);
	return 0;
}

static char *should_97_not_be_upper() {
	mu_assert("error, 97 != A", ft_toupper(97) == 'A');
	return 0;
}

static char *should_100_not_be_upper() {
	mu_assert("error, 100 != 68", ft_toupper(100) == 68);
	return 0;
}

static char *should_122_not_be_upper() {
	mu_assert("error, 122 != 90", ft_toupper(122) == 90);
	return 0;
}

static char *all_tests() {
	mu_run_test(should_3_not_be_upper);
	mu_run_test(should_0_be_upper);
	mu_run_test(should_9_be_upper);
	mu_run_test(should_48_be_upper);
	mu_run_test(should_57_be_upper);
	mu_run_test(should_50_be_upper);
	mu_run_test(should_space_not_be_upper);
	mu_run_test(should_special_char_not_be_upper);
	mu_run_test(should_65_not_be_upper);
	mu_run_test(should_70_not_be_upper);
	mu_run_test(should_90_not_be_upper);
	mu_run_test(should_95_not_be_upper);
	mu_run_test(should_97_not_be_upper);
	mu_run_test(should_100_not_be_upper);
	mu_run_test(should_122_not_be_upper);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_toupper] > \n");

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
