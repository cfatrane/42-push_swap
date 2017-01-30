/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 18:44:49 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/30 16:22:23 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

size_t	ft_list_size_stack(t_stack *stack)
{
	if (stack == NULL)
		return (0);
	return (ft_list_size_stack(stack->next) + 1);
}

void	ft_list_delone_front_stack_a(t_checker *checker)
{
	t_stack *to_free;

	if (checker->stack_a == NULL)
		exit(EXIT_FAILURE);
	if (checker->stack_a != NULL)
	{
		to_free = checker->stack_a;
		checker->stack_a = checker->stack_a->next;
		free(to_free);
	}
}

void	ft_list_delone_front_stack_b(t_checker *checker)
{
	t_stack *to_free;

	if (checker->stack_b == NULL)
		exit(EXIT_FAILURE);
	if (checker->stack_b != NULL)
	{
		to_free = checker->stack_b;
		checker->stack_b = checker->stack_b->next;
		free(to_free);
	}
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
