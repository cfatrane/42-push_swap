/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_naif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:57:41 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 11:48:45 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_count_a(t_push_swap *env);
int	ft_count_b(t_push_swap *env);

int	algo_naif(t_push_swap *env)
{
	//	while (1)
	while (env->size_a != 1)
	{
		ft_stack_val_bord(env);
//		ft_printf("max a = %d\n", env->max_a);
		size_t i = ft_count_a(env);
//		ft_printf("to do = %d & size = %d\n", i, env->size_a);
		if (env->stack_a->nbr < env->max_a)
		{
			push_b(env);
		}
		else
		{
			if (i <= env->size_a / 2)
				rotate_a(env);
			else
				reverse_rotate_a(env);
		}
	}
//	exit (0);
	ft_stack_val_bord(env);
	ft_printf("--------------------------------------------\n");
	while (env->size_b != 0)
	{
		//	while (ft_stack_done_b(env->stack_a) == 0)
		//		push_a(env);
		ft_stack_val_bord(env);
		//		ft_printf("max b = %d\n", env->max_b);
		size_t i = ft_count_b(env);
		//		ft_printf("to do = %d & size = %d\n", i, env->size_b);
		if (env->stack_b->nbr == env->max_b)
		{
			push_a(env);
		}
		else
		{
			if (i <= env->size_b / 2)
				rotate_b(env);
			else
				reverse_rotate_b(env);
		}
	}
	return (0);
}

int	ft_count_a(t_push_swap *env)
{
	size_t	i;
	t_stack *tmpstack;

	i = 0;
	tmpstack = env->stack_a;
	while (tmpstack->nbr != env->max_a)
	{
		i++;
		tmpstack = tmpstack->next;
	}
	return (i);
}

int	ft_count_b(t_push_swap *env)
{
	size_t	i;
	t_stack *tmpstack;

	i = 0;
	tmpstack = env->stack_b;
	while (tmpstack->nbr != env->max_b)
	{
		i++;
		tmpstack = tmpstack->next;
	}
	return (i);
}
