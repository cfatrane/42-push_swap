/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 20:00:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 14:37:10 by cfatrane         ###   ########.fr       */
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
	//	ft_printf("DEPART = \n");
	if (ft_stack_check(env) == 0)
		ft_putendl("OK");
	else
	{
		ft_putendl("KO");
		ft_stack_val_bord(env);
		ft_size(env);
		ft_stack_display(env);
	//	if (env->size_a <= 10)
	//		algo_min(env);
		//	algo_naif(env);
		//	algo_naif_2(env);
		//	algo_naif_3(env);
			algo_naif_4(env);
		//	algo_test(env);
		//	algo_quicksort(env);
		//	algo_mergesort(env);
		//	terry(env);
	}
	//	if (env->size_a < 10)
	//		ft_insertionsort(env);
	//	ft_printf("SUITE = \n");
	//	ft_printf("MAX = %d\tMIN =%d\n", env->max, env->min);
	/*	while (ft_stack_check(env) != 0)
		{
		ft_size(env);
		ft_naif(env);
		ft_stack_display(env->stack_a, env->stack_b);
	//	if (env->stack_a->nbr > env->stack_a->next->nbr)
	//		ft_swap_a(env);
	}*/
	/*	char	*line;

		while (get_next_line(0, &line))
		{
		ft_size(env);
		if (ft_operation(env, line) == -1)
		{
		free(line);
		ft_putendl_fd("Error", 2);
		exit(0);
		}
		if (env->display == 1)
		ft_stack_display(env->stack_a, env->stack_b);
		free(line);
		}*/
	ft_stack_display(env);
	if (ft_stack_check(env) == 0)
		ft_putendl("OK");
	else
		ft_putendl("KO");
	return (0);
}
