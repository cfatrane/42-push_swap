/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 14:53:11 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 17:08:51 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_checker(t_checker *checker)
{
	ft_checker_convert(checker);
	while (get_next_line(0, &checker->line))
	{
		if (ft_strcmp(checker->line, SA) == 0 && checker->size_a > 1)
		{
			ft_swap_a(checker);
			//	get_next_line(0, &checker->line);
		}
		if (ft_strcmp(checker->line, SB) == 0 && checker->size_b > 1)
		{
			ft_swap_b(checker);
		}
		if (ft_strcmp(checker->line, SS) == 0 && checker->size_a > 1 && checker->size_b > 1)
		{
			ft_swap_s(checker);
		}
		if (ft_strcmp(checker->line, PA) == 0)
		{
			ft_push_a(checker);
		}
		if (ft_strcmp(checker->line, PB) == 0)
		{
			ft_push_b(checker);
		}
		if (ft_strcmp(checker->line, RA) == 0)
		{
			ft_rotate_a(checker);
		}
		if (ft_strcmp(checker->line, RB) == 0)
		{
			ft_rotate_b(checker);
		}
		if (ft_strcmp(checker->line, RR) == 0)
		{
			ft_rotate_r(checker);
		}
		if (ft_strcmp(checker->line, RRA) == 0)
		{
			ft_reverse_rotate_a(checker);
		}
		if (ft_strcmp(checker->line, RRB) == 0)
		{
			ft_reverse_rotate_b(checker);
		}
		if (ft_strcmp(checker->line, RRR) == 0)
		{
			ft_reverse_rotate_r(checker);
		}
		if (ft_strcmp(checker->line, "") == 0)
			exit(0);
	}
	return (0);
}
