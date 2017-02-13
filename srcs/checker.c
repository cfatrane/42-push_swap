/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:38:08 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 11:04:15 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		operation(t_push_swap *env, char *line)
{
	if (ft_strcmp(line, SA) == 0)
		swap_a(env);
	else if (ft_strcmp(line, SB) == 0)
		swap_b(env);
	else if (ft_strcmp(line, SS) == 0)
		swap_s(env);
	else if (ft_strcmp(line, PA) == 0)
		push_a(env);
	else if (ft_strcmp(line, PB) == 0)
		push_b(env);
	else if (ft_strcmp(line, RA) == 0)
		rotate_a(env);
	else if (ft_strcmp(line, RB) == 0)
		rotate_b(env);
	else if (ft_strcmp(line, RR) == 0)
		rotate_r(env);
	else if (ft_strcmp(line, RRA) == 0)
		reverse_rotate_a(env);
	else if (ft_strcmp(line, RRB) == 0)
		reverse_rotate_b(env);
	else if (ft_strcmp(line, RRR) == 0)
		reverse_rotate_r(env);
	else
		return (-1);
	return (0);
}

int		checker(t_push_swap *env)
{
	char	*line;

	while ((get_next_line(0, &line) > 0))
	{
		if (operation(env, line) == -1)
		{
			free(line);
			ft_putendl_fd("Error", 2);
			return (0);
		}
		free(line);
	}
	if (ft_stack_check(env) == 0)
		ft_putendl("OK");
	else
		ft_putendl("KO");
	return (0);
}
