# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/25 13:44:53 by cfatrane          #+#    #+#              #
#*   Updated: 2017/02/17 11:27:44 by cfatrane         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

# Binary

NAME_C = checker

NAME_P = push_swap

# Path

SRC_PATH_C = ./srcs/

OBJ_PATH_C = ./objs/

INC_PATH_C = -I./includes/

SRC_PATH_P = ./srcs/

OBJ_PATH_P = ./objs/

INC_PATH_P = -I./includes/

# Name

SRC_NAME_C = 	main_checker.c		\
				checker.c			\
				error.c				\
				op_swap.c			\
				op_push.c			\
				op_rotate.c			\
				op_reverse_rotate.c	\
				ft_stack_push.c		\
				ft_stack_del.c		\
				utils.c				\
				stack_check.c		\

OBJ_NAME_C = $(SRC_NAME_C:.c=.o)

SRC_NAME_P = 	main_push.c			\
				push_swap.c			\
				error.c				\
				op_swap.c			\
				op_push.c			\
				op_rotate.c			\
				op_reverse_rotate.c	\
				ft_stack_push.c		\
				ft_stack_del.c		\
				utils.c				\
				algo_min.c			\
				algo_sup.c			\
				algo_max.c			\
				pretri.c			\
				finish.c			\
				tabdone.c			\
				stack_val_bord.c	\
				stack_check.c		\

OBJ_NAME_P = $(SRC_NAME_P:.c=.o)

# Files

SRC_C = $(addprefix $(SRC_PATH_C)/,$(SRC_NAME_C))

OBJ_C = $(addprefix $(OBJ_PATH_C), $(OBJ_NAME_C))

SRC_P = $(addprefix $(SRC_PATH_P)/,$(SRC_NAME_P))

OBJ_P = $(addprefix $(OBJ_PATH_P), $(OBJ_NAME_P))

# Flags

LDFLAGS = -L./libft/

LFT = -lft

CC = gcc $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror

# Rules

all: $(NAME_C) $(NAME_P)

$(NAME_C): $(OBJ_C)
	@make -C./libft/
	@echo "\033[34mCreation of $(NAME_C) ...\033[0m"
	@$(CC) $(LDFLAGS) $(LFT) $(OBJ_C) -o $@
	@echo "\033[32m$(NAME_C) created\n\033[0m"

$(NAME_P): $(OBJ_P)
	@make -C./libft/
	@echo "\033[34mCreation of $(NAME_P) ...\033[0m"
	@$(CC) $(LDFLAGS) $(LFT) $(OBJ_P) -o $@
	@echo "\033[32m$(NAME_P) created\n\033[0m"

$(OBJ_PATH_C)%.o: $(SRC_PATH_C)%.c
	@mkdir $(OBJ_PATH_C) 2> /dev/null || true
	@$(CC) $(INC_PATH_C) -o $@ -c $<

$(OBJ_PATH_P)%.o: $(SRC_PATH_P)%.c
	@mkdir $(OBJ_PATH_P) 2> /dev/null || true
	@$(CC) $(INC_PATH_P) -o $@ -c $<

clean: cleanlib
	@echo "\033[33mRemoval of .o files of $(NAME_C) and $(NAME_P) ...\033[0m"
	@rm -f $(OBJ_C)
	@rm -f $(OBJ_P)
	@rmdir $(OBJ_PATH_C) 2> /dev/null || true
	@rmdir $(OBJ_PATH_P) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\n\033[0m"

cleanlib:
	@make clean -C ./libft/

fclean: clean fcleanlib
	@echo "\033[33mRemoval of $(NAME_C) and $(NAME_P) ...\033[0m"
	@rm -f $(NAME_C)
	@rm -f $(NAME_P)
	@echo "\033[31mBinary $(NAME_C) and $(NAME_P) deleted\033[0m"

fcleanlib:
	@make fclean -C ./libft/

re: fclean all
	@make re -C ./libft/

git:
	@git add .
	@git commit -m "$(NAME_P)"
	@git push

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h

.PHONY: all, clean, fclean, re
