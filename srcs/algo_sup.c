/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:10:38 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 10:00:09 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_sup(t_push_swap *env)
{
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
		env->med += env->pad;
		if (env->med > env->max_a)
			break ;
	}
	algo_card_sort(env);
}
