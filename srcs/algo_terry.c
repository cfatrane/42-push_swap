/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_terry.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 13:57:53 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/09 13:58:07 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_stack_check_decroissant(t_push_swap *env)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = env->stack_b;
	nbr_tmp = tmpstack->nbr;
	while (tmpstack->next)
	{
		if (nbr_tmp < tmpstack->next->nbr)
			return (-1);
		tmpstack = tmpstack->next;
		nbr_tmp = tmpstack->nbr;
	}
	return (0);
}

void	ft_terry(t_push_swap *env)
{
	ssize_t	pivot;
	t_stack		*max/* = ft_memalloc(sizeof(t_stack))*/;
	max = ft_stack_at(env->stack_a, env->size_a - 1);
	pivot = max->nbr;
	int max_bis;
	ssize_t nbrot = 0;
	size_t i;
	while (ft_stack_check(env) != 0)
	{
		ft_stack_display(env);
		while (pivot > env->stack_a->nbr)
		{
			push_b(env);
	//		ft_stack_display(env->stack_a, env->stack_b);
		}
		ft_size(env);
		if (pivot == env->stack_a->nbr)
		{
			while (ft_stack_check_decroissant(env) != 0 && !(i = 0))
			{
		ft_stack_display(env);
				pivot = env->stack_b->nbr;
				max = env->stack_b;
				while (max && i <= env->size_b - nbrot)
				{
					if (max->nbr > pivot)
					{
						max_bis = max->nbr;
						nbrot++;
						rotate_b(env);
						break ;
					}
					max = max->next;
					i++;
		//	ft_stack_display(env->stack_a, env->stack_b);
				}
				if (pivot == env->stack_b->nbr)
				{
					ft_size(env);
					push_a(env);
				}
			}
			while (env->stack_b)
				push_a(env);
			break ;
			//	ft_printf("first = %d\n", env->stack_b->nbr);
			//		while (env->stack_b)
		//	ft_stack_display(env->stack_a, env->stack_b);
		}
		rotate_a(env);
		max = ft_stack_at(env->stack_a, env->size_a - 1);
		pivot = max->nbr;
	//	ft_stack_display(env->stack_a, env->stack_b);
	}
}





