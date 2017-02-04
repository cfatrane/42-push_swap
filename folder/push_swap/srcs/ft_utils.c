/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 18:44:49 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/04 19:45:56 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_stack_size(t_stack *stack)
{
	if (stack == NULL)
		return (0);
	return (ft_stack_size(stack->next) + 1);
}

void	ft_stack_display(t_push_swap *push_swap)
{
	t_stack	*tmpstack_a;
	t_stack	*tmpstack_b;

	tmpstack_a = push_swap->stack_a;
	tmpstack_b = push_swap->stack_b;
	if (push_swap->display == 1)
	{
		ft_printf("\033[31mStack A = \033[0m");
		while (tmpstack_a)
		{
			ft_printf("\033[31m%d \033[0m", tmpstack_a->nbr);
			tmpstack_a = tmpstack_a->next;
		}
		ft_putchar('\n');
		ft_printf("\033[36mStack B = \033[0m");
		while (tmpstack_b)
		{
			ft_printf("\033[36m%d \033[0m", tmpstack_b->nbr);
			tmpstack_b = tmpstack_b->next;
		}
		ft_putchar('\n');
	}
}

int		ft_stack_check(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_a;
	nbr_tmp = tmpstack->nbr;
	while (tmpstack->next)
	{
		if (nbr_tmp > tmpstack->next->nbr)
			return (-1);
		tmpstack = tmpstack->next;
		nbr_tmp = tmpstack->nbr;
	}
	if (push_swap->stack_b != NULL)
		return (-1);
	return (0);
}

t_stack	*ft_stack_at(t_stack *begin_list, size_t nbr)
{
	if (begin_list == NULL)
		return (NULL);
	if (nbr == 1 && begin_list->next == NULL)
		return (NULL);
	if (nbr == 0)
		return (begin_list);
	else
		return (ft_stack_at(begin_list->next, nbr - 1));
}

ssize_t	ft_stack_val_at(t_stack *begin_list, size_t nbr)
{
	if (begin_list == NULL)
		return (-1);
	if (nbr == 1 && begin_list->next == NULL)
		return (-1);
	if (nbr == 0)
		return (begin_list->nbr);
	else
		return (ft_stack_val_at(begin_list->next, nbr - 1));
}

void	ft_stack_val_bord(t_push_swap *push_swap)
{
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_a;
	push_swap->max = push_swap->stack_a->nbr;
	while (tmpstack)
	{
		if (push_swap->max < tmpstack->nbr)
			push_swap->max = tmpstack->nbr;
		tmpstack = tmpstack->next;
	}
	tmpstack = push_swap->stack_a;
	push_swap->min = push_swap->stack_a->nbr;
	while (tmpstack)
	{
		if (push_swap->min > tmpstack->nbr)
			push_swap->min = tmpstack->nbr;
		tmpstack = tmpstack->next;
	}
}

void	ft_stack_valmin()
{
}
