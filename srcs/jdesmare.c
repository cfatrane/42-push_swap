/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jdesmare.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 16:39:19 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 16:52:48 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_find_closest_upper(t_push_swap *piles, int nb)
{
	int	closest;
	int	current;
	int	i;
	t_stack *tmp = piles->stack_a;

	//	current = ft_ismax(piles->stack_a, piles->size_a);
	current = piles->max_a;
	closest = (current > nb) ? current : -1000000;
	i = 0;
	while (i < piles->size_a)
	{
		if (tmp->nbr > nb && tmp->nbr < current)
		{
			current = tmp->nbr;
			closest = current;
		}
		tmp = tmp->next;
		i++;
	}
	return (closest);
}


int	ft_find_num_pos(t_stack *tab, int num, int size)
{
	int	i;
	t_stack *tmp = tab;

	i = 0;
	while (tmp->nbr != num && i <= size)
	{
		i++;
		tmp = tmp->next;
	}
	if (i < size)
		return (i);
	else
		return (-1);
}

void	ft_card_sort(t_push_swap *piles)
{
	int	closest;
	int	closest_pos;

	while (piles->size_b > 0)
	{
		closest = ft_find_closest_upper(piles, piles->stack_b->nbr);
		if (closest == -1000000)
		{
			ft_stack_val_bord(piles);
			//	closest = ft_ismin(piles->a, piles->size_a);
			closest = piles->min_a;
		}
		closest_pos = ft_find_num_pos(piles->stack_a, closest, piles->size_a);
		if (closest_pos > (piles->size_a - 1) / 2)
			while (piles->stack_a->nbr != closest)
				reverse_rotate_a(piles);
		else
			while (piles->stack_a->nbr != closest)
				rotate_a(piles);
		push_a(piles);
	}
//	while (ft_is_finished(piles) == 0)
	while (ft_stack_check(piles) != 0)
	{
		if (ft_find_num_pos(piles->stack_a, piles->min_a/*ft_ismin(piles->a, piles->size_a)*/,
					piles->size_a) < piles->size_a / 2)
			rotate_a(piles);
		else
			reverse_rotate_a(piles);
	}
}
