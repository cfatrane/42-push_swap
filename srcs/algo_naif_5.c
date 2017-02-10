/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_naif_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 20:04:02 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 20:16:44 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"
int		tabdone_a(t_push_swap *push_swap);
int		tabdone_b(t_push_swap *push_swap);
int		stack_check(t_push_swap *env);
void	ft_card_sort(t_push_swap *piles);

void	algo_naif_5(t_push_swap *env)
{
	size_t i = 0;
	size_t pb = 0;
	size_t tmp = env->size_a / 2;
	size_t tmpmed = env->med;
	env->med = ft_stack_val_at(env->stack_a, env->size_a - 1);
	int ret = 1;
	while (1)
	{
		ft_stack_val_bord(env);
		ft_printf("MEDIANE = %d et MAX A = %d\n", env->med, env->max_a);
		while (tabdone_a(env) != 0)
		{
			//			if (stack_check(env) == 0)
			//				exit (0);
			if (env->stack_a->nbr < env->med)
			{
				push_b(env);
				if (env->size_b > 1)
					if (env->stack_b->nbr < env->stack_b->next->nbr)
						swap_b(env);
				pb++;
			}
			else
				rotate_a(env);
		}
		env->med = ft_stack_val_at(env->stack_b, env->size_b - 1);
		ft_printf("MEDIANE = %d et MAX A = %d\n", env->med, env->max_a);
		while (tabdone_b(env) != 0)
		{
			if (env->stack_b->nbr < env->med)
			{
				push_a(env);
				if (env->size_a > 1)
					if (env->stack_a->nbr < env->stack_a->next->nbr)
						swap_a(env);
				pb++;
			}
			else
				rotate_b(env);
		}
	//	exit (0);
		//	env->med = (env->max_a - env->med) + (env->med / 2);
	//	env->med = mediane(env->med, env->max_a);
		env->med = ft_stack_val_at(env->stack_a, env->size_a - 1);
		//		ft_printf("FFFFFFFFFFFIIIIIIIIINNNNNNNNN\n");
		if (env->size_a == 2)
		{
			if (env->stack_a->nbr > env->stack_a->next->nbr)
			{
				swap_a(env);
			}
			break ;
		}
		i++;
		//		ft_printf("---------------------------------------------------------------------------------------------------------------------------\n");
	}
	//	ft_printf("ICCCCCCCCCCCCCCIIIIIIIIIII PB = %d\n", pb);
	ft_card_sort(env);
	env->med = tmpmed;
	size_t pa = 0;
	/*	while (1)
		{
		push_a(env);
		if (env->stack_a->nbr > env->stack_a->next->nbr)
		{
		swap_a(env);
		}
		}*/
}
