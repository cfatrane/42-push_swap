/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:51:06 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/11 19:50:36 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_push_swap *env)
{
	ssize_t	tmp;

	ft_size(env);
	if (env->size_a > 1)
	{
		tmp = env->stack_a->nbr;
		env->stack_a->nbr = env->stack_a->next->nbr;
		env->stack_a->next->nbr = tmp;
		if (env->action == 1)
			ft_putendl(SA);
		ft_stack_display(env);
	}
	ft_size(env);
}

void	swap_b(t_push_swap *env)
{
	ssize_t	tmp;

	ft_size(env);
	if (env->size_b > 1)
	{
		tmp = env->stack_b->nbr;
		env->stack_b->nbr = env->stack_b->next->nbr;
		env->stack_b->next->nbr = tmp;
		if (env->action == 1)
			ft_putendl(SB);
		ft_stack_display(env);
	}
	ft_size(env);
}

void	swap_s(t_push_swap *env)
{
	ssize_t	tmp;

	ft_size(env);
	if (env->size_a > 1)
	{
		tmp = env->stack_a->nbr;
		env->stack_a->nbr = env->stack_a->next->nbr;
		env->stack_a->next->nbr = tmp;
		if (env->action == 1)
			ft_putendl(SA);
	}
	if (env->size_b > 1)
	{
		tmp = env->stack_b->nbr;
		env->stack_b->nbr = env->stack_b->next->nbr;
		env->stack_b->next->nbr = tmp;
		if (env->action == 1)
			ft_putendl(SB);
	}
	ft_size(env);
	ft_stack_display(env);
	/*
	   ft_size(env);
	   if (env->size_a > 1)
	   swap_a(env);
	   if (env->size_b > 1)
	   swap_b(env);*/
}
