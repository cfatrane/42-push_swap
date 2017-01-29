/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 14:53:11 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/29 18:18:15 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

size_t	ft_list_size_stack(t_stack *begin_list)
{
	if (begin_list == NULL)
		return (0);
	return (ft_list_size_stack(begin_list->next) + 1);
}

int	ft_checker(t_stack *stack_a, t_stack *stack_b)
{
	char	*line;
	while (get_next_line(0, &line))
	{
		if (ft_strcmp(line, SA) == 0 && ft_list_size_stack(stack_a) > 1)
		{
			ft_swap_a(stack_a);
			//	get_next_line(0, &->line);
		}
		if (ft_strcmp(line, SB) == 0 && ft_list_size_stack(stack_b) > 1)
		{
			ft_swap_b(stack_b);
		}
		if (ft_strcmp(line, SS) == 0 && ft_list_size_stack(stack_a) > 1 && ft_list_size_stack(stack_b) > 1)
		{
			ft_swap_s(stack_a, stack_b);
		}
		if (ft_strcmp(line, PA) == 0)
		{
			ft_push_a(stack_a, stack_b);
		}
		if (ft_strcmp(line, PB) == 0)
		{
			ft_push_b(stack_a, stack_b);
		}
		if (ft_strcmp(line, RA) == 0)
		{
			ft_rotate_a(stack_a);
		}
		if (ft_strcmp(line, RB) == 0)
		{
			ft_rotate_b(stack_b);
		}
		if (ft_strcmp(line, RR) == 0)
		{
			ft_rotate_r(stack_a, stack_b);
		}
		if (ft_strcmp(line, RRA) == 0)
		{
			ft_reverse_rotate_a(stack_a);
		}
		if (ft_strcmp(line, RRB) == 0)
		{
			ft_reverse_rotate_b(stack_b);
		}
		if (ft_strcmp(line, RRR) == 0)
		{
			ft_reverse_rotate_r(stack_a, stack_b);
		}
		if (ft_strcmp(line, "") == 0)
			exit(0);
	}
	return (0);
}
