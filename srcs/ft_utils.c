/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 18:44:49 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/31 17:05:36 by cfatrane         ###   ########.fr       */
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
	t_stack *to_free;

	if (stack == NULL)
		exit(EXIT_FAILURE);
	if ((*stack) != NULL)
	{
		to_free = *stack;
		*(stack) = (*stack)->next;
		free(to_free);
	}
}

void	ft_list_push_back_stack(t_stack **stack, size_t nbr)
{
	if (*stack)
	{
		if ((*stack)->next)
			ft_list_push_back_stack(&(*stack)->next, nbr);
		else
			(*stack)->next = ft_create_elem_stack(nbr);
	}
	else
		*stack = ft_create_elem_stack(nbr);
}

void	ft_list_push_front_stack(t_stack **stack, size_t nbr)
{
	t_stack	*list;

	list = ft_create_elem_stack(nbr);
	if ((*stack))
		list->next = *stack;
	*stack = list;
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
/*
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
   */
