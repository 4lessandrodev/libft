#!/bin/sh

echo "\n[NORMINETTE]:"
norminette ../ft_*.c

gcc ./ft_isalpha.test.c ../ft_isalpha.c
./a.out && rm -rf ./a.out

gcc ./ft_isdigit.test.c ../ft_isdigit.c
./a.out && rm -rf ./a.out

gcc ./ft_isalnum.test.c ../ft_isalpha.c ../ft_isdigit.c ../ft_isalnum.c
./a.out && rm -rf ./a.out

gcc ./ft_isascii.test.c ../ft_isascii.c
./a.out && rm -rf ./a.out

gcc ./ft_isprint.test.c ../ft_isprint.c
./a.out && rm -rf ./a.out

gcc ./ft_strlen.test.c ../ft_strlen.c
./a.out && rm -rf ./a.out

gcc ./ft_memset.test.c ../ft_memset.c
./a.out && rm -rf ./a.out

gcc ./ft_bzero.test.c ../ft_bzero.c
./a.out && rm -rf ./a.out

gcc ./ft_memcpy.test.c ../ft_memcpy.c
./a.out && rm -rf ./a.out

gcc ./ft_memmove.test.c ../ft_memmove.c
./a.out && rm -rf ./a.out
