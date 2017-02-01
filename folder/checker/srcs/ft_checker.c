/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 18:55:17 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 19:07:23 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_size(t_checker *checker)
{
	checker->size_a = ft_stack_size(checker->stack_a);
	checker->size_b = ft_stack_size(checker->stack_b);
}

int		ft_operation(t_checker *checker, char *line)
{
	if (ft_strcmp(line, SA) == 0)
		ft_swap_a(checker);
	else if (ft_strcmp(line, SB) == 0)
		ft_swap_b(checker);
	else if (ft_strcmp(line, SS) == 0)
		ft_swap_s(checker);
	else if (ft_strcmp(line, PA) == 0)
		ft_push_a(checker);
	else if (ft_strcmp(line, PB) == 0)
		ft_push_b(checker);
	else if (ft_strcmp(line, RA) == 0)
		ft_rotate_a(checker);
	else if (ft_strcmp(line, RB) == 0)
		ft_rotate_b(checker);
	else if (ft_strcmp(line, RR) == 0)
		ft_rotate_r(checker);
	else if (ft_strcmp(line, RRA) == 0)
		ft_reverse_rotate_a(checker);
	else if (ft_strcmp(line, RRB) == 0)
		ft_reverse_rotate_b(checker);
	else if (ft_strcmp(line, RRR) == 0)
		ft_reverse_rotate_r(checker);
	else if (ft_strcmp(line, RRR) == 0)
		ft_reverse_rotate_r(checker);
	else
		return (-1);
	return (0);
}

int		ft_checker(t_checker *checker)
{
	char	*line;

	while (get_next_line(0, &line))
	{
		ft_size(checker);
		if (ft_operation(checker, line) == -1)
		{
			free(line);
			ft_putendl_fd("Error", 2);
			exit(0);
		}
		if (checker->display == 1)
			ft_stack_display(checker->stack_a, checker->stack_b);
		free(line);
	}
	if (ft_stack_check(checker) == 0)
		ft_putendl("OK");
	else
		ft_putendl("KO");
	return (0);
}
