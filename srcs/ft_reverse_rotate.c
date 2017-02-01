/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 15:21:31 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/01 14:35:27 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_reverse_rotate_a(t_checker *checker)
{
	t_stack	*tmpstack;

	if (checker->size_a > 1)
	{
		tmpstack = checker->stack_a;
		while (tmpstack->next != NULL)
			tmpstack = tmpstack->next;
		ft_list_push_front_stack(&checker->stack_a, tmpstack->nbr);
		ft_list_delone_back_stack(&checker->stack_a);
	}
}

void	ft_reverse_rotate_b(t_checker *checker)
{
	t_stack	*tmpstack;

	tmpstack = checker->stack_b;
	while (tmpstack->next != NULL)
		tmpstack = tmpstack->next;
	ft_list_push_front_stack(&checker->stack_b, tmpstack->nbr);
	ft_list_delone_back_stack(&checker->stack_b);
}

void	ft_reverse_rotate_r(t_checker *checker)
{
	ft_reverse_rotate_a(checker);
	ft_reverse_rotate_b(checker);
}
