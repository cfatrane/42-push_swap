/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_naif_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 14:36:26 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/11 19:43:12 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		tabdone_a(t_push_swap *push_swap);
int		tabdone_b(t_push_swap *push_swap);
int		stack_check(t_push_swap *env);
void	ft_card_sort(t_push_swap *piles);

size_t	mediane(size_t nbr, size_t max)
{
	size_t med = 0;
	int diff = max - nbr;
	int temp = diff /2;
	med = nbr + temp;
	return (med);
}

void	algo_naif_4(t_push_swap *env)
{
	size_t i = 0;
	size_t pb = 0;
//	size_t tmp = env->size_a / 2;
//	size_t tmpmed = env->med;
	int ret = 1;
	env->med = 20;
	while (1)
	{
		ft_stack_val_bord(env);
//		ft_printf("MEDIANE = %d et MAX A = %d\n", env->med, env->max_a);
		while (tabdone_a(env) != 0)
		{
			//			if (stack_check(env) == 0)
			//				exit (0);
			if (env->stack_a->nbr < env->med)
			{
				push_b(env);
			//	if (env->size_b > 1)
			//		if (env->stack_b->nbr < env->stack_b->next->nbr)
			//			swap_b(env);
				pb++;
			}
			else
				rotate_a(env);
		}
//		env->med = (env->max_a - env->med) + (env->med / 2);
//		env->med = mediane(env->med, env->max_a);
//		ft_printf("FFFFFFFFFFFIIIIIIIIINNNNNNNNN\n");
		env->med += 20;
//	usleep(5000000);
		if (env->med > env->max_a)
			break ;
/*		if (env->size_a == 2)
		{
			if (env->stack_a->nbr > env->stack_a->next->nbr)
			{
				swap_a(env);
			}
			break ;
		}*/
		i++;
		//		ft_printf("---------------------------------------------------------------------------------------------------------------------------\n");
	}
	//	ft_printf("ICCCCCCCCCCCCCCIIIIIIIIIII PB = %d\n", pb);
//	usleep(5000000);
	ft_card_sort(env);
}

int		stack_check(t_push_swap *env)
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
	return (0);
}

