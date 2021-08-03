#include <stdio.h>
#include "minunit.h"
#include "colors.h"
#include <string.h>
#include "../libft.h"

int tests_run = 0;

static char *should_return_5(){
	char dst[]="";
	char src[]="01234";
	mu_assert("error, dst != 5", ft_strlcat(dst, src, sizeof(src)) == 5);
	return 0;
}

static char *should_return_0(){
	char dst[]="";
	char src[]="";
	mu_assert("error, dst != 0", ft_strlcat(dst, src, sizeof(src)) == 0);
	return 0;
}

static char *should_return_1(){
	char dst[]="";
	char src[]="1";
	mu_assert("error, dst != 1", ft_strlcat(dst, src, sizeof(src)) == 1);
	return 0;
}

static char *should_return_11(){
	char dst[]="123";
	char src[]="&#@01*-+";
	mu_assert("error, dst != 11", ft_strlcat(dst, src, 11) == 11);
	return 0;
}

static char *should_return_20(){
	char dst[]="qweasdzx";
	char src[]="789456456123";
	mu_assert("error, dst != 20", ft_strlcat(dst, src, 20) == 20);
	return 0;
}

static char *should_return_6(){
	char dst[]="qwe";
	char src[]="789";
	mu_assert("error, dst != 6", ft_strlcat(dst, src, 6) == 6);
	mu_assert("error, dst[0] != q", dst[0] == 'q');
	mu_assert("error, dst[1] != w", dst[1] == 'w');
	mu_assert("error, dst[2] != e", dst[2] == 'e');
	mu_assert("error, dst[3] != 7", dst[3] == '7');
	mu_assert("error, dst[4] != 8", dst[4] == '8');
	mu_assert("error, dst[5] != 9", dst[5] == '9');
	mu_assert("error, dst[6] != end", dst[6] == '\0');
	return 0;
}

static char *all_tests() {
	mu_run_test(should_return_5);
	mu_run_test(should_return_0);
	mu_run_test(should_return_1);
	mu_run_test(should_return_20);
	mu_run_test(should_return_11);
	mu_run_test(should_return_6);
	return 0;
}

int	main(void) {
	char *result = all_tests();

	printf("\n"BHBLU"[ft_strlcat] > \n");

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
