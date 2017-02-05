/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 10:21:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/05 20:16:30 by cfatrane         ###   ########.fr       */
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

int		ft_stack_check_decroissant(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_b;
	nbr_tmp = tmpstack->nbr;
	while (tmpstack->next)
	{
		if (nbr_tmp < tmpstack->next->nbr)
			return (-1);
		tmpstack = tmpstack->next;
		nbr_tmp = tmpstack->nbr;
	}
	return (0);
}

void	ft_terry(t_push_swap *push_swap)
{
	ssize_t	pivot;
	t_stack		*max/* = ft_memalloc(sizeof(t_stack))*/;
	max = ft_stack_at(push_swap->stack_a, push_swap->size_a - 1);
	pivot = max->nbr;
	int max_bis;
	ssize_t nbrot = 0;
	size_t i;
	while (ft_stack_check(push_swap) != 0)
	{
		while (pivot > push_swap->stack_a->nbr)
		{
			ft_push_b(push_swap);
	//		ft_stack_display(push_swap->stack_a, push_swap->stack_b);
		}
		ft_size(push_swap);
		if (pivot == push_swap->stack_a->nbr)
		{
			while (ft_stack_check_decroissant(push_swap) != 0 && !(i = 0))
			{
				pivot = push_swap->stack_b->nbr;
				max = push_swap->stack_b;
				while (max && i <= push_swap->size_b - nbrot)
				{
					if (max->nbr > pivot)
					{
						max_bis = max->nbr;
						nbrot++;
						ft_rotate_b(push_swap);
						break ;
					}
					max = max->next;
					i++;
		//	ft_stack_display(push_swap->stack_a, push_swap->stack_b);
				}
				if (pivot == push_swap->stack_b->nbr)
				{
					ft_size(push_swap);
					ft_push_a(push_swap);
				}
			}
			while (push_swap->stack_b)
				ft_push_a(push_swap);
			break ;
			//	ft_printf("first = %d\n", push_swap->stack_b->nbr);
			//		while (push_swap->stack_b)
		//	ft_stack_display(push_swap->stack_a, push_swap->stack_b);
		}
		ft_rotate_a(push_swap);
		max = ft_stack_at(push_swap->stack_a, push_swap->size_a - 1);
		pivot = max->nbr;
	//	ft_stack_display(push_swap->stack_a, push_swap->stack_b);
	}
}
















