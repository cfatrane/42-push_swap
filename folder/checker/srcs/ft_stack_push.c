/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 15:17:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 18:51:31 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_stack_push_front(t_stack **stack, ssize_t nbr)
{
	t_stack	*list;

	list = ft_create_elem_stack(nbr);
	if ((*stack))
		list->next = *stack;
	*stack = list;
}

void	ft_stack_push_back(t_stack **stack, ssize_t nbr)
{
	if (*stack)
	{
		if ((*stack)->next)
			ft_stack_push_back(&(*stack)->next, nbr);
		else
			(*stack)->next = ft_create_elem_stack(nbr);
	}
	else
		*stack = ft_create_elem_stack(nbr);
}
