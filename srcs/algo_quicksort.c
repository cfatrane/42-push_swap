/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 13:42:41 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/11 19:55:45 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_stack_check_b(t_push_swap *env)
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

void	algo_quicksort(t_push_swap *env)
{
	//	int ret = 5;
	env->pivot = ft_stack_val_at(env->stack_a, env->size_a - 1);
	ft_printf("--------------------------------------------\n");
	ft_printf("BOUCLE 1 |PIVOT 1 = %d|\n", env->pivot);
	ft_printf("--------------------------------------------\n");
	size_t i = 0;
	size_t j = 0;
	while (ft_tabdone_a(env) != 0)
	{
		if (env->stack_a->nbr >= env->pivot)
		{
			push_b(env);
			j++;
		}
		else
			rotate_a(env);
		//	reverse_rotate_a(env);
	}
	if ((is_pivot_a(env) == -1)/* && ft_tabdone_a(env) != 0*/)
	{
		while (1)
		{
			if (env->stack_a->nbr == env->pivot)
			{
				push_b(env);
				j++;
				break;
			}
			else
				rotate_a(env);
		}
	}
	//	while (env->stack_a->nbr != env->pivot)
	//		rotate_a(env);
	ft_printf("--------------------------------------------\n");
	ft_printf("nbr de push b = %d\n", j);
	ft_printf("BOUCLE 1 |PIVOT 1 = %d|\n", env->pivot);
	ft_printf("--------------------------------------------\n\n");
	ft_printf("\033[33m------------------------------------------------------------\n\n\033[0m");
	ft_printf("--------------------------------------------\n");
	ft_printf("Nbr de push = %d\n", j);
	env->pivot = ft_stack_val_at(env->stack_b, env->size_b - 1);
	ft_printf("BOUCLE 2 |PIVOT 2 = %d|\n", env->pivot);
	ft_printf("--------------------------------------------\n");
	while ((ft_tabdone_b(env) != 0))
	{
		if (env->stack_b->nbr >= env->pivot)
		{
			push_a(env);
			i++;
		}
		else
			rotate_b(env);
		//		ft_printf("ret = %d\n", ret);
	}
	if (is_pivot_b(env) == -1/* && ft_tabdone_b(env) != 0*/)
	{
		while (1)
		{
			if (env->stack_b->nbr == env->pivot)
			{
				push_a(env);
				i++;
				break;
			}
			else
				rotate_b(env);
		}
	}
	ft_printf("--------------------------------------------\n");
	ft_printf("nbr de push a = %d\n", i);
	ft_printf("BOUCLE 2 |PIVOT 2 = %d|\n", env->pivot);
	ft_printf("--------------------------------------------\n\n");
	ft_printf("\033[33m------------------------------------------------------------\n\n\033[0m");
	ft_printf("--------------------------------------------\n");
	ft_printf("Nbr de push = %d\n", i);
	//	env->pivot = ft_stack_val_at(env->stack_b, env->size_b - 1);
	env->pivot = ft_stack_val_at(env->stack_a, i - 1);
	ft_printf("BOUCLE 3 |PIVOT 3 = %d|\n", env->pivot);
	ft_printf("--------------------------------------------\n");
	size_t n = 0;
	while (n != i - 1)
	{
//		ft_printf("N VAUT = %d|\n", n);
	//	if (n == i - 1)
	//		break ;
		if (ft_tabdone_a(env) == 0)
			break ;
		if (env->stack_a->nbr >= env->pivot)
		{
			push_b(env);
			n++;
		}
		else
			swap_a(env);
		//	reverse_rotate_a(env);
	}
/*	if (is_pivot_a(env) == -1)
		while (1)
		{
			if (env->stack_a->nbr == env->pivot)
			{
				push_b(env);
				break;
			}
			else
				swap_a(env);
		}*/
	ft_printf("--------------------------------------------\n");
	ft_printf("nbr de push b = %d\n", n);
	ft_printf("BOUCLE 3 |PIVOT 3 = %d|\n", env->pivot);
	ft_printf("Nbr de push = %d\n", n);
	//	env->pivot = ft_stack_val_at(env->stack_b, env->size_b - 1);
	env->pivot = ft_stack_val_at(env->stack_b, n - 1);
	ft_printf("BOUCLE 4 |PIVOT 4 = %d|\n", env->pivot);
	ft_printf("--------------------------------------------\n");
	size_t y = 0;
	if (is_pivot_b(env) == 0)
	while (y != n - 1)
	{
//		ft_printf("Y VAUT = %d|\n", y);
		if (env->stack_b->nbr > env->pivot)
		{
			push_a(env);
			y++;
		}
		else
			swap_b(env);
	}
	else
		env->pivot = ft_stack_val_at(env->stack_b, n - 2);
	ft_printf("--------------------------------------------\n");
	ft_printf("BOUCLE 5 |PIVOT 5 = %d|\n", env->pivot);
	ft_printf("--------------------------------------------\n");
	size_t nbrrotb = 0;
	while (y != n - 2)
	{
		if (ft_tabdone_b(env) == 0)
			break ;
		ft_printf("Y VAUT = %d|\n", y);
		if (env->stack_b->nbr > env->pivot)
		{
			push_a(env);
			y++;
		}
		else
		{
		//	swap_b(env);
			rotate_b(env);
			nbrrotb++;
		}
	}
	while (nbrrotb--)
		reverse_rotate_b(env);
/*	if (is_pivot_b(env) == -1)
		while (1)
		{
			if (env->stack_b->nbr == env->pivot)
			{
				push_a(env);
				break;
			}
			else
				swap_b(env);
		}*/
	/*	while (env->size_b != 1)
		{
		if (env->stack_b->nbr < env->stack_b->next->nbr)
		swap_b(env);
		else
		{
		push_a(env);
		i++;
		}
		}
		push_a(env);
		i++;
		size_t k = i;
		ft_printf("--------------------------------------------\n");
		env->pivot = ft_stack_val_at(env->stack_a, env->size_a - 1);
		while (i--)
		{
		reverse_rotate_a(env);
		}
		ft_printf("--------------------------------------------\n");
		while (ft_tabdone_a(env) != 0 && k--)
		{
		if (env->stack_a->nbr > env->pivot)
		{
		push_b(env);
		j++;
		}
		else
		rotate_a(env);
	//	reverse_rotate_a(env);
	}
	ft_printf("--------------------------------------------\n");
	while (env->size_b != 1)
	{
	ft_stack_val_bord(env);
	size_t l = ft_count_b(env);
	if (env->stack_b->nbr == env->max_b)
	{
	push_a(env);
	}
	else
	{
	if (l <= env->size_b / 2)
	rotate_b(env);
	else
	reverse_rotate_b(env);
	}
	if (env->stack_b->nbr != env->max_b)
	//	if (env->stack_b->nbr < env->stack_b->next->nbrpush_swap->max_b)
	swap_b(env);
	else
	{
	push_a(env);
	i++;
	}
	}
	push_a(env);
	reverse_rotate_a(env);
	*/


	//	while (ft_tabdone_a(env) != 0)
	//	{

	//	}

}
/*
   void	ft_quicksort(t_push_swap *env)
   {
   int nbrpushb = 0;
   ft_printf("---------\n");
   ft_printf("QUICKSORT\n");
   ft_printf("---------\n");
   while (ft_stack_check(env) != 0)
   {
   ft_size(env);
   env->pivot = ft_stack_val_at(env->stack_a, env->size_a - 1);
   ft_printf("---------------------\n", env->pivot);
   ft_printf("BOUCLE 1 pivot 1 = %d\n", env->pivot);
   ft_printf("---------------------\n", env->pivot);
   while (ft_tabdone_a(env) != 0)
   {
   ft_size(env);
   if (env->stack_a->nbr <= env->pivot)
   {
   swap_a(env);
   if (env->stack_a->nbr > env->pivot)
   push_b(env);
//	if (env->stack_a->nbr > env->stack_a->next->nbr)
//		reverse_rotate_a(env);
}
else if (env->stack_a->nbr > env->pivot)
{
push_b(env);
nbrpushb++;
}
//		else
//			rotate_a(env);
}
reverse_rotate_a(env);
push_b(env);
//	reverse_rotate_b(env);
ft_size(env);
env->pivot = ft_stack_val_at(env->stack_a, env->size_a - 1);
ft_printf("---------------------\n", env->pivot);
ft_printf("BOUCLE 1 pivot 1 = %d\n", env->pivot);
ft_printf("---------------------\n", env->pivot);
while (ft_tabdone_a(env) != 0)
{
ft_size(env);
if (env->stack_a->nbr <= env->pivot)
{
swap_a(env);
if (env->stack_a->nbr > env->pivot)
push_b(env);
//	if (env->stack_a->nbr > env->stack_a->next->nbr)
//		reverse_rotate_a(env);
}
else if (env->stack_a->nbr > env->pivot)
{
push_b(env);
nbrpushb++;
}
//		else
//			rotate_a(env);
}
reverse_rotate_a(env);
ft_size(env);
//	push_b(env);
//	exit (0);
ft_printf("nbrpushb = %d\n", nbrpushb);
break ;
//	reverse_rotate_b(env);
ft_size(env);
env->pivot = ft_stack_val_at(env->stack_b, env->size_b - 1);
ft_printf("---------------------\n", env->pivot);
ft_printf("BOUCLE 2 pivot 2 = %d\n", env->pivot);
ft_printf("---------------------\n", env->pivot);
while (ft_tabdone_b(env) != 0)
{
	ft_size(env);
	if (env->stack_b->nbr <= env->pivot)
	{
		swap_b(env);
		//	if (env->stack_b->nbr > env->stack_b->next->nbr)
		reverse_rotate_b(env);
	}
	else if (env->stack_b->nbr > env->pivot)
	{
		push_a(env);
	}
	//	if (env->size_b == 1)
	//		push_a(env);
	//		else
	//			rotate_a(env);
}
//	push_a(env);
//	reverse_rotate_a(env);
break ;
}
}*/

