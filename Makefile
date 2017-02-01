# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/25 13:44:53 by cfatrane          #+#    #+#              #
#*   Updated: 2017/02/01 18:32:31 by cfatrane         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

# Binary

NAME_C = checker

NAME_P = push_swap

# Path

SRC_PATH_C = ./folder/checker/srcs/

OBJ_PATH_C = ./folder/checker/objs/

INC_PATH_C = -I./folder/checker/includes/

SRC_PATH_P = ./folder/push_swap/srcs/

OBJ_PATH_P = ./folder/push_swap/objs/

INC_PATH_P = -I./folder/push_swap/includes/

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

SRC_NAME_P = 	main.c				\

OBJ_NAME_P = $(SRC_NAME_P:.c=.o)

# Files

SRC_C = $(addprefix $(SRC_PATH_C)/,$(SRC_NAME_C))

OBJ_C = $(addprefix $(OBJ_PATH_C), $(OBJ_NAME_C))

SRC_P = $(addprefix $(SRC_PATH_P)/,$(SRC_NAME_P))

OBJ_P = $(addprefix $(OBJ_PATH_P), $(OBJ_NAME_P))

# Flags

LDFLAGS = -L./libft/

PRINTFFLAG = -L./ft_printf/

LFT = -lft

PRINTF = -lftprintf

CC = gcc $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror

# Rules

all: $(NAME_C) $(NAME_P)

$(NAME_C): $(OBJ_C)
	@make -C./ft_printf/
	@echo "\033[34mCreation of $(NAME_C) ...\033[0m"
	@$(CC) $(LDFLAGS) $(PRINTFFLAG) $(LFT) $(PRINTF) $(OBJ_C) -o $@
	@echo "\033[32m$(NAME_C) created\n\033[0m"

$(NAME_P): $(OBJ_P)
	@make -C./ft_printf/
	@echo "\033[34mCreation of $(NAME_P) ...\033[0m"
	@$(CC) $(LDFLAGS) $(PRINTFFLAG) $(LFT) $(PRINTF) $(OBJ_P) -o $@
	@echo "\033[32m$(NAME_P) created\n\033[0m"

$(OBJ_PATH_C)%.o: $(SRC_PATH_C)%.c
	@mkdir $(OBJ_PATH_C) 2> /dev/null || true
	@$(CC) $(INC_PATH_C) -o $@ -c $<

$(OBJ_PATH_P)%.o: $(SRC_PATH_P)%.c
	@mkdir $(OBJ_PATH_P) 2> /dev/null || true
	@$(CC) $(INC_PATH_P) -o $@ -c $<

clean:
	@make clean -C ./ft_printf/
	@echo "\033[33mRemoval of .o files of $(NAME_C) and $(NAME_P) ...\033[0m"
	@rm -f $(OBJ_C)
	@rm -f $(OBJ_P)
	@rmdir $(OBJ_PATH_C) 2> /dev/null || true
	@rmdir $(OBJ_PATH_P) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\n\033[0m"

fclean: clean
	@make fclean -C ./ft_printf/
	@echo "\033[33mRemoval of $(NAME_C) and $(NAME_P) ...\033[0m"
	@rm -f $(NAME_C)
	@rm -f $(NAME_P)
	@echo "\033[31mBinary $(NAME_C) and $(NAME_P) deleted\033[0m"

re: fclean all
	@make re -C ./ft_printf/

git:
	@git add .
	@git commit -m "$(NAME_P)"
	@git push

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h

.PHONY: all, clean, fclean, re
