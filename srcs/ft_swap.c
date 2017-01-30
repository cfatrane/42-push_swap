/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:53:55 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/30 16:02:05 by cfatrane         ###   ########.fr       */
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
	t_stack *tmpstack = checker->stack_a;
	while (tmpstack != NULL)
	{
		ft_printf("%d ", tmpstack->nbr);
		tmpstack = tmpstack->next;
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
	t_stack *tmpstack = checker->stack_b;
	while (tmpstack != NULL)
	{
		ft_printf("%d ", tmpstack->nbr);
		tmpstack = tmpstack->next;
	}
	ft_putchar('\n');
	return (0);
}

int	ft_swap_s(t_checker *checker)
{
	ft_swap_a(checker);
	ft_swap_b(checker);
	return (0);
}
