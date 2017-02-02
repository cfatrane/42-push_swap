/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:54:11 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/02 08:47:13 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate_a(t_push_swap *push_swap)
{
	if (push_swap->size_a > 1)
	{
		ft_stack_push_back(&push_swap->stack_a, push_swap->stack_a->nbr);
		ft_stack_delone_front(&push_swap->stack_a);
		ft_putendl(RA);
	}
}

void	ft_rotate_b(t_push_swap *push_swap)
{
	if (push_swap->size_b > 1)
	{
		ft_stack_push_back(&push_swap->stack_b, push_swap->stack_b->nbr);
		ft_stack_delone_front(&push_swap->stack_b);
		ft_putendl(RB);
	}
}

void	ft_rotate_r(t_push_swap *push_swap)
{
	ft_rotate_a(push_swap);
	ft_rotate_b(push_swap);
}
