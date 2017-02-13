/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:51:55 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 18:32:45 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate_a(t_push_swap *env)
{
	t_stack	*tmpstack;

	ft_size(env);
	if (env->size_a > 1)
	{
		tmpstack = env->stack_a;
		while (tmpstack->next != NULL)
			tmpstack = tmpstack->next;
		ft_stack_push_front(&env->stack_a, tmpstack->nbr);
		ft_stack_delone_back(&env->stack_a);
		if (env->action == 1)
			ft_putendl(RRA);
	}
	ft_stack_display(env);
	ft_size(env);
}

void	reverse_rotate_b(t_push_swap *env)
{
	t_stack	*tmpstack;

	ft_size(env);
	if (env->size_b > 1)
	{
		tmpstack = env->stack_b;
		while (tmpstack->next != NULL)
			tmpstack = tmpstack->next;
		ft_stack_push_front(&env->stack_b, tmpstack->nbr);
		ft_stack_delone_back(&env->stack_b);
		if (env->action == 1)
			ft_putendl(RRB);
	}
	ft_stack_display(env);
	ft_size(env);
}

void	reverse_rotate_r(t_push_swap *env)
{
	t_stack	*tmpstack;

	ft_size(env);
	if (env->size_a > 1)
	{
		tmpstack = env->stack_a;
		while (tmpstack->next != NULL)
			tmpstack = tmpstack->next;
		ft_stack_push_front(&env->stack_a, tmpstack->nbr);
		ft_stack_delone_back(&env->stack_a);
	}
	if (env->size_b > 1)
	{
		tmpstack = env->stack_b;
		while (tmpstack->next != NULL)
			tmpstack = tmpstack->next;
		ft_stack_push_front(&env->stack_b, tmpstack->nbr);
		ft_stack_delone_back(&env->stack_b);
	}
	if (env->action == 1)
		ft_putendl(RRR);
	ft_stack_display(env);
	ft_size(env);
}
