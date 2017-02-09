/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_mergesort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:57:47 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/09 15:57:57 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_mergesort(t_push_swap *env)
{
	size_t middle = env->size_a / 2;
	while (middle--)
	{
		push_b(env);
		ft_stack_display(env);
	}
	middle = env->size_a / 2;
/*	while (env->size_a != 1)
	{
		ft_stack_val_bord(env);
//		ft_printf("max a = %d\n", env->max_a);
		size_t i = ft_count_a(env);
//		ft_printf("to do = %d & size = %d\n", i, env->size_a);
		if (env->stack_a->nbr < env->max_a)
		{
			ft_push_b(env);
		}
		else
		{
			if (i <= env->size_a / 2)
				rotate_a(env);
			else
				ft_reverse_rotate_a(env);
		}
		ft_stack_display(env);
	}
	ft_stack_val_bord(env);
//	ft_printf("--------------------------------------------\n");
	while (env->size_b != 0)
	{
		//	while (ft_stack_done_b(env->stack_a) == 0)
		//		ft_push_a(env);
		ft_stack_val_bord(env);
		//		ft_printf("max b = %d\n", env->max_b);
		size_t i = ft_count_b(env);
		//		ft_printf("to do = %d & size = %d\n", i, env->size_b);
		if (env->stack_b->nbr == env->max_b)
		{
			ft_push_a(env);
		}
		else
		{
			if (i <= env->size_b / 2)
				rotate_b(env);
			else
				ft_reverse_rotate_b(env);
		}
		ft_stack_display(env);
	}*/
/*	while (1)
	{
		if (env->stack_a->nbr > env->stack_a->next->nbr)
		{
			ft_swap_a(env);
			ft_push_b(env);
			ft_push_b(env);
			ft_reverse_rotate_a(env);
			ft_reverse_rotate_a(env);
		}
		else
		{
			ft_reverse_rotate_a(env);
			ft_reverse_rotate_a(env);
		}
		if (env->stack_b->nbr > env->stack_b->next->nbr)
		{
			ft_swap_b(env);
			ft_push_a(env);
			ft_push_a(env);
			ft_reverse_rotate_b(env);
			ft_reverse_rotate_b(env);
		}
		else
		{
			ft_reverse_rotate_b(env);
			ft_reverse_rotate_b(env);
		}
		ft_stack_display(env);
	}*/
}
