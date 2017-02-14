/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:11:35 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 14:59:32 by cfatrane         ###   ########.fr       */
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

void	algo_med(t_push_swap *env)
{
	env->med = env->max_a;
	while (1)
	{
		stack_val_bord(env);
		while (tabdone(env->stack_a, env->med) != 0)
		{
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
