/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_med.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 17:00:13 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/13 17:00:23 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	define_med(t_push_swap *env, int *tab)
{
	if (env->size_a >= 50 && env->size_a <= 250)
	{
		if (ft_iseven(env->size_a) == -1)
		{
			env->med = tab[env->size_a / 5];
			env->pad = env->size_a / 5;
		}
		else
		{
			env->med = tab[env->size_a / 5 - 1];
			env->pad = env->size_a / 5;
		}
	}
	else if (env->size_a > 250 && env->size_a < 500)
	{
		env->med = tab[env->size_a / 2];
		env->pad = env->size_a / 2;
	}
	else if (env->size_a >= 500 && env->size_a <= 10000)
	{
		env->med = tab[env->size_a / 10];
		env->pad = env->size_a / 10;
	}
}
