/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:54:11 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/30 19:11:03 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_list_reverse_stack(t_stack **begin_list)
{
	t_stack	 *tmp_list;
	t_stack *tmp;

	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	tmp_list = *begin_list;
	tmp = tmp_list->next;
	ft_list_reverse_stack(&tmp);
	tmp_list->next->next = tmp_list;
	tmp_list->next = NULL;
	*begin_list = tmp;
}

int	ft_rotate_a(t_checker *checker)
{
/*	t_stack	*last;
	t_stack	*second;

	last = checker->stack_a->prev;
	second = checker->stack_a->next;
	if (checker->size_a > 1)
	{
		last->next = checker->stack_a;
		last->next->next = NULL;
		checker->stack_a = second;
	}*/
	ft_list_reverse_stack(&checker->stack_a);
	t_stack *tmpstack = checker->stack_a;
		while (tmpstack != NULL)
		{
		ft_printf("%d ", tmpstack->nbr);
		tmpstack = tmpstack->next;
		}
		ft_putchar('\n');
			return (0);
}

int	ft_rotate_b(t_checker *checker)
{
	t_stack *tmpstack = checker->stack_b;
	while (tmpstack != NULL)
	{
		ft_printf("%d ", tmpstack->nbr);
		tmpstack = tmpstack->next;
	}
	ft_putchar('\n');
	return (0);
}

int	ft_rotate_r(t_checker *checker)
{
	ft_rotate_a(checker);
	ft_rotate_b(checker);
	return (0);
}
