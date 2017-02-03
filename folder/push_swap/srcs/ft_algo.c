/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 10:21:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/03 15:19:48 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_naif(t_push_swap *push_swap)
{
	while (ft_stack_check(push_swap) != 0)
	{
		ft_size(push_swap);
		if (push_swap->stack_a->nbr > push_swap->stack_a->next->nbr)
			ft_swap_a(push_swap);
		else
			ft_reverse_rotate_a(push_swap);

		ft_stack_display(push_swap->stack_a, push_swap->stack_b);
		//	if ()
	}
	return (0);
}

int		ft_tabdone(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_a;
	nbr_tmp = tmpstack->nbr;
	while (tmpstack->next)
	{
//		ft_printf("nbr tmp = %d pivot = %d\n", nbr_tmp, push_swap->pivot);
		if (nbr_tmp > push_swap->pivot)
			return (-1);
		tmpstack = tmpstack->next;
		nbr_tmp = tmpstack->nbr;
	}
//	if (push_swap->stack_b != NULL)
//		return (-1);
	return (0);
}

void	ft_quicksort(t_push_swap *push_swap)
{
	ft_size(push_swap);
	push_swap->pivot = push_swap->stack_a->nbr;
	while (ft_stack_check(push_swap) != 0)
	{
		if (ft_tabdone(push_swap) == 0)
			break ;
		if (push_swap->stack_a->nbr <= push_swap->pivot)
		{
			ft_swap_a(push_swap);
			ft_reverse_rotate_a(push_swap);
		}
		else if (push_swap->stack_a->nbr > push_swap->pivot)
		{
			ft_push_b(push_swap);
		}
		else
			ft_rotate_a(push_swap);
		ft_stack_display(push_swap->stack_a, push_swap->stack_b);
	}
	//	ft_quicksort(push_swap);
	//	ft_push_b(push_swap);
	/*	while (ft_stack_check(push_swap) != 0)
		{

		}
		*/
}

void	ft_insertionsort(t_push_swap *push_swap)
{
	ft_size(push_swap);
	while (ft_stack_check(push_swap) != 0)
	{
		if (push_swap->stack_a->nbr > push_swap->stack_a->next->nbr)
			ft_swap_a(push_swap);
//		else if (push_swap->stack_a->nbr > push_swap->stack_a->next->nbr)
		else
		{
			ft_rotate_a(push_swap);
			ft_rotate_a(push_swap);
		}
		ft_stack_display(push_swap->stack_a, push_swap->stack_b);
	}
}
