/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_struct.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:24:51 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/16 16:09:50 by cfatrane         ###   ########.fr       */
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
	int				last;
	ssize_t			min_a;
	ssize_t			max_a;
	ssize_t			min_b;
	ssize_t			max_b;
	size_t			pad;
	ssize_t			quart_one;
	ssize_t			med;
	ssize_t			quart_three;
	ssize_t			sa;
	ssize_t			sb;
	ssize_t			ss;
	ssize_t			pa;
	ssize_t			pb;
	ssize_t			ra;
	ssize_t			rb;
	ssize_t			rr;
	ssize_t			rra;
	ssize_t			rrb;
	ssize_t			rrr;
}					t_push_swap;

#endif
