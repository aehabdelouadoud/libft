# ---------------------------------------------------------------------------- #
#                                   Colors                                     #
# ---------------------------------------------------------------------------- #

RED			=	\e[3;31m
GREEN		=	\e[3;32m
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

NAME = ft_putnbr_fd

ft_putnbr_fd:
	@cc -Wall -Wextra -Werror test.c -lft -L ../.. -o test
	@./test          10 >  tests.output
	@./test         -10 >> tests.output
	@./test  2147483647 >> tests.output
	@./test -2147483648 >> tests.output
	@rm test
	@diff -u tests.output tests.expected || echo -e "$(RED)KO :( $@ $(END)"
	@echo -e "$(GREEN)OK! $@ $(END)"

.PHONY: $(NAME)
