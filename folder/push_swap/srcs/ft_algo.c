/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 10:21:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/07 16:48:05 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_insertionsort(t_push_swap *push_swap)
{
	ft_size(push_swap);
	while (ft_stack_check(push_swap) != 0)
	{
		if (push_swap->stack_a->nbr > push_swap->stack_a->next->nbr)
		{
			ft_swap_a(push_swap);
			ft_push_b(push_swap);
		}
		else
			ft_push_b(push_swap);
		//		else if (push_swap->stack_a->nbr > push_swap->stack_a->next->nbr)
	ft_stack_display(push_swap);
	}
}
/*
   void	merge(t_push_swap *push_swap, ssize_t milieu)
   {
   int i, j, k;
   i = 0;
   push_swap->stack_b = ft_memalloc(sizeof(t_stack));
   while (k <
   }*/
/*
   void	ft_mergesort(t_push_swap *push_swap, ssize_t size)
   {
   ssize_t mid;

   mid = size / 2;
   sort (0

   }*/

