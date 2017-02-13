/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_val_bord.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:10:17 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 20:20:26 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_val_bord_a(t_push_swap *env)
{
	t_stack	*tmpstack;

	if (env->size_a > 0)
	{
		tmpstack = env->stack_a;
		env->max_a = env->stack_a->nbr;
		while (tmpstack)
		{
			if (env->max_a < tmpstack->nbr)
				env->max_a = tmpstack->nbr;
			tmpstack = tmpstack->next;
		}
		tmpstack = env->stack_a;
		env->min_a = env->stack_a->nbr;
		while (tmpstack)
		{
			if (env->min_a > tmpstack->nbr)
				env->min_a = tmpstack->nbr;
			tmpstack = tmpstack->next;
		}
	}
}

void	stack_val_bord_b(t_push_swap *env)
{
	t_stack	*tmpstack;

	if (env->size_b > 0)
	{
		tmpstack = env->stack_b;
		env->max_b = env->stack_b->nbr;
		while (tmpstack)
		{
			if (env->max_b < tmpstack->nbr)
				env->max_b = tmpstack->nbr;
			tmpstack = tmpstack->next;
		}
		tmpstack = env->stack_b;
		env->min_b = env->stack_b->nbr;
		while (tmpstack)
		{
			if (env->min_b > tmpstack->nbr)
				env->min_b = tmpstack->nbr;
			tmpstack = tmpstack->next;
		}
	}
}

void	stack_val_bord(t_push_swap *env)
{
	stack_val_bord_a(env);
	stack_val_bord_b(env);
}
