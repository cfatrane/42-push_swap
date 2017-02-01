/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:54:29 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 15:14:32 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_push_a(t_checker *checker)
{
	if (checker->size_b > 0)
	{
		ft_stack_push_front(&checker->stack_a, checker->stack_b->nbr);
		ft_stack_delone_front(&checker->stack_b);
	}
}

void	ft_push_b(t_checker *checker)
{
	if (checker->size_a > 0)
	{
		ft_stack_push_front(&checker->stack_b, checker->stack_a->nbr);
		ft_stack_delone_front(&checker->stack_a);
	}
}
