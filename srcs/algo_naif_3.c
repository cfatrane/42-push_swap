/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_naif_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 11:43:53 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/10 14:34:35 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo_naif_3(t_push_swap *env)
{
	size_t val = 1;
	size_t to_tri;
	size_t	j = 0;
	size_t	k = 0;
	size_t	temp = env->size_a / 2;
	while (1)
	{
		while (j != temp)
		{
			if (val == 0)
				break ;
			ft_size(env);
			to_tri = env->size_a / val;
		//	ft_printf("VAL = %d et SIZE TO_TRI = %d SIZE_A = %d\n", val, to_tri, env->size_a);
			//	usleep(5000000);
			while (j < to_tri)
			{
				push_b(env);
				if (env->size_b > 1)
				{
					if (env->stack_b->nbr < env->stack_b->next->nbr)
						swap_b(env);
				}
				j++;
				usleep(50000);
			}
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
//			if (j == temp)
//				break ;
			val /= 2;
		}
		while (1)
		{
			while (k < j)
			{
				reverse_rotate_a(env);
				k++;
			}
			break ;
		}
		j = 0;
		val = 20;
		while (j != temp)
		{
			if (val == 0)
				break ;
			ft_size(env);
			to_tri = env->size_a / val;
	//		ft_printf("VAL = %d et SIZE TO_TRI = %d SIZE_A = %d\n", val, to_tri, env->size_a);
			//	usleep(5000000);
			while (j < to_tri)
			{
				push_b(env);
				if (env->size_b > 1)
				{
					if (env->stack_b->nbr < env->stack_b->next->nbr)
						swap_b(env);
				}
				j++;
				usleep(50000);
			}
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
//			if (j == temp)
//				break ;
			val /= 2;
		}
		break ;
	//	ft_printf("VAL = %d et SIZE TO_TRI = %d SIZE_A = %d I VAUT = %d\n", val, to_tri, env->size_a, j);
	}
}
