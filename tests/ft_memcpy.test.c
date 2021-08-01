#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include "../libft.h"

int tests_run = 0;

static char *should_copy_origin_to_dest(){
	char str[6] = {"hello"};
	char dest[6];

	ft_memcpy(dest, str, 6);

	mu_assert("error, dest[0] != h", dest[0] == 'h');
	mu_assert("error, dest[1] != e", dest[1] == 'e');
	mu_assert("error, dest[2] != l", dest[2] == 'l');
	mu_assert("error, dest[3] != l", dest[3] == 'l');
	mu_assert("error, dest[4] != o", dest[4] == 'o');
	mu_assert("error, dest[5] != end", dest[5] == '\0');
	return 0;
}

static char *should_return_pointer_to_dest(){
	char str[6] = {"hello"};
	char dest[6];

	char *result = ft_memcpy(dest, str, 6);

	mu_assert("error, dest[0] != h", result[0] == 'h');
	mu_assert("error, dest[1] != e", result[1] == 'e');
	mu_assert("error, dest[2] != l", result[2] == 'l');
	mu_assert("error, dest[3] != l", result[3] == 'l');
	mu_assert("error, dest[4] != o", result[4] == 'o');
	mu_assert("error, dest[5] != end", result[5] == '\0');
	return 0;
}

static char *should_copy_only_1_char(){
	char str[2] = {"A"};
	char dest[6] = {"00000"};

	ft_memcpy(dest, str, 6);

	mu_assert("error, dest[0] != A", dest[0] == 'A');
	mu_assert("error, dest[1] != 0", dest[1] == '0');
	mu_assert("error, dest[2] != 0", dest[2] == '0');
	mu_assert("error, dest[3] != 0", dest[3] == '0');
	mu_assert("error, dest[4] != 0", dest[4] == '0');
	mu_assert("error, dest[5] != end", dest[5] == '\0');
	return 0;
}

static char *all_tests() {
	mu_run_test(should_copy_origin_to_dest);
	mu_run_test(should_return_pointer_to_dest);
	mu_run_test(should_copy_only_1_char);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_memcpy] > \n");

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
