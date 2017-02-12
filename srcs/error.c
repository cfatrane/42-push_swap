/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:33:59 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/12 17:48:52 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_stack_format(char *av)
{
	while (*av)
	{
		if (*av == '-' || *av == '+')
			av++;
		if (!ft_isdigit(*av))
			return (-1);
		av++;
	}
	return (0);
}

int	ft_stack_max(long long int av)
{
	if (av < INT_MIN || av > INT_MAX)
		return (-1);
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

int	ft_stack_max_uns(unsigned long long av)
{
	if (av > ULONG_MAX)
		return (-1);
	return (0);
}

int	ft_error(char *av)
{
	if (ft_stack_format(av) == -1 || ft_stack_max(ft_atoll(av)) == -1 ||
			ft_stack_max_uns(ft_atou(av)) == -1)
		return (-1);
	return (0);
}
