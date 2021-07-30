#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char * should_3_be_ascii() {
	mu_assert("error, 3 != 1", ft_isascii(3) == 1);
	return 0;
}

static char * should_0_be_ascii() {
	mu_assert("error, char(0) != 1", ft_isascii('0') == 1);
	return 0;
}

static char * should_9_be_ascii() {
	mu_assert("error, char(9) != 1", ft_isascii('9') == 1);
	return 0;
}

static char * should_48_be_ascii() {
	mu_assert("error, 48 != 1", ft_isascii(48) == 1);
	return 0;
}

static char * should_57_be_ascii() {
	mu_assert("error, 57 != 1", ft_isascii(57) == 1);
	return 0;
}

static char * should_120_be_ascii() {
	mu_assert("error, 50 != 1", ft_isascii(120) == 1);
	return 0;
}

static char * should_space_be_ascii() {
	mu_assert("error, char(SPACE) != 0", ft_isascii(' ') == 1);
	return 0;
}

static char * should_special_char_be_ascii() {
	mu_assert("error, char(#) != 1", ft_isascii('#') == 1);
	return 0;
}

static char * should_Z_be_ascii() {
	mu_assert("error, 65 != 1", ft_isascii('Z') == 1);
	return 0;
}

static char * should_a_be_ascii() {
	mu_assert("error, 70 != 0", ft_isascii('a') == 1);
	return 0;
}

static char * should_90_not_be_digit() {
	mu_assert("error, 90 != 0", ft_isascii(90) == 0);
	return 0;
}

static char * should_95_be_ascii() {
	mu_assert("error, 95 != 1", ft_isascii(95) == 1);
	return 0;
}

static char * should_97_be_ascii() {
	mu_assert("error, 97 != 1", ft_isascii(97) == 1);
	return 0;
}

static char * should_100_be_ascii() {
	mu_assert("error, 100 != 1", ft_isascii(100) == 1);
	return 0;
}

static char * should_122_not_be_ascii() {
	mu_assert("error, 122 != 0", ft_isascii(122) == 0);
	return 0;
}

static char * should_negative_not_be_ascii() {
	mu_assert("error, -122 != 0", ft_isascii(-122) == 0);
	return 0;
}

static char * all_tests() {
	mu_run_test(should_3_be_ascii);
	mu_run_test(should_0_be_ascii);
	mu_run_test(should_9_be_ascii);
	mu_run_test(should_48_be_ascii);
	mu_run_test(should_57_be_ascii);
	mu_run_test(should_a_be_ascii);
	mu_run_test(should_space_be_ascii);
	mu_run_test(should_special_char_be_ascii);
	mu_run_test(should_Z_be_ascii);
	mu_run_test(should_95_be_ascii);
	mu_run_test(should_97_be_ascii);
	mu_run_test(should_100_be_ascii);
	mu_run_test(should_122_not_be_ascii);
	mu_run_test(should_negative_not_be_ascii);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_isascii] > \n");

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
