/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 15:17:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 11:39:55 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

t_stack	*ft_create_elem_stack(ssize_t nbr)
{
	t_stack	*stack;

	if (!(stack = (t_stack*)malloc(sizeof(*stack))))
		return (NULL);
	stack->nbr = nbr;
	stack->next = NULL;
	return (stack);
}

t_stack	*ft_stack_push_params(int ac, char **av, t_push_swap *env)
{
	ssize_t		i;
	t_stack		*stack;

	stack = NULL;
	i = 1;
	if (ac)
	{
		if (ft_strcmp(av[i], "-v") == 0)
		{
			env->display = 1;
			i++;
		}
		while (i < ac)
		{
			if (ft_error(av[i]) == -1)
				return (NULL);
			ft_stack_push_back(&stack, ft_atoll(av[i]));
			i++;
		}
	}
	if (ft_stack_doublon(stack) == -1)
		return (NULL);
	return (stack);
}
