/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:42:41 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/04 21:32:44 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_tabdone_a(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_a;
	//	nbr_tmp = tmpstack->nbr;
	while (tmpstack/*->next*/)
	{
		//	ft_printf("nbr tmp = %d pivot = %d\n", nbr_tmp, push_swap->pivot);
		nbr_tmp = tmpstack->nbr;
		if (nbr_tmp > push_swap->pivot)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}

int		ft_tabdone_b(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_b;
	//	nbr_tmp = tmpstack->nbr;
	while (tmpstack/*->next*/)
	{
		//	ft_printf("nbr tmp = %d pivot = %d\n", nbr_tmp, push_swap->pivot);
		nbr_tmp = tmpstack->nbr;
		if (nbr_tmp > push_swap->pivot)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}

void	ft_quicksort(t_push_swap *push_swap)
{
	ft_printf("---------\n");
	ft_printf("QUICKSORT\n");
	ft_printf("---------\n");
	push_swap->pivot = ft_stack_val_at(push_swap->stack_a, push_swap->size_a - 1);
	ft_printf("BOUCLE 1 pivot 1 = %d\n", push_swap->pivot);

	/*	while (ft_stack_check(push_swap) != 0)
		{
		}*/
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
