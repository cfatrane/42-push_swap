/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:11:35 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 14:29:31 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t		action(t_push_swap *env)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = env->stack_a;
	while (tmp->nbr != env->min_a)
	{
		tmp = tmp->next;
		i++;
	}
	ft_printf("To do = %d\n", i);
	return (i);
}

void	algo_med(t_push_swap *env)
{
	env->med = env->max_a;
	while (1)
	{
		stack_val_bord(env);
		while (tabdone(env->stack_a, env->med) != 0)
		{
			if (env->stack_a->nbr < env->med)
				push_b(env);
			else
				rotate_a(env);
		}
		if (env->size_a == 3)
		{
			while (stack_crescent(env) != 0)
			{
				if (env->stack_a->nbr > env->stack_a->next->nbr)
					swap_a(env);
				else
					reverse_rotate_a(env);
			}
		}
		//		if (tmp - (size_t)env->med <= (size_t)env->pad)
		//			algo_sup_bis(env);
		//		else
		env->med += 1;
		if (env->med > env->max_a || env->size_a == 1 || stack_crescent(env) == 0)
			break ;
	}
	algo_card_sort(env);

}

void	algo_min(t_push_swap *env)
{
	while (ft_stack_check(env) != 0)
	{
		if (env->stack_a->nbr > env->stack_a->next->nbr)
			swap_a(env);
		else
			reverse_rotate_a(env);
	}
}
