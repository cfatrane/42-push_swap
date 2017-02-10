/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 09:15:19 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 09:16:21 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	test(t_push_swap *env)
{
	while (env->size_a != 1)
	{
		ft_stack_val_bord(env);
		//		//ft_printf("max a = %d\n", env->max_a);
		size_t i = ft_count_a_2(env);
		//		//ft_printf("to do = %d & size = %d\n", i, env->size_a);
		if (env->stack_a->nbr < env->max_a)
		{
			push_b(env);
			pb++;
		}
		else
		{
			if (i < env->size_a / 2)
				rotate_a(env);
			else
				reverse_rotate_a(env);
		}
		ft_stack_display(env);
	}
	ft_stack_val_bord(env);
	//	size_t l = 0;
	size_t rb = 0;
	size_t jk = 0;
	//ft_printf("NBR DE PB = %d\n", pb);
	//ft_printf("--------------------------------------------\n");
	while (1)
	{
		if (pb == 0)
			break ;
		ft_stack_val_bord_mid(env, pb);
		//ft_printf("MAX ENTRE 0 et %d = %d\n", pb, env->max_b);
		while (env->stack_b->nbr != env->max_b)
		{
			/*	if (env->stack_b->nbr == env->max_b)
				{
				push_a(env);
				l++;
				pb--;
				break ;
				}
				else
				{
			//	if (i <= env->size_b / 2)
			*/	rotate_b(env);
			ft_stack_display(env);
			rb++;
			//ft_printf("rb vaut = %d\n", rb);
			//	else
			//		reverse_rotate_b(env);
			//	}
		}
		if (env->stack_b->nbr == env->max_b)
		{
			push_a(env);
			pb--;
			ft_stack_display(env);
		}
		while ((rb-- + jk) > 0)
		{
			//ft_printf("rb vaut = %d\n", rb);
			reverse_rotate_b(env);
		}
		jk++;
		ft_stack_display(env);
		if (env->stack_b->nbr > env->max_b)
		{
			rotate_b(env);
			ft_stack_display(env);
		}
		ft_stack_display(env);
	}
	ft_stack_val_bord(env);
	env->med = env->max_b;
/*	while (1)
	{
		if (env->stack_b->nbr == env->max_b)
		{
			push_a(env);
			break ;
		}
		while (env->stack_b->nbr != env->max_b)
		{
			rotate_b(env);
		}
	}*/
	while (env->size_b != 0)
	{
		//	while (ft_stack_done_b(env->stack_a) == 0)
		//		push_a(env);
		ft_stack_val_bord(env);
		//		ft_printf("max b = %d\n", env->max_b);
		size_t i = ft_count_b(env);
		//		ft_printf("to do = %d & size = %d\n", i, env->size_b);
		if (env->stack_b->nbr == env->max_b)
		{
			push_a(env);
		}
		else
		{
			if (i <= env->size_b / 2)
				rotate_b(env);
			else
				reverse_rotate_b(env);
		}
		ft_stack_display(env);
	}
	while (ft_stack_check(env) != 0)
		rotate_a(env);
}
