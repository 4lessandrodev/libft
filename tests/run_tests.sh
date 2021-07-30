#!/bin/sh

echo "\n[NORMINETTE]:"
norminette ../ft_*.c

gcc ./ft_isalpha.test.c ../*.c
./a.out && rm -rf ./a.out

gcc ./ft_isdigit.test.c ../*.c
./a.out && rm -rf ./a.out

gcc ./ft_isalnum.test.c ../*.c
./a.out && rm -rf ./a.out

gcc ./ft_isascii.test.c ../*.c
./a.out && rm -rf ./a.out

gcc ./ft_isprint.test.c ../*.c
./a.out && rm -rf ./a.out
