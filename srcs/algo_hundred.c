/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:17:33 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/12 16:17:38 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_hundred(t_push_swap *env)
{
	env->med = 20;
	while (1)
	{
		stack_val_bord(env);
		while (tabdone_a(env) != 0)
		{
			if (env->stack_a->nbr < env->med)
				push_b(env);
			else
				rotate_a(env);
		}
		env->med += 20;
		if (env->med > env->max_a)
			break ;
	}
	ft_card_sort(env);
}
