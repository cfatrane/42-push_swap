/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jdesmare.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 16:39:19 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/12 15:25:30 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_find_closest_upper(t_push_swap *env, int nb)
{
	int	closest;
	int	current;
	size_t	i;
	t_stack *tmp = env->stack_a;

	//	current = ft_ismax(env->stack_a, env->size_a);
	current = env->max_a;
	closest = (current > nb) ? current : -1000000;
	i = 0;
	while (i < env->size_a)
	{
		if (tmp->nbr > nb && tmp->nbr < current)
		{
			current = tmp->nbr;
			closest = current;
		}
		tmp = tmp->next;
		i++;
	}
	return (closest);
}


size_t	ft_find_num_pos(t_stack *tab, ssize_t num, size_t size)
{
	size_t	i;
	t_stack *tmp = tab;

	i = 0;
	while (tmp->nbr != num && i <= size)
	{
		i++;
		tmp = tmp->next;
	}
	if (i < size)
		return (i);
	else
		return (-1);
}

void	ft_card_sort(t_push_swap *env)
{
	ssize_t	closest;
	size_t	closest_pos;
	size_t pa = 0;

	while (env->size_b > 0)
	{
		closest = ft_find_closest_upper(env, env->stack_b->nbr);
		if (closest == -1000000)
		{
			ft_stack_val_bord(env);
			closest = env->min_a;
		}
		closest_pos = ft_find_num_pos(env->stack_a, closest, env->size_a);
		if (closest_pos > (env->size_a - 1) / 2)
			while (env->stack_a->nbr != closest)
				reverse_rotate_a(env);
		else
			while (env->stack_a->nbr != closest)
				rotate_a(env);
		push_a(env);
		pa++;
	}
	while (ft_stack_check(env) != 0)
	{
		if (ft_find_num_pos(env->stack_a, env->min_a,
					env->size_a) < env->size_a / 2)
			rotate_a(env);
		else
			reverse_rotate_a(env);
	}
}
