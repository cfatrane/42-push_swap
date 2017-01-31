/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:53:55 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/31 13:30:44 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_swap_a(t_checker *checker)
{
	int		tmp;

	if (checker->size_a > 1)
	{
		tmp = checker->stack_a->nbr;
		checker->stack_a->nbr = checker->stack_a->next->nbr;
		checker->stack_a->next->nbr = tmp;
	}
	t_stack *tmpstack_a = checker->stack_a;
	t_stack *tmpstack_b = checker->stack_b;
	ft_printf("Apres swap a stack_a =\n");
	while (tmpstack_a != NULL)
	{
		ft_printf("%d ", tmpstack_a->nbr);
		tmpstack_a = tmpstack_a->next;
	}
	ft_putchar('\n');
	ft_printf("Apres swap a stack_b =\n");
	while (tmpstack_b != NULL)
	{
		ft_printf("%d ", tmpstack_b->nbr);
		tmpstack_b = tmpstack_b->next;
	}
	ft_putchar('\n');
	return (0);
}

int	ft_swap_b(t_checker *checker)
{
	int		tmp;

	if (checker->size_b > 1)
	{
		tmp = checker->stack_b->nbr;
		checker->stack_b->nbr = checker->stack_b->next->nbr;
		checker->stack_b->next->nbr = tmp;
	}
	t_stack *tmpstack_a = checker->stack_a;
	t_stack *tmpstack_b = checker->stack_b;
	ft_printf("Apres swap b stack_a =\n");
	while (tmpstack_a != NULL)
	{
		ft_printf("%d ", tmpstack_a->nbr);
		tmpstack_a = tmpstack_a->next;
	}
	ft_putchar('\n');
	ft_printf("Apres swap b stack_b =\n");
	while (tmpstack_b != NULL)
	{
		ft_printf("%d ", tmpstack_b->nbr);
		tmpstack_b = tmpstack_b->next;
	}
	ft_putchar('\n');
	return (0);
}

int	ft_swap_s(t_checker *checker)
{
	if (checker->size_a > 1)
		ft_swap_a(checker);
	if (checker->size_b > 1)
		ft_swap_b(checker);
	return (0);
}
