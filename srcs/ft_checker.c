/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 14:53:11 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/30 16:22:01 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_size(t_checker *checker)
{
	checker->size_a = ft_list_size_stack(checker->stack_a);
	checker->size_b = ft_list_size_stack(checker->stack_b);
}

int	ft_checker(t_checker *checker)
{
	char	*line;

	while (get_next_line(0, &line))
	{
		ft_size(checker);
		if (ft_strcmp(line, SA) == 0)
		{
			ft_swap_a(checker);
			//	get_next_line(0, &->line);
		}
		if (ft_strcmp(line, SB) == 0)
		{
			ft_swap_b(checker);
		}
		if (ft_strcmp(line, SS) == 0)
		{
			ft_swap_s(checker);
		}
		if (ft_strcmp(line, PA) == 0)
		{
			ft_push_a(checker);
		}
		if (ft_strcmp(line, PB) == 0)
		{
			ft_push_b(checker);
		}
		if (ft_strcmp(line, RA) == 0)
		{
			ft_rotate_a(checker);
		}
		if (ft_strcmp(line, RB) == 0)
		{
			ft_rotate_b(checker);
		}
		if (ft_strcmp(line, RR) == 0)
		{
			ft_rotate_r(checker);
		}
		if (ft_strcmp(line, RRA) == 0)
		{
			ft_reverse_rotate_a(checker);
		}
		if (ft_strcmp(line, RRB) == 0)
		{
			ft_reverse_rotate_b(checker);
		}
		if (ft_strcmp(line, RRR) == 0)
		{
			ft_reverse_rotate_r(checker);
		}
		if (ft_strcmp(line, "") == 0)
			exit(0);
	}
	return (0);
}
