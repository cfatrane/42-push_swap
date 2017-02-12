/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:51:59 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/12 16:06:12 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_push_swap *env)
{
	ft_size(env);
	if (env->size_a > 1)
	{
		ft_stack_push_back(&env->stack_a, env->stack_a->nbr);
		ft_stack_delone_front(&env->stack_a);
		if (env->action == 1)
			ft_putendl(RA);
		ft_stack_display(env);
	}
	ft_size(env);
}

void	rotate_b(t_push_swap *env)
{
	ft_size(env);
	if (env->size_b > 1)
	{
		ft_stack_push_back(&env->stack_b, env->stack_b->nbr);
		ft_stack_delone_front(&env->stack_b);
		if (env->action == 1)
			ft_putendl(RB);
		ft_stack_display(env);
	}
	ft_size(env);
}

void	rotate_r(t_push_swap *env)
{
	ft_size(env);
	if (env->size_a > 1)
	{
		ft_stack_push_back(&env->stack_a, env->stack_a->nbr);
		ft_stack_delone_front(&env->stack_a);
	}
	if (env->size_b > 1)
	{
		ft_stack_push_back(&env->stack_b, env->stack_b->nbr);
		ft_stack_delone_front(&env->stack_b);
	}
	if (env->action == 1)
		ft_putendl(RR);
	ft_stack_display(env);
	ft_size(env);
}
