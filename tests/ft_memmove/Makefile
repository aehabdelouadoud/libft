# ---------------------------------------------------------------------------- #
#                                   Colors                                     #
# ---------------------------------------------------------------------------- #

RED			=	\e[1;31m
GREEN		=	\e[1;32m
YELLOW		=	\e[3;33m
CYAN		=	\e[3;96m
END			=	\e[0m

SHELL := /bin/bash

# ---------------------------------------------------------------------------- #
#                                  Messages                                    #
# ---------------------------------------------------------------------------- #

OK			=	$(GREEN)[OK]$(END)
KO			=	$(RED)[KO]$(END)
INFO		=	$(CYAN)[INFO]$(END)
WARN		=	$(YELLOW)[WARN]$(END)

tests:
	cc -Wall -Wextra -Werror ft_putchar_fd_test.c -lft -L ../.. -o ft_putnbr_fd_test
	./ft_putnbr_fd_test          10 >  tests.output
	./ft_putnbr_fd_test         -10 >> tests.output
	./ft_putnbr_fd_test  2147483647 >> tests.output
	./ft_putnbr_fd_test -2147483648 >> tests.output
	@diff -u tests.output tests.expected || echo -e "$(KO)"

.PHONY: tests
