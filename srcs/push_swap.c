/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:07:59 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/12 16:17:29 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_size(t_push_swap *env)
{
	env->size_a = ft_stack_size(env->stack_a);
	env->size_b = ft_stack_size(env->stack_b);
}

int		push_swap(t_push_swap *env)
{
	stack_val_bord(env);
	ft_size(env);
	if (ft_stack_check(env) == 0)
		return (0);
	else
	{
		algo_hundred(env);
	}
	if (ft_stack_check(env) == 0)
		ft_putendl("OK");
	else
		ft_putendl("KO");
	return (0);
}
