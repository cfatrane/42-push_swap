/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 18:44:49 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 14:37:15 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

size_t	ft_list_size_stack(t_stack *stack)
{
	if (stack == NULL)
		return (0);
	return (ft_list_size_stack(stack->next) + 1);
}

void	ft_list_display(t_stack *stack)
{
	t_stack	*tmpstack;

	tmpstack = stack;
	while (tmpstack)
	{
		ft_printf("\033[31m%d \033[0m", tmpstack->nbr);
		tmpstack = tmpstack->next;
	}
	ft_putchar('\n');
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
