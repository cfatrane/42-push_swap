/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 14:15:45 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/17 18:55:15 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_sup_mid_sup(t_push_swap *env)
{
	while (1)
	{
		stack_val_bord(env);
		while (tabdone(env->stack_a, env->quart_three) != 0 && env->size_a > 1)
		{
			ft_size(env);
			if (env->stack_a->nbr < env->quart_three)
				push_b(env);
			else
				rotate_a(env);
		}
		stack_val_bord(env);
		env->quart_three = mediane(env, env->quart_three);
		if (env->quart_three > env->max_a || env->size_a == 2 ||
				(env->stack_a->nbr == env->max_a && env->size_a <= 2))
			break ;
	}
}

void	algo_sup_rev(t_push_swap *env)
{
	ssize_t	tp;

	tp = 0;
	while (tp != env->pa && env->size_a > 1)
	{
		push_b(env);
		tp++;
	}
}

void	algo_sup_mid_inf(t_push_swap *env)
{
	while (1)
	{
		stack_val_bord(env);
		while (tabundone(env->stack_b, env->quart_one) != 0)
		{
			if (env->stack_b->nbr > env->quart_one)
			{
				push_a(env);
				env->pa++;
			}
			else
				rotate_b(env);
		}
		env->quart_one = unmediane(env, env->quart_one);
		if (env->size_b == 1 || env->size_b == 2 || env->quart_one < env->min_b)
		{
			algo_sup_rev(env);
			break ;
		}
	}
}

void	algo_sup(t_push_swap *env)
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
		algo_sup_mid_inf(env);
		algo_sup_mid_sup(env);
		if (tmp - (size_t)env->med <= (size_t)env->pad)
			algo_sup_bis(env);
		else
			env->med += env->pad;
		if (env->med >= env->max_a || env->size_a == 1)
			break ;
	}
	algo_card_sort(env);
}
