/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 20:00:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/03 22:54:10 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_size(t_push_swap *push_swap)
{
	push_swap->size_a = ft_stack_size(push_swap->stack_a);
	push_swap->size_b = ft_stack_size(push_swap->stack_b);
	push_swap->pivot = push_swap->size_a / 2;
}

int		ft_operation(t_push_swap *push_swap, char *line)
{
	if (ft_strcmp(line, SA) == 0)
		ft_swap_a(push_swap);
	else if (ft_strcmp(line, SB) == 0)
		ft_swap_b(push_swap);
	else if (ft_strcmp(line, SS) == 0)
		ft_swap_s(push_swap);
	else if (ft_strcmp(line, PA) == 0)
		ft_push_a(push_swap);
	else if (ft_strcmp(line, PB) == 0)
		ft_push_b(push_swap);
	else if (ft_strcmp(line, RA) == 0)
		ft_rotate_a(push_swap);
	else if (ft_strcmp(line, RB) == 0)
		ft_rotate_b(push_swap);
	else if (ft_strcmp(line, RR) == 0)
		ft_rotate_r(push_swap);
	else if (ft_strcmp(line, RRA) == 0)
		ft_reverse_rotate_a(push_swap);
	else if (ft_strcmp(line, RRB) == 0)
		ft_reverse_rotate_b(push_swap);
	else if (ft_strcmp(line, RRR) == 0)
		ft_reverse_rotate_r(push_swap);
	else if (ft_strcmp(line, RRR) == 0)
		ft_reverse_rotate_r(push_swap);
	else
		return (-1);
	return (0);
}

int		ft_push_swap(t_push_swap *push_swap)
{
//	ft_printf("DEPART = \n");
	ft_size(push_swap);
//	ft_stack_display(push_swap->stack_a, push_swap->stack_b);
//	ft_naif(push_swap);
//	ft_quicksort(push_swap);
//	ft_mergesort(push_swap);
//	ft_terry(push_swap);
//	if (push_swap->size_a < 10)
//		ft_insertionsort(push_swap);
//	ft_printf("SUITE = \n");
//	ft_stack_val_bord(push_swap);
//	ft_printf("MAX = %d\tMIN =%d\n", push_swap->max, push_swap->min);
/*	while (ft_stack_check(push_swap) != 0)
	{
		ft_size(push_swap);
		ft_naif(push_swap);
		ft_stack_display(push_swap->stack_a, push_swap->stack_b);
	//	if (push_swap->stack_a->nbr > push_swap->stack_a->next->nbr)
	//		ft_swap_a(push_swap);
	}*/
/*	char	*line;

	while (get_next_line(0, &line))
	{
		ft_size(push_swap);
		if (ft_operation(push_swap, line) == -1)
		{
			free(line);
			ft_putendl_fd("Error", 2);
			exit(0);
		}
		if (push_swap->display == 1)
			ft_stack_display(push_swap->stack_a, push_swap->stack_b);
		free(line);
	}*/
//	ft_stack_display(push_swap->stack_a, push_swap->stack_b);
	if (ft_stack_check(push_swap) == 0)
		ft_putendl("OK");
	else
		ft_putendl("KO");
	return (0);
}
