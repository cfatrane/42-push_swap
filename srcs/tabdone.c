/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabdone.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:39:00 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/17 11:25:46 by cfatrane         ###   ########.fr       */
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

int	tabundone(t_stack *stack, ssize_t nbr)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = stack;
	while (tmpstack)
	{
		nbr_tmp = tmpstack->nbr;
		if (nbr_tmp > nbr)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}

int	mediane(t_push_swap *env, ssize_t med)
{
	int	dif;

	dif = (env->max_a - med) / 2;
	med = dif + med;
	return (med);
}

int	unmediane(t_push_swap *env, ssize_t med)
{
	int	dif;

	dif = (med - env->min_b) / 2;
	med = med - dif;
	return (med);
}
