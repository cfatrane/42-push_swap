/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_naif.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 20:16:23 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/06 09:31:27 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_count_a(t_push_swap *push_swap);
int	ft_count_b(t_push_swap *push_swap);

int	ft_naif(t_push_swap *push_swap)
{
	//	while (1)
	while (push_swap->size_a != 1)
	{
		ft_stack_val_bord(push_swap);
//		ft_printf("max a = %d\n", push_swap->max_a);
		size_t i = ft_count_a(push_swap);
//		ft_printf("to do = %d & size = %d\n", i, push_swap->size_a);
		if (push_swap->stack_a->nbr < push_swap->max_a)
		{
			ft_push_b(push_swap);
		}
		else
		{
			if (i <= push_swap->size_a / 2)
				ft_rotate_a(push_swap);
			else
				ft_reverse_rotate_a(push_swap);
		}
		ft_stack_display(push_swap);
	}
	ft_stack_val_bord(push_swap);
//	ft_printf("--------------------------------------------\n");
	while (push_swap->size_b != 0)
	{
		//	while (ft_stack_done_b(push_swap->stack_a) == 0)
		//		ft_push_a(push_swap);
		ft_stack_val_bord(push_swap);
		//		ft_printf("max b = %d\n", push_swap->max_b);
		size_t i = ft_count_b(push_swap);
		//		ft_printf("to do = %d & size = %d\n", i, push_swap->size_b);
		if (push_swap->stack_b->nbr == push_swap->max_b)
		{
			ft_push_a(push_swap);
		}
		else
		{
			if (i <= push_swap->size_b / 2)
				ft_rotate_b(push_swap);
			else
				ft_reverse_rotate_b(push_swap);
		}
		ft_stack_display(push_swap);
	}
	return (0);
}

int	ft_count_a(t_push_swap *push_swap)
{
	size_t	i;
	t_stack *tmpstack;

	i = 0;
	tmpstack = push_swap->stack_a;
	while (tmpstack->nbr != push_swap->max_a)
	{
		i++;
		tmpstack = tmpstack->next;
	}
	return (i);
}

int	ft_count_b(t_push_swap *push_swap)
{
	size_t	i;
	t_stack *tmpstack;

	i = 0;
	tmpstack = push_swap->stack_b;
	while (tmpstack->nbr != push_swap->max_b)
	{
		i++;
		tmpstack = tmpstack->next;
	}
	return (i);
}
