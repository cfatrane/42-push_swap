/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:53:55 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/02 08:46:41 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap_a(t_push_swap *push_swap)
{
	ssize_t	tmp;

	if (push_swap->size_a > 1)
	{
		tmp = push_swap->stack_a->nbr;
		push_swap->stack_a->nbr = push_swap->stack_a->next->nbr;
		push_swap->stack_a->next->nbr = tmp;
		ft_putendl(SA);
	}
}

void	ft_swap_b(t_push_swap *push_swap)
{
	ssize_t	tmp;

	if (push_swap->size_b > 1)
	{
		tmp = push_swap->stack_b->nbr;
		push_swap->stack_b->nbr = push_swap->stack_b->next->nbr;
		push_swap->stack_b->next->nbr = tmp;
		ft_putendl(SB);
	}
}

void	ft_swap_s(t_push_swap *push_swap)
{
	if (push_swap->size_a > 1)
		ft_swap_a(push_swap);
	if (push_swap->size_b > 1)
		ft_swap_b(push_swap);
}
