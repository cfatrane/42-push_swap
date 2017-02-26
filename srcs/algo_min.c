/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:11:35 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/17 14:53:38 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_min_bis(t_push_swap *env)
{
	while (stack_crescent(env) != 0)
	{
		if (env->stack_a->nbr > env->stack_a->next->nbr)
			swap_a(env);
		else
			reverse_rotate_a(env);
	}
}

void	algo_med_rev(t_push_swap *env)
{
	stack_val_bord(env);
	if (env->stack_a->nbr == env->max_a)
		push_b(env);
	while (env->stack_a->nbr != env->min_a)
	{
		stack_val_bord(env);
		rotate_a(env);
	}
	push_b(env);
	rotate_a(env);
	swap_a(env);
	push_a(env);
	push_a(env);
	rotate_a(env);
}

void	algo_med(t_push_swap *env)
{
	env->med = env->max_a;
	if (stack_descending(env) == 0 && env->size_a == 5)
		return (algo_med_rev(env));
	while (1)
	{
		stack_val_bord(env);
		while (tabdone(env->stack_a, env->med) != 0)
		{
			if (env->size_a == 3)
				break ;
			if (env->stack_a->nbr < env->med)
				push_b(env);
			else
				rotate_a(env);
		}
		if (env->size_a == 3)
			algo_min_bis(env);
		env->med += 1;
		if (env->med > env->max_a || env->size_a == 1
				|| stack_crescent(env) == 0)
			break ;
	}
	algo_card_sort(env);
}

void	algo_min(t_push_swap *env)
{
	while (ft_stack_check(env) != 0)
	{
		if (env->stack_a->nbr > env->stack_a->next->nbr)
			swap_a(env);
		else
			reverse_rotate_a(env);
	}
}
