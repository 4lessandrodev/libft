#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char *should_copy(){
	char dest[] = "oldstring";
	const char src[]  = "newstring";

	ft_memmove(dest, src, 9);

	mu_assert("error, dest[0] != n", dest[0] == 'n');
	mu_assert("error, dest[1] != e", dest[1] == 'e');
	mu_assert("error, dest[2] != w", dest[2] == 'w');
	mu_assert("error, dest[3] != s", dest[3] == 's');
	mu_assert("error, dest[4] != t", dest[4] == 't');
	mu_assert("error, dest[5] != r", dest[5] == 'r');
	mu_assert("error, dest[6] != i", dest[6] == 'i');
	mu_assert("error, dest[7] != n", dest[7] == 'n');
	mu_assert("error, dest[8] != g", dest[8] == 'g');
	mu_assert("error, dest[9] != end", dest[9] == '\0');
	return 0;
}

static char *should_copy_only(){
	char dest[] = "oldstring";
	const char src[]  = "new";

	ft_memmove(dest, src, 7);

	mu_assert("error, dest[0] != n", dest[0] == 'n');
	mu_assert("error, dest[1] != e", dest[1] == 'e');
	mu_assert("error, dest[2] != w", dest[2] == 'w');
	mu_assert("error, dest[9] != end", dest[3] == '\0');
	return 0;
}

static char *all_tests() {
	mu_run_test(should_copy);
	mu_run_test(should_copy_only);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_memmove] > \n");

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
