# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/25 13:44:53 by cfatrane          #+#    #+#              #
#*   Updated: 2017/01/27 16:54:02 by cfatrane         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

# Binary

NAME_C = checker

NAME_P = push_swap

# Path

SRC_PATH = ./srcs/

OBJ_PATH = ./objs/

INC_PATH = -I./includes/

# Name

SRC_NAME_CHECKER = 	main.c				\

SRC_NAME_PUSH_SWAP = 	main.c				\

OBJ_NAME_CHECKER = $(SRC_NAME_CHECKER:.c=.o)

# Files

SRC_CHECKER = $(addprefix $(SRC_PATH)/,$(SRC_NAME_CHECKER))

OBJ_CHECKER = $(addprefix $(OBJ_PATH), $(OBJ_NAME_CHECKER))

# Flags

LDFLAGS = -L./libft/

LFT = -lft

CC = gcc $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror

# Rules

all: $(NAME_C)

$(NAME_C): $(OBJ_CHECKER)
	@make -C./libft/
	@echo "\033[34mCreation of $(NAME_C) ...\033[0m"
	@$(CC) $(LDFLAGS) $(LFT) $(OBJ_CHECKER) -o $@
	@echo "\033[32m$(NAME_C) created\n\033[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(INC_PATH) -o $@ -c $<

clean:
	@make clean -C ./libft/
	@echo "\033[33mRemoval of .o files of $(NAME_C) ...\033[0m"
	@rm -f $(OBJ_CHECKER)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\n\033[0m"

fclean: clean
	@make fclean -C ./libft/
	@echo "\033[33mRemoval of $(NAME_C)...\033[0m"
	@rm -f $(NAME_C)
	@echo "\033[31mBinary $(NAME_C) deleted\n\033[0m"

re: fclean all

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h

.PHONY: all, clean, fclean, re
