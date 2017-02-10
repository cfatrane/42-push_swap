/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_naif_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:08:10 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 11:08:16 by cfatrane         ###   ########.fr       */
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
		size_t i = ft_count_a_2(env);
		if (env->stack_a->nbr > env->med)
		{
			push_b(env);
			if (env->size_b > 1)
			{
				if (env->stack_b->nbr < env->stack_b->next->nbr)
					swap_b(env);
			}
			pb++;
		}
		else
		{
			if (i > env->size_a / 2)
				rotate_a(env);
			else
				reverse_rotate_a(env);
		}
		//	reverse_rotate_a(env);
	}
	//ft_printf("NBR DE PB = %d\n", pb);
	//	size_t temp = env->size_b;
	env->med /= 2;
	while (ft_tabdone_a_2(env) != 0)
	{
		size_t i = ft_count_a_2(env);
		if (env->stack_a->nbr > env->med)
		{
			push_b(env);
			if (env->size_b > 1)
			{
				if (env->stack_b->nbr > env->stack_b->next->nbr)
					swap_b(env);
			}
			pb++;
		}
		else
		{
			if (i > env->size_a / 2)
				rotate_a(env);
			else
				reverse_rotate_a(env);
		}
		//	reverse_rotate_a(env);
	}
	ft_printf("MEDIANE = %d", env->med);
//	exit (0);
	pb = 0;
	ft_printf("----------------------------------------------------------------------------------------------------\n");
	ft_stack_val_bord(env);
	pb = 0;
	while (env->size_a != 1)
	{
		if (env->stack_a->nbr < env->med)
		{
			push_b(env);
			if (env->size_b > 1)
			{
				if (env->stack_b->nbr < env->stack_b->next->nbr && env->stack_b->nbr > env->med)
					swap_b(env);
			}
			pb++;
		}
		else
			rotate_a(env);
	}
