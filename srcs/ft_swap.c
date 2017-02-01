/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:53:55 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/31 19:00:49 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_swap_a(t_checker *checker)
{
	int		tmp;

	if (checker->size_a > 1)
	{
		tmp = checker->stack_a->nbr;
		checker->stack_a->nbr = checker->stack_a->next->nbr;
		checker->stack_a->next->nbr = tmp;
	}
}

void	ft_swap_b(t_checker *checker)
{
	int		tmp;

	if (checker->size_b > 1)
	{
		tmp = checker->stack_b->nbr;
		checker->stack_b->nbr = checker->stack_b->next->nbr;
		checker->stack_b->next->nbr = tmp;
	}
}

void	ft_swap_s(t_checker *checker)
{
	if (checker->size_a > 1)
		ft_swap_a(checker);
	if (checker->size_b > 1)
		ft_swap_b(checker);
}
