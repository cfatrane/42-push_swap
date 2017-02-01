/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:54:11 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 14:34:34 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_rotate_a(t_checker *checker)
{
	if (checker->size_a > 1)
	{
		ft_list_push_back_stack(&checker->stack_a, checker->stack_a->nbr);
		ft_list_delone_front_stack(&checker->stack_a);
	}
}

void	ft_rotate_b(t_checker *checker)
{
	if (checker->size_a > 1)
	{
		ft_list_push_back_stack(&checker->stack_b, checker->stack_b->nbr);
		ft_list_delone_front_stack(&checker->stack_b);
	}
}

void	ft_rotate_r(t_checker *checker)
{
	ft_rotate_a(checker);
	ft_rotate_b(checker);
}
