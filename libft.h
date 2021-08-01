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

/**
 * @brief copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str.

 * @param char *str This is a pointer to the block of memory to fill.
 * @param int c This is the value to be set. The value is passed as an int, but the function fills the block of memory using the unsigned char conversion of this value.
 * @param size_t n This is the number of bytes to be set to the value.
 *
 * @see https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm
*/
void	*ft_memset(char *str, int c, unsigned long size_t);

/**
 * @brief function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeroes (bytes containing '\0') to that area.
 *
 * @param char *str This is a pointer to the block of memory to fill.
 * @param size_t n This is the number of bytes to be set to the value.
*/
void	*ft_bzero(char *str, unsigned long size_t);

/**
 * @brief function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.
 *
 * @param char *dest This is a pointer to destination
 * @param char *src This is a pointer to source value
 * @param size_t n This is the number of bytes to be set to the value.
 * @returns a pointer to dest
*/
void	*ft_memcpy(char *dest, const char *src, unsigned long size_t);
