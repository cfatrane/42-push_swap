/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:07:59 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/17 19:05:52 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		push_swap(t_push_swap *env)
{
	int	*tab;

	stack_val_bord(env);
	ft_size(env);
	tab = convert_tab(env);
	tri_rapide(tab, env->size_a);
	define_med(env, tab);
	free(tab);
	ft_stack_display(env);
	if (ft_stack_check(env) == 0)
		return (0);
	else if (env->size_a <= 3)
		algo_min(env);
	else if (env->size_a > 3 && env->size_a <= 30)
		algo_med(env);
	else if (env->size_a > 30 && env->size_a <= 300)
		algo_sup(env);
	else if (env->size_a > 300)
		algo_max(env);
	return (0);
}
