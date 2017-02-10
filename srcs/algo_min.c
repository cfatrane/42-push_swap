/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 13:31:02 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 13:49:30 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_min(t_push_swap *env)
{
/*	while (env->stack_a->nbr != env->min_a)
	{
		ft_printf("MIN A = %d MIN A = %d\n", env->min_a, env->max_a);
		ft_stack_val_bord(env);
		rotate_a(env);
	}*/
	ft_printf("SIZE A = %d SIZE B= %d", env->size_a, env->size_b);
	while (env->size_b >= env->size_a)
	{
		push_b(env);
		swap_a(env);
	}
}
