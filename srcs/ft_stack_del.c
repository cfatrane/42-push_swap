/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 15:18:04 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 10:19:50 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_stack_delone_front(t_stack **stack)
{
	t_stack	*to_free;

	if (stack == NULL)
		exit(EXIT_FAILURE);
	if ((*stack) != NULL)
	{
		to_free = *stack;
		*(stack) = (*stack)->next;
		free(to_free);
	}
}

void	ft_stack_delone_back(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*to_free;

	to_free = *stack;
	tmp = NULL;
	while (to_free->next)
	{
		tmp = to_free;
		to_free = to_free->next;
	}
	if (tmp != NULL)
		tmp->next = NULL;
	free(to_free);
}

void	ft_stack_clear(t_stack **begin_list)
{
	if (*begin_list != NULL)
	{
		ft_stack_clear(&((*begin_list)->next));
		free(*begin_list);
		*begin_list = NULL;
	}
}
