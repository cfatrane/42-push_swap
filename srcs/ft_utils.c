/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 18:44:49 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 15:34:59 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

size_t	ft_stack_size(t_stack *stack)
{
	if (stack == NULL)
		return (0);
	return (ft_stack_size(stack->next) + 1);
}

void	ft_stack_display(t_stack *stack)
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

int		ft_stack_check(t_checker *checker)
{
	size_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = checker->stack_a;
	nbr_tmp = tmpstack->nbr;
	while (tmpstack->next)
	{
		if (nbr_tmp > tmpstack->next->nbr)
			return (-1);
		tmpstack = tmpstack->next;
		nbr_tmp = tmpstack->nbr;
	}
	if (checker->stack_b != NULL)
		return (-1);
	return (0);
}
