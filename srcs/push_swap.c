/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 20:00:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/11 19:44:48 by cfatrane         ###   ########.fr       */
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
	if (ft_stack_check(env) == 0)
		return (0);
	else
	{
		ft_stack_val_bord(env);
		ft_size(env);
		ft_stack_display(env);
//	if (env->size_a <= 10)
//			ft_card_sort(env);
//		else
	//		algo_min(env);
		//	algo_naif(env);
//			algo_naif_2(env);
		//	algo_naif_3(env);
			algo_naif_4(env);
//			algo_naif_5(env);
		//	algo_test(env);
		//	algo_quicksort(env);
		//	algo_mergesort(env);
		//	terry(env);
	}
	//	if (env->size_a < 10)
	//		ft_insertionsort(env);
	if (ft_stack_check(env) == 0)
		ft_putendl("OK");
	else
		ft_putendl("KO");
	return (0);
}
