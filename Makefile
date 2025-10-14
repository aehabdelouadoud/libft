# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 22:24:28 by abait-el          #+#    #+#              #
#    Updated: 2025/10/14 22:24:28 by abait-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##
# libft
#
# @Makefile
# @version 0.1

# ---------------------------------------------------------------------------- #
#                              Build Configuration                             #
# ---------------------------------------------------------------------------- #

NAME		=	libft.a

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
AR			=	ar rcs
RM			=	rm -f

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

# ---------------------------------------------------------------------------- #
#                                 Sources                                      #
# ---------------------------------------------------------------------------- #

# Mandatory
SRC			=	$(filter-out %_custom.c, $(filter-out %_bonus.c, $(wildcard *.c)))
OBJ			=	$(patsubst %.c, %.o, $(SRC))

# Bonus
B_SRC		=	$(wildcard *_bonus.c)
B_OBJ		=	$(patsubst %.c, %.o, $(B_SRC))

# Custom
C_SRC		=	$(filter-out %_custom.c, $(wildcard *.c))
C_OBJ		=	$(patsubst %.c, %.o, $(C_SRC))

# ---------------------------------------------------------------------------- #
#                                   Rules                                      #
# ---------------------------------------------------------------------------- #

all:		$(NAME)
	@echo -e "$(GREEN) libft.a has been successfuly built$(END)"

$(NAME):	$(OBJ)
	@echo -e "$(CYAN) Object files has been built, Now creating libft.a...$(END)"
	$(AR) $(NAME) $(OBJ)
	@echo -e "$(INFO) Mandatory part is done!"

custom:		$(C_OBJ)
	$(AR) $(NAME) $(C_OBJ)
	@echo -e "$(INFO) Custom part is done!"

bonus:		$(B_OBJ)
	@$(AR) $(NAME) $(B_OBJ)
	@echo -e "$(OK) Bonus part is done!"

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJ) $(B_OBJ) $(C_OBJ)
	@echo -e "$(WARN) Object files has been deleted."

fclean:		clean
	@$(RM) $(NAME)
	@echo -e "$(WARN) $(NAME) has been deleted."

re: fclean all

.PHONY:		all clean fclean re bonus custom

# end
