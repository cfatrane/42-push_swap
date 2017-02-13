/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:51:50 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 18:32:42 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_a(t_push_swap *env)
{
	if (env->size_b > 0)
	{
		ft_stack_push_front(&env->stack_a, env->stack_b->nbr);
		ft_stack_delone_front(&env->stack_b);
		if (env->action == 1)
			ft_putendl(PA);
	}
	ft_stack_display(env);
	ft_size(env);
}

void	push_b(t_push_swap *env)
{
	ft_size(env);
	if (env->size_a > 0)
	{
		ft_stack_push_front(&env->stack_b, env->stack_a->nbr);
		ft_stack_delone_front(&env->stack_a);
		if (env->action == 1)
			ft_putendl(PB);
	}
	ft_stack_display(env);
	ft_size(env);
}
