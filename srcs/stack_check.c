/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 11:24:42 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/17 11:26:41 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_stack_check(t_push_swap *env)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	if (env->stack_b != NULL)
		return (-1);
	tmpstack = env->stack_a;
	nbr_tmp = tmpstack->nbr;
	ft_size(env);
	if (env->size_a > 1)
	{
		while (tmpstack->next)
		{
			if (nbr_tmp > tmpstack->next->nbr)
				return (-1);
			tmpstack = tmpstack->next;
			nbr_tmp = tmpstack->nbr;
		}
	}
	return (0);
}

int	stack_descending(t_push_swap *env)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = env->stack_a;
	nbr_tmp = tmpstack->nbr;
	while (tmpstack->next)
	{
		if (nbr_tmp < tmpstack->next->nbr)
			return (-1);
		tmpstack = tmpstack->next;
		nbr_tmp = tmpstack->nbr;
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
