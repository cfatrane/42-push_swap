/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabdone.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:39:00 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 14:44:37 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	tabdone(t_stack *stack, ssize_t nbr)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = stack;
	while (tmpstack)
	{
		nbr_tmp = tmpstack->nbr;
		if (nbr_tmp < nbr)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}

int	stack_crescent(t_push_swap *env)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = env->stack_a;
	nbr_tmp = tmpstack->nbr;
	while (tmpstack->next)
	{
		if (nbr_tmp > tmpstack->next->nbr)
			return (-1);
		tmpstack = tmpstack->next;
		nbr_tmp = tmpstack->nbr;
	}
	return (0);
}
