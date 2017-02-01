/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 14:43:01 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 19:07:00 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_STRUCT_H
# define CHECKER_STRUCT_H

# include "checker.h"

typedef struct		s_stack
{
	ssize_t			nbr;
	struct s_stack	*next;
}					t_stack;

typedef struct		s_checker
{
	t_stack			*stack_a;
	t_stack			*stack_b;
	size_t			size_a;
	size_t			size_b;
	int				display;
}					t_checker;

#endif
