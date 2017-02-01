/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 14:22:44 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 14:23:21 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_list_delone_front_stack(t_stack **stack)
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

void	ft_list_delone_back_stack(t_stack **stack)
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
