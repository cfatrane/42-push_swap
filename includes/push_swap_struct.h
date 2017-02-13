/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_struct.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:24:51 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 18:58:50 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_STRUCT_H
# define PUSH_SWAP_STRUCT_H

# include "push_swap.h"

typedef struct		s_stack
{
	ssize_t			nbr;
	struct s_stack	*next;
}					t_stack;

typedef struct		s_push_swap
{
	t_stack			*stack_a;
	t_stack			*stack_b;
	size_t			size_a;
	size_t			size_b;
	int				display;
	int				action;
	ssize_t			min_a;
	ssize_t			max_a;
	ssize_t			min_b;
	ssize_t			max_b;
	ssize_t			med;
	size_t			pad;
}					t_push_swap;

#endif
