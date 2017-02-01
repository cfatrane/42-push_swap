/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:54:29 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 19:59:30 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_a(t_push_swap *push_swap)
{
	if (push_swap->size_b > 0)
	{
		ft_stack_push_front(&push_swap->stack_a, push_swap->stack_b->nbr);
		ft_stack_delone_front(&push_swap->stack_b);
	}
}

void	ft_push_b(t_push_swap *push_swap)
{
	if (push_swap->size_a > 0)
	{
		ft_stack_push_front(&push_swap->stack_b, push_swap->stack_a->nbr);
		ft_stack_delone_front(&push_swap->stack_a);
	}
}
