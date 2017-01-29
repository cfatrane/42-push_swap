/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:53:55 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/29 18:55:29 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_swap_a(t_stack *stack_a)
{
	t_list	*tmp;

	while (stack_a != NULL)
	{
		ft_printf("Content apres sa = %d ", stack_a->nbr);
		stack_a = stack_a->next;
	}
	ft_putendl("Actiion = SA");
	return (0);
}

int	ft_swap_b(t_stack *stack_b)
{
	return (0);
}

int	ft_swap_s(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
	//	ft_putendl(SS);
	return (0);
}
