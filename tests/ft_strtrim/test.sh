#!/usr/bin/env bash

RED="\e[3;31m"
GREEN="\e[3;32m"
YELLOW="\e[3;33m"
CYAN="\e[3;96m"
END="\e[0m"

cc -Wall -Wextra -Werror test.c -lft -L ../.. -o test
./test 10 >tests.output
./test -10 >>tests.output
./test 2147483647 >>tests.output
./test -2147483648 >>tests.output
rm test
diff -u tests.output tests.expected >/dev/null >>/dev/null
if [[ "$?" ]]; then
	diff -u tests.output tests.expected
	echo -e "${RED}KO! ft_putnbr_fd ${END}"
	exit
fi
echo -e "${GREEN}OK! ft_putnbr_fd ${END}"
