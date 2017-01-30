/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:54:11 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/30 16:33:57 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_rotate_a(t_checker *checker)
{
	t_stack *tmpstack = checker->stack_a;
	while (tmpstack != NULL)
	{
		ft_printf("%d ", tmpstack->nbr);
		tmpstack = tmpstack->next;
	}
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
