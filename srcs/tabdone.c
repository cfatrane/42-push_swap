/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabdone.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:39:00 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/12 18:05:19 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		tabdone_a(t_push_swap *env)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = env->stack_a;
	while (tmpstack)
	{
		nbr_tmp = tmpstack->nbr;
		if (nbr_tmp < env->med)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}

int		tabdone_b(t_push_swap *env)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = env->stack_b;
	while (tmpstack)
	{
		nbr_tmp = tmpstack->nbr;
		if (nbr_tmp < env->med)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}
