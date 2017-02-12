/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 14:31:58 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/12 16:03:51 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	convert_tab(t_push_swap *env)
{
	t_stack	*tmp;
	int		*tableau;
	size_t	i;
	int		middle;

	tableau = (int*)malloc(sizeof(tableau) * (env->size_a - 1));
	i = 0;
	tmp = env->stack_a;
	while (tmp)
	{
		tableau[i] = tmp->nbr;
		i++;
		tmp = tmp->next;
	}
	tri_rapide(tableau, env->size_a - 1);
	i = 0;
	while (i < env->size_a - 1)
		i++;
	middle = (env->size_a - 1) / 2;
	env->med = tableau[middle];
}

void	tri_rapide(int *tableau, int taille)
{
	int	mur;
	int	courant;
	int	pivot;
	int	tmp;

	mur = 0;
	courant = 0;
	if (taille < 2)
		return ;
	pivot = tableau[taille - 1];
	while (courant < taille)
	{
		if (tableau[courant] <= pivot)
		{
			if (mur != courant)
			{
				tmp = tableau[courant];
				tableau[courant] = tableau[mur];
				tableau[mur] = tmp;
			}
			mur++;
		}
		courant++;
	}
	tri_rapide(tableau, mur - 1);
	tri_rapide(tableau + mur - 1, taille - mur + 1);
}
