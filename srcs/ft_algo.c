/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 10:21:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/09 13:47:44 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_insertionsort(t_push_swap *env)
{
	ft_size(env);
	while (ft_stack_check(env) != 0)
	{
		if (env->stack_a->nbr > env->stack_a->next->nbr)
		{
			swap_a(env);
			push_b(env);
		}
		else
			push_b(env);
		//		else if (env->stack_a->nbr > env->stack_a->next->nbr)
	ft_stack_display(env);
	}
}
/*
   void	merge(t_push_swap *env, ssize_t milieu)
   {
   int i, j, k;
   i = 0;
   env->stack_b = ft_memalloc(sizeof(t_stack));
   while (k <
   }*/
/*
   void	ft_mergesort(t_push_swap *env, ssize_t size)
   {
   ssize_t mid;

   mid = size / 2;
   sort (0

   }*/

