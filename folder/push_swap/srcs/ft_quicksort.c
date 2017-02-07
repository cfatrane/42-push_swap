/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:42:41 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/07 21:20:33 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_stack_check_b(t_push_swap *push_swap)
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

void	ft_quicksort(t_push_swap *push_swap)
{
	//	int ret = 5;
	push_swap->pivot = ft_stack_val_at(push_swap->stack_a, push_swap->size_a - 1);
	ft_printf("--------------------------------------------\n");
	ft_printf("BOUCLE 1 |PIVOT 1 = %d|\n", push_swap->pivot);
	ft_printf("--------------------------------------------\n");
	size_t i = 0;
	size_t j = 0;
	while (ft_tabdone_a(push_swap) != 0)
	{
		if (push_swap->stack_a->nbr > push_swap->pivot)
		{
			ft_push_b(push_swap);
			j++;
		}
		else
			ft_rotate_a(push_swap);
		//	ft_reverse_rotate_a(push_swap);
		ft_stack_display(push_swap);
	}
	if ((is_pivot_a(push_swap) == -1))
	{
		while (1)
		{
			if (push_swap->stack_a->nbr == push_swap->pivot)
			{
				ft_push_b(push_swap);
				break;
			}
			else
				ft_rotate_a(push_swap);
			ft_stack_display(push_swap);
		}
	}
	ft_stack_display(push_swap);
	//	while (push_swap->stack_a->nbr != push_swap->pivot)
	//		ft_rotate_a(push_swap);
	ft_printf("--------------------------------------------\n");
	ft_printf("nbr de push b = %d\n", j);
	ft_printf("BOUCLE 1 |PIVOT 1 = %d|\n", push_swap->pivot);
	ft_printf("--------------------------------------------\n\n");
	ft_printf("--------------------------------------------\n");
	ft_printf("Nbr de push = %d\n", i);
	push_swap->pivot = ft_stack_val_at(push_swap->stack_b, push_swap->size_b - 1);
	ft_printf("BOUCLE 2 |PIVOT 2 = %d|\n", push_swap->pivot);
	ft_printf("--------------------------------------------\n");
	while ((ft_tabdone_b(push_swap) != 0))
	{
		if (push_swap->stack_b->nbr > push_swap->pivot)
		{
			ft_push_a(push_swap);
			i++;
		}
		else
			ft_rotate_b(push_swap);
		ft_stack_display(push_swap);
		//		ft_printf("ret = %d\n", ret);
	}
	if (is_pivot_b(push_swap) == -1 && ft_tabdone_b(push_swap) != 0)
	{
		while (1)
		{
			if (push_swap->stack_b->nbr == push_swap->pivot)
			{
				ft_push_a(push_swap);
				break;
			}
			else
				ft_rotate_b(push_swap);
			ft_stack_display(push_swap);
		}
	}
	ft_printf("--------------------------------------------\n");
	ft_printf("nbr de push a = %d\n", i);
	ft_printf("BOUCLE 2 |PIVOT 2 = %d|\n", push_swap->pivot);
	ft_printf("--------------------------------------------\n\n");
	ft_printf("--------------------------------------------\n");
	ft_printf("Nbr de push = %d\n", i);
	//	push_swap->pivot = ft_stack_val_at(push_swap->stack_b, push_swap->size_b - 1);
	push_swap->pivot = ft_stack_val_at(push_swap->stack_a, i);
	ft_printf("BOUCLE 3 |PIVOT 3 = %d|\n", push_swap->pivot);
	ft_printf("--------------------------------------------\n");
	size_t n = 0;
	while (n != i)
	{
		if (push_swap->stack_a->nbr > push_swap->pivot)
		{
			ft_push_b(push_swap);
			n++;
		}
		else
			ft_swap_a(push_swap);
		//	ft_reverse_rotate_a(push_swap);
		ft_stack_display(push_swap);
	}
/*	if (is_pivot_a(push_swap) == -1)
		while (1)
		{
			if (push_swap->stack_a->nbr == push_swap->pivot)
			{
				ft_push_b(push_swap);
				break;
			}
			else
				ft_swap_a(push_swap);
			ft_stack_display(push_swap);
		}*/
	ft_stack_display(push_swap);
	ft_printf("--------------------------------------------\n");
	ft_printf("nbr de push b = %d\n", n);
	ft_printf("BOUCLE 3 |PIVOT 3 = %d|\n", push_swap->pivot);
	ft_printf("Nbr de push = %d\n", n);
	//	push_swap->pivot = ft_stack_val_at(push_swap->stack_b, push_swap->size_b - 1);
	push_swap->pivot = ft_stack_val_at(push_swap->stack_b, n);
	ft_printf("BOUCLE 4 |PIVOT  = %d|\n", push_swap->pivot);
	ft_printf("--------------------------------------------\n");
	size_t y = 0;
	while (y != n)
	{
		if (push_swap->stack_b->nbr > push_swap->pivot)
		{
			ft_push_a(push_swap);
			y++;
		}
		else
			ft_swap_b(push_swap);
		ft_stack_display(push_swap);
	}
/*	if (is_pivot_b(push_swap) == -1)
		while (1)
		{
			if (push_swap->stack_b->nbr == push_swap->pivot)
			{
				ft_push_a(push_swap);
				break;
			}
			else
				ft_swap_b(push_swap);
			ft_stack_display(push_swap);
		}*/
	/*	while (push_swap->size_b != 1)
		{
		if (push_swap->stack_b->nbr < push_swap->stack_b->next->nbr)
		ft_swap_b(push_swap);
		else
		{
		ft_push_a(push_swap);
		i++;
		}
		ft_stack_display(push_swap);
		}
		ft_push_a(push_swap);
		i++;
		size_t k = i;
		ft_printf("--------------------------------------------\n");
		push_swap->pivot = ft_stack_val_at(push_swap->stack_a, push_swap->size_a - 1);
		while (i--)
		{
		ft_reverse_rotate_a(push_swap);
		ft_stack_display(push_swap);
		}
		ft_printf("--------------------------------------------\n");
		while (ft_tabdone_a(push_swap) != 0 && k--)
		{
		if (push_swap->stack_a->nbr > push_swap->pivot)
		{
		ft_push_b(push_swap);
		j++;
		}
		else
		ft_rotate_a(push_swap);
	//	ft_reverse_rotate_a(push_swap);
	ft_stack_display(push_swap);
	}
	ft_printf("--------------------------------------------\n");
	while (push_swap->size_b != 1)
	{
	ft_stack_val_bord(push_swap);
	size_t l = ft_count_b(push_swap);
	if (push_swap->stack_b->nbr == push_swap->max_b)
	{
	ft_push_a(push_swap);
	}
	else
	{
	if (l <= push_swap->size_b / 2)
	ft_rotate_b(push_swap);
	else
	ft_reverse_rotate_b(push_swap);
	}
	ft_stack_display(push_swap);
	if (push_swap->stack_b->nbr != push_swap->max_b)
	//	if (push_swap->stack_b->nbr < push_swap->stack_b->next->nbrpush_swap->max_b)
	ft_swap_b(push_swap);
	else
	{
	ft_push_a(push_swap);
	i++;
	}
	ft_stack_display(push_swap);
	}
	ft_push_a(push_swap);
	ft_reverse_rotate_a(push_swap);
	*/


	//	while (ft_tabdone_a(push_swap) != 0)
	//	{
	//		ft_stack_display(push_swap);

	//	}

}
/*
   void	ft_quicksort(t_push_swap *push_swap)
   {
   int nbrpushb = 0;
   ft_printf("---------\n");
   ft_printf("QUICKSORT\n");
   ft_printf("---------\n");
   while (ft_stack_check(push_swap) != 0)
   {
   ft_size(push_swap);
   push_swap->pivot = ft_stack_val_at(push_swap->stack_a, push_swap->size_a - 1);
   ft_printf("---------------------\n", push_swap->pivot);
   ft_printf("BOUCLE 1 pivot 1 = %d\n", push_swap->pivot);
   ft_printf("---------------------\n", push_swap->pivot);
   while (ft_tabdone_a(push_swap) != 0)
   {
   ft_size(push_swap);
   if (push_swap->stack_a->nbr <= push_swap->pivot)
   {
   ft_swap_a(push_swap);
   ft_stack_display(push_swap);
   if (push_swap->stack_a->nbr > push_swap->pivot)
   ft_push_b(push_swap);
//	if (push_swap->stack_a->nbr > push_swap->stack_a->next->nbr)
//		ft_reverse_rotate_a(push_swap);
ft_stack_display(push_swap);
}
else if (push_swap->stack_a->nbr > push_swap->pivot)
{
ft_push_b(push_swap);
nbrpushb++;
}
//		else
//			ft_rotate_a(push_swap);
ft_stack_display(push_swap);
}
ft_reverse_rotate_a(push_swap);
ft_stack_display(push_swap);
ft_push_b(push_swap);
ft_stack_display(push_swap);
//	ft_reverse_rotate_b(push_swap);
ft_stack_display(push_swap);
ft_size(push_swap);
push_swap->pivot = ft_stack_val_at(push_swap->stack_a, push_swap->size_a - 1);
ft_printf("---------------------\n", push_swap->pivot);
ft_printf("BOUCLE 1 pivot 1 = %d\n", push_swap->pivot);
ft_printf("---------------------\n", push_swap->pivot);
while (ft_tabdone_a(push_swap) != 0)
{
ft_size(push_swap);
if (push_swap->stack_a->nbr <= push_swap->pivot)
{
ft_swap_a(push_swap);
ft_stack_display(push_swap);
if (push_swap->stack_a->nbr > push_swap->pivot)
ft_push_b(push_swap);
//	if (push_swap->stack_a->nbr > push_swap->stack_a->next->nbr)
//		ft_reverse_rotate_a(push_swap);
ft_stack_display(push_swap);
}
else if (push_swap->stack_a->nbr > push_swap->pivot)
{
ft_push_b(push_swap);
nbrpushb++;
}
//		else
//			ft_rotate_a(push_swap);
ft_stack_display(push_swap);
}
ft_reverse_rotate_a(push_swap);
ft_stack_display(push_swap);
ft_size(push_swap);
//	ft_push_b(push_swap);
//	ft_stack_display(push_swap);
//	exit (0);
ft_printf("nbrpushb = %d\n", nbrpushb);
break ;
//	ft_reverse_rotate_b(push_swap);
//	ft_stack_display(push_swap);
ft_size(push_swap);
push_swap->pivot = ft_stack_val_at(push_swap->stack_b, push_swap->size_b - 1);
ft_printf("---------------------\n", push_swap->pivot);
ft_printf("BOUCLE 2 pivot 2 = %d\n", push_swap->pivot);
ft_printf("---------------------\n", push_swap->pivot);
while (ft_tabdone_b(push_swap) != 0)
{
	ft_size(push_swap);
	if (push_swap->stack_b->nbr <= push_swap->pivot)
	{
		ft_swap_b(push_swap);
		ft_stack_display(push_swap);
		//	if (push_swap->stack_b->nbr > push_swap->stack_b->next->nbr)
		ft_reverse_rotate_b(push_swap);
		ft_stack_display(push_swap);
	}
	else if (push_swap->stack_b->nbr > push_swap->pivot)
	{
		ft_push_a(push_swap);
	}
	//	if (push_swap->size_b == 1)
	//		ft_push_a(push_swap);
	//		else
	//			ft_rotate_a(push_swap);
	ft_stack_display(push_swap);
}
//	ft_push_a(push_swap);
//	ft_reverse_rotate_a(push_swap);
break ;
}
}*/

