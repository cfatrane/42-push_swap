/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 17:52:32 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 11:48:48 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_stack_size(t_stack *stack)
{
	if (stack == NULL)
		return (0);
	return (ft_stack_size(stack->next) + 1);
}

void	ft_size(t_push_swap *env)
{
	env->size_a = ft_stack_size(env->stack_a);
	env->size_b = ft_stack_size(env->stack_b);
}

void	ft_stack_display(t_push_swap *env)
{
	t_stack	*tmpstack_a;
	t_stack	*tmpstack_b;

	tmpstack_a = env->stack_a;
	tmpstack_b = env->stack_b;
	if (env->display == 1)
	{
		ft_printf("\033[31mStack A = \033[0m");
		while (tmpstack_a)
		{
			ft_printf("\033[31m%d \033[0m", tmpstack_a->nbr);
			tmpstack_a = tmpstack_a->next;
		}
		ft_putchar('\n');
		ft_printf("\033[36mStack B = \033[0m");
		while (tmpstack_b)
		{
			ft_printf("\033[36m%d \033[0m", tmpstack_b->nbr);
			tmpstack_b = tmpstack_b->next;
		}
		ft_putchar('\n');
	}
}

int		ft_stack_check(t_push_swap *env)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = env->stack_a;
	nbr_tmp = tmpstack->nbr;
	while (tmpstack->next)
	{
		if (nbr_tmp > tmpstack->next->nbr)
			return (-1);
		tmpstack = tmpstack->next;
		nbr_tmp = tmpstack->nbr;
	}
	if (env->stack_b != NULL)
		return (-1);
	return (0);
}
