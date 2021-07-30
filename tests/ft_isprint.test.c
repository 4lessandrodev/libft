#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char * should_3_not_be_printable() {
	mu_assert("error, 3 != 0", ft_isprint(3) == 0);
	return 0;
}

static char * should_0_be_printable() {
	mu_assert("error, char(0) != 1", ft_isprint('0') == 1);
	return 0;
}

static char * should_9_be_printable() {
	mu_assert("error, char(9) != 1", ft_isprint('9') == 1);
	return 0;
}

static char * should_48_be_printable() {
	mu_assert("error, 48 != 1", ft_isprint(48) == 1);
	return 0;
}

static char * should_57_be_printable() {
	mu_assert("error, 57 != 1", ft_isprint(57) == 1);
	return 0;
}

static char * should_120_be_printable() {
	mu_assert("error, 50 != 1", ft_isprint(120) == 1);
	return 0;
}

static char * should_space_be_printable() {
	mu_assert("error, char(SPACE) != 0", ft_isprint(' ') == 1);
	return 0;
}

static char * should_special_char_be_printable() {
	mu_assert("error, char(#) != 1", ft_isprint('#') == 1);
	return 0;
}

static char * should_Z_be_printable() {
	mu_assert("error, 65 != 1", ft_isprint('Z') == 1);
	return 0;
}

static char * should_a_be_printable() {
	mu_assert("error, 70 != 0", ft_isprint('a') == 1);
	return 0;
}

static char * should_90_not_be_digit() {
	mu_assert("error, 90 != 0", ft_isprint(90) == 0);
	return 0;
}

static char * should_95_be_printable() {
	mu_assert("error, 95 != 1", ft_isprint(95) == 1);
	return 0;
}

static char * should_97_be_printable() {
	mu_assert("error, 97 != 1", ft_isprint(97) == 1);
	return 0;
}

static char * should_100_be_printable() {
	mu_assert("error, 100 != 1", ft_isprint(100) == 1);
	return 0;
}

static char * should_126_be_printable() {
	mu_assert("error, 122 != 1", ft_isprint(126) == 1);
	return 0;
}

static char * should_negative_not_be_printable() {
	mu_assert("error, -122 != 0", ft_isprint(-122) == 0);
	return 0;
}

static char * should_1_not_be_printable() {
	mu_assert("error, 1 != 0", ft_isprint(1) == 0);
	return 0;
}

static char * should_127_not_be_printable() {
	mu_assert("error, 127 != 0", ft_isprint(127) == 0);
	return 0;
}

static char * should_31_not_be_printable() {
	mu_assert("error, 31 != 0", ft_isprint(31) == 0);
	return 0;
}

static char * all_tests() {
	mu_run_test(should_3_not_be_printable);
	mu_run_test(should_0_be_printable);
	mu_run_test(should_9_be_printable);
	mu_run_test(should_48_be_printable);
	mu_run_test(should_57_be_printable);
	mu_run_test(should_a_be_printable);
	mu_run_test(should_space_be_printable);
	mu_run_test(should_special_char_be_printable);
	mu_run_test(should_Z_be_printable);
	mu_run_test(should_95_be_printable);
	mu_run_test(should_97_be_printable);
	mu_run_test(should_100_be_printable);
	mu_run_test(should_126_be_printable);
	mu_run_test(should_negative_not_be_printable);
	mu_run_test(should_1_not_be_printable);
	mu_run_test(should_31_not_be_printable);
	mu_run_test(should_negative_not_be_printable);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_isprint] > \n");

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
