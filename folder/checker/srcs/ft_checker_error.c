/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 16:54:19 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 18:53:31 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_stack_format(char *av)
{
	while (*av)
	{
		if (*av == '-')
			av++;
		if (!ft_isdigit(*av))
			return (-1);
		av++;
	}
	return (0);
}

int	ft_stack_doublon(t_stack *stack)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack_1;
	t_stack	*tmpstack_2;

	tmpstack_1 = stack;
	while (tmpstack_1)
	{
		tmpstack_2 = tmpstack_1->next;
		nbr_tmp = tmpstack_1->nbr;
		while (tmpstack_2)
		{
			if (nbr_tmp == tmpstack_2->nbr)
				return (-1);
			tmpstack_2 = tmpstack_2->next;
		}
		tmpstack_1 = tmpstack_1->next;
	}
	return (0);
}

int	ft_stack_max(ssize_t av)
{
	if (av > INT_MAX || av < INT_MIN)
		return (-1);
	return (0);
}
