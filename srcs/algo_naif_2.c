/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_naif_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:08:10 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/09 19:55:15 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_count_a_2(t_push_swap *env);
int		ft_tabdone_a_2(t_push_swap *env);
void	ft_stack_val_bord_mid(t_push_swap *env, size_t pb);

int	algo_naif_2(t_push_swap *env)
{
	size_t pb = 0;
	while (ft_tabdone_a_2(env) != 0)
	{
//		size_t i = ft_count_a_2(env);
		if (env->stack_a->nbr >= env->med)
		{
			push_b(env);
			pb++;
		}
		else
		{
//			if (i > env->size_a / 2)
//				rotate_a(env);
//			else
				reverse_rotate_a(env);
		}
		//	reverse_rotate_a(env);
		ft_stack_display(env);
	}
	//ft_printf("NBR DE PB = %d\n", pb);
	//	size_t temp = env->size_b;
	pb = 0;
	//ft_printf("--------------------------------------------\n");
	//ft_printf("NBR DE PB = %d\n", pb);
	return (0);
}

void	ft_stack_val_bord_mid(t_push_swap *env, size_t pb)
{
	//	t_stack	*tmpstack_a;
	t_stack	*tmpstack_b;

	size_t	m = 0;
	if (env->size_b > 0)
	{
		tmpstack_b = env->stack_b;
		env->max_b = env->stack_b->nbr;
		while (tmpstack_b)
		{
			//ft_printf("NBR = %d ", tmpstack_b->nbr);
			if (m == pb )
				break ;
			if (env->max_b < tmpstack_b->nbr && tmpstack_b->nbr < env->med)
				env->max_b = tmpstack_b->nbr;
			tmpstack_b = tmpstack_b->next;
			m++;
		}
		tmpstack_b = env->stack_b;
		env->min_b = env->stack_b->nbr;
		while (tmpstack_b)
		{
			if (env->min_b > tmpstack_b->nbr)
				env->min_b = tmpstack_b->nbr;
			tmpstack_b = tmpstack_b->next;
		}
	}
	//	ft_putchar('\n');
}

int	ft_count_a_2(t_push_swap *env)
{
	size_t	i;
	t_stack *tmpstack;

	i = 0;
	tmpstack = env->stack_a;
	while (tmpstack->nbr != env->med)
	{
		//	ft_printf("NBR = %d a i = %d ", tmpstack->nbr, i);
		i++;
		tmpstack = tmpstack->next;
	}
	ft_putchar('\n');
	return (i);
}

int		ft_tabdone_a_2(t_push_swap *env)
{
	ssize_t	nbr_tmp;
	t_stack	*tmpstack;

	tmpstack = env->stack_a;
	//	nbr_tmp = tmpstack->nbr;
	while (tmpstack/*->next*/)
	{
		nbr_tmp = tmpstack->nbr;
		//	//ft_printf("nbr tmp = %d pivot = %d\n", nbr_tmp, env->pivot);
		if (nbr_tmp > env->med)
			return (-1);
		tmpstack = tmpstack->next;
	}
	return (0);
}

