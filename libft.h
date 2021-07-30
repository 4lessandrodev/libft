/**
 * @brief this function receives an int value and check if it is an alphabet letter based on ascii code
 * @param c int
 * @return int 1 if is alphabet else 0
*/
int	ft_isalpha(int c);

/**
 * @brief this function receives an int and check if it is a number based on ascii code
 * @param c int
 * @return int 1 if is digit else 0
*/
int	ft_isdigit(int c);

/**
 * @brief this function receives an int and check if it is alphanumeric based on ascii code
 * @param c int
 * @return int 1 if is alphanumeric else 0
*/
int	ft_isalnum(int c);

/**
 * @brief this function receives an int and check if it is ascii 0 to 120
 * @param c int
 * @return int 1 if is ascii else 0
*/
int	ft_isascii(int c);


/**
 * @brief this function receives an int and check if it is printable 32 to 126
 * @param c int
 * @return int 1 if is printable else 0
*/
int	ft_isprint(int c);

/**
 * @brief this function receives a string pointer and count each char
 * @param s as string pointer
 * @return int size of string
*/
int	ft_strlen(const char *s);
