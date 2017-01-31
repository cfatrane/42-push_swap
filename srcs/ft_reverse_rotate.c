/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 15:21:31 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/31 16:49:30 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_reverse_rotate_a(t_checker *checker)
{
	t_stack *tmpstack = checker->stack_a;
	while (tmpstack->next != NULL)
		tmpstack = tmpstack->next;
	ft_list_push_front_stack(&checker->stack_a, tmpstack->nbr);
	tmpstack = checker->stack_a;
	while (tmpstack->next != NULL)
		tmpstack = tmpstack->next;
	t_stack *tmpstack_a = checker->stack_a;
	t_stack *tmpstack_b = checker->stack_b;
	ft_printf("Apres rotate a stack_a =\n");
	while (tmpstack_a != NULL)
	{
		ft_printf("%d ", tmpstack_a->nbr);
		tmpstack_a = tmpstack_a->next;
	}
	ft_putchar('\n');
	ft_printf("Apres rotate a stack_b =\n");
	while (tmpstack_b != NULL)
	{
		ft_printf("%d ", tmpstack_b->nbr);
		tmpstack_b = tmpstack_b->next;
	}
	ft_putchar('\n');
	return (0);
}

int	ft_reverse_rotate_b(t_checker *checker)
{
	t_stack *tmpstack = checker->stack_b;
	while (tmpstack->next != NULL)
		tmpstack = tmpstack->next;
	ft_list_push_front_stack(&checker->stack_b, tmpstack->nbr);
	t_stack *tmpstack_a = checker->stack_a;
	t_stack *tmpstack_b = checker->stack_b;
	ft_printf("Apres rotate a stack_a =\n");
	while (tmpstack_a != NULL)
	{
		ft_printf("%d ", tmpstack_a->nbr);
		tmpstack_a = tmpstack_a->next;
	}
	ft_putchar('\n');
	ft_printf("Apres rotate a stack_b =\n");
	while (tmpstack_b != NULL)
	{
		ft_printf("%d ", tmpstack_b->nbr);
		tmpstack_b = tmpstack_b->next;
	}
	ft_putchar('\n');
	return (0);
}

int	ft_reverse_rotate_r(t_checker *checker)
{
	ft_reverse_rotate_a(checker);
	ft_reverse_rotate_b(checker);
	return (0);
}
