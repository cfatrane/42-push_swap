/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 16:54:19 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/29 18:40:17 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_stack_format(char *av)
{
	while (*av)
	{
		if (!ft_isdigit(*av))
			return (-1);
		av++;
	}
	return (0);
}
/*
int	ft_stack_doublon(t_tmp *stack_a)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (stack->argum[i])
	{
		j = i + 1;
		tmp = stack->argum[i];
		while (stack->argum[j])
		{
			if (ft_strcmp(tmp, stack->argum[j]) == 0)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}
*/
int	ft_stack_max(size_t av)
{
	if (av > INT_MAX)
		return (-1);
	return (0);
}
