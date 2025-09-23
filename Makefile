# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abait-el <your@email.com>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/22 20:55:00 by abait-el          #+#    #+#              #
#    Updated: 2025/09/23 15:32:12 by abait-el         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

RED			=	\e[1;31m
GREEN		=	\e[1;32m
YELLOW		=	\e[3;33m
CYAN		=	\e[3;96m
END			=	\e[0m

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
	@echo "$(OK) Mandatory part is done!"

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)

custom:		$(C_OBJ)
	$(AR) $(NAME) $(C_OBJ)
	@echo "$(OK) Custom part is done!"

bonus:		$(B_OBJ)
	$(AR) $(NAME) $(B_OBJ)
	@echo "$(OK) Bonus part is done!"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(B_OBJ) $(C_OBJ)
	@echo "$(INFO) Object files removed."

fclean:		clean
	$(RM) $(NAME)
	@echo "$(KO) Removed $(NAME)."

re: fclean all

.PHONY:		all clean fclean re bonus custom
