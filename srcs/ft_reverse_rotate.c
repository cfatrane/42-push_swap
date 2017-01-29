/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 15:21:31 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/29 18:24:46 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	ft_reverse_rotate_a(t_stack *stack_a)
{
	ft_putendl(RA);
	return (0);
}

int	ft_reverse_rotate_b(t_stack *stack_b)
{
	ft_putendl(RB);
	return (0);
}

int	ft_reverse_rotate_r(t_stack *stack_a, t_stack *stack_b)
{
	ft_reverse_rotate_a(stack_a);
	ft_reverse_rotate_b(stack_b);
	ft_putendl(RR);
	return (0);
}
