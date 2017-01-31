/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:54:29 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/31 17:05:46 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_push_a(t_checker *checker)
{
	if (checker->size_b > 0)
	{
		ft_list_push_front_stack(&checker->stack_a, checker->stack_b->nbr);
		ft_list_delone_front_stack_b(checker);
	}
	t_stack *tmpstack_a = checker->stack_a;
	t_stack *tmpstack_b = checker->stack_b;
	ft_printf("Apres push a stack_a =\n");
	while (tmpstack_a != NULL)
	{
		ft_printf("%d ", tmpstack_a->nbr);
		tmpstack_a = tmpstack_a->next;
	}
	ft_putchar('\n');
	ft_printf("Apres push_a stack_b =\n");
	while (tmpstack_b != NULL)
	{
		ft_printf("%d ", tmpstack_b->nbr);
		tmpstack_b = tmpstack_b->next;
	}
	ft_putchar('\n');
	return (0);
}

int	ft_push_b(t_checker *checker)
{
	if (checker->size_a > 0)
	{
		ft_list_push_front_stack(&checker->stack_b, checker->stack_a->nbr);
		ft_list_delone_front_stack_a(checker);
	}
	t_stack *tmpstack_a = checker->stack_a;
	t_stack *tmpstack_b = checker->stack_b;
	ft_printf("Apres push b stack_a =\n");
	while (tmpstack_a != NULL)
	{
		ft_printf("%d ", tmpstack_a->nbr);
		tmpstack_a = tmpstack_a->next;
	}
	ft_putchar('\n');
	ft_printf("Apres push_b stack_b =\n");
	while (tmpstack_b != NULL)
	{
		ft_printf("%d ", tmpstack_b->nbr);
		tmpstack_b = tmpstack_b->next;
	}
	ft_putchar('\n');
	return (0);
}
