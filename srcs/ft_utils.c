/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 18:44:49 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/31 18:52:12 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

size_t	ft_list_size_stack(t_stack *stack)
{
	if (stack == NULL)
		return (0);
	return (ft_list_size_stack(stack->next) + 1);
}

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

/*
   t_stack	*ft_list_at_stack(t_stack *stack, unsigned int nbr)
   {
   if (stack == NULL)
   return (NULL);
   if (nbr == 1 && stack->next == NULL)
   return (NULL);
   if (nbr == 0)
   return (stack);
   else
   return (ft_list_at_stack(stack->next, nbr - 1));
   }*/
