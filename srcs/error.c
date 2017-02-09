/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:33:59 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/09 13:34:00 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
	if (av < INT_MIN && av > INT_MAX)
		return (-1);
	return (0);
}
