/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 15:21:31 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 19:59:29 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_rotate_a(t_push_swap *push_swap)
{
	t_stack	*tmpstack;

	if (push_swap->size_a > 1)
	{
		tmpstack = push_swap->stack_a;
		while (tmpstack->next != NULL)
			tmpstack = tmpstack->next;
		ft_stack_push_front(&push_swap->stack_a, tmpstack->nbr);
		ft_stack_delone_back(&push_swap->stack_a);
	}
}

void	ft_reverse_rotate_b(t_push_swap *push_swap)
{
	t_stack	*tmpstack;

	if (push_swap->size_b > 1)
	{
		tmpstack = push_swap->stack_b;
		while (tmpstack->next != NULL)
			tmpstack = tmpstack->next;
		ft_stack_push_front(&push_swap->stack_b, tmpstack->nbr);
		ft_stack_delone_back(&push_swap->stack_b);
	}
}

void	ft_reverse_rotate_r(t_push_swap *push_swap)
{
	ft_reverse_rotate_a(push_swap);
	ft_reverse_rotate_b(push_swap);
}
