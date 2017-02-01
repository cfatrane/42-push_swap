# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/25 13:44:53 by cfatrane          #+#    #+#              #
#*   Updated: 2017/02/01 15:21:59 by cfatrane         ###   ########.fr       *#
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

SRC_NAME_C = 	main.c				\
				ft_checker.c		\
				ft_checker_error.c	\
				ft_swap.c			\
				ft_push.c			\
				ft_rotate.c			\
				ft_reverse_rotate.c	\
				ft_stack_push.c		\
				ft_stack_del.c		\
				ft_utils.c			\

OBJ_NAME_C = $(SRC_NAME_C:.c=.o)

# Files

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME_C))

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME_C))

# Flags

LDFLAGS = -L./libft/

PRINTFFLAG = -L./ft_printf/

LFT = -lft

PRINTF = -lftprintf

CC = gcc $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror

# Rules

all: $(NAME_C)

$(NAME_C): $(OBJ)
	@make -C./libft/
	@make -C./ft_printf/
	@echo "\033[34mCreation of $(NAME_C) ...\033[0m"
	@$(CC) $(LDFLAGS) $(PRINTFFLAG) $(LFT) $(PRINTF) $(OBJ) -o $@
	@echo "\033[32m$(NAME_C) created\n\033[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(INC_PATH) -o $@ -c $<

clean:
	@make clean -C ./libft/
	@make clean -C ./ft_printf/
	@echo "\033[33mRemoval of .o files of $(NAME_C) ...\033[0m"
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\n\033[0m"

fclean: clean
	@make fclean -C ./libft/
	@make fclean -C ./ft_printf/
	@echo "\033[33mRemoval of $(NAME_C)...\033[0m"
	@rm -f $(NAME_C)
	@echo "\033[31mBinary $(NAME_C) deleted\n\033[0m"

re: fclean all
	@make re -C ./libft/
	@make re -C ./ft_printf/

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h

.PHONY: all, clean, fclean, re
