/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_naif_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:08:10 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 15:10:51 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		tabdone_a(t_push_swap *push_swap);

void	algo_naif_2(t_push_swap *env)
{
	while (tabdone_a(env) != 0)
	{
		if (env->stack_a->nbr > env->med)
		push_b(env);
		else
			rotate_a(env);
	}
}

int		tabdone_a(t_push_swap *push_swap)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = push_swap->stack_a;
	//	nbr_tmp = tmpstack->nbr;
	while (tmpstack/*->next*/)
	{
		nbr_tmp = tmpstack->nbr;
	//	ft_printf("nbr tmp = %d pivot = %d\n", nbr_tmp, push_swap->pivot);
		if (nbr_tmp < push_swap->med)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}
