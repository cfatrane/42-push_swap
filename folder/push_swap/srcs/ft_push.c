/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:54:29 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/05 20:45:01 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_a(t_push_swap *push_swap)
{
	if (push_swap->size_b > 0)
	{
		ft_stack_push_front(&push_swap->stack_a, push_swap->stack_b->nbr);
		ft_stack_delone_front(&push_swap->stack_b);
		ft_putendl(PA);
	}
	ft_size(push_swap);
}

void	ft_push_b(t_push_swap *push_swap)
{
	ft_size(push_swap);
	if (push_swap->size_a > 0)
	{
		ft_stack_push_front(&push_swap->stack_b, push_swap->stack_a->nbr);
		ft_stack_delone_front(&push_swap->stack_a);
		ft_putendl(PB);
	}
	ft_size(push_swap);
}
