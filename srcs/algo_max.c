/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 14:15:37 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/17 19:00:27 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_sup_bis(t_push_swap *env)
{
	while (env->size_a != 1)
	{
		env->med++;
		while (tabdone(env->stack_a, env->med) != 0)
		{
			if (env->stack_a->nbr < env->med)
				push_b(env);
			else
				rotate_a(env);
		}
	}
}

void	algo_max(t_push_swap *env)
{
	size_t tmp;

	tmp = env->size_a;
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
		if (tmp - (size_t)env->med <= (size_t)env->pad)
			algo_sup_bis(env);
		else
			env->med += env->pad;
		if (env->med > env->max_a || env->size_a == 1)
			break ;
	}
	algo_card_sort(env);
}
