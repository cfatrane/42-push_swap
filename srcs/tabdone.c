/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabdone.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:39:00 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/12 15:51:22 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		tabdone_a(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_a;
	while (tmpstack/*->next*/)
	{
		nbr_tmp = tmpstack->nbr;
		if (nbr_tmp < push_swap->med)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}

int		tabdone_b(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_b;
	while (tmpstack/*->next*/)
	{
		nbr_tmp = tmpstack->nbr;
		if (nbr_tmp < push_swap->med)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}