//	pb = 0;
	ft_stack_val_bord(env);
	size_t rb = 0;
	size_t jk = 0;
	size_t pa = 0;
	while (1)
	{
		if (pb == 0)
			break ;
		ft_stack_val_bord_mid(env, pb);
		//ft_printf("MAX ENTRE 0 et %d = %d\n", pb, env->max_b);
		while (env->stack_b->nbr != env->max_b)
		{
			/*	if (env->stack_b->nbr == env->max_b)
				{
				push_a(env);
				l++;
				pb--;
				break ;
				}
				else
				{
			//	if (i <= env->size_b / 2)
			*/	rotate_b(env);
			rb++;
			//ft_printf("rb vaut = %d\n", rb);
			//	else
			//		reverse_rotate_b(env);
			//	}
		}
		if (env->stack_b->nbr == env->max_b)
		{
			push_a(env);
			pa++;
			pb--;
		}
		while ((rb-- + jk) > 0)
		{
			//ft_printf("rb vaut = %d\n", rb);
			reverse_rotate_b(env);
		}
		jk++;
		if (env->stack_b->nbr > env->max_b)
		{
			rotate_b(env);
			rb++;
		}
	}
	reverse_rotate_b(env);
	size_t patemp = 0;
	while (patemp < pa + 1)
	{
		push_b(env);
		patemp++;
	}
	while (patemp--)
	{
		rotate_b(env);
	}
	while (pa-- - 1)
	{
		push_a(env);
	}
	exit (0);
	ft_printf("LAAAAAAAAAAAAAAAAAAAA");
	env->med *= 2;
	while (env->size_a != 1)
	{
		if (env->stack_a->nbr < env->med)
		{
			usleep(500000);
			push_b(env);
		/*	if (env->size_b > 1)
			{
				if (env->stack_b->nbr < env->stack_b->next->nbr && env->stack_b->nbr > env->med)
					swap_b(env);
			}*/
			pb++;
		}
		else
			rotate_a(env);
		//	rotate_b(env);
	}
	exit (0);
	while (1)
	{
		if (pb == 0)
			break ;
		ft_stack_val_bord_mid(env, pb + 1);
	//	ft_printf("nbr = %d max = %d\n", env->stack_b->nbr > env->max_b);
	//	ft_printf("MAX ENTRE 0 et %d = %d\n", pb, env->max_b);
		while (env->stack_b->nbr != env->max_b)
		{
			/*	if (env->stack_b->nbr == env->max_b)
				{
				push_a(env);
				l++;
				pb--;
				break ;
				}
				else
				{
			//	if (i <= env->size_b / 2)
			*/	rotate_b(env);
			rb++;
			//ft_printf("rb vaut = %d\n", rb);
			//	else
			//		reverse_rotate_b(env);
			//	}
		}
		if (env->stack_b->nbr == env->max_b)
		{
			push_a(env);
			pa++;
			pb--;
		}
		while ((rb-- + jk) > 0)
		{
			//ft_printf("rb vaut = %d\n", rb);
			reverse_rotate_b(env);
		}
		jk++;
		if (env->stack_b->nbr > env->max_b)
		{
			rotate_b(env);
		}
	}
			rotate_b(env);
	exit (0);
	while (1)
	{
		if (pb == 0)
			break ;
		ft_stack_val_bord_mid(env, pb);
	//	ft_printf("MAX ENTRE 0 et %d = %d\n", pb, env->max_b);
		while (env->stack_b->nbr != env->max_b)
		{
			/*	if (env->stack_b->nbr == env->max_b)
				{
				push_a(env);
				l++;
				pb--;
				break ;
				}
				else
				{
			//	if (i <= env->size_b / 2)
			*/	rotate_b(env);
			rb++;
			//ft_printf("rb vaut = %d\n", rb);
			//	else
			//		reverse_rotate_b(env);
			//	}
		}
		if (env->stack_b->nbr == env->max_b)
		{
			push_a(env);
			pa++;
			pb--;
		}
		while ((rb-- + jk) > 0)
		{
			//ft_printf("rb vaut = %d\n", rb);
			reverse_rotate_b(env);
		}
		jk++;
		if (env->stack_b->nbr > env->max_b)
		{
			rotate_b(env);
		}
	}
	while (1)
	{
		if (pb == 0)
			break ;
		ft_stack_val_bord_mid(env, pb);
		//ft_printf("MAX ENTRE 0 et %d = %d\n", pb, env->max_b);
		while (env->stack_b->nbr != env->max_b)
		{
			/*	if (env->stack_b->nbr == env->max_b)
				{
				push_a(env);
				l++;
				pb--;
				break ;
				}
				else
				{
			//	if (i <= env->size_b / 2)
			*/	rotate_b(env);
			rb++;
			//ft_printf("rb vaut = %d\n", rb);
			//	else
			//		reverse_rotate_b(env);
			//	}
		}
		if (env->stack_b->nbr == env->max_b)
		{
			push_a(env);
			pa++;
			pb--;
		}
		while ((rb-- + jk) > 0)
		{
			//ft_printf("rb vaut = %d\n", rb);
			reverse_rotate_b(env);
		}
		jk++;
		if (env->stack_b->nbr > env->max_b)
		{
			rotate_b(env);
		}
	}
	exit (0);
	while (env->size_b != 0)
	{
		//	while (ft_stack_done_b(env->stack_a) == 0)
		//		push_a(env);
		ft_stack_val_bord(env);
		//		ft_printf("max b = %d\n", env->max_b);
		size_t i = ft_count_b(env);
		//		ft_printf("to do = %d & size = %d\n", i, env->size_b);
		if (env->stack_b->nbr == env->max_b)
		{
			push_a(env);
		}
		else
		{
			if (i <= env->size_b / 2)
				rotate_b(env);
			else
				reverse_rotate_b(env);
		}
	}
	while (ft_stack_check(env) != 0)
		rotate_a(env);
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
		//	ft_printf("NBR = %d ", tmpstack_b->nbr);
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
	while (tmpstack->nbr >= env->med)
	{
	//	ft_printf("NBR = %d a i = %d ", tmpstack->nbr, i);
		i++;
		tmpstack = tmpstack->next;
	}
//	ft_putchar('\n');
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

