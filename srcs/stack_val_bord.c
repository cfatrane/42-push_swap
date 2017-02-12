/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_val_bord.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:10:17 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/12 16:12:50 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_val_bord_a(t_push_swap *env)
{
	t_stack	*tmpstack_a;

	if (env->size_a > 0)
	{
		tmpstack_a = env->stack_a;
		env->max_a = env->stack_a->nbr;
		while (tmpstack_a)
		{
			if (env->max_a < tmpstack_a->nbr)
				env->max_a = tmpstack_a->nbr;
			tmpstack_a = tmpstack_a->next;
		}
		tmpstack_a = env->stack_a;
		env->min_a = env->stack_a->nbr;
		while (tmpstack_a)
		{
			if (env->min_a > tmpstack_a->nbr)
				env->min_a = tmpstack_a->nbr;
			tmpstack_a = tmpstack_a->next;
		}
	}
}

void	stack_val_bord_b(t_push_swap *env)
{
	t_stack	*tmpstack_b;

	if (env->size_b > 0)
	{
		tmpstack_b = env->stack_b;
		env->max_b = env->stack_b->nbr;
		while (tmpstack_b)
		{
			if (env->max_b < tmpstack_b->nbr)
				env->max_b = tmpstack_b->nbr;
			tmpstack_b = tmpstack_b->next;
		}
		tmpstack_b = env->stack_b;
		env->min_b = env->stack_b->nbr;
		while (tmpstack_b)
		{
			if (env->min_b > tmpstack_b->nbr)
				env->min_b = tmpstack_b->nbr;
			tmpstack_b = tmpstack_b->next;
		}
	}
}

void	stack_val_bord(t_push_swap *env)
{
	stack_val_bord_a(env);
	stack_val_bord_b(env);
}
